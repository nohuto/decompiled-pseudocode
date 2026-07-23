/*
 * XREFs of sub_1800549C0 @ 0x1800549C0
 * Callers:
 *     sub_1800173F0 @ 0x1800173F0 (sub_1800173F0.c)
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180029320 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180054C74 @ 0x180054C74 (sub_180054C74.c)
 *     LdrFindEntryForAddress @ 0x180054D40 (LdrFindEntryForAddress.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x18009CE80 (ZwQueryAttributesFile.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_1800549C0(PVOID DllHandle)
{
  unsigned int v2; // ebx
  const WCHAR *Buffer; // rcx
  PWCH v4; // rdi
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
    if ( (int)sub_180054C74(DllHandle, v11) < 0 )
      return v2;
    Buffer = v11[1];
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
