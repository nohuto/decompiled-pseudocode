/*
 * XREFs of _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C004D2E8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004C710 (DrvSetDisplayConfig.c)
 *     ??_E_AUTO@?1??DrvSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIPEAXE1PEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAU_MDEV@@PEAPEAU4@PEAKPEAW4_DXGK_DIAG_SDC_STAGE@@PEAE7PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C01006D0 (--_E_AUTO@-1--DrvSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIPEAXE1PEAU_DISPLA.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004D354 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C004D4D8 (--1AUTO_TGO@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DrvSetDisplayConfig_::_2_::_AUTO::__AUTO(AUTO_TGO *this)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  void *v6; // rcx
  __int64 v7; // rax

  v1 = *((_BYTE *)this + 72) == 0;
  *(_QWORD *)this = &off_1C0188528;
  if ( !v1 && (int)((__int64 (*)(void))qword_1C01CD948)() < 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4, v3, v5);
    WdLogEvent5_WdAssertion(v7);
  }
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 6));
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 7));
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 8));
  v6 = (void *)*((_QWORD *)this + 11);
  if ( v6 )
    ObfDereferenceObject(v6);
  AUTO_TGO::~AUTO_TGO(this);
}
