/*
 * XREFs of ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAVWGIRawInputProvider@@@Z @ 0x18006D044
 * Callers:
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x18006B260 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@EdgyInputTarget@@UEAAKXZ @ 0x1800036E0 (-Release@EdgyInputTarget@@UEAAKXZ.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000AA20 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WGIController::RuntimeClassInitialize(
        WGIController *this,
        struct Windows::Gaming::Input::IRawGameController *a2,
        struct IRawInputClient *a3,
        struct IMessageSession *a4,
        struct WGIRawInputProvider *a5)
{
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  EdgyInputTarget *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  HRESULT v23; // eax
  int ActivationFactory; // eax
  int v25; // eax
  HRESULT v26; // eax
  int v27; // eax
  int v28; // eax
  int *v29; // rdi
  int v30; // eax
  int *v31; // rsi
  int v32; // eax
  int *v33; // r14
  int v34; // eax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  void *v37; // rax
  const struct std::nothrow_t *v38; // rdx
  const char *v39; // r9
  void *v40; // rcx
  void *v41; // rax
  const struct std::nothrow_t *v42; // rdx
  const char *v43; // r9
  void *v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  void *v47; // rax
  const struct std::nothrow_t *v48; // rdx
  const char *v49; // r9
  void *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 (__fastcall ***v59)(_QWORD, GUID *, _QWORD *); // rcx
  int v61[2]; // [rsp+28h] [rbp-91h] BYREF
  __int64 (__fastcall ***v62)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-89h] BYREF
  __int64 v63; // [rsp+38h] [rbp-81h] BYREF
  __int64 v64; // [rsp+40h] [rbp-79h] BYREF
  __int64 v65; // [rsp+48h] [rbp-71h] BYREF
  __int64 v66; // [rsp+50h] [rbp-69h] BYREF
  __int64 v67; // [rsp+58h] [rbp-61h] BYREF
  __int64 v68; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v69[2]; // [rsp+68h] [rbp-51h] BYREF
  GUID v70; // [rsp+78h] [rbp-41h] BYREF
  GUID v71; // [rsp+88h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-21h] BYREF
  HSTRING string; // [rsp+B0h] [rbp-9h] BYREF
  HSTRING_HEADER v74; // [rsp+B8h] [rbp-1h] BYREF
  HSTRING v75; // [rsp+D0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+57h]

  v69[1] = -2LL;
  v62 = 0LL;
  v67 = 0LL;
  *(_QWORD *)v61 = 0LL;
  v64 = 0LL;
  v69[0] = 0LL;
  v68 = 0LL;
  v63 = 0LL;
  v66 = 0LL;
  v65 = 0LL;
  if ( !a2 )
  {
    v9 = 275LL;
LABEL_7:
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)0x80070057LL);
    goto LABEL_64;
  }
  if ( !a3 )
  {
    v9 = 276LL;
    goto LABEL_7;
  }
  if ( !a4 )
  {
    v9 = 277LL;
    goto LABEL_7;
  }
  if ( *((struct Windows::Gaming::Input::IRawGameController **)this + 9) != a2 )
  {
    (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)a2 + 8LL))(a2);
    v11 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = a2;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( *((struct IRawInputClient **)this + 12) != a3 )
  {
    (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a3 + 8LL))(a3);
    v12 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = a3;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( *((struct IMessageSession **)this + 13) != a4 )
  {
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a4 + 8LL))(a4);
    v13 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = a4;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = (EdgyInputTarget *)*((_QWORD *)this + 14);
  if ( v14 != a5 )
  {
    if ( a5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a5 + 6);
      v14 = (EdgyInputTarget *)*((_QWORD *)this + 14);
    }
    *((_QWORD *)this + 14) = a5;
    if ( v14 )
      EdgyInputTarget::Release(v14);
  }
  v15 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))this + 9))(
          *((_QWORD *)this + 9),
          &GUID_1baf6522_5f64_42c5_8267_b9fe2215bfbd,
          &v62);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x120,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v16 = (**v62)(v62, &GUID_debcfefe_f763_4670_940b_57aae2b143ff, &v67);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x121,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v67 + 48LL))(v67, v61);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x122,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  v18 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v61)(
          *(_QWORD *)v61,
          &GUID_c3542377_1ea7_4454_8deb_8aa6070db645,
          (char *)this + 64);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x123,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v61)(
         *(_QWORD *)v61,
         &GUID_f6d99cef_3636_46f4_a0a9_00751df46bcb,
         &v64) < 0 )
  {
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, _QWORD *))v61)(
           *(_QWORD *)v61,
           &GUID_075ddbfa_cc84_4137_8ce7_aa552fea8fe2,
           v69) >= 0
      || (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v61)(
           *(_QWORD *)v61,
           &GUID_ac104f57_79bd_4af3_9675_5e667484818b,
           &v68) >= 0 )
    {
      *((_DWORD *)this + 41) = 64;
    }
  }
  else
  {
    v19 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v64 + 64LL))(v64, (char *)this + 144);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x12B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
    *((_DWORD *)this + 41) = 196;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v64 + 120LL))(v64, &v63);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x12D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v20);
      __debugbreak();
    }
    v70 = GUID_GIP_MICROSOFT_XBOX_INPUT_IELITEGAMEPAD;
    v21 = (*(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v63 + 120LL))(v63, &v70, (char *)this + 240);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x12E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
    v71 = GUID_GIP_MICROSOFT_XBOX_INPUT_IEXTERNALGAMEPADSTATUS;
    v22 = (*(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v63 + 120LL))(v63, &v71, (char *)this + 241);
    if ( v22 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x12F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v22);
      __debugbreak();
    }
  }
  string = 0LL;
  v23 = WindowsCreateStringReference(L"Windows.Gaming.Input.Gamepad", 0x1Cu, &hstringHeader, &string);
  if ( v23 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_42676dc5_0856_47c4_9213_b395504c3a3c, &v66);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x13F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)ActivationFactory);
    __debugbreak();
  }
  v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v66 + 48LL))(v66, v62, (char *)this + 88);
  if ( v25 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x140,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v25);
    __debugbreak();
  }
  v75 = 0LL;
  v26 = WindowsCreateStringReference(L"Windows.Gaming.Input.UINavigationController", 0x2Bu, &v74, &v75);
  if ( v26 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26);
    __debugbreak();
  }
  v27 = RoGetActivationFactory(v75, &GUID_e0cb28e3_b20b_4b0b_9ed4_f3d53cec0de4, &v65);
  if ( v27 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x141,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v27);
    __debugbreak();
  }
  v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v65 + 48LL))(v65, v62, (char *)this + 80);
  if ( v28 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x142,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v28);
    __debugbreak();
  }
  v29 = (int *)((char *)this + 152);
  v30 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 48LL))(
          *((_QWORD *)this + 9),
          (char *)this + 152);
  if ( v30 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x149,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v30);
    __debugbreak();
  }
  v31 = (int *)((char *)this + 156);
  v32 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 56LL))(
          *((_QWORD *)this + 9),
          (char *)this + 156);
  if ( v32 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x14A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v32);
    __debugbreak();
  }
  v33 = (int *)((char *)this + 160);
  v34 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 88LL))(
          *((_QWORD *)this + 9),
          (char *)this + 160);
  if ( v34 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x14B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v34);
    __debugbreak();
  }
  if ( *v29 )
  {
    v35 = 2 * *v29;
    v36 = 8 * v35;
    if ( !is_mul_ok(v35, 8uLL) )
      v36 = -1LL;
    v37 = operator new[](v36, (const struct std::nothrow_t *)&std::nothrow);
    v40 = (void *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = v37;
    if ( v40 )
    {
      operator delete(v40, v38);
      v37 = (void *)*((_QWORD *)this + 15);
    }
    if ( !v37 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x150,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        v39);
      __debugbreak();
    }
    memset_0(v37, 0, 16LL * *v29);
  }
  if ( *v31 )
  {
    v41 = operator new[](2 * *v31, (const struct std::nothrow_t *)&std::nothrow);
    v44 = (void *)*((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = v41;
    if ( v44 )
    {
      operator delete(v44, v42);
      v41 = (void *)*((_QWORD *)this + 16);
    }
    if ( !v41 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x157,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        v43);
      JUMPOUT(0x18006D871LL);
    }
    memset_0(v41, 0, 2LL * *v31);
  }
  if ( *v33 )
  {
    v45 = 2 * *v33;
    v46 = 4 * v45;
    if ( !is_mul_ok(v45, 4uLL) )
      v46 = -1LL;
    v47 = operator new[](v46, (const struct std::nothrow_t *)&std::nothrow);
    v50 = (void *)*((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v47;
    if ( v50 )
    {
      operator delete(v50, v48);
      v47 = (void *)*((_QWORD *)this + 17);
    }
    if ( !v47 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x15E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        v49);
      __debugbreak();
    }
    memset_0(v47, 0, 8LL * *v33);
  }
  v10 = 0;
LABEL_64:
  v51 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  }
  v52 = v66;
  if ( v66 )
  {
    v66 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  }
  v53 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  }
  v54 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  }
  v55 = v69[0];
  if ( v69[0] )
  {
    v69[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  }
  v56 = v64;
  if ( v64 )
  {
    v64 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
  }
  v57 = *(_QWORD *)v61;
  if ( *(_QWORD *)v61 )
  {
    *(_QWORD *)v61 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  }
  v58 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  }
  v59 = v62;
  if ( v62 )
  {
    v62 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v59)[2])(v59);
  }
  return v10;
}
