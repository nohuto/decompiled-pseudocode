/*
 * XREFs of WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406BF5A4
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1406BF470 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     WdipSemFastFree @ 0x140716B50 (WdipSemFastFree.c)
 *     WdipSemGetGuidKey @ 0x1408B192C (WdipSemGetGuidKey.c)
 *     WdipSemSqmAddToStream @ 0x1408B1ADC (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1408B1C90 (WdipSemSqmIncrementDword.c)
 */

__int64 WdipSemSqmLogInflightLimitExceededDataPoints()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned int i; // esi
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14040ACC8, 0LL);
  v3 = (unsigned int)dword_14040ACC0;
  if ( dword_14040ACC0 )
  {
    v1 = WdipSemSqmIncrementDword(v2, (unsigned int)dword_14040ACC0);
    if ( v1 < 0 )
      v1 = 0;
    if ( (_DWORD)v3 )
    {
      v6 = WdipSemFrequentScenarioTable;
      do
      {
        v7 = *v6;
        if ( (int)WdipSemGetGuidKey(*v6, &v9) >= 0 )
        {
          v10[0] = v9;
          v10[1] = *(unsigned __int16 *)(v7 + 16);
          v10[2] = *(_DWORD *)(v7 + 20);
          v1 = WdipSemSqmAddToStream(1062LL, 3LL, v10);
          if ( v1 < 0 )
            v1 = 0;
        }
        else
        {
          v1 = 0;
        }
        ++v6;
        --v3;
      }
      while ( v3 );
    }
  }
  for ( i = 0; i < dword_14040ACC0; WdipSemFrequentScenarioTable[v8] = 0LL )
  {
    v8 = i;
    WdipSemFastFree(5LL, WdipSemFrequentScenarioTable[i++]);
  }
  dword_14040ACC0 = 0;
  ExReleasePushLockEx((ULONG_PTR)&qword_14040ACC8, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
