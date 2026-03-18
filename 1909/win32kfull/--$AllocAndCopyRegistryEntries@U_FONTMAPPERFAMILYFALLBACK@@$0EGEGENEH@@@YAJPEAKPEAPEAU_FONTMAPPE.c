/*
 * XREFs of ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPERFAMILYFALLBACK@@0PEBU0@@Z @ 0x1C0297DC8
 * Callers:
 *     QueryRegistryFontMapperFamilyFallbackListRoutine @ 0x1C0381530 (QueryRegistryFontMapperFamilyFallbackListRoutine.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     PREALLOCMEM2 @ 0x1C0117A3C (PREALLOCMEM2.c)
 */

__int64 __fastcall AllocAndCopyRegistryEntries<_FONTMAPPERFAMILYFALLBACK,1179012423>(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        _OWORD *a4)
{
  unsigned int v6; // esi
  size_t v7; // rcx
  void *v8; // rax
  char *v9; // rax
  unsigned __int64 v10; // rcx

  if ( gcfmffTable < *a3 )
    goto LABEL_7;
  v6 = gcfmffTable + 32;
  v7 = (gcfmffTable + 32) << 7;
  if ( gpfmffTable )
    v8 = PREALLOCMEM2(gpfmffTable, gcfmffTable << 7, v7, 0x46464D47u);
  else
    v8 = PALLOCMEM2(v7, 1179012423LL, 1);
  if ( v8 )
  {
    gpfmffTable = v8;
    *a3 = v6;
LABEL_7:
    v9 = (char *)gpfmffTable;
    v10 = (unsigned __int64)gcfmffTable << 7;
    *(_OWORD *)((char *)gpfmffTable + v10) = *a4;
    *(_OWORD *)&v9[v10 + 16] = a4[1];
    *(_OWORD *)&v9[v10 + 32] = a4[2];
    *(_OWORD *)&v9[v10 + 48] = a4[3];
    *(_OWORD *)&v9[v10 + 64] = a4[4];
    *(_OWORD *)&v9[v10 + 80] = a4[5];
    *(_OWORD *)&v9[v10 + 96] = a4[6];
    *(_OWORD *)&v9[v10 + 112] = a4[7];
    ++gcfmffTable;
    return 0LL;
  }
  return 3221225495LL;
}
