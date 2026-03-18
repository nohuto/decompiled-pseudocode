/*
 * XREFs of ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00D6D98
 * Callers:
 *     FillDevmodeFromVidPn @ 0x1C00D6D00 (FillDevmodeFromVidPn.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C000651C (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007060 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000F658 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00D6F30 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00D7168 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00E3D10 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall VIDPN_MGR::PopulateGdiDisplayModeFromPath(
        const struct DMMVIDPNPRESENTPATH *a1,
        struct _CDD_DEVMODE *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // r15
  __int64 v15; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v16; // r13d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v17; // edi
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v18; // ebx
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // [rsp+80h] [rbp+8h] BYREF
  __int64 v35; // [rsp+88h] [rbp+10h] BYREF

  if ( !a1 )
  {
    v25 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !a2 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v26);
  }
  v4 = *((_QWORD *)a1 + 11);
  if ( !v4 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v27);
  }
  v34 = 0LL;
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
    v6 = *(_QWORD *)(v4 + 104);
    if ( v6 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0LL;
  }
  v28 = WdLogNewEntry5_WdAssertion(a1);
  WdLogEvent5_WdAssertion(v28);
LABEL_9:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v34, v6);
  v8 = *(unsigned int **)(v34 + 144);
  if ( !v8 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v29);
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v34, 0LL);
  v10 = *((_QWORD *)a1 + 12);
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
    v12 = *(_QWORD *)(v10 + 104);
    if ( v12 )
      goto LABEL_13;
  }
  else
  {
    v12 = 0LL;
  }
  v30 = WdLogNewEntry5_WdAssertion(v9);
  WdLogEvent5_WdAssertion(v30);
LABEL_13:
  v13 = *(_QWORD *)(v12 + 144);
  v35 = v12;
  if ( !v13 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v31);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v35, 0LL);
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v8);
  *(_QWORD *)((char *)a2 + 220) = *(_QWORD *)(v13 + 92);
  DmmCalculatePresentationVSync(
    (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v13 + 72),
    (struct _D3DDDI_RATIONAL *)((char *)a2 + 220));
  v15 = v8[18];
  v16 = *((_DWORD *)a1 + 28);
  v17 = *((_DWORD *)a1 + 29);
  v18 = (int)(*(_DWORD *)(v13 + 120) << 29) >> 29;
  if ( (((_DWORD)v15 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v15 == 2 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v32);
  }
  v19 = DmmMapVSyncFromRationalToInteger((const struct _D3DDDI_RATIONAL *)((char *)a2 + 220), v18, 0LL);
  v22 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
          0x20uLL,
          GraphicsInfo->PrimSurfSize.cx,
          GraphicsInfo->PrimSurfSize.cy,
          v19,
          v18,
          v17,
          v16,
          (struct _devicemodeW *const)a2);
  if ( v22 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v23);
    v33[3] = GraphicsInfo->PrimSurfSize.cx;
    v33[4] = GraphicsInfo->PrimSurfSize.cy;
    v33[5] = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel((DMMVIDPNSOURCEMODE *)v8);
    v33[6] = (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(*(unsigned int *)(v13 + 92), *(unsigned int *)(v13 + 96));
    v33[7] = (int)(*(_DWORD *)(v13 + 120) << 29) >> 29;
    WdLogEvent5_WdWarning(v33);
    return (unsigned int)v22;
  }
  else
  {
    *((_DWORD *)a2 + 57) = 21;
    return 0LL;
  }
}
