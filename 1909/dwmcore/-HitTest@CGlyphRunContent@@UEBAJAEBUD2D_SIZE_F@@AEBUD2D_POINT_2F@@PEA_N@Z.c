/*
 * XREFs of ?HitTest@CGlyphRunContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180205320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlyphRunContent::HitTest(
        CGlyphRunContent *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // rsi
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (_QWORD *)*((_QWORD *)this + 7);
  v6 = (_QWORD *)*((_QWORD *)this + 8);
  while ( 1 )
  {
    if ( v4 == v6 )
      return 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)*v4 + 216LL))(
           *v4,
           a2,
           a3,
           a4);
    v10 = v9;
    if ( v9 < 0 )
      break;
    if ( *a4 )
      return 0LL;
    ++v4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x39,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\glyphruncontent.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
