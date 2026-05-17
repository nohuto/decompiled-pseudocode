/*
 * XREFs of RtlReleaseRelativeName @ 0x180025F30
 * Callers:
 *     RtlDoesFileExists_UstrEx @ 0x180025E00 (RtlDoesFileExists_UstrEx.c)
 *     LdrpMapResourceFile @ 0x180059A64 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18005A6C4 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180071438 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180071980 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0198 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpResMapFile @ 0x1800E2764 (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED14C (RtlpMUIEnumerateFolder.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 */

__int64 __fastcall RtlReleaseRelativeName(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      NtClose(*(HANDLE *)(v1 + 8));
      result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v1);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
