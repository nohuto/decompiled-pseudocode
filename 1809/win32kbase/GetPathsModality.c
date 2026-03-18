/*
 * XREFs of GetPathsModality @ 0x1C004D384
 * Callers:
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0003800 (DrvDisplayConfigSetDeviceInfo.c)
 *     DrvSetDisplayConfig @ 0x1C004C710 (DrvSetDisplayConfig.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004D500 (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C0101914 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01037AC (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0103CBC (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004D354 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C004D448 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPathsModality(__int64 a1, struct D3DKMT_GETPATHSMODALITY **a2, __int64 a3, unsigned __int16 a4)
{
  unsigned int v5; // ebp
  unsigned __int16 v7; // ax
  struct D3DKMT_GETPATHSMODALITY *v8; // rdx
  struct D3DKMT_GETPATHSMODALITY *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  int v13; // edi
  __int64 v15; // rax
  unsigned __int16 v16; // ax
  __int64 v17; // rax
  unsigned __int16 v18; // [rsp+48h] [rbp+20h] BYREF

  v5 = a3;
  if ( (_DWORD)a3 == 32 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    WdLogEvent5_WdAssertion(v15);
  }
  v7 = a4 + 8;
  v18 = a4 + 8;
  do
  {
    v8 = *a2;
    if ( !*a2 )
    {
      v9 = AllocPathsModality(v7);
      *a2 = v9;
      v8 = v9;
      if ( !v9 )
      {
        v17 = WdLogNewEntry5_WdError(v10, 0LL, v11);
        *(_QWORD *)(v17 + 24) = v18;
        WdLogEvent5_WdError(v17);
        return 3221225495LL;
      }
    }
    v12 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, unsigned __int16 *))qword_1C01CD8A8)(
            v5,
            v8,
            &v18);
    v13 = v12;
    if ( v12 == -1073741789
      || v12 >= 0 && a4 + (unsigned int)*((unsigned __int16 *)*a2 + 10) > *((unsigned __int16 *)*a2 + 11) )
    {
      FreePathsModality(*a2);
      v16 = v18;
      v13 = -1073741789;
      *a2 = 0LL;
      v7 = a4 + v16;
      v18 = v7;
    }
    else
    {
      v7 = v18;
    }
  }
  while ( v13 == -1073741789 );
  if ( v13 < 0 )
  {
    FreePathsModality(*a2);
    *a2 = 0LL;
  }
  return (unsigned int)v13;
}
