/*
 * XREFs of EtwpEnumerateKeyProviders @ 0x140724B1C
 * Callers:
 *     EtwpEnableKeyProviders @ 0x140743BC0 (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x140006F00 (RtlInsertElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     RtlNtStatusToDosError @ 0x140624F00 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1406C3500 (RtlWriteRegistryValue.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140724C98 (EtwpEnableAutoLoggerProvider.c)
 */

int __fastcall EtwpEnumerateKeyProviders(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        const WCHAR *a4,
        unsigned int *KeyInformation,
        BOOLEAN NewElement,
        PRTL_AVL_TABLE Table,
        int a8)
{
  int result; // eax
  ULONG v11; // edi
  int v12; // r13d
  int v13; // ebx
  unsigned __int64 v14; // rax
  _RTL_AVL_TABLE *v15; // rcx
  const WCHAR *v16; // rdx
  ULONG ValueData; // [rsp+30h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-4Ch] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  ValueData = 0;
  RtlInitUnicodeString(&DestinationString, a3);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v11 = 0;
    v12 = a8;
    do
    {
      v13 = ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, KeyInformation, 0x11Eu, &ResultLength);
      v14 = KeyInformation[3];
      if ( v14 >= 0x108 )
        v13 = -2147483643;
      if ( v13 < 0 )
      {
        if ( v13 != -2147483622 )
        {
          ValueData = RtlNtStatusToDosError(v13);
          if ( a4 )
            v16 = a4;
          else
            v16 = a3;
          RtlWriteRegistryValue(0, v16, L"EnableStatus", 4u, &ValueData, 4u);
        }
      }
      else
      {
        v15 = Table;
        *((_WORD *)KeyInformation + (v14 >> 1) + 8) = 0;
        RtlInsertElementGenericTableAvl(v15, KeyInformation + 4, KeyInformation[3] + 2, &NewElement);
        if ( NewElement )
          EtwpEnableAutoLoggerProvider(a1, a2, KeyInformation + 4, a3, a4, v12, ValueData);
      }
      ++v11;
    }
    while ( v13 >= 0 );
    return ZwClose(KeyHandle);
  }
  return result;
}
