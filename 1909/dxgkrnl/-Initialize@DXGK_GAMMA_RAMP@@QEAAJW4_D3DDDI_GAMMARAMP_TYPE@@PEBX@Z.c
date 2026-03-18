/*
 * XREFs of ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C00026A4
 * Callers:
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C00CD548 (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C00CDAC8 (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00CDCEC (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00D2A50 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00D38B4 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D3D80 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     DxgkSetGammaRamp @ 0x1C0233830 (DxgkSetGammaRamp.c)
 *     ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1C02441D4 (-GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 * Callees:
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C0002728 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 */

__int64 __fastcall DXGK_GAMMA_RAMP::Initialize(DXGK_GAMMA_RAMP *this, enum _D3DDDI_GAMMARAMP_TYPE a2, const void *a3)
{
  __int64 v3; // rdi
  unsigned __int64 SizeFromGammaRampType; // rax
  void *v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v3 = a2;
  if ( (unsigned int)(a2 - 1) > 4 )
  {
    v9 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v9 + 24) = v3;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  else
  {
    SizeFromGammaRampType = GetSizeFromGammaRampType(a2);
    *((_QWORD *)this + 3) = SizeFromGammaRampType;
    if ( !SizeFromGammaRampType )
    {
LABEL_6:
      *((_DWORD *)this + 4) = v3;
      return 0LL;
    }
    v7 = operator new[](SizeFromGammaRampType, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 4) = v7;
    if ( v7 )
    {
      if ( a3 )
        memmove(v7, a3, *((_QWORD *)this + 3));
      goto LABEL_6;
    }
    v10 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v10 + 24) = *((_QWORD *)this + 3);
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
}
