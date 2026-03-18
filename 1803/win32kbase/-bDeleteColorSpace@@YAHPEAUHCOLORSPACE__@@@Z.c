/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C00D6FCC
 * Callers:
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1C0066FD0 (-vCleanupLCSPs@@YAXK@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1C00D7170 (NtGdiDeleteColorSpace.c)
 * Callees:
 *     HmgRemoveObject @ 0x1C003F690 (HmgRemoveObject.c)
 *     FreeObject @ 0x1C00449C0 (FreeObject.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
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
