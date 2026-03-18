/*
 * XREFs of ?GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18016AB50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateIgnoreAlphaBitmap@CD2DBitmap@@AEAAJXZ @ 0x18016A89C (-CreateIgnoreAlphaBitmap@CD2DBitmap@@AEAAJXZ.c)
 *     ?EnsureBitmap@CD2DBitmap@@AEAAJXZ @ 0x18016AB00 (-EnsureBitmap@CD2DBitmap@@AEAAJXZ.c)
 */

__int64 __fastcall CD2DBitmap::GetBitmap(CD2DBitmap *this, char a2, struct ID2D1Bitmap1 **a3)
{
  CD2DBitmap *v3; // rdi
  CD2DBitmap *v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct ID2D1Bitmap1 *v10; // rax
  int IgnoreAlphaBitmap; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v3 = (CD2DBitmap *)((char *)this - 104);
  v6 = (CD2DBitmap *)((char *)this - 104);
  if ( a2 )
  {
    IgnoreAlphaBitmap = CD2DBitmap::EnsureBitmap(v6);
    v9 = IgnoreAlphaBitmap;
    if ( IgnoreAlphaBitmap >= 0 )
    {
      if ( *((_QWORD *)v3 + 20)
        || (IgnoreAlphaBitmap = CD2DBitmap::CreateIgnoreAlphaBitmap(v3), v9 = IgnoreAlphaBitmap, IgnoreAlphaBitmap >= 0) )
      {
        v9 = 0;
        goto LABEL_12;
      }
      v13 = 220LL;
    }
    else
    {
      v13 = 216LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\D2DBitmap.h",
      (const char *)(unsigned int)IgnoreAlphaBitmap);
LABEL_12:
    if ( (v9 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v9, 0xB2u, 0LL);
      return v9;
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7));
    v10 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 7);
    goto LABEL_14;
  }
  v7 = CD2DBitmap::EnsureBitmap(v6);
  v9 = v7;
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
    v10 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 6);
LABEL_14:
    *a3 = v10;
    return v9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xABu, 0LL);
  return v9;
}
