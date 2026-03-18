/*
 * XREFs of OSGetRegistryValue @ 0x1C009271C
 * Callers:
 *     IrqPolicyGetDevicePolicy @ 0x1C0092268 (IrqPolicyGetDevicePolicy.c)
 *     PcisuppGetRoutingInfo @ 0x1C009259C (PcisuppGetRoutingInfo.c)
 *     IsHypervisorCpcCapable @ 0x1C00B1300 (IsHypervisorCpcCapable.c)
 *     OSReadAcpiConfigurationData @ 0x1C00B8204 (OSReadAcpiConfigurationData.c)
 *     IrqPolicyConfigure @ 0x1C00B869C (IrqPolicyConfigure.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00B8728 (ACPIInitGetPlatformOverrides.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00B88A8 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  PVOID PoolWithTag; // rax
  void *v7; // rbx
  NTSTATUS v8; // edi
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  ResultLength = 0;
  RtlInitUnicodeString(&ValueName, a2);
  result = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &ResultLength);
  if ( result >= 0 )
    return -1073741823;
  if ( result == -1073741789 || result == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ResultLength, 0x53706341u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      v8 = ZwQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformationAlign64,
             PoolWithTag,
             ResultLength,
             &ResultLength);
      if ( v8 < 0 )
      {
        ExFreePoolWithTag(v7, 0);
        return v8;
      }
      else
      {
        *a3 = v7;
        return 0;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
