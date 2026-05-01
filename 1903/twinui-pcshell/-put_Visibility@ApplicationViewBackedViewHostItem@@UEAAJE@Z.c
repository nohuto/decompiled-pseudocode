/*
 * XREFs of ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x18021D7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18014E0A0 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18016AEDC (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D6F4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801FDCF4 (--0-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802028A8 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_.c)
 *     ??$AsWeak@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@YAJPEAVApplicationViewBackedViewHostItem@@PEAVWeakRef@01@@Z @ 0x180218FBC (--$AsWeak@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@YAJPEAVApplicationViewBackedViewHo.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_0d7bc66421ef186c78cfd0059c6b52e6__&_ @ 0x180219B50 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_0d7bc66421ef186c78cfd0059c6b52e6__-_.c)
 *     ??1ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@QEAA@XZ @ 0x18021A0CC (--1ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     _lambda_0d7bc66421ef186c78cfd0059c6b52e6_::operator() @ 0x18021A0F8 (_lambda_0d7bc66421ef186c78cfd0059c6b52e6_--operator().c)
 *     ?StartActivity@ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@QEAAXIPEBGW4FRAMEWORK_VIEW_TYPE@@_N@Z @ 0x18021B9E4 (-StartActivity@ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@.c)
 *     ?_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z @ 0x18021C898 (-_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationViewBackedViewHostItem::put_Visibility(ApplicationViewBackedViewHostItem *this, char a2)
{
  const WCHAR *StringRawBuffer; // rbx
  volatile signed __int64 *v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  __int64 *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  volatile signed __int32 *v13; // r8
  volatile signed __int64 *v14; // rcx
  int v15; // eax
  volatile signed __int64 *v17; // [rsp+38h] [rbp-D0h] BYREF
  volatile signed __int64 **v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v20[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v19[1] = -2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 28), 0LL);
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"ApplicationViewBackedViewHostItem_put_Visibility");
  v20[0] = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::`vftable';
  HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::StartActivity(
    (__int64)v20,
    *((_DWORD *)this + 58),
    StringRawBuffer,
    *((_DWORD *)this + 62),
    a2 != 0);
  *((_BYTE *)this + 252) = a2 != 0;
  if ( !a2 )
  {
    v17 = 0LL;
    v18 = &v17;
    v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v18);
    v11 = Microsoft::WRL::AsWeak<ApplicationViewBackedViewHostItem>((__int64)this, v10);
    v6 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v11);
LABEL_15:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
      goto LABEL_19;
    }
    v18 = (volatile signed __int64 **)this;
    v14 = v17;
    v19[0] = (__int64)v17;
    if ( v17 )
      (*(void (__fastcall **)(volatile signed __int64 *))(*v17 + 8))(v17);
    if ( *((_DWORD *)this + 62) )
    {
      v15 = lambda_0d7bc66421ef186c78cfd0059c6b52e6_::operator()((__int64)&v18);
      v6 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB4,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
          (const char *)(unsigned int)v15);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
        goto LABEL_15;
      }
    }
    else
    {
      Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_0d7bc66421ef186c78cfd0059c6b52e6____(
        (__int64)v14,
        v12,
        v13,
        &v18);
    }
    ApplicationViewBackedViewHostItem::_FirePresentationReadinessEvent(this, 0);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    goto LABEL_18;
  }
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v17);
  v5 = v17;
  if ( v17 )
  {
    *((_BYTE *)v17 + 112) = 1;
    *((_BYTE *)v5 + 113) = a2 != 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 320LL))(*((_QWORD *)this + 25));
    v6 = v9;
    if ( v9 < 0 )
    {
      v7 = (unsigned int)v9;
      v8 = 153LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v17);
LABEL_18:
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v20);
    v6 = 0;
    goto LABEL_19;
  }
  v6 = -2147024882;
  v7 = 2147942414LL;
  v8 = 151LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)v7);
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v17);
LABEL_19:
  HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::~ApplicationViewBackedViewHostItem_put_Visibility((HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility *)v20);
  return v6;
}
