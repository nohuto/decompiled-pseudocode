/*
 * XREFs of PsRemoveSiloContext @ 0x1408C4C70
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1408425E8 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1408C5D78 (PspSiloInitializeSystemRootBuffer.c)
 * Callees:
 *     PspStorageRemoveObject @ 0x1408CD910 (PspStorageRemoveObject.c)
 */

__int64 __fastcall PsRemoveSiloContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1288);
  else
    v3 = qword_14058C978;
  return PspStorageRemoveObject(v3, a2, 0LL, a3);
}
