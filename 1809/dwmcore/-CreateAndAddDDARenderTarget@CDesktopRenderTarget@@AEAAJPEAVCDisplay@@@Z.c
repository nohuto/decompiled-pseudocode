/*
 * XREFs of ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180159930
 * Callers:
 *     ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18008ADE4 (-CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x18015A460 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18007C564 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x18007E59C (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x18007E858 (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800D879C (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateAndAddDDARenderTarget(CDesktopRenderTarget *this, struct CDisplay *a2)
{
  CHwndRenderTarget *v4; // rax
  struct CRenderTarget *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  int inited; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-30h]
  char v20; // [rsp+28h] [rbp-28h]
  char v21; // [rsp+30h] [rbp-20h]
  __int128 v22; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]
  struct CRenderTarget *v24; // [rsp+80h] [rbp+30h] BYREF

  v24 = 0LL;
  v4 = (CHwndRenderTarget *)WPF::ProcessHeapImpl::AllocClear(0x378uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  CHwndRenderTarget::CHwndRenderTarget(v4, *((struct CComposition **)this + 2));
  *(_QWORD *)v5 = &CHwndRenderTargetDDA::`vftable'{for `CNotificationResource'};
  *((_QWORD *)v5 + 8) = &CHwndRenderTargetDDA::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)v5 + 9) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)v5 + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  v24 = v5;
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v5 + 8LL))(v5);
  v7 = *((_DWORD *)this + 50);
  v8 = v7 + 1;
  v9 = v7 + 1 < v7 ? 0x80070216 : 0;
  if ( v7 + 1 < v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v9, 0xB5u);
  }
  else if ( v8 > *((_DWORD *)this + 49) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 176, 8, 1, &v24);
    v9 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    v10 = v7;
    *(_QWORD *)(*((_QWORD *)this + 22) + 8LL * v7) = v24;
    *((_DWORD *)this + 50) = v8;
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x29Eu);
  }
  else
  {
    v21 = *((_BYTE *)this + 329);
    v20 = *((_BYTE *)this + 312);
    v19 = *((_DWORD *)this + 73);
    v22 = *(_OWORD *)((char *)this + 296);
    inited = CHwndRenderTarget::InitFullScreen(v24, (__int64)this, (__int64)a2, &v22, v19, v20, v21);
    v9 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, inited, 0x2AAu);
    }
    else if ( *((_QWORD *)this + 15)
           && (v14 = (*(__int64 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v24 + 200LL))(v24), v9 = v14, v14 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2B2u);
    }
    else
    {
      v16 = CComposition::AddRenderTarget(*((CRenderTargetManager ***)this + 2), v24);
      v9 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2B8u);
      else
        v24 = 0LL;
    }
    if ( v9 < 0 )
      DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 22, &v24);
  }
  if ( v24 )
    (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v24 + 16LL))(v24);
  return (unsigned int)v9;
}
