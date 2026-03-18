/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C00A991C
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007FEC8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1C012F360 (NtGdiDeleteColorSpace.c)
 * Callees:
 *     FreeObject @ 0x1C0016BA0 (FreeObject.c)
 *     HmgRemoveObject @ 0x1C00174C0 (HmgRemoveObject.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
 */

__int64 __fastcall bDeleteColorSpace(struct HOBJ__ *a1)
{
  unsigned int v1; // ebx
  void *v2; // rax

  v1 = 0;
  if ( a1 != (struct HOBJ__ *)ghStockColorSpace )
  {
    v2 = HmgRemoveObject(a1, 0, 0, 1, 9, 0LL);
    if ( !v2 )
    {
      EngSetLastError(0x57u);
      return v1;
    }
    FreeObject((__int64)v2, 9);
  }
  return 1;
}
