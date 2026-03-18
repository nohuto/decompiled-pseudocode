/*
 * XREFs of ?SetFontName@CTextBrush@@QEAAJPEBG_K@Z @ 0x1801B5550
 * Callers:
 *     ?ProcessSetFontName@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TEXTBRUSH_SETFONTNAME@@PEBXI@Z @ 0x1801B52A8 (-ProcessSetFontName@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TEXTBRUSH_SETFONTNAME@@PEBXI.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
  v4 = (_QWORD *)((char *)this + 96);
  if ( a2 )
  {
    v7 = a3 + 1;
    if ( *((_QWORD *)this + 13) >= (unsigned __int64)(a3 + 1) )
    {
      v7 = *((_QWORD *)this + 13);
    }
    else
    {
      v8 = operator new(saturated_mul(v7, 2uLL));
      v9 = (void *)*v4;
      *v4 = v8;
      if ( v9 )
      {
        WPF::ProcessHeapImpl::Free(v9);
        v8 = (LPVOID)*v4;
      }
      if ( !v8 )
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, -2147024882, 0x15Eu);
        goto LABEL_12;
      }
      *((_QWORD *)this + 13) = v7;
    }
    if ( !(unsigned int)_o_wcscpy_s(*v4, v7, a2) )
      return v3;
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024809, 0x164u);
LABEL_12:
    *v4 = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    return v3;
  }
  *v4 = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return v3;
}
