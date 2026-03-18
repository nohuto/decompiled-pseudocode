/*
 * XREFs of MmCreateSpecialImageSection @ 0x140618DD8
 * Callers:
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x14075B53C (PspLocateSystemDll.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009C6C (MiDereferenceControlAreaFile.c)
 *     CcZeroEndOfLastPage @ 0x140009CBC (CcZeroEndOfLastPage.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     MiCreateSection @ 0x1405D6FB0 (MiCreateSection.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
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
  result = ObInsertObjectEx(Object, 0LL, 0xF001Fu, 0, 0, 0LL, &v17);
  if ( (int)result >= 0 )
    *a1 = v17;
  return result;
}
