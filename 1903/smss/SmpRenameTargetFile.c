/*
 * XREFs of SmpRenameTargetFile @ 0x14001300C
 * Callers:
 *     SmpProcessFileRenames @ 0x140008BE8 (SmpProcessFileRenames.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x14000D3A4 (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpShuffleMove @ 0x14001342C (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x14001360C (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     memcpy_0 @ 0x14000D637 (memcpy_0.c)
 *     memset_0 @ 0x14000D643 (memset_0.c)
 */

__int64 __fastcall SmpRenameTargetFile(const void **a1, void *a2, int a3)
{
  ULONG v4; // ebx
  _QWORD *Heap; // rax
  _QWORD *v8; // rdi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(unsigned __int16 *)a1 + 26;
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v4);
  v8 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, v4);
    v8[1] = 0LL;
    *(_BYTE *)v8 = a3 != 0;
    v10 = *(unsigned __int16 *)a1;
    *((_DWORD *)v8 + 4) = v10;
    memcpy_0((char *)v8 + 20, a1[1], v10);
    v9 = NtSetInformationFile(a2, &IoStatusBlock, v8, v4, FileRenameInformation);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v8);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
