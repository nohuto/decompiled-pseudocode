/*
 * XREFs of ?vCleanupBrushes@@YAXK@Z @ 0x1C007DE28
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextOwned @ 0x1C00200E0 (HmgNextOwned.c)
 *     bDeleteBrush @ 0x1C007DE80 (bDeleteBrush.c)
 */

void __fastcall vCleanupBrushes(int a1)
{
  unsigned int Owned; // ebx
  HBRUSH v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  Owned = 0;
  while ( 1 )
  {
    Owned = HmgNextOwned(Owned, a1, (unsigned __int64 *)&v3);
    if ( !Owned )
      break;
    if ( (BYTE2(v3) & 0x1F) == 0x10 )
      bDeleteBrush(v3);
  }
}
