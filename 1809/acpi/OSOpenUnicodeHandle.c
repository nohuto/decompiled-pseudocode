/*
 * XREFs of OSOpenUnicodeHandle @ 0x1C008D33C
 * Callers:
 *     OSOpenHandle @ 0x1C008D2B4 (OSOpenHandle.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C0095A5C (ACPIThermalGetOverrideHandle.c)
 *     OSOpenLargestSubkey @ 0x1C00AEAF0 (OSOpenLargestSubkey.c)
 *     IsHypervisorCpcCapable @ 0x1C00B1300 (IsHypervisorCpcCapable.c)
 *     OSReadAcpiConfigurationData @ 0x1C00B8204 (OSReadAcpiConfigurationData.c)
 *     IrqPolicyConfigure @ 0x1C00B869C (IrqPolicyConfigure.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00B88A8 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall OSOpenUnicodeHandle(struct _UNICODE_STRING *a1, void *a2, void **a3)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  NTSTATUS v9; // [rsp+28h] [rbp-40h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = v6;
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0xDu,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      v9);
  }
  return v7;
}
