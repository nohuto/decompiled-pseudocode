/*
 * XREFs of PsRemoveSiloContext @ 0x140887B10
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140809E80 (VrpHandleIoctlInitializeJobForVreg.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x140888C10 (PspSiloInitializeSystemRootBuffer.c)
 * Callees:
 *     PspStorageRemoveObject @ 0x1408907AC (PspStorageRemoveObject.c)
 */

__int64 __fastcall PsRemoveSiloContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1288);
  else
    v3 = qword_14055C988;
  return PspStorageRemoveObject(v3, a2, 0LL, a3);
}
