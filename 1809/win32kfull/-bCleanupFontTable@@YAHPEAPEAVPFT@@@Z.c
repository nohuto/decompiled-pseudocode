/*
 * XREFs of ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C00C38A4
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C00C2C50 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     ?bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z @ 0x1C00C3940 (-bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00CB9F8 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 */

__int64 __fastcall bCleanupFontTable(struct PFT **a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  int v5; // eax
  int v6; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v8 = (__int64)*a1;
  v2 = v8;
  if ( v8 )
  {
    v5 = PFTOBJ::bUnloadAllButPermanentFonts((PFTOBJ *)&v8, a2);
    v6 = v5;
    if ( *(_QWORD *)(v2 + 8) )
      v6 = bCleanupFontHash((struct _FONTHASH **)(v2 + 8)) & v5;
    if ( *(_QWORD *)v2 )
      v6 &= bCleanupFontHash((struct _FONTHASH **)v2);
    if ( *(_QWORD *)(v2 + 16) )
      LOBYTE(v6) = bCleanupFontHash((struct _FONTHASH **)(v2 + 16)) & v6;
    if ( !*(_DWORD *)(v2 + 28) )
    {
      Win32FreePool(v2);
      v2 = 0LL;
    }
    v3 = (v2 == 0) & (unsigned __int8)v6;
    *a1 = 0LL;
  }
  return v3;
}
