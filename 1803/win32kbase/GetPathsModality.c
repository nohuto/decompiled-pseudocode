/*
 * XREFs of GetPathsModality @ 0x1C004B368
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00CEB3C (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C00D260C (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C00D2AD0 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00D40C0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004B338 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C004B448 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPathsModality(__int64 a1, struct D3DKMT_GETPATHSMODALITY **a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // si
  unsigned int v5; // ebp
  unsigned __int16 v7; // ax
  struct D3DKMT_GETPATHSMODALITY *v8; // rdx
  struct D3DKMT_GETPATHSMODALITY *v9; // rax
  int v10; // eax
  int v11; // edi
  __int16 v13; // ax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = a1;
  v4 = a4;
  v5 = a3;
  if ( (_DWORD)a3 == 32 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  v7 = 8;
  LOWORD(v16) = 8;
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
        v15 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v15 + 24) = (unsigned __int16)v16;
        WdLogEvent5_WdError(v15);
        return 3221225495LL;
      }
    }
    v10 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, int *))qword_1C01A1A08)(v5, v8, &v16);
    v11 = v10;
    if ( v10 == -1073741789
      || v10 >= 0 && v4 + (unsigned int)*((unsigned __int16 *)*a2 + 10) > *((unsigned __int16 *)*a2 + 11) )
    {
      FreePathsModality(*a2);
      v13 = v16;
      v11 = -1073741789;
      *a2 = 0LL;
      v7 = v4 + v13;
      LOWORD(v16) = v7;
    }
    else
    {
      v7 = v16;
    }
  }
  while ( v11 == -1073741789 );
  if ( v11 < 0 )
  {
    FreePathsModality(*a2);
    *a2 = 0LL;
  }
  return (unsigned int)v11;
}
