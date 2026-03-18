/*
 * XREFs of BiIsSystemStore @ 0x14073CAE4
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140728B98 (BcdForciblyUnloadStore.c)
 *     BiLoadSystemStore @ 0x14073B314 (BiLoadSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14073B7DC (BiCleanupLoadedStores.c)
 *     BcdCloseStore @ 0x14073BB4C (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x14073CF6C (BiOpenSystemStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14073D538 (BiGetRegistryValue.c)
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
