/*
 * XREFs of ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C0276D3C
 * Callers:
 *     ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C02723D0 (-MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x1C0272570 (-MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00092F8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

void __fastcall vSetupDevBitmap(struct PDEVOBJ *a1, struct SURFACE *a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)a2 + 28) |= 0x4000u;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 2164LL) & 0x100) == 0 )
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v3, **(HPALETTE **)(*(_QWORD *)a1 + 1800LL));
    *((_QWORD *)a2 + 16) = v3;
  }
}
