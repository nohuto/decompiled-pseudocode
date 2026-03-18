/*
 * XREFs of EtwpDequeueFreeBuffer @ 0x140003774
 * Callers:
 *     EtwpSwitchBuffer @ 0x140003560 (EtwpSwitchBuffer.c)
 *     EtwpRotateCompressionTarget @ 0x14033405C (EtwpRotateCompressionTarget.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x1400038E8 (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x1400039C4 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140003A10 (EtwpLockBufferList.c)
 *     EtwpResetBufferHeader @ 0x140003A68 (EtwpResetBufferHeader.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14013C8DC (EtwpEnqueueOverflowBuffer.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     EtwpDisableCompression @ 0x140333A00 (EtwpDisableCompression.c)
 */

unsigned int *__fastcall EtwpDequeueFreeBuffer(__int64 a1)
{
  char v1; // bp
  bool v3; // zf
  int v4; // ebx
  __int64 v5; // rcx
  unsigned int *v6; // rbx
  signed __int32 v7; // edx
  __int64 v8; // rax
  __int64 v9; // r8
  signed __int64 v10; // rax
  signed __int64 v11; // rdx
  signed __int64 v12; // rtt
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  signed __int64 v19; // rdx
  char v20; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 72) == 0LL;
  v20 = 0;
  if ( v3 && !*(_QWORD *)(a1 + 88) )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 12);
  EtwpLockBufferList(a1, &v20);
  if ( (v4 & 0x400) != 0 )
  {
    v6 = (unsigned int *)EtwpDequeueBuffer(a1, a1 + 80);
    if ( !v6 )
      v6 = (unsigned int *)EtwpDequeueBuffer(v5, a1 + 64);
    if ( *(_DWORD *)(a1 + 1184) )
    {
      v15 = *(_QWORD *)(a1 + 72);
      if ( !v15 || ((*(_DWORD *)(v15 + 12) - 4) & 0xFFFFFFFD) == 0 )
        v1 = 1;
    }
    EtwpUnlockBufferList(a1, &v20);
    if ( v1 )
      EtwpDisableCompression(a1);
    if ( !v6 )
      return 0LL;
    do
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 244));
      if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 )
      {
        v7 = v6[11];
        if ( (unsigned int)(v7 - 4) <= 1 )
          goto LABEL_12;
      }
      v7 = 0;
LABEL_12:
      if ( !v6[3] && v7 == _InterlockedCompareExchange((volatile signed __int32 *)v6 + 11, 1, v7) )
        break;
      EtwpEnqueueOverflowBuffer(a1, v6);
      EtwpLockBufferList(a1, &v20);
      v6 = (unsigned int *)EtwpDequeueBuffer(a1, a1 + 64);
      EtwpUnlockBufferList(v16, &v20);
    }
    while ( v6 );
    if ( !v6 )
      return 0LL;
    v8 = *(_QWORD *)(a1 + 1312);
    if ( v8 )
    {
      v9 = *((unsigned __int16 *)v6 + 20);
      v10 = *(_QWORD *)(v8 + 8 * v9);
      do
      {
        v11 = *((_QWORD *)v6 + 2);
        if ( v11 <= v10 )
          break;
        v12 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1312) + 8 * v9), v11, v10);
      }
      while ( v12 != v10 );
      if ( *((_QWORD *)v6 + 3) <= *(_QWORD *)(a1 + 1328) )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 1320) + 8 * v9);
        do
        {
          v19 = *((_QWORD *)v6 + 2);
          if ( v19 <= v17 )
            break;
          v18 = v17;
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1320) + 8 * v9), v19, v17);
        }
        while ( v18 != v17 );
      }
    }
    EtwpResetBufferHeader(v6, 0LL);
  }
  else
  {
    v6 = (unsigned int *)EtwpDequeueBuffer(a1, a1 + 64);
    EtwpUnlockBufferList(v14, &v20);
    if ( !v6 )
      return 0LL;
    EtwpResetBufferHeader(v6, 0LL);
    v6[11] = 1;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 244));
  }
  if ( *(_DWORD *)(a1 + 4) != *v6 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)v6, *(unsigned int *)(a1 + 4), *v6);
  return v6;
}
