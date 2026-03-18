/*
 * XREFs of ??0DISPLAYSTATECHECKER@@QEAA@XZ @ 0x1C00499E4
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C0296EC0 (DxgkCheckDisplayState.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001DC08 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

DISPLAYSTATECHECKER *__fastcall DISPLAYSTATECHECKER::DISPLAYSTATECHECKER(DISPLAYSTATECHECKER *this)
{
  `vector constructor iterator'((char *)this, 224LL, 8LL, (void (__fastcall *)(char *))VIDPNSOURCEINFO::VIDPNSOURCEINFO);
  *((_QWORD *)this + 224) = 0LL;
  *((_DWORD *)this + 450) = 0;
  *((_DWORD *)this + 452) = 0;
  memset((char *)this + 1812, 0, 0x24uLL);
  `vector constructor iterator'(
    (char *)this + 1848,
    1008LL,
    4LL,
    (void (__fastcall *)(char *))DISPLAYDIAGNOSTICADAPTERDATA::DISPLAYDIAGNOSTICADAPTERDATA);
  *((_DWORD *)this + 1470) = 0;
  return this;
}
