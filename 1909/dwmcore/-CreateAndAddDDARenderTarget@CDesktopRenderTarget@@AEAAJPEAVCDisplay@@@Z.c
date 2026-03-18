/*
 * XREFs of ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x1801A6290
 * Callers:
 *     ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18002B7F4 (-CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1801A6DF0 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 * Callees:
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x180028368 (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x180028570 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800285B8 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800DE5D4 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateAndAddDDARenderTarget(CDesktopRenderTarget *this, struct CDisplay *a2)
{
  CHwndRenderTarget *v4; // rax
  struct CRenderTarget *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // edx
  signed int v9; // ebx
  __int64 v10; // rcx
  signed int v11; // eax
  signed int inited; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-30h]
  char v20; // [rsp+28h] [rbp-28h]
  char v21; // [rsp+30h] [rbp-20h]
  __int128 v22; // [rsp+40h] [rbp-10h] BYREF
  const void *retaddr; // [rsp+68h] [rbp+18h]
  struct CRenderTarget *v24; // [rsp+80h] [rbp+30h] BYREF

  v24 = 0LL;
  v4 = (CHwndRenderTarget *)DefaultHeap::AllocClear(0x378uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  CHwndRenderTarget::CHwndRenderTarget(v4, *((struct CComposition **)this + 2));
  *(_QWORD *)v5 = &CHwndRenderTargetDDA::`vftable'{for `CNotificationResource'};
  *((_QWORD *)v5 + 8) = &CHwndRenderTargetDDA::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)v5 + 9) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)v5 + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  v24 = v5;
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v5 + 8LL))(v5);
  v7 = *((_DWORD *)this + 50);
  v8 = v7 + 1;
  if ( v7 + 1 >= v7 )
  {
    if ( v8 <= *((_DWORD *)this + 49) )
    {
      *(_QWORD *)(*((_QWORD *)this + 22) + 8LL * *((unsigned int *)this + 50)) = v24;
      *((_DWORD *)this + 50) = v8;
      goto LABEL_10;
    }
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 176, 8, 1, &v24);
    v9 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, 0xC3u, 0LL);
  }
  else
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x2AAu, 0LL);
    goto LABEL_21;
  }
LABEL_10:
  v21 = *((_BYTE *)this + 377);
  v20 = *((_BYTE *)this + 360);
  v19 = *((_DWORD *)this + 85);
  v22 = *(_OWORD *)((char *)this + 344);
  inited = CHwndRenderTarget::InitFullScreen(v24, (__int64)this, (__int64)a2, &v22, v19, v20, v21);
  v9 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, inited, 0x2B6u, 0LL);
  }
  else if ( *((_QWORD *)this + 15)
         && (v14 = (*(__int64 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v24 + 336LL))(v24), v9 = v14, v14 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2BEu, 0LL);
  }
  else
  {
    v16 = CComposition::AddRenderTarget(*((CRenderTargetManager ***)this + 2), v24);
    v9 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2C4u, 0LL);
    else
      v24 = 0LL;
  }
  if ( v9 < 0 )
    DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 22, &v24);
LABEL_21:
  if ( v24 )
    (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v24 + 16LL))(v24);
  return (unsigned int)v9;
}
