/*
 * XREFs of ?HandleVirtualStreamStateChange@CWindowsPolicyManager@@QEAAJPEAUIAudioProcess@@PEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KW4_AudioStreamState@@3@Z @ 0x180007124
 * Callers:
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x180006FE0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180006460 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800064F0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18000D724 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180034AFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CWindowsPolicyManager::HandleVirtualStreamStateChange(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7)
{
  int v9; // r13d
  __int64 v10; // rbx
  _DWORD *v11; // rax
  void *v12; // rdi
  int v13; // esi
  __int64 v14; // rsi
  int v15; // eax
  _DWORD *v16; // rax
  _DWORD *v17; // rdi
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  BOOL v22; // [rsp+30h] [rbp-40h]
  int v23[2]; // [rsp+38h] [rbp-38h] BYREF
  void *v24; // [rsp+40h] [rbp-30h]
  _DWORD *v25; // [rsp+48h] [rbp-28h]
  void *v26; // [rsp+50h] [rbp-20h]
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  CWindowsPolicyManager::Lock(a1, lpCriticalSection);
  v9 = 0;
  v10 = 0LL;
  v26 = 0LL;
  v11 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  v25 = v11;
  if ( !v11 )
  {
    v13 = -2147024882;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BA,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_31;
  }
  v11[3] = 1;
  *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioSessionInfo>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v12 = &VirtualAudioSessionInfo::`vftable';
  *((_QWORD *)v12 + 2) = 0LL;
  *((_QWORD *)v12 + 3) = 0LL;
  v24 = v12;
  v25 = 0LL;
  v22 = a4 == 1;
  v14 = *((_QWORD *)v12 + 2);
  *((_QWORD *)v12 + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  *((_DWORD *)v12 + 8) = v22;
  LOBYTE(v9) = a5 == 3;
  *((_DWORD *)v12 + 9) = v9;
  *((_DWORD *)v12 + 10) = a7 == 1;
  v15 = CoAllocString(a3, (unsigned __int16 **)v12 + 3);
  v13 = v15;
  if ( v15 >= 0 )
    v13 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\virtualaudioinfo.cpp",
      (const char *)(unsigned int)v15);
  if ( v13 >= 0 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 8LL))(v12);
    v10 = (__int64)v12;
    v26 = v12;
    v24 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = 0;
  }
  else
  {
    v24 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v13 < 0 )
    goto LABEL_16;
  *(_QWORD *)v23 = 0LL;
  v16 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  if ( !v16 )
  {
    v13 = -2147024882;
LABEL_24:
    v18 = (unsigned int)v13;
    v19 = 702LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)v18);
    goto LABEL_29;
  }
  v16[3] = 1;
  *(_QWORD *)v16 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioStreamInfo>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v17 = &VirtualAudioStreamInfo::`vftable';
  *((_QWORD *)v17 + 2) = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v17[6] = a5;
  v17[7] = a4 != 0;
  v13 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, int *))v17)(v17, &GUID_dafb0152_6a78_488a_b685_6dd5845a8db9, v23);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v13 < 0 )
    goto LABEL_24;
  v20 = CWindowsPolicyManager::OnStreamStateChanged(a1 + 8, v10, a6, a7, *(__int64 *)v23);
  v13 = v20;
  if ( v20 < 0 )
  {
    v18 = (unsigned int)v20;
    v19 = 704LL;
    goto LABEL_27;
  }
  v13 = 0;
LABEL_29:
  if ( *(_QWORD *)v23 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v23 + 16LL))(*(_QWORD *)v23);
LABEL_31:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  return (unsigned int)v13;
}
