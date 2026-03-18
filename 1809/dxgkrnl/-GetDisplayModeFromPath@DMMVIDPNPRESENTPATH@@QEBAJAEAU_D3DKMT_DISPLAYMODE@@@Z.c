/*
 * XREFs of ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00B7ED8
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B883C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0006268 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000A884 (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000F638 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00E3C90 (ConvertDMMScalingToGdiScaling.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00E3D10 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DKMT_DISPLAYMODE *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v13; // r12d
  unsigned int v14; // r14d
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  __int64 v25; // [rsp+70h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 11);
  v5 = *(_QWORD *)(v3 + 104);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
    v6 = *(_QWORD *)(v3 + 104);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = *(_QWORD *)(v6 + 144);
  v25 = v6;
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 72);
    if ( v8 == 2 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v3);
      WdLogEvent5_WdAssertion(v22);
    }
    v9 = *((_QWORD *)this + 12);
    v10 = *(_QWORD *)(v9 + 104);
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 96));
      v11 = *(_QWORD *)(v9 + 104);
    }
    else
    {
      v11 = 0LL;
    }
    v12 = *(_QWORD *)(v11 + 144);
    v24 = v11;
    if ( v12
      && (v13 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)this + 29)),
          DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v13))
      && (v14 = *((_DWORD *)this + 28), DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(this, v14)) )
    {
      v15 = 16;
      v16 = *((_DWORD *)&a2->Flags + 1);
      a2->Width = *(_DWORD *)(v7 + 76);
      a2->Height = *(_DWORD *)(v7 + 80);
      a2->Format = *(_DWORD *)(v7 + 96);
      v17 = 0;
      if ( (unsigned int)(v8 - 3) > 1 )
        v15 = 0;
      v18 = v15 & 0xFFFFFFDF | v16 & 0xFFFFFFCF;
      if ( v8 == 4 )
        v17 = 32;
      *((_DWORD *)&a2->Flags + 1) = v17 | v18;
      a2->IntegerRefreshRate = DmmMapVSyncFromRationalToInteger(
                                 (const struct _D3DDDI_RATIONAL *)(v12 + 92),
                                 (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(v12 + 120) << 29) >> 29),
                                 0LL);
      a2->RefreshRate = *(D3DDDI_RATIONAL *)(v12 + 92);
      a2->ScanLineOrdering = (int)(*(_DWORD *)(v12 + 120) << 29) >> 29;
      a2->DisplayOrientation = v13;
      ConvertDMMScalingToGdiScaling(v14, &a2->DisplayFixedOutput);
      v19 = 0;
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v23 + 24) = this;
      v19 = 1075708679;
      *(_QWORD *)(v23 + 32) = 1075708679LL;
      WdLogEvent5_WdError(v23);
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v24, 0LL);
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v21 + 24) = this;
    v19 = 1075708679;
    *(_QWORD *)(v21 + 32) = 1075708679LL;
    WdLogEvent5_WdError(v21);
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v25, 0LL);
  return v19;
}
