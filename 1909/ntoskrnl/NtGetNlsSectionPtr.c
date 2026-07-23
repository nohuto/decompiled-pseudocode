/*
 * XREFs of NtGetNlsSectionPtr @ 0x140620430
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     ZwOpenSection @ 0x1401C1330 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x1401C1590 (ZwCreateSection.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     RtlpInitNlsSectionName @ 0x1406203C8 (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x140620FC4 (RtlpInitNlsFileName.c)
 *     MmMapViewOfSection @ 0x140680790 (MmMapViewOfSection.c)
 *     MmMapViewInSystemSpace @ 0x1406A3A80 (MmMapViewInSystemSpace.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtGetNlsSectionPtr(
        ULONG SectionType,
        ULONG SectionData,
        PVOID ContextData,
        PVOID *SectionPointer,
        PULONG SectionSize)
{
  __int64 v9; // r9
  char PreviousMode; // si
  __int64 v11; // rcx
  __int64 v12; // rcx
  NTSTATUS result; // eax
  int v14; // ebx
  PVOID v15; // rdi
  NTSTATUS v16; // eax
  HANDLE SectionHandle; // [rsp+58h] [rbp-200h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-1F8h] BYREF
  PVOID MappedBase; // [rsp+68h] [rbp-1F0h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v21; // [rsp+78h] [rbp-1E0h] BYREF
  PVOID Section; // [rsp+80h] [rbp-1D8h] BYREF
  UNICODE_STRING v23; // [rsp+90h] [rbp-1C8h] BYREF
  _QWORD v24[2]; // [rsp+A0h] [rbp-1B8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-1A8h] BYREF
  OBJECT_ATTRIBUTES v26; // [rsp+C0h] [rbp-198h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-168h] BYREF
  wchar_t v28[64]; // [rsp+120h] [rbp-138h] BYREF
  _BYTE v29[128]; // [rsp+1A0h] [rbp-B8h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&v23.Length = 0LL;
  v23.Buffer = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  MappedBase = 0LL;
  ViewSize = 0LL;
  if ( !SectionPointer )
    return -1073741582;
  if ( !SectionSize )
    return -1073741581;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v11 = (__int64)SectionPointer;
    if ( (unsigned __int64)SectionPointer >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    v12 = (__int64)SectionSize;
    if ( (unsigned __int64)SectionSize >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v12 = *(_QWORD *)v12;
    if ( ContextData )
    {
      if ( ((unsigned __int8)ContextData & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ContextData + 4 > 0x7FFFFFFF0000LL || (char *)ContextData + 4 < ContextData )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = RtlpInitNlsSectionName(SectionType, SectionData, v28, v9, &v23);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 720;
    ObjectAttributes.ObjectName = &v23;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( SectionType - 11 > 1 )
    {
      v14 = -1073741823;
    }
    else
    {
      v14 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
      if ( v14 < 0 )
      {
        *(&v26.Length + 1) = 0;
        *(&v26.Attributes + 1) = 0;
        v24[0] = 0LL;
        v24[1] = 0LL;
        result = RtlpInitNlsFileName(SectionType, SectionData, v29);
        if ( result < 0 )
          return result;
        v26.Length = 48;
        v26.RootDirectory = 0LL;
        v26.Attributes = 576;
        v26.ObjectName = (PUNICODE_STRING)v24;
        *(_OWORD *)&v26.SecurityDescriptor = 0LL;
        result = ZwOpenFile(&FileHandle, 0x100000u, &v26, &IoStatusBlock, 1u, 0);
        if ( result < 0 )
          return result;
        v14 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
        ZwClose(FileHandle);
      }
    }
    if ( v14 >= 0 )
    {
      v14 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Section, 0LL);
      ZwClose(SectionHandle);
      if ( v14 >= 0 )
      {
        v21 = 0LL;
        v15 = Section;
        if ( PreviousMode )
          v16 = MmMapViewOfSection(
                  Section,
                  KeGetCurrentThread()->ApcState.Process,
                  &MappedBase,
                  0LL,
                  0LL,
                  &v21,
                  &ViewSize,
                  1,
                  0x400000,
                  2);
        else
          v16 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
        v14 = v16;
        ObfDereferenceObject(v15);
        if ( v14 >= 0 )
        {
          *SectionPointer = MappedBase;
          *(_QWORD *)SectionSize = ViewSize;
        }
      }
    }
    return v14;
  }
  return result;
}
