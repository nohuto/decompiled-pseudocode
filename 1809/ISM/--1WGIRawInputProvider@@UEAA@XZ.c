/*
 * XREFs of ??1WGIRawInputProvider@@UEAA@XZ @ 0x18006AAC0
 * Callers:
 *     ??_EWGIRawInputProvider@@UEAAPEAXI@Z @ 0x18006AA74 (--_EWGIRawInputProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x18006B700 (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z.c)
 *     ??1?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18006C200 (--1-$vector@V-$ComPtr@VWGIController@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VWGIController@@@WR.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WGIRawInputProvider::~WGIRawInputProvider(WGIRawInputProvider *this)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  HRESULT v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  signed int LastError; // eax
  unsigned __int64 v15; // rcx
  _QWORD v16[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v16[1] = -2LL;
  *(_QWORD *)this = &WGIRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &WGIRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &WGIRawInputProvider::`vftable'{for `RefCountedObject'};
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 || !*((_QWORD *)this + 10) )
    goto LABEL_11;
  v16[0] = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.System.Internal.UserManager", 0x23u, &hstringHeader, &string);
  if ( v2 < 0 )
  {
LABEL_31:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    goto LABEL_32;
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_1292a652_a1b2_483b_ae29_3d90012c77c1, v16);
  if ( ActivationFactory >= 0 )
  {
    ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16[0] + 56LL))(
                          v16[0],
                          *((_QWORD *)this + 10));
    if ( ActivationFactory >= 0 )
      goto LABEL_9;
    v4 = 567LL;
  }
  else
  {
    v4 = 564LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v4,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_9:
  v5 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
LABEL_11:
  if ( !*((_QWORD *)this + 8) )
    goto LABEL_17;
  v16[0] = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.Gaming.Input.RawGameController", 0x26u, &hstringHeader, &string);
  if ( v6 < 0 )
  {
LABEL_32:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    goto LABEL_33;
  }
  v7 = RoGetActivationFactory(string, &GUID_eb8d0792_e95a_4b19_afc7_0a59f8bf759e, v16);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_15;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16[0] + 56LL))(v16[0], *((_QWORD *)this + 8));
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1DC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v12);
LABEL_30:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1E1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_31;
  }
  if ( *((_QWORD *)this + 9) )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16[0] + 72LL))(v16[0], *((_QWORD *)this + 9));
    if ( v13 < 0 )
      goto LABEL_30;
  }
LABEL_15:
  v8 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_17:
  LODWORD(v16[0]) = 0;
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, v16, 4LL, 0LL);
  WGIRawInputProvider::SetInputFocusProcess(this, 0, 0);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  std::vector<Microsoft::WRL::ComPtr<WGIController>>::~vector<Microsoft::WRL::ComPtr<WGIController>>((char *)this + 88);
  *((_QWORD *)this + 6) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  v9 = (void *)*((_QWORD *)this + 7);
  if ( v9 == (void *)-1LL )
    goto LABEL_20;
  if ( !CloseHandle(v9) )
  {
LABEL_33:
    LastError = GetLastError();
    v15 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v15 = (unsigned int)LastError;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v15);
    JUMPOUT(0x18006ADC8LL);
  }
  *((_QWORD *)this + 7) = -1LL;
LABEL_20:
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 4);
  if ( v11 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
