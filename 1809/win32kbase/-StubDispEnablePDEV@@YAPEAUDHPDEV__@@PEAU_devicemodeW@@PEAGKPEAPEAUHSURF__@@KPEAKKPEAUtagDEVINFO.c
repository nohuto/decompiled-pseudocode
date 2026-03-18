/*
 * XREFs of ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C005F390
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePalette @ 0x1C005F490 (EngCreatePalette.c)
 *     EngAllocMem @ 0x1C005F5F0 (EngAllocMem.c)
 *     ?bInitGdiInfo@@YAHPEAU_devicemodeW@@PEAU_GDIINFO@@@Z @ 0x1C005F974 (-bInitGdiInfo@@YAHPEAU_devicemodeW@@PEAU_GDIINFO@@@Z.c)
 *     EngFreeMem @ 0x1C0060D80 (EngFreeMem.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

struct DHPDEV__ *__fastcall StubDispEnablePDEV(
        struct _devicemodeW *a1,
        unsigned __int16 *a2,
        __int64 a3,
        HSURF *a4,
        unsigned int a5,
        unsigned int *a6,
        size_t Size,
        struct tagDEVINFO *a8)
{
  _DWORD *v8; // rbx
  size_t v9; // r8
  size_t v10; // r8
  HPALETTE Palette; // rax
  struct _GDIINFO Src; // [rsp+30h] [rbp-148h] BYREF

  v8 = 0LL;
  if ( bInitGdiInfo(a1, &Src) )
  {
    v8 = EngAllocMem(1u, 0x20u, 0x62664444u);
    if ( v8 )
    {
      v9 = 312LL;
      if ( (unsigned int)Size <= 0x138 )
        v9 = (unsigned int)Size;
      memmove(a8, &unk_1C01934F0, v9);
      v10 = 320LL;
      if ( a5 < 0x140 )
        v10 = a5;
      memmove(a6, &Src, v10);
      v8[4] = Src.ulHorzRes;
      v8[5] = Src.ulVertRes;
      Palette = EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
      *((_QWORD *)a8 + 37) = Palette;
      *((_QWORD *)v8 + 3) = Palette;
      if ( !*((_QWORD *)a8 + 37) )
      {
        EngFreeMem(v8);
        return 0LL;
      }
    }
  }
  return (struct DHPDEV__ *)v8;
}
