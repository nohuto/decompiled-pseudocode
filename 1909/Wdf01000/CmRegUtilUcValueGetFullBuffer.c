/*
 * XREFs of CmRegUtilUcValueGetFullBuffer @ 0x1C00C9814
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00C9090 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmRegUtilUcValueGetFullBuffer(
        void *KeyHandle,
        _UNICODE_STRING *ValueName,
        unsigned int Information,
        unsigned int a4,
        _KEY_VALUE_FULL_INFORMATION **ValueName_0)
{
  _KEY_VALUE_FULL_INFORMATION **v6; // rsi
  ULONG Length; // edi
  _KEY_VALUE_FULL_INFORMATION *PoolWithTag; // rbx
  NTSTATUS v10; // edi
  _KEY_VALUE_FULL_INFORMATION *v12; // rax
  unsigned int keyValueLength; // [rsp+68h] [rbp+20h] BYREF

  keyValueLength = a4;
  v6 = ValueName_0;
  Length = (ValueName->Length + 31) & 0xFFFFFFF8;
  *ValueName_0 = 0LL;
  PoolWithTag = (_KEY_VALUE_FULL_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x62527050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, PoolWithTag, Length, &keyValueLength);
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v10 != -2147483643 && v10 != -1073741789 )
      return (unsigned int)v10;
    v12 = (_KEY_VALUE_FULL_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, keyValueLength, 0x62527050u);
    PoolWithTag = v12;
    if ( v12 )
    {
      v10 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, v12, keyValueLength, &keyValueLength);
      if ( v10 < 0 )
      {
LABEL_10:
        ExFreePoolWithTag(PoolWithTag, 0);
        return (unsigned int)v10;
      }
      goto LABEL_8;
    }
    return 3221225626LL;
  }
LABEL_8:
  if ( PoolWithTag->Type != 3 )
  {
    v10 = -1073741788;
    goto LABEL_10;
  }
  *v6 = PoolWithTag;
  return 0LL;
}
