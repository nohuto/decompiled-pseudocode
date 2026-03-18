/*
 * XREFs of PREALLOCMEM2 @ 0x1C010FC94
 * Callers:
 *     ??$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z @ 0x1C0055F64 (--$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z.c)
 *     ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPERFAMILYFALLBACK@@0PEBU0@@Z @ 0x1C026DC64 (--$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPE.c)
 *     vInitFontSubTable @ 0x1C037FA80 (vInitFontSubTable.c)
 *     vInitFontMapperFamilyFallbackTable @ 0x1C037FD40 (vInitFontMapperFamilyFallbackTable.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

char *__fastcall PREALLOCMEM2(void *Src, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rbx
  char *v7; // rax
  char *v8; // rdi

  v5 = a2;
  v7 = (char *)PALLOCMEM2(a3, a4, 0);
  v8 = v7;
  if ( v7 )
  {
    if ( (unsigned int)v5 >= a3 )
      v5 = a3;
    memmove(v7, Src, (unsigned int)v5);
    Win32FreePool(Src);
    memset(&v8[v5], 0, a3 - (unsigned int)v5);
  }
  return v8;
}
