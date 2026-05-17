/*
 * XREFs of RtlReleaseRelativeName @ 0x1800347B0
 * Callers:
 *     LdrpMapResourceFile @ 0x18002A918 (LdrpMapResourceFile.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180033AC8 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180034010 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18003451C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpMUIEnumerateFolder @ 0x18008A184 (RtlpMUIEnumerateFolder.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E25E8 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpResMapFile @ 0x1800E53F4 (LdrpResMapFile.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 */

__int64 __fastcall RtlReleaseRelativeName(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      NtClose(*(HANDLE *)(v1 + 8));
      result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
