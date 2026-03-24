/*
 * XREFs of BiUnloadHiveByHandle @ 0x1406E17B0
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1406E171C (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x140710F48 (BiCloseStore.c)
 *     BiCleanupLoadedStores @ 0x1407116B0 (BiCleanupLoadedStores.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     BiUnloadHiveByName @ 0x1406E1840 (BiUnloadHiveByName.c)
 *     BiGetRegistryValue @ 0x1407131A4 (BiGetRegistryValue.c)
 *     BiCloseKey @ 0x1407138F0 (BiCloseKey.c)
 */

__int64 __fastcall BiUnloadHiveByHandle(__int64 a1, char a2)
{
  int RegistryValue; // edi
  __int64 v5; // r8
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  RegistryValue = BiGetRegistryValue(a1, L"KeyName", L"Description", 1LL, &P, &v8);
  BiCloseKey(a1);
  if ( RegistryValue < 0 )
    return (unsigned int)RegistryValue;
  LOBYTE(v5) = a2;
  v6 = BiUnloadHiveByName(P, v8, v5);
  ExFreePoolWithTag(P, 0x4B444342u);
  return v6;
}
