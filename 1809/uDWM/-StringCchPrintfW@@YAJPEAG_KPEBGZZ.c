/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003FDFC
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18003F4DC (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x18003FD78 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?QueryFeatureOverride@@YAHIPEAW4reg_FeatureEnabledState@@@Z @ 0x18004DB98 (-QueryFeatureOverride@@YAHIPEAW4reg_FeatureEnabledState@@@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18006F8E0 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18008C3E4 (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x18003FE50 (StringVPrintfWorkerW.c)
 */

__int64 StringCchPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, ...)
{
  int v3; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)StringVPrintfWorkerW(a1, a2, a3, (STRSAFE_LPCWSTR)a3, va);
  }
  return (unsigned int)v3;
}
