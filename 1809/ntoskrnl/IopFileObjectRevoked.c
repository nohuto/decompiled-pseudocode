/*
 * XREFs of IopFileObjectRevoked @ 0x14008C898
 * Callers:
 *     IopReferenceFileObject @ 0x14008C7EC (IopReferenceFileObject.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA710 (BuildQueryDirectoryIrp.c)
 * Callees:
 *     PsIsProcessAppContainer @ 0x1406B81E8 (PsIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
