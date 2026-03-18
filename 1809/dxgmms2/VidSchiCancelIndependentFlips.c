/*
 * XREFs of VidSchiCancelIndependentFlips @ 0x1C0017678
 * Callers:
 *     VidSchExitIndependentFlipInternal @ 0x1C00171B4 (VidSchExitIndependentFlipInternal.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C000BB50 (VidSchiCompleteFlipEntry.c)
 */

__int64 __fastcall VidSchiCancelIndependentFlips(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _BYTE *a5)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // r9d
  __int64 v11; // r8

  v5 = a3;
  result = a4;
  v8 = *(_QWORD *)(a2 + 8LL * a3 + 2576);
  v9 = *(_QWORD *)(v8 + 8LL * a4 + 24);
  if ( v9 )
  {
    result = VidSchiCompleteFlipEntry(
               a1,
               a2,
               a3,
               a4,
               *(_DWORD *)(v9 + 40),
               ((unsigned __int8)*(_DWORD *)(v9 + 40) - 1) & 0x3F,
               12,
               a5);
    v10 = result;
    if ( (_DWORD)result )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 40LL) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 32LL) + 4LL))
                      + 8 * v5
                      + 88);
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8 * v5 + 5792) + 8LL), -(int)result);
      result = *(_QWORD *)(a2 + 8 * v5 + 5792);
      *(_DWORD *)(result + 4) += v10;
      *(_DWORD *)(v11 + 4) += v10;
    }
  }
  return result;
}
