/*
 * XREFs of LdrpIsReparsePoint @ 0x1800347F0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037AB4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003E440 (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180034930 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrpGetLoadAsEntry @ 0x180034B94 (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x180034C60 (LdrFindEntryForAddress.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A0AA0 (ZwQueryAttributesFile.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall LdrpIsReparsePoint(PVOID DllHandle)
{
  unsigned int v2; // ebx
  wchar_t *Buffer; // rcx
  wchar_t *v4; // rdi
  unsigned __int64 ContainingDirectory; // rdx
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+28h] [rbp-79h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+30h] [rbp-71h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+40h] [rbp-61h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-41h] BYREF
  PCWSTR v11[6]; // [rsp+90h] [rbp-11h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+C0h] [rbp+1Fh] BYREF

  Entry = 0LL;
  memset(v11, 0, sizeof(v11));
  v2 = -1073741823;
  if ( ((unsigned __int8)DllHandle & 3) != 0 )
  {
    if ( (int)LdrpGetLoadAsEntry(DllHandle, v11) < 0 )
      return v2;
    Buffer = (wchar_t *)v11[1];
  }
  else
  {
    if ( LdrFindEntryForAddress(DllHandle, &Entry) < 0 )
      return v2;
    Buffer = Entry->FullDllName.Buffer;
  }
  if ( RtlDosPathNameToRelativeNtPathName_U(Buffer, &NtFileName, 0LL, &RelativeName) )
  {
    v4 = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = (unsigned __int64)RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &NtFileName;
    ObjectAttributes.RootDirectory = (HANDLE)(ContainingDirectory & -(__int64)(v4 != 0LL));
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwQueryAttributesFile(&ObjectAttributes, &FileInformation) >= 0
      && (FileInformation.FileAttributes & 0x400) != 0 )
    {
      v2 = 0;
    }
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return v2;
}
