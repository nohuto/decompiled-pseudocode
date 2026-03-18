/*
 * XREFs of EngCreatePalette @ 0x1C00C3450
 * Callers:
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00DB900 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C003E160 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C0076070 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 */

HPALETTE __stdcall EngCreatePalette(
        ULONG iMode,
        ULONG cColors,
        ULONG *pulColors,
        FLONG flRed,
        FLONG flGreen,
        FLONG flBlue)
{
  struct _SLIST_ENTRY *Next; // rbx
  ULONG v7; // r11d
  ULONG v8; // ecx
  struct _SLIST_ENTRY *v10; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+58h] [rbp-10h]

  Next = 0LL;
  v11 = 0;
  v10 = 0LL;
  v7 = iMode & 0x8000;
  v8 = iMode & 0xFFFF7FFF;
  if ( v8 == 2 && flGreen == 65280 && (flRed == 255 && flBlue == 16711680 || flRed == 16711680 && flBlue == 255) )
  {
    v8 = 4;
    if ( flRed != 255 )
      v8 = 8;
  }
  if ( (unsigned int)PALMEMOBJ::bCreatePalette(
                       &v10,
                       v8,
                       cColors,
                       pulColors,
                       flRed,
                       flGreen,
                       flBlue,
                       v7 != 0 ? 50332160 : 16777728,
                       v7 == 0) )
  {
    v11 = 1;
    Next = v10->Next;
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v10);
  return (HPALETTE)Next;
}
