/*
 * XREFs of ?SetText@CTextBrush@@QEAAJPEBG_K@Z @ 0x1801FB954
 * Callers:
 *     ?ProcessSetText@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TEXTBRUSH_SETTEXT@@PEBXI@Z @ 0x1801FB6F0 (-ProcessSetText@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TEXTBRUSH_SETTEXT@@PEBXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
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
    v12 = 305;
LABEL_12:
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, v12, 0LL);
    goto LABEL_13;
  }
  v6 = a3 + 1;
  if ( *((_QWORD *)this + 12) >= (unsigned __int64)(a3 + 1) )
  {
    v6 = *((_QWORD *)this + 12);
  }
  else
  {
    v7 = operator new(saturated_mul(v6, 2uLL));
    v8 = (void *)*((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v7;
    if ( v8 )
    {
      operator delete(v8);
      v7 = (LPVOID)*((_QWORD *)this + 10);
    }
    if ( !v7 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, 0x8007000E, 0x137u, 0LL);
LABEL_13:
      *((_QWORD *)this + 10) = 0LL;
      *((_DWORD *)this + 22) = 0;
      *((_QWORD *)this + 12) = 0LL;
      return v9;
    }
    *((_QWORD *)this + 12) = v6;
  }
  v10 = *((_QWORD *)this + 10);
  *((_DWORD *)this + 22) = v3;
  v9 = 0;
  if ( (unsigned int)_o_wcscpy_s(v10, v6, a2) )
  {
    v12 = 318;
    goto LABEL_12;
  }
  return v9;
}
