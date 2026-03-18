/*
 * XREFs of ?InitializeSection@CSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C0093D50
 * Callers:
 *     ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C0093CAC (-CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSharedSectionMarshaler::InitializeSection(
        union _LARGE_INTEGER *this,
        union _LARGE_INTEGER a2,
        void **a3)
{
  NTSTATUS v6; // edi
  NTSTATUS v7; // eax
  PVOID v8; // rbx
  void *v9; // rax
  union _LARGE_INTEGER MaximumSize; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *SectionHandle; // [rsp+B8h] [rbp+38h] BYREF
  void *Handle; // [rsp+C8h] [rbp+48h] BYREF

  SectionHandle = 0LL;
  Handle = 0LL;
  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  MaximumSize = a2;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v6 = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL);
  if ( v6 >= 0 )
  {
    v7 = ObReferenceObjectByHandle(SectionHandle, 0xC0000000, MmSectionObjectType, 0, &Object, 0LL);
    v8 = Object;
    v6 = v7;
    if ( v7 < 0 || (v6 = ObOpenObjectByPointer(Object, 0xC0000000, 0LL, 6u, MmSectionObjectType, 1, &Handle), v6 < 0) )
    {
      if ( v8 )
        ObfDereferenceObject(v8);
    }
    else
    {
      v9 = Handle;
      this[5].QuadPart = (LONGLONG)v8;
      this[6] = a2;
      *a3 = v9;
    }
  }
  if ( SectionHandle )
    ObCloseHandle(SectionHandle, 0);
  return (unsigned int)v6;
}
