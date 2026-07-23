/*
 * XREFs of MmCreateSpecialImageSection @ 0x14060B404
 * Callers:
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x14075732C (PspLocateSystemDll.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x14001C250 (CcZeroEndOfLastPage.c)
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiCreateSection @ 0x1405DEAC0 (MiCreateSection.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 */

__int64 __fastcall MmCreateSpecialImageSection(__int64 *a1, int a2, __int64 a3, char a4, __int64 a5, char a6)
{
  _KPROCESS *Process; // rcx
  int v11; // edi
  int SessionId; // r12d
  __int64 result; // rax
  unsigned __int64 v14; // rdi
  struct _FILE_OBJECT *v15; // rbx
  PVOID Object; // [rsp+70h] [rbp-38h] BYREF
  __int64 v17; // [rsp+78h] [rbp-30h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = a6 & 1 | 8;
  if ( (a6 & 4) == 0 )
    v11 = a6 & 1;
  SessionId = MmGetSessionIdEx((__int64)Process);
  while ( 1 )
  {
    result = MiCreateSection(
               &Object,
               a2,
               0,
               16,
               (a6 & 1) != 0 ? 0x1000000 : 37748736,
               v11,
               a3,
               a4,
               a5,
               0LL,
               0,
               SessionId,
               0LL);
    if ( (int)result >= 0 )
      break;
    if ( (_DWORD)result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  v14 = MiSectionControlArea((__int64)Object);
  v15 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v14);
  CcZeroEndOfLastPage(v15);
  MiDereferenceControlAreaFile(v14, (unsigned __int64)v15);
  result = ObInsertObjectEx(Object, 0LL, 0, 0LL, (__int64)&v17);
  if ( (int)result >= 0 )
    *a1 = v17;
  return result;
}
