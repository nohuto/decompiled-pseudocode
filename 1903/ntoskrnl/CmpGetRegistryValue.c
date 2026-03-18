/*
 * XREFs of CmpGetRegistryValue @ 0x140A0C9AC
 * Callers:
 *     CmpSetSystemBiosInformation @ 0x140A0C210 (CmpSetSystemBiosInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  PVOID PoolWithTag; // rax
  void *v7; // rbx
  NTSTATUS v8; // edi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  result = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  if ( result >= 0 || result == -2147483643 || result == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ResultLength, 0x49504341u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      v8 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, ResultLength, &ResultLength);
      if ( v8 >= 0 )
      {
        *a3 = v7;
        return 0;
      }
      else
      {
        ExFreePoolWithTag(v7, 0);
        return v8;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
