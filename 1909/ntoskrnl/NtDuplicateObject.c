/*
 * XREFs of NtDuplicateObject @ 0x1405E67E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ObDuplicateObject @ 0x1405E69A0 (ObDuplicateObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
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
  PVOID v9; // rdi
  char PreviousMode; // si
  NTSTATUS result; // eax
  NTSTATUS v12; // r14d
  PVOID v13; // r15
  NTSTATUS v14; // esi
  __int64 v15; // rdx
  PVOID v16; // [rsp+48h] [rbp-40h] BYREF
  void *v17; // [rsp+50h] [rbp-38h]
  PVOID Object[3]; // [rsp+58h] [rbp-30h] BYREF

  v9 = 0LL;
  v17 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( TargetHandle && PreviousMode )
  {
    v15 = (__int64)TargetHandle;
    if ( (unsigned __int64)TargetHandle >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    *TargetHandle = 0LL;
  }
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)SourceProcessHandle, 0x7544624Fu, (__int64)Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    if ( TargetProcessHandle )
    {
      v12 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)TargetProcessHandle, 0x7544624Fu, (__int64)&v16, 0LL, 0LL);
      if ( v12 < 0 )
        v16 = 0LL;
      else
        v9 = v16;
    }
    else
    {
      v16 = 0LL;
      v12 = 0;
    }
    v13 = Object[0];
    v14 = ObDuplicateObject((PRKPROCESS)Object[0], DesiredAccess, HandleAttributes, Options, PreviousMode);
    if ( TargetHandle )
      *TargetHandle = v17;
    ObfDereferenceObjectWithTag(v13, 0x7544624Fu);
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x7544624Fu);
    if ( v12 < 0 )
      return v12;
    return v14;
  }
  return result;
}
