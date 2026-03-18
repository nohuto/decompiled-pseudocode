/*
 * XREFs of ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000D888
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000E598 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C0128F18 (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 *     ?_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ @ 0x1C02D0848 (-_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C000D318 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 */

__int64 __fastcall DXGK_GAMMA_RAMP::Initialize(DXGK_GAMMA_RAMP *this, const struct _D3DKMDT_GAMMA_RAMP *a2, __int64 a3)
{
  __int64 Type; // rcx
  SIZE_T SizeFromGammaRampType; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  PVOID v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v16; // rax
  __int64 v17; // rax

  Type = (unsigned int)a2->Type;
  if ( (unsigned int)(Type - 1) > 4 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(Type, a2, a3);
    v16[3] = a2->Type;
LABEL_10:
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  SizeFromGammaRampType = GetSizeFromGammaRampType(Type, (__int64)a2, a3);
  *((_QWORD *)this + 3) = SizeFromGammaRampType;
  if ( SizeFromGammaRampType != a2->DataSize )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
    v16[3] = a2->Type;
    v16[4] = a2->DataSize;
    v16[5] = -1073741811LL;
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
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
    v16[3] = 406LL;
    goto LABEL_10;
  }
  v10 = operator new[](SizeFromGammaRampType, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 4) = v10;
  if ( v10 )
  {
    memmove(v10, a2->Data.pRgb256x3x16, *((_QWORD *)this + 3));
    goto LABEL_7;
  }
  v17 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
  *(_QWORD *)(v17 + 24) = *((_QWORD *)this + 3);
  WdLogEvent5_WdLowResource(v17);
  return 3221225495LL;
}
