/*
 * XREFs of ?CreateValidationProcessInCallerSession@DXGVALIDATION@@AEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C00490FC
 * Callers:
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C000121C (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DXGVALIDATION::CreateValidationProcessInCallerSession(DXGVALIDATION *this, struct _EPROCESS **a2)
{
  char *v3; // rax
  char *v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  NTSTATUS v7; // eax
  PVOID Ptr; // rcx
  _EX_RUNDOWN_REF RunRef; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-98h] BYREF
  PVOID Object[26]; // [rsp+80h] [rbp-88h] BYREF

  memset(&Object[9], 0, 0x58uLL);
  memset(&Object[21], 0, 0x28uLL);
  memset(&Object[2], 0, 0x30uLL);
  *(_QWORD *)&SourceString.Length = 2883626LL;
  SourceString.Buffer = L"\\SystemRoot\\System32\\";
  v3 = (char *)operator new[](0x46CuLL, 0x4B677844u, PagedPool);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x46CuLL);
    *((_DWORD *)v4 + 1) = 1132;
    *((_QWORD *)v4 + 8) = v4 + 1088;
    *(_DWORD *)v4 = 1132;
    *((_DWORD *)v4 + 2) = 1;
    *((_WORD *)v4 + 29) = SourceString.MaximumLength;
    RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 56), &SourceString);
    memset(&Object[10], 0, 0x50uLL);
    Object[25] = 0LL;
    Object[3] = 0LL;
    Object[4] = 0LL;
    Object[24] = L"\\SystemRoot\\System32\\csrss.exe";
    Object[9] = (PVOID)88;
    Object[21] = (PVOID)40;
    Object[22] = (PVOID)131077;
    Object[23] = (PVOID)60;
    LODWORD(Object[2]) = 48;
    LODWORD(Object[5]) = 576;
    *(_OWORD *)&Object[6] = 0LL;
    LOBYTE(v6) = ZwCreateUserProcess(&RunRef);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = ObReferenceObjectByHandle(RunRef.Ptr, 0x1FFFFFu, 0LL, 0, Object, 0LL);
      Ptr = RunRef.Ptr;
      v5 = v7;
      *a2 = (struct _EPROCESS *)Object[0];
      ZwTerminateProcess(Ptr, -1);
      ZwClose(RunRef.Ptr);
      ZwClose(Object[1]);
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
