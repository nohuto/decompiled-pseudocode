/*
 * XREFs of ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x180029EB4
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x1800073F0 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ @ 0x180029F44 (-CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorNotificationProcessor::ProcessVisibilityChangedNotification(
        CursorNotificationProcessor *this,
        char a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  __int64 v9[2]; // [rsp+30h] [rbp-98h] BYREF
  char v10[8]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v11; // [rsp+48h] [rbp-80h]
  char v12; // [rsp+58h] [rbp-70h]
  _BYTE v13[16]; // [rsp+90h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v9[1] = -2LL;
  v9[0] = 0LL;
  memset_0(v10, 0, 0x48uLL);
  if ( !CursorNotificationProcessor::CheckAndEnsureCursorManagerClient(this) )
    goto LABEL_2;
  v6 = *(_QWORD *)this;
  v7 = *(int (__fastcall **)(__int64, __int64 *))(**(_QWORD **)this + 40LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v9);
  if ( v7(v6, v9) < 0 )
    goto LABEL_2;
  v10[0] = 3;
  v11 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9[0] + 40LL))(v9[0], v13);
  v12 = a2;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, __int64))(**((_QWORD **)this + 1) + 168LL))(
         *((_QWORD *)this + 1),
         *((_QWORD *)this + 2),
         v10,
         72LL);
  v4 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotific"
               "ationprocessor.cpp",
      (const char *)(unsigned int)v8);
  else
LABEL_2:
    v4 = 0;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v9);
  return v4;
}
