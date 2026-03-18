/*
 * XREFs of ?vCleanupBrushes@@YAXK@Z @ 0x1C003FD88
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C006127C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextOwned @ 0x1C002B7B0 (HmgNextOwned.c)
 *     bDeleteBrush @ 0x1C003CFE0 (bDeleteBrush.c)
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
      bDeleteBrush((struct HOBJ__ *)v3, 1);
  }
}
