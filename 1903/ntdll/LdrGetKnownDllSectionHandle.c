/*
 * XREFs of LdrGetKnownDllSectionHandle @ 0x1800832E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     ZwOpenSection @ 0x18009CDC0 (ZwOpenSection.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

NTSTATUS __cdecl LdrGetKnownDllSectionHandle(PCWSTR DllName, BOOLEAN KnownDlls32, PHANDLE Section)
{
  HANDLE v6; // rdi
  int inited; // ebx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      3795,
      (unsigned int)"LdrGetKnownDllSectionHandle",
      3,
      (__int64)"DLL name: %ws\n",
      DllName);
  if ( KnownDlls32 )
    return -1073741811;
  v6 = DirectoryHandle;
  if ( DirectoryHandle )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, DllName);
    if ( inited >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = v6;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      inited = ZwOpenSection(Section, 0xDu, &ObjectAttributes);
    }
  }
  else
  {
    inited = -1073741816;
  }
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      3826,
      (unsigned int)"LdrGetKnownDllSectionHandle",
      4,
      (__int64)"Status: 0x%08lx\n",
      inited);
  return inited;
}
