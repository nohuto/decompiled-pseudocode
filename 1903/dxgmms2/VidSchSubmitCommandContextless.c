/*
 * XREFs of VidSchSubmitCommandContextless @ 0x1C00337B0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004498 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C002F844 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 */

__int64 __fastcall VidSchSubmitCommandContextless(
        struct VIDSCH_SUBMIT_DATA2 *a1,
        struct _VIDSCH_DEVICE *a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 && a2 && a1 )
  {
    v5 = *(_QWORD *)(a3 + 8);
    v8 = *(_QWORD *)a1;
    if ( (v8 & 0x20) == 0 )
      return VidSchiRedirectedFlipWaitOnSyncObject(v5, (__int64)a1, a3, &v8);
    result = VidSchValidatePresentFlags(a1, a2, (struct _VIDSCH_SUBMIT_FLAGS *)&v8);
    if ( (int)result >= 0 )
      return VidSchiRedirectedFlipWaitOnSyncObject(v5, (__int64)a1, a3, &v8);
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
  return result;
}
