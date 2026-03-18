/*
 * XREFs of IopQueryProcessIdsUsingFile @ 0x140858698
 * Callers:
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     PsGetNextProcess @ 0x140635FC0 (PsGetNextProcess.c)
 *     ExEnumHandleTable @ 0x1406BABF0 (ExEnumHandleTable.c)
 *     MmIsFileMapped @ 0x140892958 (MmIsFileMapped.c)
 */

__int64 __fastcall IopQueryProcessIdsUsingFile(__int64 a1, _DWORD *a2, int a3, _DWORD *a4)
{
  _QWORD *v6; // r12
  unsigned int v7; // r14d
  unsigned int v8; // edi
  _QWORD *i; // rcx
  struct _EX_RUNDOWN_REF *NextProcess; // rax
  ULONG_PTR v11; // rbx
  unsigned int *v12; // rax
  char v13; // r15
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]

  v6 = a2 + 2;
  v7 = (unsigned int)(a3 - 8) >> 3;
  v8 = 0;
  v16 = 0LL;
  *a2 = 0;
  v15 = a1;
  for ( i = 0LL; ; i = (_QWORD *)v11 )
  {
    NextProcess = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(i);
    v11 = (ULONG_PTR)NextProcess;
    if ( !NextProcess )
      break;
    v12 = (unsigned int *)ObReferenceProcessHandleTable(NextProcess);
    if ( v12 )
    {
      LOBYTE(v16) = (_KPROCESS *)v11 == KeGetCurrentThread()->ApcState.Process;
      v13 = ExEnumHandleTable(
              v12,
              (__int64 (__fastcall *)(unsigned int *, signed __int64 *, _QWORD, __int64))IopIsFileOpenOrSection,
              (__int64)&v15,
              0LL);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 768));
    }
    else
    {
      v13 = 0;
    }
    if ( v13 || (unsigned int)MmIsFileMapped(v11) )
    {
      if ( v8 < v7 )
      {
        *v6 = *(_QWORD *)(v11 + 744);
        ++*a2;
        ++v6;
      }
      ++v8;
    }
  }
  *a4 = 8 * v8 + 8;
  return v7 < v8 ? 0xC0000004 : 0;
}
