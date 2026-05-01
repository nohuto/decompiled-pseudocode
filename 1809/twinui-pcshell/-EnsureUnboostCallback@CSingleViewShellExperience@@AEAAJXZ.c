/*
 * XREFs of ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x180063A44
 * Callers:
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1800638EC (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_0892b5d6e8bbbb5224cd765ab176e94b___1_IInspectable_____ptr64_IInspectable_____ptr64___lambda_0892b5d6e8bbbb5224cd765ab176e94b___ @ 0x180063B08 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_180063B08.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180063BE4 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006E460 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??$AsAgile@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAVAgileRef@01@@Z @ 0x180080B48 (--$AsAgile@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@YAJPEAU-$IEve.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::EnsureUnboostCallback(CSingleViewShellExperience *this)
{
  char *v1; // rdi
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rbx
  char *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13[2]; // [rsp+20h] [rbp-18h] BYREF
  CSingleViewShellExperience *v14; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char *)this + 152;
  if ( !*((_QWORD *)this + 19) )
  {
    v3 = *((_QWORD *)this + 12);
    *(_QWORD *)v13 = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v14 = this;
    v4 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::___IInspectable_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_0892b5d6e8bbbb5224cd765ab176e94b___1_IInspectable_____ptr64_IInspectable_____ptr64___lambda_0892b5d6e8bbbb5224cd765ab176e94b___(
                      &v16,
                      v13);
    v5 = *v4;
    *v4 = 0LL;
    v6 = v16;
    v17 = v5;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v6);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v13);
    if ( v5 )
    {
      v16 = v1;
      v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v16);
      v8 = Microsoft::WRL::AsAgile<Windows::Foundation::IEventHandler<IInspectable *>>(v5, v7);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v9 = 0;
LABEL_9:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        return v9;
      }
      v12 = (unsigned int)v8;
      v11 = 1035LL;
    }
    else
    {
      v9 = -2147024882;
      v11 = 1034LL;
      v12 = 2147942414LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v12);
    goto LABEL_9;
  }
  return 0LL;
}
