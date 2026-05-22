/*
 * XREFs of ?DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z @ 0x180109CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::DeliverToInputService(
        NonBamoInputDeliveryServer *this,
        const struct KeyboardEvent *a2)
{
  const char *v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4));
  if ( *(_DWORD *)a2 > 2u )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      223LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      v4);
    JUMPOUT(0x180109D31LL);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct KeyboardEvent *, _QWORD))(**((_QWORD **)this + 33) + 24LL))(
         *((_QWORD *)this + 33),
         a2,
         0LL);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      216LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  return 0LL;
}
