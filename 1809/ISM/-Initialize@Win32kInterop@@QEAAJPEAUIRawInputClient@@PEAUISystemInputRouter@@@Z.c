/*
 * XREFs of ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x180081FEC
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180081ECC (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@@Z @ 0x1800847D0 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageS.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x1800849C8 (-Initialize@-$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIM.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x180084BBC (-Initialize@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSe.c)
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x180085FF0 (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::Initialize(
        Win32kInterop *this,
        struct IRawInputClient *a2,
        struct ISystemInputRouter *a3)
{
  struct IRawInputClient *v6; // rcx
  struct ISystemInputRouter *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdi
  struct ICursorBroker *v13; // rcx
  int v14; // eax
  int v15; // eax
  struct ICursorBroker *v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-50h]
  __int64 (__fastcall **v20)(); // [rsp+28h] [rbp-48h] BYREF
  Win32kInterop *v21; // [rsp+30h] [rbp-40h]
  __int64 (__fastcall ***v22)(); // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v24; // [rsp+90h] [rbp+20h] BYREF
  struct ICursorBroker *v25; // [rsp+98h] [rbp+28h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  v6 = (struct IRawInputClient *)*((_QWORD *)this + 7);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = (struct IRawInputClient *)*((_QWORD *)this + 7);
    }
    *((_QWORD *)this + 7) = a2;
    if ( v6 )
      (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (struct ISystemInputRouter *)*((_QWORD *)this + 6);
  if ( v7 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)a3 + 8LL))(a3);
      v7 = (struct ISystemInputRouter *)*((_QWORD *)this + 6);
    }
    *((_QWORD *)this + 6) = a3;
    if ( v7 )
      (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_BYTE *)this + 40) = 0;
  v8 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = CoreUICreate(&v24);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x91,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v20 = off_18013C8C8;
  v21 = this;
  v22 = &v20;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)(), __int64))KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize)(
    (char *)this + 2000,
    &v24,
    5LL,
    &v20,
    -2LL);
  v20 = off_18013C9C0;
  v21 = this;
  v22 = &v20;
  KernelInputConnection<_MIT_DEVICE_IDENTIFICATION_MESSAGE>::Initialize((char *)this + 2256, &v24, v10, &v20);
  v20 = off_18013CA70;
  v21 = this;
  v22 = &v20;
  KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>::Initialize((char *)this + 2384, &v24, v11, &v20);
  v20 = off_18013C8F8;
  v21 = this;
  v22 = &v20;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)(), __int64))KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize)(
    (char *)this + 2128,
    &v24,
    8LL,
    &v20,
    v19);
  v12 = *((_QWORD *)this + 6);
  v13 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = (*(__int64 (__fastcall **)(__int64, struct ICursorBroker **))(*(_QWORD *)v12 + 72LL))(v12, &v25);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v14);
    JUMPOUT(0x180082253LL);
  }
  v15 = CursorNotificationProcessor::Initialize((Win32kInterop *)((char *)this + 1952), v25);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v16 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return 0LL;
}
