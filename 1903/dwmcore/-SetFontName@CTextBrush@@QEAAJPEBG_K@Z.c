/*
 * XREFs of ?SetFontName@CTextBrush@@QEAAJPEBG_K@Z @ 0x1801FCEA8
 * Callers:
 *     ?ProcessSetFontName@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TEXTBRUSH_SETFONTNAME@@PEBXI@Z @ 0x1801FCBDC (-ProcessSetFontName@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TEXTBRUSH_SETFONTNAME@@PE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTextBrush::SetFontName(CTextBrush *this, const unsigned __int16 *a2, __int64 a3)
{
  unsigned int v3; // esi
  _QWORD *v4; // rbx
  unsigned __int64 v7; // rbp
  LPVOID v8; // rax
  void *v9; // rcx
  __int64 v10; // rcx

  v3 = 0;
  v4 = (_QWORD *)((char *)this + 104);
  if ( a2 )
  {
    v7 = a3 + 1;
    if ( *((_QWORD *)this + 14) >= (unsigned __int64)(a3 + 1) )
    {
      v7 = *((_QWORD *)this + 14);
    }
    else
    {
      v8 = operator new(saturated_mul(v7, 2uLL));
      v9 = (void *)*v4;
      *v4 = v8;
      if ( v9 )
      {
        operator delete(v9);
        v8 = (LPVOID)*v4;
      }
      if ( !v8 )
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, 0x8007000E, 0x15Cu, 0LL);
        goto LABEL_12;
      }
      *((_QWORD *)this + 14) = v7;
    }
    if ( !(unsigned int)_o_wcscpy_s(*v4, v7, a2) )
      return v3;
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x80070057, 0x162u, 0LL);
LABEL_12:
    *v4 = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    return v3;
  }
  *v4 = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  return v3;
}
