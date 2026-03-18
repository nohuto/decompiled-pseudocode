/*
 * XREFs of MiDeletePagefile @ 0x14088C600
 * Callers:
 *     MmStoreRegister @ 0x140773968 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1407747B8 (MiCreatePagefile.c)
 *     MiDeletePagingFiles @ 0x14088C710 (MiDeletePagingFiles.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     MiFreeModWriterEntry @ 0x1400BF8C8 (MiFreeModWriterEntry.c)
 *     MiFreePageFileHashPfns @ 0x1400DA914 (MiFreePageFileHashPfns.c)
 *     MiUpdatePageFileList @ 0x140193584 (MiUpdatePageFileList.c)
 *     MiReleasePageHash @ 0x1402E6724 (MiReleasePageHash.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     PiPagePathSetState @ 0x140783ABC (PiPagePathSetState.c)
 */

void __fastcall MiDeletePagefile(char *P, int a2)
{
  _QWORD **v3; // rdi
  __int64 v5; // rsi
  struct _PRIVILEGE_SET *v6; // rcx
  unsigned __int64 v7; // rcx
  __int16 v8; // ax
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx

  v3 = (_QWORD **)(P + 64);
  v5 = 2LL;
  do
  {
    if ( *v3 )
      MiFreeModWriterEntry(*v3, 0);
    ++v3;
    --v5;
  }
  while ( v5 );
  v6 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 14);
  if ( v6 )
    CmSiFreeMemory(v6);
  v7 = *((_QWORD *)P + 27);
  if ( v7 )
    MiReleasePageHash(v7, *((_DWORD *)P + 2));
  MiFreePageFileHashPfns(*((_QWORD *)P + 32));
  v8 = *((_WORD *)P + 102);
  if ( (v8 & 0x100) != 0 )
  {
    MiUpdatePageFileList((__int64)P, 0);
    v8 = *((_WORD *)P + 102);
  }
  if ( (v8 & 0x200) != 0 )
    PiPagePathSetState(*((struct _FILE_OBJECT **)P + 7), 0);
  v9 = (void *)*((_QWORD *)P + 28);
  if ( v9 )
    ObCloseHandle(v9, 0);
  v10 = (void *)*((_QWORD *)P + 7);
  if ( v10 )
    ObfDereferenceObject(v10);
  v11 = (void *)*((_QWORD *)P + 13);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = (void *)*((_QWORD *)P + 24);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( a2 )
    ExFreePoolWithTag(P, 0);
}
