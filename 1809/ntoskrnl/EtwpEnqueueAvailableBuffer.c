/*
 * XREFs of EtwpEnqueueAvailableBuffer @ 0x1400153E0
 * Callers:
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140015598 (EtwpPrepareDirtyBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1400DD1D4 (EtwpAllocateFreeBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x1403159AC (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x1403159FC (EtwpRotateCompressionTarget.c)
 *     EtwpFlushActiveBuffers @ 0x1405C3178 (EtwpFlushActiveBuffers.c)
 *     EtwpCompleteBuffer @ 0x1406D5418 (EtwpCompleteBuffer.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x140015480 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400154CC (EtwpLockBufferList.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall EtwpEnqueueAvailableBuffer(__int64 a1, unsigned int *a2, unsigned int a3)
{
  ULONG_PTR v4; // rcx
  _QWORD *v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  int v12; // eax
  int v13; // r9d
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(unsigned int *)(a1 + 4);
  v14 = 0;
  if ( (_DWORD)v4 != *a2 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)a2, v4, *a2);
  a2[11] = a3;
  *((_QWORD *)a2 + 3) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 824));
  EtwpLockBufferList(a1, &v14);
  if ( (*(_DWORD *)(a1 + 12) & 0x4000000) == 0
    || (v9 = (_QWORD *)(a1 + 72), (v10 = *(_QWORD *)(a1 + 72)) == 0)
    || a3 == 4 )
  {
    v7 = a2 + 8;
    goto LABEL_4;
  }
  if ( a3 )
  {
    v11 = 0LL;
    do
    {
      v12 = *(_DWORD *)(v10 + 12);
      if ( (!v11 && (v13 = *(_DWORD *)(v10 + 12), v12) || (v13 = *(_DWORD *)(v10 + 12), v12 == 6))
        && (v11 = v9, v13 == 6) )
      {
        *v9 = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 )
          *(_QWORD *)v10 = 0LL;
        else
          *(_QWORD *)(a1 + 64) = v9;
        *(_QWORD *)v10 = *(_QWORD *)(a1 + 1168);
        *(_QWORD *)(a1 + 1168) = v10;
      }
      else
      {
        v9 = (_QWORD *)v10;
      }
      v10 = *v9;
    }
    while ( *v9 );
    v7 = a2 + 8;
    if ( v11 )
    {
      *v7 = *v11;
      *v11 = v7;
      if ( v11 != *(_QWORD **)(a1 + 64) )
        goto LABEL_6;
      goto LABEL_5;
    }
LABEL_4:
    *v7 = 0LL;
    **(_QWORD **)(a1 + 64) = v7;
LABEL_5:
    *(_QWORD *)(a1 + 64) = v7;
    goto LABEL_6;
  }
  *((_QWORD *)a2 + 4) = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = a2 + 8;
  if ( a1 + 72 == *(_QWORD *)(a1 + 64) )
    *(_QWORD *)(a1 + 64) = a2 + 8;
LABEL_6:
  result = EtwpUnlockBufferList(a1, &v14);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 244));
  return result;
}
