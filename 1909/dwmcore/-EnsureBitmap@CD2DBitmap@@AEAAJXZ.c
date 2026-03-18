/*
 * XREFs of ?EnsureBitmap@CD2DBitmap@@AEAAJXZ @ 0x180169410
 * Callers:
 *     ?GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180169460 (-GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateBitmap@CD2DBitmap@@AEAAJXZ @ 0x1801690F8 (-CreateBitmap@CD2DBitmap@@AEAAJXZ.c)
 */

__int64 __fastcall CD2DBitmap::EnsureBitmap(CD2DBitmap *this)
{
  int Bitmap; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 19) )
    return 0LL;
  Bitmap = CD2DBitmap::CreateBitmap(this);
  v2 = Bitmap;
  if ( Bitmap >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD0,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\D2DBitmap.h",
    (const char *)(unsigned int)Bitmap);
  return v2;
}
