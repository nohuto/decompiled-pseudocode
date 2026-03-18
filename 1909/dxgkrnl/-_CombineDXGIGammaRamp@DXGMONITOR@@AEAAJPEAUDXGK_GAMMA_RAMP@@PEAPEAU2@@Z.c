/*
 * XREFs of ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C00CDAC8
 * Callers:
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C00CD548 (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     ?_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ @ 0x1C02D0908 (-_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000202C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ColorSpaceTransformConvert @ 0x1C00020B8 (ColorSpaceTransformConvert.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C00026A4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ColorSpaceTransformCombine @ 0x1C0058D6C (ColorSpaceTransformCombine.c)
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00CDCEC (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C00CDF4C (-_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CombineDXGIGammaRamp(
        DXGMONITOR *this,
        struct DXGK_GAMMA_RAMP *a2,
        struct DXGK_GAMMA_RAMP **a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // edx
  _WORD *v9; // rbx
  int DxgiGammaRamp; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  ReferenceCounted *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  _WORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  bool v28; // al
  DXGK_GAMMA_RAMP *v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  struct _D3DKMDT_GAMMA_RAMP *v32; // r14
  enum _D3DDDI_GAMMARAMP_TYPE v34; // [rsp+50h] [rbp+8h] BYREF
  ReferenceCounted *v35; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)this + 4);
  v8 = *((_DWORD *)this + 11);
  v9 = 0LL;
  v35 = 0LL;
  DxgiGammaRamp = ADAPTER_DISPLAY::GetDxgiGammaRamp(*(ADAPTER_DISPLAY **)(v7 + 8), v8, &v35);
  v14 = v35;
  v15 = DxgiGammaRamp;
  if ( DxgiGammaRamp >= 0 )
  {
    v17 = operator new[](0x30uLL, 0x4B677844u, PagedPool);
    v9 = v17;
    if ( v17 )
    {
      v17[20] = 0;
      *((_QWORD *)v17 + 3) = 0LL;
      *((_QWORD *)v17 + 4) = 0LL;
      *(_QWORD *)v17 = &ReferenceCounted::`vftable';
      *(_QWORD *)v17 = &DXGK_GAMMA_RAMP::`vftable';
      *((_DWORD *)v17 + 2) = 1;
      *((_DWORD *)v17 + 4) = 1;
    }
    else
    {
      v9 = 0LL;
    }
    if ( !v9 )
    {
      v22 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
      WdLogEvent5_WdLowResource(v22);
      LODWORD(v15) = -1073741801;
      goto LABEL_32;
    }
    LODWORD(v15) = DXGMONITOR::_GetMostCapableColorSpaceTransform(this, &v34);
    if ( (int)v15 < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v26, v25, v24);
      WdLogEvent5_WdError(v27);
      goto LABEL_32;
    }
    v23 = (unsigned int)v34;
    v28 = v34 >= D3DDDI_GAMMARAMP_MATRIX_3x4 && v14 && *((_DWORD *)v14 + 4) == 3;
    if ( !a2 )
    {
      if ( !v14 )
        goto LABEL_34;
      v29 = (DXGK_GAMMA_RAMP *)v9;
      if ( v28 )
      {
        LODWORD(v15) = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v9, v34, 0LL);
        if ( (int)v15 >= 0 )
        {
          LODWORD(v15) = ColorSpaceTransformConvert(
                           (struct _D3DKMDT_GAMMA_RAMP *)((char *)v14 + 16),
                           (struct _D3DKMDT_GAMMA_RAMP *)(v9 + 8));
          goto LABEL_32;
        }
        goto LABEL_30;
      }
      goto LABEL_22;
    }
    v32 = (struct _D3DKMDT_GAMMA_RAMP *)((char *)a2 + 16);
    v29 = (DXGK_GAMMA_RAMP *)v9;
    if ( v14 )
    {
      if ( (unsigned int)(v32->Type - 4) > 1 )
      {
LABEL_22:
        v31 = DXGK_GAMMA_RAMP::Initialize(v29, (const struct _D3DKMDT_GAMMA_RAMP *)((char *)v14 + 16));
        goto LABEL_23;
      }
      LODWORD(v15) = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v9, v32);
      if ( (int)v15 >= 0 )
      {
        v31 = ColorSpaceTransformCombine((const void **)v32, (int *)v14 + 4, (__int64)(v9 + 8));
LABEL_23:
        LODWORD(v15) = v31;
        if ( v31 >= 0 )
          goto LABEL_32;
      }
    }
    else
    {
      LODWORD(v15) = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v9, v32);
      if ( (int)v15 >= 0 )
      {
LABEL_37:
        *a3 = (struct DXGK_GAMMA_RAMP *)v9;
        return (unsigned int)v15;
      }
    }
LABEL_30:
    v16 = WdLogNewEntry5_WdWarning(v30, v23, v24);
    goto LABEL_31;
  }
  v16 = WdLogNewEntry5_WdWarning(v12, v11, v13);
  *(_QWORD *)(v16 + 24) = v15;
LABEL_31:
  WdLogEvent5_WdWarning(v16);
LABEL_32:
  if ( v14 )
    ReferenceCounted::Release(v14, v23, v24);
LABEL_34:
  if ( (int)v15 >= 0 )
    goto LABEL_37;
  *a3 = 0LL;
  if ( v9 )
    ReferenceCounted::Release((ReferenceCounted *)v9, v23, v24);
  return (unsigned int)v15;
}
