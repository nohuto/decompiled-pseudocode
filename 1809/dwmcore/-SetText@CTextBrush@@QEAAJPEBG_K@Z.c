/*
 * XREFs of ?SetText@CTextBrush@@QEAAJPEBG_K@Z @ 0x1801B56D8
 * Callers:
 *     ?ProcessSetText@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TEXTBRUSH_SETTEXT@@PEBXI@Z @ 0x1801B5498 (-ProcessSetText@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TEXTBRUSH_SETTEXT@@PEBXI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTextBrush::SetText(CTextBrush *this, const unsigned __int16 *a2, __int64 a3)
{
  int v3; // edi
  unsigned __int64 v6; // rsi
  LPVOID v7; // rax
  void *v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v3 = a3;
  if ( !a2 )
  {
    v12 = 307;
LABEL_12:
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, v12);
    goto LABEL_13;
  }
  v6 = a3 + 1;
  if ( *((_QWORD *)this + 11) >= (unsigned __int64)(a3 + 1) )
  {
    v6 = *((_QWORD *)this + 11);
  }
  else
  {
    v7 = operator new(saturated_mul(v6, 2uLL));
    v8 = (void *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v7;
    if ( v8 )
    {
      WPF::ProcessHeapImpl::Free(v8);
      v7 = (LPVOID)*((_QWORD *)this + 9);
    }
    if ( !v7 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, -2147024882, 0x139u);
LABEL_13:
      *((_QWORD *)this + 9) = 0LL;
      *((_DWORD *)this + 20) = 0;
      *((_QWORD *)this + 11) = 0LL;
      return v9;
    }
    *((_QWORD *)this + 11) = v6;
  }
  v10 = *((_QWORD *)this + 9);
  *((_DWORD *)this + 20) = v3;
  v9 = 0;
  if ( (unsigned int)_o_wcscpy_s(v10, v6, a2) )
  {
    v12 = 320;
    goto LABEL_12;
  }
  return v9;
}
