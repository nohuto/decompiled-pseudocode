/*
 * XREFs of MiIsAddressInDriverView @ 0x1402C7AA0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14005F110 (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1400FB460 (MmUnlockLoadedModuleListShared.c)
 */

__int64 __fastcall MiIsAddressInDriverView(unsigned __int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  PVOID *i; // rdx
  PVOID v5; // r8
  unsigned __int8 v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  MmLockLoadedModuleListShared(&v7, a2);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v5 = i[6];
    if ( a1 >= (unsigned __int64)v5 && a1 < (unsigned __int64)v5 + *((unsigned int *)i + 16) )
    {
      v3 = 1;
      break;
    }
  }
  MmUnlockLoadedModuleListShared(v7);
  return v3;
}
