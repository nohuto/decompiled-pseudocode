/*
 * XREFs of NtCreateSection @ 0x1405DE740
 * Callers:
 *     PfpFileBuildReadSupport @ 0x140660480 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x140660E58 (PfSnGetSectionObject.c)
 * Callees:
 *     MiCreateSectionCommon @ 0x1405DE7A0 (MiCreateSectionCommon.c)
 */

NTSTATUS __stdcall NtCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  ULONG v7; // r10d
  int v8; // r11d
  _QWORD *Address; // rbx
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF

  v7 = AllocationAttributes;
  v8 = 0;
  Address = 0LL;
  if ( (AllocationAttributes & 0x7F) != 0 )
  {
    Address = v11;
    v7 = AllocationAttributes & 0xFFFFFF80;
    v11[0] = 2LL;
    v8 = 1;
    v11[1] = (AllocationAttributes & 0x7F) - 1;
  }
  return MiCreateSectionCommon(
           (int)SectionHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)MaximumSize,
           SectionPageProtection,
           v7,
           (__int64)FileHandle,
           Address,
           v8,
           1);
}
