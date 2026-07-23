/*
 * XREFs of NtDuplicateObject @ 0x1405D19B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  PVOID v10; // rdi
  char PreviousMode; // si
  __int64 v12; // rdx
  NTSTATUS result; // eax
  NTSTATUS v14; // r14d
  HANDLE v15; // rdx
  PVOID v16; // r15
  NTSTATUS v17; // esi
  PVOID v18; // [rsp+48h] [rbp-40h] BYREF
  void *v19; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object[3]; // [rsp+58h] [rbp-30h] BYREF

  v10 = 0LL;
  v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( TargetHandle && PreviousMode )
  {
    v12 = (__int64)TargetHandle;
    if ( (unsigned __int64)TargetHandle >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v12 = *(_QWORD *)v12;
    *TargetHandle = 0LL;
  }
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)SourceProcessHandle, 0x7544624Fu, (__int64)Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    if ( TargetProcessHandle )
    {
      v14 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)TargetProcessHandle, 0x7544624Fu, (__int64)&v18, 0LL, 0LL);
      if ( v14 < 0 )
        v18 = 0LL;
      else
        v10 = v18;
    }
    else
    {
      v18 = 0LL;
      v14 = 0;
    }
    v15 = SourceHandle;
    v16 = Object[0];
    v17 = ObDuplicateObject(Object[0], v15, v10, &v19, DesiredAccess, HandleAttributes);
    if ( TargetHandle )
      *TargetHandle = v19;
    ObfDereferenceObjectWithTag(v16, 0x7544624Fu);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x7544624Fu);
    if ( v14 < 0 )
      return v14;
    return v17;
  }
  return result;
}
