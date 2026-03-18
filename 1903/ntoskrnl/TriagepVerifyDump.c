/*
 * XREFs of TriagepVerifyDump @ 0x140A4044C
 * Callers:
 *     TriageGetLoaderEntry @ 0x14034DDC4 (TriageGetLoaderEntry.c)
 *     MmTriageActiveInLastCrash @ 0x140A3C6E4 (MmTriageActiveInLastCrash.c)
 *     TriageGetBugcheckData @ 0x140A4035C (TriageGetBugcheckData.c)
 *     TriageGetDriverCount @ 0x140A403D8 (TriageGetDriverCount.c)
 * Callees:
 *     TriagepGetPageSize @ 0x140A4041C (TriagepGetPageSize.c)
 */

char __fastcall TriagepVerifyDump(_DWORD *a1)
{
  char v1; // dl
  int PageSize; // eax
  __int64 v4; // r8

  v1 = 0;
  if ( !a1 )
    return 0;
  if ( a1[1] == 1347245380 && *a1 == 1162297680 )
  {
    PageSize = TriagepGetPageSize(a1[12]);
    if ( PageSize != -1 )
    {
      TriageImagePageSize = PageSize;
      if ( *(_DWORD *)(v4 + 3992) == 4 && *(_DWORD *)(*(unsigned int *)(v4 + 8196) + v4 - 4) == 1145524820 )
        return 1;
    }
  }
  return v1;
}
