/*
 * XREFs of ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x180085FF0
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x180081FEC (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002A878 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CursorNotificationProcessor::Initialize(struct ICursorBroker **this, struct ICursorBroker *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rbx
  struct ICursorBroker *v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  struct ICursorBroker *v16; // rcx
  struct ICursorBroker *v17; // rcx
  __int64 v18; // rbx
  struct ICursorBroker *v19; // rbx
  struct ICursorBroker *v20; // rcx
  struct ICursorBroker *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdx
  struct ICursorBroker *v24; // rcx
  struct ICursorBroker *v26; // [rsp+38h] [rbp-9h] BYREF
  struct ICursorBroker *v27; // [rsp+40h] [rbp-1h] BYREF
  __int64 v28; // [rsp+48h] [rbp+7h] BYREF
  int v29[2]; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+58h] [rbp+17h]
  _BYTE v31[40]; // [rsp+60h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v30 = -2LL;
  v27 = 0LL;
  v28 = 0LL;
  *(_QWORD *)v29 = 0LL;
  v26 = 0LL;
  v4 = CoreUICreate(&v26);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 16LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotific"
               "ationprocessor.cpp",
      (const char *)v6);
    v15 = v28;
    goto LABEL_33;
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v28,
    (__int64)v26);
  v8 = (__int64)v26;
  v9 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, struct ICursorBroker **))(*(_QWORD *)v8 + 64LL))(
          v8,
          L"Kernel\\MIT\\InputPort",
          &v27);
  v5 = v10;
  if ( v10 < 0 )
  {
    v6 = (unsigned int)v10;
    v7 = 20LL;
    goto LABEL_13;
  }
  v11 = (__int64)v26;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v28,
    v28);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *, const void *, int), struct ICursorBroker **, struct ICursorBroker *, int *))(*(_QWORD *)v11 + 80LL))(
          v11,
          CursorNotificationProcessor::OnMitMessageReceived,
          this,
          v27,
          v29);
  v5 = v12;
  if ( v12 < 0 )
  {
    v6 = (unsigned int)v12;
    v7 = 27LL;
    goto LABEL_13;
  }
  v13 = (*(__int64 (__fastcall **)(struct ICursorBroker *, _QWORD, _BYTE *))(*(_QWORD *)v26 + 112LL))(
          v26,
          *(_QWORD *)v29,
          v31);
  v5 = v13;
  if ( v13 < 0 )
  {
    v6 = (unsigned int)v13;
    v7 = 31LL;
    goto LABEL_13;
  }
  v14 = MITCoreMsgKOpenConnectionTo(1LL, v31);
  v5 = v14 | 0x10000000;
  if ( v14 < 0 )
  {
    v6 = v5;
    v7 = 35LL;
    goto LABEL_13;
  }
  v16 = *this;
  if ( *this != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)a2 + 8LL))(a2);
      v16 = *this;
    }
    *this = a2;
    if ( v16 )
      (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = this[1];
  v18 = (__int64)v26;
  if ( v17 != v26 )
  {
    if ( v26 )
    {
      (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v26 + 8LL))(v26);
      v17 = this[1];
    }
    this[1] = (struct ICursorBroker *)v18;
    if ( v17 )
      (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v19 = v27;
  v27 = 0LL;
  v20 = this[3];
  if ( v20 != v19 )
  {
    if ( v19 )
    {
      (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v19 + 8LL))(v19);
      v20 = this[3];
    }
    this[3] = v19;
    if ( v20 )
      (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = *(struct ICursorBroker **)v29;
  *(_QWORD *)v29 = 0LL;
  v15 = v28;
  if ( v28 )
  {
    v22 = v28;
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v15 = v28;
  }
  this[4] = v21;
  v5 = 0;
LABEL_33:
  v23 = (__int64)v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v15 = v28;
  }
  if ( *(_QWORD *)v29 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 144LL))(v15);
    v15 = v28;
  }
  *(_QWORD *)v29 = 0LL;
  if ( v15 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v24 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return v5;
}
