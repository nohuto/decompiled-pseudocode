/*
 * XREFs of ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C012EB30
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C012D788 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C012EA88 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0003CB8 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003CE0 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0006148 (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00D1C88 (ConvertDMMScalingToGdiScaling.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00DB31C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DKMT_DISPLAYMODE *a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v14; // r12d
  unsigned int v15; // r14d
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // r8
  unsigned int v21; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF
  __int64 v27; // [rsp+70h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 11);
  v6 = *(_QWORD *)(v4 + 104);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 96));
    v7 = *(_QWORD *)(v4 + 104);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = *(_QWORD *)(v7 + 144);
  v27 = v7;
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 72);
    if ( v9 == 2 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v4, a2);
      WdLogEvent5_WdAssertion(v24);
    }
    v10 = *((_QWORD *)this + 12);
    v11 = *(_QWORD *)(v10 + 104);
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
      v12 = *(_QWORD *)(v10 + 104);
    }
    else
    {
      v12 = 0LL;
    }
    v13 = *(_QWORD *)(v12 + 144);
    v26 = v12;
    if ( v13
      && (v14 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)this + 29)),
          DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v14))
      && (v15 = *((_DWORD *)this + 28), DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(this, v15)) )
    {
      v16 = 16;
      v17 = *((_DWORD *)&a2->Flags + 1);
      a2->Width = *(_DWORD *)(v8 + 76);
      a2->Height = *(_DWORD *)(v8 + 80);
      a2->Format = *(_DWORD *)(v8 + 96);
      v18 = 0;
      if ( (unsigned int)(v9 - 3) > 1 )
        v16 = 0;
      v19 = v16 & 0xFFFFFFDF | v17 & 0xFFFFFFCF;
      if ( v9 == 4 )
        v18 = 32;
      *((_DWORD *)&a2->Flags + 1) = v18 | v19;
      a2->IntegerRefreshRate = DmmMapVSyncFromRationalToInteger(
                                 (const struct _D3DDDI_RATIONAL *)(v13 + 92),
                                 (unsigned int)((int)(*(_DWORD *)(v13 + 120) << 29) >> 29),
                                 0LL);
      a2->RefreshRate = *(D3DDDI_RATIONAL *)(v13 + 92);
      a2->ScanLineOrdering = (int)(*(_DWORD *)(v13 + 120) << 29) >> 29;
      a2->DisplayOrientation = v14;
      ConvertDMMScalingToGdiScaling(v15, &a2->DisplayFixedOutput, v20);
      v21 = 0;
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v10, a2, a3);
      *(_QWORD *)(v25 + 24) = this;
      v21 = 1075708679;
      *(_QWORD *)(v25 + 32) = 1075708679LL;
      WdLogEvent5_WdError(v25);
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v26, 0LL);
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v4, a2, a3);
    *(_QWORD *)(v23 + 24) = this;
    v21 = 1075708679;
    *(_QWORD *)(v23 + 32) = 1075708679LL;
    WdLogEvent5_WdError(v23);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v27, 0LL);
  return v21;
}
