/*
 * XREFs of ?OnConnected@CursorManager@@UEAAJPEAUIMessageProxy@@@Z @ 0x1800D9E00
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CursorManager::OnConnected(CursorManager *this, struct IMessageProxy *a2)
{
  __int64 **v2; // rdi
  int v4; // eax
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // eax
  int v11[4]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v12; // [rsp+30h] [rbp-58h]
  __int64 v13; // [rsp+40h] [rbp-48h]
  int v14[4]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = (__int64 **)((char *)this + 32);
  if ( !*((_QWORD *)this + 4) )
  {
    v4 = (**(__int64 (__fastcall ***)(struct IMessageProxy *, GUID *, char *))a2)(
           a2,
           &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a,
           (char *)this + 32);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xFF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 3) + 112LL))(
           *((_QWORD *)this + 3),
           *((_QWORD *)this + 7),
           v14);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x101,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v6 = *v2;
    v7 = *((unsigned int *)this + 18);
    *(_OWORD *)v11 = *(_OWORD *)v14;
    v8 = *v6;
    v12 = v15;
    v13 = v16;
    v9 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64))(v8 + 24))(v6, v11, v7);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x103,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x1800D9F1ALL);
    }
  }
  return 0LL;
}
