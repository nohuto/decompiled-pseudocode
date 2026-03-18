/*
 * XREFs of ttfdUnloadFontFileTTC @ 0x1C021BA7C
 * Callers:
 *     ttfdSemLoadFontFile @ 0x1C02172A0 (ttfdSemLoadFontFile.c)
 *     ttfdSemUnloadFontFile @ 0x1C0217850 (ttfdSemUnloadFontFile.c)
 *     bLoadFontFile @ 0x1C0219334 (bLoadFontFile.c)
 * Callees:
 *     ttfdUnloadFontFile @ 0x1C021BA18 (ttfdUnloadFontFile.c)
 */

__int64 __fastcall ttfdUnloadFontFileTTC(_QWORD **pv)
{
  unsigned int v1; // edi
  unsigned int i; // esi
  _QWORD *v4; // rcx

  v1 = 0;
  for ( i = 1; v1 < *((_DWORD *)pv + 3); ++v1 )
  {
    if ( HIDWORD(pv[2 * v1 + 5]) == 1 )
      i &= -((unsigned int)ttfdUnloadFontFile(pv[2 * v1 + 6]) != 0);
  }
  v4 = pv[4];
  if ( v4 )
    EngFreeMem(v4);
  EngFreeMem(pv);
  return i;
}
