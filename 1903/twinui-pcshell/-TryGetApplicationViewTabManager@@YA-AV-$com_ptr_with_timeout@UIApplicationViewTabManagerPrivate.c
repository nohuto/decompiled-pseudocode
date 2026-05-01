/*
 * XREFs of ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x18023FD1C
 * Callers:
 *     _lambda_21f9f957c927a999d0e9096f458a2397_::operator() @ 0x18022ADB0 (_lambda_21f9f957c927a999d0e9096f458a2397_--operator().c)
 *     _lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_::operator() @ 0x18022B794 (_lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_--operator().c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUIApplicationView@@PEBD@Z @ 0x18023FDC4 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabM_ea_18023FDC4.c)
 *     _lambda_2de9129cf7ca5d1ddf0542513b424d5e_::operator() @ 0x180256044 (_lambda_2de9129cf7ca5d1ddf0542513b424d5e_--operator().c)
 *     _lambda_65df8407daa36b2840171ab9f615be5e_::operator() @ 0x180256578 (_lambda_65df8407daa36b2840171ab9f615be5e_--operator().c)
 *     ?PerformDrop@TabTransferManager@@AEAAXXZ @ 0x18025858C (-PerformDrop@TabTransferManager@@AEAAXXZ.c)
 * Callees:
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180141028 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x180143530 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??$FailedQueryWindowServiceForApplicationViewTabManager@AEAPEBDAEAPEAUHWND__@@AEBJ@TabViewManagerTraceLogging@@SAXAEAPEBDAEAPEAUHWND__@@AEBJ@Z @ 0x180224EA4 (--$FailedQueryWindowServiceForApplicationViewTabManager@AEAPEBDAEAPEAUHWND__@@AEBJ@TabViewManage.c)
 */

_QWORD *__fastcall TryGetApplicationViewTabManager(_QWORD *a1, HWND a2, const char *a3)
{
  int WindowService; // edi
  _BYTE v7[24]; // [rsp+28h] [rbp-30h] BYREF
  _QWORD *v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+60h] [rbp+8h] BYREF
  HWND v10; // [rsp+68h] [rbp+10h] BYREF
  const char *v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  *a1 = 0LL;
  if ( a2 )
  {
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v7, 0);
    v8 = a1;
    WindowService = CoreQueryWindowService(a2, &unk_1804F38C8, &GUID_5f3178f6_ade1_413e_8dfa_3b173778d0fe, a1);
    v9 = WindowService;
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v7);
    if ( (int)(WindowService + 0x80000000) >= 0 && WindowService != -2147221163 )
      TabViewManagerTraceLogging::FailedQueryWindowServiceForApplicationViewTabManager<char const * &,HWND__ * &,long const &>(
        &v11,
        &v10,
        &v9);
  }
  return a1;
}
