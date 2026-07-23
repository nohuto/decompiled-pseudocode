/*
 * XREFs of EtwpDequeueFreeBuffer @ 0x140015278
 * Callers:
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpRotateCompressionTarget @ 0x1403159FC (EtwpRotateCompressionTarget.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x1400153A8 (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x140015480 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400154CC (EtwpLockBufferList.c)
 *     EtwpResetBufferHeader @ 0x140015524 (EtwpResetBufferHeader.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14013A90C (EtwpEnqueueOverflowBuffer.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     EtwpDisableCompression @ 0x140315398 (EtwpDisableCompression.c)
 */

volatile signed __int32 *__fastcall EtwpDequeueFreeBuffer(__int64 a1)
{
  char v1; // bp
  int v3; // ebx
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  signed __int32 v6; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v11 = 0;
  if ( !*(_QWORD *)(a1 + 72) && !*(_QWORD *)(a1 + 88) )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 12);
  EtwpLockBufferList(a1, &v11);
  if ( (v3 & 0x400) != 0 )
  {
    v5 = (volatile signed __int32 *)EtwpDequeueBuffer(a1, a1 + 80);
    if ( !v5 )
      v5 = (volatile signed __int32 *)EtwpDequeueBuffer(v4, a1 + 64);
    if ( *(_DWORD *)(a1 + 1152) )
    {
      v9 = *(_QWORD *)(a1 + 72);
      if ( !v9 || ((*(_DWORD *)(v9 + 12) - 4) & 0xFFFFFFFD) == 0 )
        v1 = 1;
    }
    EtwpUnlockBufferList(a1, &v11);
    if ( v1 )
      EtwpDisableCompression(a1);
    if ( !v5 )
      return 0LL;
    do
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 244));
      if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 )
      {
        v6 = *((_DWORD *)v5 + 11);
        if ( (unsigned int)(v6 - 4) <= 1 )
          goto LABEL_12;
      }
      v6 = 0;
LABEL_12:
      if ( !*((_DWORD *)v5 + 3) && v6 == _InterlockedCompareExchange(v5 + 11, 1, v6) )
        break;
      EtwpEnqueueOverflowBuffer(a1, v5);
      EtwpLockBufferList(a1, &v11);
      v5 = (volatile signed __int32 *)EtwpDequeueBuffer(a1, a1 + 64);
      EtwpUnlockBufferList(v10, &v11);
    }
    while ( v5 );
    if ( !v5 )
      return 0LL;
    EtwpResetBufferHeader(v5, 0LL);
  }
  else
  {
    v5 = (volatile signed __int32 *)EtwpDequeueBuffer(a1, a1 + 64);
    EtwpUnlockBufferList(v8, &v11);
    if ( !v5 )
      return 0LL;
    EtwpResetBufferHeader(v5, 0LL);
    *((_DWORD *)v5 + 11) = 1;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 244));
  }
  if ( *(_DWORD *)(a1 + 4) != *v5 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)v5, *(unsigned int *)(a1 + 4), *(unsigned int *)v5);
  return v5;
}
