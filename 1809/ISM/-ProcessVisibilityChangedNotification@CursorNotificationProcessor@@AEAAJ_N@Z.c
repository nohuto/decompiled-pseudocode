/*
 * XREFs of ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x180086690
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x1800863A0 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002A878 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CursorNotificationProcessor::ProcessVisibilityChangedNotification(
        CursorNotificationProcessor *this,
        char a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-31h] BYREF
  __int64 v24; // [rsp+50h] [rbp-21h] BYREF
  __int64 v25; // [rsp+58h] [rbp-19h] BYREF
  char v26[8]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v27; // [rsp+70h] [rbp-1h]
  char v28; // [rsp+80h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v23[1] = -2LL;
  v23[0] = 0LL;
  memset_0(v26, 0, 0x40uLL);
  v22 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v24,
    *((_QWORD *)this + 1));
  if ( *((_QWORD *)this + 2) || !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 64LL))(*(_QWORD *)this) )
  {
    v11 = v25;
    v12 = v24;
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), &v22);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 191LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotif"
                 "icationprocessor.cpp",
        (const char *)(unsigned int)v4);
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 144LL))(v24);
      v7 = v24;
      v25 = 0LL;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v8 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      goto LABEL_24;
    }
    v9 = v22;
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      &v24,
      v24);
    v4 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, __int64, __int64 *))(*(_QWORD *)v9 + 24LL))(
           v9,
           L"System\\Input\\CursorManagerEndpoint",
           1LL,
           &v25);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 196LL;
      goto LABEL_5;
    }
    v10 = v25;
    v11 = 0LL;
    v25 = 0LL;
    v12 = v24;
    if ( v24 )
    {
      v13 = v24;
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v11 = v25;
      v12 = v24;
    }
    *((_QWORD *)this + 2) = v10;
  }
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 144LL))(v12);
    v12 = v24;
  }
  v25 = 0LL;
  if ( v12 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v5 = 0;
LABEL_24:
  if ( v5 < 0 )
  {
    v15 = (unsigned int)v5;
    v16 = 213LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotific"
               "ationprocessor.cpp",
      (const char *)v15);
    goto LABEL_33;
  }
  v17 = *(_QWORD *)this;
  v18 = v23[0];
  if ( v23[0] )
  {
    v23[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 40LL))(v17, v23) >= 0 )
  {
    v26[0] = 3;
    v27 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v23[0] + 40LL))(v23[0], &v24);
    v28 = a2;
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, __int64))(**((_QWORD **)this + 1) + 160LL))(
            *((_QWORD *)this + 1),
            *((_QWORD *)this + 2),
            v26,
            64LL);
    v5 = v19;
    if ( v19 < 0 )
    {
      v15 = (unsigned int)v19;
      v16 = 224LL;
      goto LABEL_31;
    }
  }
  v5 = 0;
LABEL_33:
  v20 = v23[0];
  if ( v23[0] )
  {
    v23[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v5;
}
