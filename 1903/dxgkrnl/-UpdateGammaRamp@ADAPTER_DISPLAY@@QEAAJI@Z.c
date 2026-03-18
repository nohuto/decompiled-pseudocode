/*
 * XREFs of ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0123B0C
 * Callers:
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00C6918 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00C9234 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00CAA68 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D3530 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C01523D0 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0155E34 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01F321C (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000CDB4 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000D294 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C0024C00 (ColorSpaceTransformInitIdentityTransform.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00E8738 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C012339C (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0123444 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0123E44 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C01EFF9C (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C02C9918 (MonitorNotifyDXGIGammaRampChange.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateGammaRamp(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // r14
  DXGADAPTER *v9; // rax
  __int64 v10; // rsi
  struct DXGK_GAMMA_ADJUSTMENT *v11; // r15
  __int64 v12; // rbp
  volatile signed __int32 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rax
  int inited; // eax
  __int64 v21; // rdx
  ADAPTER_DISPLAY *v22; // rcx
  __int64 v23; // r8
  PERESOURCE *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  unsigned int i; // ebp
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  _BYTE v40[56]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v41; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 7075LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_DWORD *)this[2] + 474) )
    return 0LL;
  v8 = 3968 * v3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v40, (DXGADAPTER *)((char *)this[14] + 3968 * v3 + 864), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
  v9 = this[14];
  if ( *((_DWORD *)v9 + 992 * v3 + 174) != 1 || (v10 = *(_QWORD *)((char *)v9 + v8 + 704)) == 0 )
  {
    v10 = *(_QWORD *)((char *)v9 + v8 + 688);
    if ( !v10 )
      goto LABEL_27;
  }
  v11 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v10 + 8 * v3 + 1536);
  v12 = *(_QWORD *)(v10 + 8 * v3 + 1408);
  if ( !v11 )
  {
    v18 = *(volatile signed __int32 **)(v10 + 8 * v3 + 1408);
    if ( !v12 )
      goto LABEL_27;
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
LABEL_26:
    if ( v18 )
    {
LABEL_29:
      if ( !*((_BYTE *)this + 235) || !DXGADAPTER::IsFullWDDMAdapter(this[2]) )
        goto LABEL_35;
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v24) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v26, v25);
        *(_QWORD *)(v27 + 24) = 7207LL;
        WdLogEvent5_WdAssertion(v27);
      }
      LODWORD(v10) = ADAPTER_RENDER::SuspendScheduler(*((ADAPTER_RENDER **)this[2] + 320), 0, 0LL);
      if ( (int)v10 < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v29, v28, v30);
        *(_QWORD *)(v31 + 24) = this;
        WdLogEvent5_WdError(v31);
      }
      else
      {
LABEL_35:
        LODWORD(v10) = DmmUpdateGammaRampOnVidPnSource(this[2], v3, (const struct DXGK_GAMMA_RAMP *)v18);
        v32 = 0LL;
        for ( i = 0; (int)DmmEnumClientVidPnPathTargetsFromSource(this[2], (unsigned int)v3, v32, &v41) >= 0; v32 = i )
        {
          v21 = v41;
          ++i;
          if ( v41 == -1 )
            break;
          v34 = MonitorNotifyDXGIGammaRampChange(this[2]);
          v10 = v34;
          if ( v34 < 0 )
          {
            v38 = WdLogNewEntry5_WdError(v36, v35, v37);
            *(_QWORD *)(v38 + 24) = v10;
            WdLogEvent5_WdError(v38);
          }
        }
        if ( *((_BYTE *)this + 235) && DXGADAPTER::IsFullWDDMAdapter(this[2]) )
          ADAPTER_RENDER::ResumeScheduler(*(ADAPTER_RENDER **)(v39 + 2560), 0LL, 0);
      }
      goto LABEL_44;
    }
LABEL_27:
    v18 = *(volatile signed __int32 **)((char *)this[14] + v8 + 904);
    if ( v18 )
      _InterlockedIncrement(v18 + 2);
    goto LABEL_29;
  }
  if ( v12 && *(_DWORD *)(v12 + 16) == 1 )
    v12 = 0LL;
  v13 = (volatile signed __int32 *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
  v18 = v13;
  if ( v13 )
  {
    *((_WORD *)v13 + 20) = 0;
    *(_QWORD *)v13 = &ReferenceCounted::`vftable';
    v15 = 1LL;
    *((_DWORD *)v13 + 2) = 1;
    *(_QWORD *)v13 = &DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v13 + 4) = 1;
    *((_QWORD *)v13 + 3) = 0LL;
    *((_QWORD *)v13 + 4) = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v18 )
  {
    if ( v12 )
    {
      inited = DXGK_GAMMA_RAMP::Initialize((size_t *)v18, *(unsigned int *)(v12 + 16), *(const void **)(v12 + 32));
    }
    else
    {
      LODWORD(v10) = DXGK_GAMMA_RAMP::Initialize((size_t *)v18, 2LL, 0LL);
      if ( (int)v10 < 0 )
        goto LABEL_44;
      inited = ColorSpaceTransformInitIdentityTransform((__int64)(v18 + 4));
    }
    LODWORD(v10) = inited;
    if ( inited >= 0 )
    {
      LODWORD(v10) = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                       v22,
                       (const struct DXGK_GAMMA_RAMP *)v12,
                       (struct DXGK_GAMMA_RAMP *)v18,
                       v11);
      if ( (int)v10 >= 0 )
        goto LABEL_26;
    }
LABEL_44:
    if ( v18 )
      ReferenceCounted::Release((ReferenceCounted *)v18, v21, v23);
    goto LABEL_46;
  }
  v19 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
  *(_QWORD *)(v19 + 24) = v10;
  WdLogEvent5_WdLowResource(v19);
  LODWORD(v10) = -1073741801;
LABEL_46:
  if ( v40[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v40);
  return (unsigned int)v10;
}
