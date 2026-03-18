/*
 * XREFs of ?InitializeSection@CSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C0080C50
 * Callers:
 *     ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C0080BAC (-CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSharedSectionMarshaler::InitializeSection(
        union _LARGE_INTEGER *this,
        union _LARGE_INTEGER a2,
        void **a3)
{
  union _LARGE_INTEGER v3; // r9
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  PVOID v9; // rdi
  void *v10; // rax
  void *Handle; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *SectionHandle; // [rsp+B0h] [rbp+30h] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+C8h] [rbp+48h] BYREF

  v3 = this[5];
  SectionHandle = 0LL;
  Handle = 0LL;
  MaximumSize.QuadPart = 0LL;
  v7 = v3.QuadPart != 0 ? 0xC000000D : 0;
  if ( !v3.QuadPart )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    MaximumSize = a2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v7 = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL);
  }
  if ( v7 >= 0 )
  {
    v8 = ObReferenceObjectByHandle(SectionHandle, 0xC0000000, MmSectionObjectType, 0, &Object, 0LL);
    v9 = Object;
    v7 = v8;
    if ( v8 < 0 || (v7 = ObOpenObjectByPointer(Object, 0xC0000000, 0LL, 6u, MmSectionObjectType, 1, &Handle), v7 < 0) )
    {
      if ( v9 )
        ObfDereferenceObject(v9);
    }
    else
    {
      v10 = Handle;
      this[5].QuadPart = (LONGLONG)v9;
      this[6] = a2;
      *a3 = v10;
    }
  }
  if ( SectionHandle )
    ObCloseHandle(SectionHandle, 0);
  return (unsigned int)v7;
}
