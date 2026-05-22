/*
 * XREFs of ?OnCursorTargetChanged@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x18010EA58
 * Callers:
 *     ?OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x18010E888 (-OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z @ 0x180169B28 (-GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z.c)
 */

__int64 __fastcall CursorManager::OnCursorTargetChanged(CursorManager *this, struct CursorMessage *a2)
{
  int CursorDefaultState; // ebx
  __int64 v5; // rdx
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int64 v10; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  CursorDefaultState = GetCursorDefaultState(*((unsigned int *)a2 + 6), v11);
  if ( CursorDefaultState < 0 )
  {
    v5 = 220LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)(unsigned int)CursorDefaultState);
    return (unsigned int)CursorDefaultState;
  }
  v7 = *(_OWORD *)((char *)a2 + 8);
  *((_QWORD *)a2 + 3) = v12;
  v8 = *((_QWORD *)this + 7);
  v13 = v7;
  CursorDefaultState = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 24LL))(v8, &v13);
  if ( CursorDefaultState < 0 )
  {
    v5 = 223LL;
    goto LABEL_3;
  }
  v9 = *(_OWORD *)((char *)a2 + 8);
  *((_BYTE *)a2 + 24) = v11[1];
  v10 = *((_QWORD *)this + 7);
  v13 = v9;
  CursorDefaultState = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v10 + 16LL))(v10, &v13);
  if ( CursorDefaultState < 0 )
  {
    v5 = 226LL;
    goto LABEL_3;
  }
  return 0LL;
}
