/*
 * XREFs of BiUnloadHiveByHandle @ 0x140729F9C
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140729F08 (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x14073D340 (BiCloseStore.c)
 *     BiCleanupLoadedStores @ 0x14073D6DC (BiCleanupLoadedStores.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiUnloadHiveByName @ 0x14072A02C (BiUnloadHiveByName.c)
 *     BiGetRegistryValue @ 0x14073F438 (BiGetRegistryValue.c)
 *     BiCloseKey @ 0x14073FBB4 (BiCloseKey.c)
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
