/*
 * XREFs of SmpRenameTargetFile @ 0x140015B24
 * Callers:
 *     SmpProcessFileRenames @ 0x140009934 (SmpProcessFileRenames.c)
 *     SmpShuffleMove @ 0x140015F90 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140016238 (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     EvaluateCurrentState @ 0x14000D68C (EvaluateCurrentState.c)
 *     SmpCheckFolderForRedirections @ 0x14000D9F4 (SmpCheckFolderForRedirections.c)
 *     memcpy_0 @ 0x1400101D7 (memcpy_0.c)
 *     memset_0 @ 0x1400101EF (memset_0.c)
 */

__int64 __fastcall SmpRenameTargetFile(const void **a1, void *a2, int a3, char a4)
{
  int v4; // esi
  __int64 v6; // rcx
  ULONG v7; // esi
  _BYTE *Heap; // rdi
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(unsigned __int16 *)a1;
  v6 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  v7 = v4 + 26;
  Handle = (HANDLE)-1LL;
  Heap = RtlAllocateHeap(*(PVOID *)(v6 + 48), SmBaseTag, v7);
  if ( Heap )
  {
    LOBYTE(v13) = EvaluateCurrentState();
    if ( v13 && a4 && !SmpCheckFolderForRedirections((unsigned __int16 *)a1, &Handle) )
    {
      v12 = -1073740533;
    }
    else
    {
      memset_0(Heap, 0, v7);
      *((_QWORD *)Heap + 1) = 0LL;
      *Heap = a3 != 0;
      v14 = *(unsigned __int16 *)a1;
      *((_DWORD *)Heap + 4) = v14;
      memcpy_0(Heap + 20, a1[1], v14);
      v12 = NtSetInformationFile(a2, &IoStatusBlock, Heap, v7, FileRenameInformation);
    }
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
  }
  else
  {
    v12 = -1073741801;
  }
  LOBYTE(v15) = EvaluateCurrentState();
  if ( v15 && Handle != (HANDLE)-1LL )
    NtClose(Handle);
  return v12;
}
