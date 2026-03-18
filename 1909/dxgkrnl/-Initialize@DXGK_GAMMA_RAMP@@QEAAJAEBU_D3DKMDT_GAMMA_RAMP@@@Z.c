/*
 * XREFs of ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000202C
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000ED50 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C00CDAC8 (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 *     ?_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ @ 0x1C02D0908 (-_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C0002728 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 */

__int64 __fastcall DXGK_GAMMA_RAMP::Initialize(DXGK_GAMMA_RAMP *this, const struct _D3DKMDT_GAMMA_RAMP *a2)
{
  unsigned __int64 SizeFromGammaRampType; // rax
  void *v5; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax

  if ( (unsigned int)(a2->Type - 1) > 4 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError();
    v7[3] = a2->Type;
LABEL_10:
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  SizeFromGammaRampType = GetSizeFromGammaRampType(a2->Type);
  *((_QWORD *)this + 3) = SizeFromGammaRampType;
  if ( SizeFromGammaRampType != a2->DataSize )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError();
    v7[3] = a2->Type;
    v7[4] = a2->DataSize;
    v7[5] = -1073741811LL;
    goto LABEL_10;
  }
  if ( !SizeFromGammaRampType )
  {
LABEL_7:
    *((_DWORD *)this + 4) = a2->Type;
    return 0LL;
  }
  if ( !a2->Data.pRgb256x3x16 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError();
    v7[3] = 406LL;
    goto LABEL_10;
  }
  v5 = operator new[](SizeFromGammaRampType, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 4) = v5;
  if ( v5 )
  {
    memmove(v5, a2->Data.pRgb256x3x16, *((_QWORD *)this + 3));
    goto LABEL_7;
  }
  v8 = WdLogNewEntry5_WdLowResource();
  *(_QWORD *)(v8 + 24) = *((_QWORD *)this + 3);
  WdLogEvent5_WdLowResource(v8);
  return 3221225495LL;
}
