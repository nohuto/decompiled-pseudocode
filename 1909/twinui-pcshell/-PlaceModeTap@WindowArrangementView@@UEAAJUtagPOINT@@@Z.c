/*
 * XREFs of ?PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z @ 0x1803E21C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180381F28 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1803E0974 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::PlaceModeTap(WindowArrangementView *this, struct tagPOINT a2)
{
  bool v2; // zf
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagPOINT v9; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v10[20]; // [rsp+28h] [rbp-48h] BYREF
  char v11; // [rsp+3Ch] [rbp-34h]
  __int128 v12; // [rsp+40h] [rbp-30h]
  __int128 v13; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v2 = *((_QWORD *)this + 7) == 0LL;
  v9 = a2;
  if ( v2 )
  {
    v5 = -2147019873;
    v6 = 569LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)v5);
    return v5;
  }
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 4) + 120LL))(*((_QWORD *)this + 4), &v13);
  if ( Geometry::CRect::Contains((Geometry::CRect *)&v13, &v9) )
  {
    *(_DWORD *)v10 = 5;
    v11 = 1;
    *(_OWORD *)&v10[4] = v13;
    v12 = *(_OWORD *)v10;
  }
  else
  {
    v7 = *((_QWORD *)this + 7);
    v9 = a2;
    v12 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, struct tagPOINT *))(*(_QWORD *)v7 + 40LL))(
                       v7,
                       v10,
                       &v9);
  }
  v5 = WindowArrangementView::CommitPlaceModeTap((_BYTE *)this - 48, v12);
  if ( (v5 & 0x80000000) != 0 )
  {
    v6 = 582LL;
    goto LABEL_8;
  }
  return v5;
}
