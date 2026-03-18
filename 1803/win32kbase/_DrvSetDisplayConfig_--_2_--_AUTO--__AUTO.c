/*
 * XREFs of _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C004B2C8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 *     ??_E_AUTO@?1??DrvSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIPEAXE1PEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAU_MDEV@@PEAPEAU4@PEAKPEAW4_DXGK_DIAG_SDC_STAGE@@PEAE7PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C00CBA50 (--_E_AUTO@-1--DrvSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIPEAXE1PEAU_DISPLA.c)
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C00480E4 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004B338 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DrvSetDisplayConfig_::_2_::_AUTO::__AUTO(AUTO_TGO *this)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rcx
  __int64 v8; // rax

  v1 = *((_BYTE *)this + 72) == 0;
  *(_QWORD *)this = &off_1C016B730;
  if ( !v1 && (int)((__int64 (*)(void))qword_1C01A1AA8)() < 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    WdLogEvent5_WdAssertion(v8);
  }
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 6));
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 7));
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 8));
  v7 = (void *)*((_QWORD *)this + 11);
  if ( v7 )
    ObfDereferenceObject(v7);
  AUTO_TGO::~AUTO_TGO(this);
}
