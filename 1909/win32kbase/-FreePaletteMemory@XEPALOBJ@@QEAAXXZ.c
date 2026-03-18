/*
 * XREFs of ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00BABE0
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0018630 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00186C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgFree @ 0x1C001A3F0 (HmgFree.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0069A58 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00BAC30 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?FreeType@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0077A50 (-FreeType@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall XEPALOBJ::FreePaletteMemory(struct _SLIST_ENTRY **this)
{
  __int64 Next; // rcx
  unsigned __int8 *v3; // rcx

  Next = (__int64)(*this)[8].Next;
  if ( Next )
    Win32FreePool(Next);
  v3 = gpTypeIsolation[1];
  if ( v3 )
    NSInstrumentation::CLookAsideTypeIsolation<36864,144>::FreeType((__int64)v3, *this);
  *this = 0LL;
}
