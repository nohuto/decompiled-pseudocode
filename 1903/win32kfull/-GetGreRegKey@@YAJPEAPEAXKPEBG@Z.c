/*
 * XREFs of ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00E83B8
 * Callers:
 *     vGetJpn98FixPitch @ 0x1C00E6BC0 (vGetJpn98FixPitch.c)
 *     InitFNTCache @ 0x1C00E8060 (InitFNTCache.c)
 *     QueryFontReg @ 0x1C00E82F0 (QueryFontReg.c)
 *     InitializeDefaultFamilyFonts @ 0x1C03827C4 (InitializeDefaultFamilyFonts.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 */

NTSTATUS __fastcall GetGreRegKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, PCWSTR SourceString)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
