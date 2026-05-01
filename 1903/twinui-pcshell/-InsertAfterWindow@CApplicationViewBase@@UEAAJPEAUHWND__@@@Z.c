/*
 * XREFs of ?InsertAfterWindow@CApplicationViewBase@@UEAAJPEAUHWND__@@@Z @ 0x18015E800
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::InsertAfterWindow(CApplicationViewBase *this, HWND a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD v9[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF

  v9[1] = -2LL;
  v3 = (*(__int64 (__fastcall **)(CApplicationViewBase *, _QWORD *))(*(_QWORD *)this + 504LL))(this, v9);
  if ( v3 < 0 )
  {
    v4 = 59LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v11 = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v12);
  v6 = (volatile signed __int32 *)v12;
  if ( v12 )
  {
    v7 = *(_QWORD *)(v12 + 48);
    v8 = *(_QWORD *)(v7 + 776);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(v7 + 776));
    v13 = 0LL;
    v12 = v11;
    v11 = v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v6);
  }
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, HWND))(*(_QWORD *)v11 + 48LL))(v11, v9[0], a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  if ( v3 < 0 )
  {
    v4 = 63LL;
    goto LABEL_3;
  }
  return 0LL;
}
