/*
 * XREFs of IopFileObjectRevoked @ 0x14008C888
 * Callers:
 *     IopReferenceFileObject @ 0x14008C7DC (IopReferenceFileObject.c)
 *     BuildQueryDirectoryIrp @ 0x1405FB710 (BuildQueryDirectoryIrp.c)
 * Callees:
 *     PsIsProcessAppContainer @ 0x1406B9488 (PsIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
