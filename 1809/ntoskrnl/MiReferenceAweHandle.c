/*
 * XREFs of MiReferenceAweHandle @ 0x1402B1D5C
 * Callers:
 *     MiCreateUserPhysicalView @ 0x140850D4C (MiCreateUserPhysicalView.c)
 *     NtAllocateUserPhysicalPages @ 0x1408518F0 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140852170 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiAweControlArea @ 0x140077E5C (MiAweControlArea.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406726C0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MiReferenceAweHandle(HANDLE Handle, ACCESS_MASK a2, KPROCESSOR_MODE a3, _QWORD *a4, _QWORD *Object)
{
  _QWORD *v6; // rbx
  NTSTATUS result; // eax
  unsigned __int64 v10; // rax
  void *v11; // r8
  int v12; // r9d

  *a4 = 0LL;
  v6 = Object;
  *Object = 0LL;
  if ( Handle == (HANDLE)-1LL )
    return 0;
  if ( ObReferenceObjectByHandleWithTag(Handle, a2, MmSectionObjectType, a3, 0x68506D4Du, (PVOID *)&Object, 0LL) < 0 )
  {
    result = ObReferenceObjectByHandleWithTag(
               Handle,
               8u,
               (POBJECT_TYPE)PsProcessType,
               a3,
               0x68506D4Du,
               (PVOID *)&Object,
               0LL);
    if ( result >= 0 )
      *a4 = Object;
  }
  else
  {
    v10 = MiSectionControlArea((__int64)Object);
    if ( MiAweControlArea(v10) )
    {
      *v6 = v11;
      return v12;
    }
    else
    {
      ObfDereferenceObjectWithTag(v11, 0x68506D4Du);
      return -1073741816;
    }
  }
  return result;
}
