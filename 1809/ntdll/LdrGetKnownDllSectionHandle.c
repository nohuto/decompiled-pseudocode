/*
 * XREFs of LdrGetKnownDllSectionHandle @ 0x180087AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     NtOpenSection @ 0x1800A09E0 (NtOpenSection.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

NTSTATUS __cdecl LdrGetKnownDllSectionHandle(PCWSTR DllName, BOOLEAN KnownDlls32, PHANDLE Section)
{
  HANDLE v6; // rdi
  int inited; // ebx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      3795,
      (unsigned int)"LdrGetKnownDllSectionHandle",
      3,
      "DLL name: %ws\n",
      DllName);
  if ( KnownDlls32 )
    return -1073741811;
  v6 = LdrpKnownDllDirectoryHandle;
  if ( LdrpKnownDllDirectoryHandle )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, DllName);
    if ( inited >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = v6;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      inited = NtOpenSection(Section, 0xFu, &ObjectAttributes);
    }
  }
  else
  {
    inited = -1073741816;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      3826,
      (unsigned int)"LdrGetKnownDllSectionHandle",
      4,
      "Status: 0x%08lx\n",
      inited);
  return inited;
}
