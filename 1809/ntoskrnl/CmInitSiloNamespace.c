/*
 * XREFs of CmInitSiloNamespace @ 0x1407F7E48
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140809E80 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpStartSiloRegistryNamespace @ 0x1407319A8 (CmpStartSiloRegistryNamespace.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140731B1C (CmpGetOrCreateContextForSiloNoRef.c)
 */

__int64 CmInitSiloNamespace()
{
  __int64 v0; // r9
  unsigned int v1; // r8d
  PVOID v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  CmpInitializeThreadInfo(v3);
  if ( (int)CmpGetOrCreateContextForSiloNoRef(v0, &v4) >= 0 )
    CmpStartSiloRegistryNamespace(v4);
  CmCleanupThreadInfo(v3);
  return v1;
}
