/*
 * XREFs of NtCreateSection @ 0x1405D6BF0
 * Callers:
 *     PfpFileBuildReadSupport @ 0x14062B454 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x14062C478 (PfSnGetSectionObject.c)
 * Callees:
 *     MiCreateSectionCommon @ 0x1405D6CC0 (MiCreateSectionCommon.c)
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
  __int64 *Address; // rbx
  __int64 v11; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-10h]

  v7 = AllocationAttributes;
  v11 = 0LL;
  v8 = 0;
  v12 = 0LL;
  Address = 0LL;
  if ( (AllocationAttributes & 0x7F) != 0 )
  {
    v7 = AllocationAttributes & 0xFFFFFF80;
    v11 = 2LL;
    v12 = (AllocationAttributes & 0x7F) - 1;
    Address = &v11;
    v8 = 1;
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
