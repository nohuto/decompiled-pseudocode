/*
 * XREFs of ?HitTest@CCompositionGlyphRun@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801CF6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x1800CFB08 (-Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositionGlyphRun::HitTest(
        CCompositionGlyphRun *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct D2D_RECT_F v9; // [rsp+30h] [rbp-30h] BYREF
  struct D2D_RECT_F v10; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( *((_QWORD *)this + 7) )
  {
    v6 = (*(__int64 (__fastcall **)(CCompositionGlyphRun *, _QWORD, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)this + 208LL))(
           this,
           0LL,
           a2,
           &v10);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x116,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    v9 = v10;
    *a4 = Contains(&v9, a3);
  }
  else
  {
    *a4 = 0;
  }
  return 0LL;
}
