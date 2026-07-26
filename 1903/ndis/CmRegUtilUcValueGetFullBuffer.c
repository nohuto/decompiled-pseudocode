/*
 * XREFs of CmRegUtilUcValueGetFullBuffer @ 0x1C0129574
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C0128ED8 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmRegUtilUcValueGetFullBuffer(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        __int64 a3,
        ULONG a4,
        _QWORD *a5)
{
  _QWORD *v6; // rsi
  ULONG Length; // edi
  _DWORD *PoolWithTag; // rbx
  NTSTATUS v10; // edi
  _DWORD *v12; // rax
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  ResultLength = a4;
  v6 = a5;
  Length = (ValueName->Length + 31) & 0xFFFFFFF8;
  *a5 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x62527050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, PoolWithTag, Length, &ResultLength);
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v10 != -2147483643 && v10 != -1073741789 )
      return (unsigned int)v10;
    v12 = ExAllocatePoolWithTag(NonPagedPoolNx, ResultLength, 0x62527050u);
    PoolWithTag = v12;
    if ( v12 )
    {
      v10 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, v12, ResultLength, &ResultLength);
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
  if ( PoolWithTag[1] != 3 )
  {
    v10 = -1073741788;
    goto LABEL_10;
  }
  *v6 = PoolWithTag;
  return 0LL;
}
