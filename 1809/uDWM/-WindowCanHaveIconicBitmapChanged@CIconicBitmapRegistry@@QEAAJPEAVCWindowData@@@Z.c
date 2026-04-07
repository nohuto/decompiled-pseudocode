/*
 * XREFs of ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18001256C
 * Callers:
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180004740 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180011E50 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180020DC4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18003BFFC (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x18007BDE8 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18008E350 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::WindowCanHaveIconicBitmapChanged(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2)
{
  char v2; // al
  unsigned int v3; // ebx
  int v6; // eax
  CWindowIconic *v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax

  v2 = *((_BYTE *)a2 + 598);
  v3 = 0;
  if ( (v2 & 1) != 0 )
    goto LABEL_7;
  *((_BYTE *)a2 + 598) = v2 & 0xF5;
  CWindowData::SetIconicBitmap(a2, 0LL);
  v6 = CIconicBitmapRegistry::RequestBitmap(this, a2, 0);
  v3 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x33Au);
  CIconicBitmapRegistry::ClearBitmap(this, a2);
  v7 = (CWindowIconic *)*((_QWORD *)a2 + 54);
  if ( !v7 || (v8 = CWindowIconic::OnRepresentationTypeUpdated(v7), v3 = v8, v8 >= 0) )
  {
LABEL_7:
    v9 = *((_QWORD *)this + 12);
    if ( v9 && *(struct CWindowData **)(v9 + 72) == a2 )
    {
      *(_WORD *)((char *)this + 89) = 0;
      *((_BYTE *)this + 88) = 0;
      v10 = CIconicBitmapRegistry::RequestBitmap(this, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL, 0);
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x347u);
      CIconicBitmapRegistry::ClearBitmap(this, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL);
      v11 = CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)this + 12));
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x349u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x33Eu);
  }
  return v3;
}
