/*
 * XREFs of NtGetNlsSectionPtr @ 0x1406C4E00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwOpenFile @ 0x1401B87D0 (ZwOpenFile.c)
 *     ZwOpenSection @ 0x1401B8850 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x1401B8AB0 (ZwCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x1405A23A0 (MmMapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     MmMapViewOfSection @ 0x140678B80 (MmMapViewOfSection.c)
 *     RtlpInitNlsSectionName @ 0x1406C513C (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x1406C51A0 (RtlpInitNlsFileName.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtGetNlsSectionPtr(unsigned int a1, unsigned int a2, unsigned __int64 a3, PVOID *a4, ULONG_PTR *a5)
{
  char PreviousMode; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  NTSTATUS result; // eax
  NTSTATUS v12; // ebx
  PVOID v13; // rdi
  NTSTATUS v14; // eax
  HANDLE SectionHandle; // [rsp+58h] [rbp-200h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-1F8h] BYREF
  PVOID MappedBase; // [rsp+68h] [rbp-1F0h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-1E8h] BYREF
  _DWORD v19[2]; // [rsp+78h] [rbp-1E0h] BYREF
  PVOID Section; // [rsp+80h] [rbp-1D8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-1C8h] BYREF
  char v22; // [rsp+C0h] [rbp-198h] BYREF
  char v23; // [rsp+D0h] [rbp-188h] BYREF
  OBJECT_ATTRIBUTES v24; // [rsp+E0h] [rbp-178h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+110h] [rbp-148h] BYREF
  _BYTE v26[128]; // [rsp+120h] [rbp-138h] BYREF
  _BYTE v27[128]; // [rsp+1A0h] [rbp-B8h] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  MappedBase = 0LL;
  ViewSize = 0LL;
  if ( !a4 )
    return -1073741582;
  if ( !a5 )
    return -1073741581;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    v10 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    if ( a3 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 + 4 > 0x7FFFFFFF0000LL || a3 + 4 < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = RtlpInitNlsSectionName(a1, a2, v26);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 720;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( a1 - 11 > 1 )
    {
      v12 = -1073741823;
    }
    else
    {
      v12 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
      if ( v12 < 0 )
      {
        result = RtlpInitNlsFileName(a1, a2, v27);
        if ( result < 0 )
          return result;
        v24.Length = 48;
        v24.RootDirectory = 0LL;
        v24.Attributes = 576;
        v24.ObjectName = (PUNICODE_STRING)&v23;
        *(_OWORD *)&v24.SecurityDescriptor = 0LL;
        result = ZwOpenFile(&FileHandle, 0x100000u, &v24, &IoStatusBlock, 1u, 0);
        if ( result < 0 )
          return result;
        v12 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
        ZwClose(FileHandle);
      }
    }
    if ( v12 >= 0 )
    {
      v12 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Section, 0LL);
      ZwClose(SectionHandle);
      if ( v12 >= 0 )
      {
        v19[0] = 0;
        v19[1] = 0;
        v13 = Section;
        if ( PreviousMode )
          v14 = MmMapViewOfSection(
                  (__int64)Section,
                  (__int64)KeGetCurrentThread()->ApcState.Process,
                  (__int64 *)&MappedBase,
                  0LL,
                  0LL,
                  v19,
                  (__int64 *)&ViewSize,
                  1,
                  0x400000,
                  2);
        else
          v14 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
        v12 = v14;
        ObfDereferenceObject(v13);
        if ( v12 >= 0 )
        {
          *a4 = MappedBase;
          *a5 = ViewSize;
        }
      }
    }
    return v12;
  }
  return result;
}
