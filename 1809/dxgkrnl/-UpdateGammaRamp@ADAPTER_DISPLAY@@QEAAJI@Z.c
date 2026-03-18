/*
 * XREFs of ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00D2F54
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00CFD48 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D0CA0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00D4724 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0122B04 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0140300 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01440B4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01C4348 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     DxgkSetMonitorColorSpaceTransform @ 0x1C01C5790 (DxgkSetMonitorColorSpaceTransform.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C01D4510 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C02029B0 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0005CB4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0005E6C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00D32F4 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C00D339C (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00D34E0 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C01C0A18 (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateGammaRamp(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // r12
  __int64 v4; // rcx
  __int64 v5; // r14
  DXGADAPTER *v6; // rax
  __int64 v7; // rbp
  struct DXGK_GAMMA_ADJUSTMENT *v8; // r15
  __int64 v9; // rsi
  volatile signed __int32 *v10; // rbx
  PERESOURCE *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int updated; // ebp
  __int64 v15; // rcx
  __int64 v17; // rax
  volatile signed __int32 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  enum _D3DDDI_GAMMARAMP_TYPE v21; // edx
  const void *v22; // r8
  ADAPTER_DISPLAY *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  _BYTE v26[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v17 + 24) = 6804LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !*((_DWORD *)this[2] + 468) )
    return 0LL;
  v5 = 3760 * v3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (DXGADAPTER *)((char *)this[14] + 3760 * v3 + 864), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  v6 = this[14];
  if ( *((_DWORD *)v6 + 940 * v3 + 174) != 1 || (v7 = *(_QWORD *)((char *)v6 + v5 + 704)) == 0 )
  {
    v7 = *(_QWORD *)((char *)v6 + v5 + 688);
    if ( !v7 )
      goto LABEL_9;
  }
  v8 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v7 + 8 * v3 + 1536);
  v9 = *(_QWORD *)(v7 + 8 * v3 + 1408);
  if ( !v8 )
  {
    v10 = *(volatile signed __int32 **)(v7 + 8 * v3 + 1408);
    if ( !v9 )
      goto LABEL_9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
LABEL_40:
    if ( v10 )
    {
LABEL_11:
      if ( !*((_BYTE *)this + 134) || !DXGADAPTER::IsFullWDDMAdapter(this[2]) )
        goto LABEL_16;
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v11) )
      {
        v24 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v24 + 24) = 6932LL;
        WdLogEvent5_WdAssertion(v24);
      }
      updated = ADAPTER_RENDER::SuspendScheduler(*((ADAPTER_RENDER **)this[2] + 316), 0, 0);
      if ( updated < 0 )
      {
        v25 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v25 + 24) = this;
        WdLogEvent5_WdError(v25);
      }
      else
      {
LABEL_16:
        updated = DmmUpdateGammaRampOnVidPnSource(this[2], v3, (const struct DXGK_GAMMA_RAMP *)v10);
        if ( *((_BYTE *)this + 134) && DXGADAPTER::IsFullWDDMAdapter(this[2]) )
          ADAPTER_RENDER::ResumeScheduler(*(ADAPTER_RENDER **)(v15 + 2528), 0, 0);
      }
      goto LABEL_19;
    }
LABEL_9:
    v10 = *(volatile signed __int32 **)((char *)this[14] + v5 + 904);
    if ( v10 )
      _InterlockedIncrement(v10 + 2);
    goto LABEL_11;
  }
  if ( v9 && *(_DWORD *)(v9 + 16) == 1 )
    v9 = 0LL;
  v18 = (volatile signed __int32 *)operator new(0x30uLL, 0x4B677844u, PagedPool);
  v10 = v18;
  if ( v18 )
  {
    *((_WORD *)v18 + 20) = 0;
    *(_QWORD *)v18 = &ReferenceCounted::`vftable';
    v19 = 1LL;
    *((_DWORD *)v18 + 2) = 1;
    *(_QWORD *)v18 = &DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v18 + 4) = 1;
    *((_QWORD *)v18 + 3) = 0LL;
    *((_QWORD *)v18 + 4) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    if ( v9 )
    {
      v21 = *(_DWORD *)(v9 + 16);
      v22 = *(const void **)(v9 + 32);
    }
    else
    {
      v21 = D3DDDI_GAMMARAMP_RGB256x3x16;
      v22 = 0LL;
    }
    updated = DXGK_GAMMA_RAMP::Initialize((size_t *)v10, v21, v22);
    if ( updated < 0
      || (updated = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                      v23,
                      (const struct DXGK_GAMMA_RAMP *)v9,
                      (struct DXGK_GAMMA_RAMP *)v10,
                      v8),
          updated < 0) )
    {
LABEL_19:
      if ( v10 )
        ReferenceCounted::Release((ReferenceCounted *)v10);
      goto LABEL_21;
    }
    goto LABEL_40;
  }
  v20 = WdLogNewEntry5_WdLowResource(v19);
  *(_QWORD *)(v20 + 24) = v7;
  WdLogEvent5_WdLowResource(v20);
  updated = -1073741801;
LABEL_21:
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  return (unsigned int)updated;
}
