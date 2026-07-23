/*
 * XREFs of CmSiCreateSectionForFile @ 0x14000F16C
 * Callers:
 *     HvpViewMapStart @ 0x1405A61A0 (HvpViewMapStart.c)
 * Callees:
 *     ZwCreateSection @ 0x1401B8C30 (ZwCreateSection.c)
 */

NTSTATUS __fastcall CmSiCreateSectionForFile(
        HANDLE *a1,
        ACCESS_MASK a2,
        ULONG SectionPageProtection,
        __int64 a4,
        HANDLE FileHandle)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  return ZwCreateSection(a1, a2, &ObjectAttributes, 0LL, SectionPageProtection, 0x4000000u, FileHandle);
}
