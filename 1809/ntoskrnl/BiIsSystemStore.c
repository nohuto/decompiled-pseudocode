/*
 * XREFs of BiIsSystemStore @ 0x140713A48
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1406E29BC (BcdForciblyUnloadStore.c)
 *     BiLoadSystemStore @ 0x1407120C8 (BiLoadSystemStore.c)
 *     BiCleanupLoadedStores @ 0x140712950 (BiCleanupLoadedStores.c)
 *     BcdCloseStore @ 0x140712CA8 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x140713EA4 (BiOpenSystemStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x140714444 (BiGetRegistryValue.c)
 */

bool __fastcall BiIsSystemStore(__int64 a1)
{
  char v1; // di
  int v3; // ebx
  int v4; // ebx
  char v6; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  if ( (int)BiGetRegistryValue(a1, L"System", L"Description", 4LL, &P, &v6) >= 0 )
  {
    v3 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0x4B444342u);
    if ( v3 )
    {
      if ( (int)BiGetRegistryValue(a1, L"TreatAsSystem", L"Description", 4LL, &P, &v6) >= 0 )
      {
        v4 = *(_DWORD *)P;
        ExFreePoolWithTag(P, 0x4B444342u);
        return v4 != 0;
      }
    }
  }
  return v1;
}
