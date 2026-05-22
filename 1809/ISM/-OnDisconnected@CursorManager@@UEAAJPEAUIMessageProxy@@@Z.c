/*
 * XREFs of ?OnDisconnected@CursorManager@@UEAAJPEAUIMessageProxy@@@Z @ 0x1800D9F30
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CursorManager::OnDisconnected(
        CursorManager *this,
        int (__fastcall ***a2)(struct IMessageProxy *, GUID *, __int64 *))
{
  int (__fastcall **v2)(struct IMessageProxy *, GUID *, __int64 *); // rax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v9 = 0LL;
  if ( (*v2)((struct IMessageProxy *)a2, &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a, &v9) >= 0 )
  {
    v4 = *((_QWORD *)this + 4);
    if ( v4 )
    {
      *((_QWORD *)this + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 56LL))(*((_QWORD *)this + 6));
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x116,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v5);
      JUMPOUT(0x1800D9FCFLL);
    }
  }
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0LL;
}
