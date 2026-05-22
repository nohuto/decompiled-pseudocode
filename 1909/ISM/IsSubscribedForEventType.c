/*
 * XREFs of IsSubscribedForEventType @ 0x1800576D8
 * Callers:
 *     ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180057330 (-DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

bool __fastcall IsSubscribedForEventType(int a1, __int64 a2, __int64 a3, const char *a4)
{
  int v7; // eax
  int v8; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      144LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      a4);
    __debugbreak();
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) )
    return 1;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
  v8 = 28;
  if ( a1 != 4 )
    v8 = a1;
  return (v7 & v8) != 0;
}
