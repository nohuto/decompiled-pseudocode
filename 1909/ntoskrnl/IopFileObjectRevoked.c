/*
 * XREFs of IopFileObjectRevoked @ 0x14003F9F0
 * Callers:
 *     IopReferenceFileObject @ 0x14003F950 (IopReferenceFileObject.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     NtWriteFile @ 0x14062CFB0 (NtWriteFile.c)
 *     NtQueryVolumeInformationFile @ 0x14062F040 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     PsIsProcessAppContainer @ 0x1406DAFCC (PsIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
