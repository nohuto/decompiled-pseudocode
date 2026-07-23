/*
 * XREFs of sub_18002934C @ 0x18002934C
 * Callers:
 *     sub_180029560 @ 0x180029560 (sub_180029560.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     sub_180029E90 @ 0x180029E90 (sub_180029E90.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenSection @ 0x18009CDC0 (ZwOpenSection.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_18002934C(
        UNICODE_STRING *Source,
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING Destination,
        PHANDLE SectionHandle)
{
  NTSTATUS v8; // eax
  int v9; // ebx
  const WCHAR *v10; // rbx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1523,
      (unsigned int)"LdrpFindKnownDll",
      3,
      (__int64)"DLL name: %wZ\n",
      Source);
  if ( !DirectoryHandle )
  {
LABEL_11:
    v9 = -1073741515;
    goto LABEL_7;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = DirectoryHandle;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = Source;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenSection(SectionHandle, 0xDu, &ObjectAttributes);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 )
      goto LABEL_7;
    goto LABEL_11;
  }
  v9 = sub_180029E90(Destination, Source->Length + (unsigned int)LinkTarget.Length + 2);
  if ( v9 < 0 )
  {
    ZwClose(*SectionHandle);
  }
  else
  {
    RtlAppendUnicodeStringToString(Destination, &LinkTarget);
    RtlAppendUnicodeToString(Destination, "\\");
    v10 = (PWCH)((char *)Destination->Buffer + Destination->Length);
    RtlAppendUnicodeStringToString(Destination, Source);
    RtlInitUnicodeStringEx(DestinationString, v10);
    v9 = 0;
  }
LABEL_7:
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1595,
      (unsigned int)"LdrpFindKnownDll",
      4,
      (__int64)"Status: 0x%08lx\n",
      v9);
  return (unsigned int)v9;
}
