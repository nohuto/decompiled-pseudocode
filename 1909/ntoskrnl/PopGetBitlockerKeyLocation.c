/*
 * XREFs of PopGetBitlockerKeyLocation @ 0x14059B8F0
 * Callers:
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     wcsstr @ 0x1401A28C0 (wcsstr.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopGetBitlockerKeyLocation(__int64 *a1)
{
  wchar_t *PoolWithTag; // rdi
  NTSTATUS v3; // ebx
  ULONG Length; // ebx
  wchar_t *v5; // rax
  wchar_t *v7; // rdx
  __int64 v8; // rcx
  wchar_t v9; // ax
  wchar_t v10; // r8
  ULONG ResultLength; // [rsp+30h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  _QWORD KeyValueInformation[2]; // [rsp+90h] [rbp+27h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  PoolWithTag = 0LL;
  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyValueInformation[0] = 0LL;
  KeyValueInformation[1] = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"SystemStartOptions");
    v3 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength);
    if ( (int)(v3 + 0x80000000) < 0 || v3 == -2147483643 )
    {
      if ( HIDWORD(KeyValueInformation[0]) != 1 )
      {
        v3 = -1073741811;
        goto LABEL_11;
      }
      Length = ResultLength;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, ResultLength + 2LL, 0x66756263u);
      if ( !PoolWithTag )
      {
        v3 = -1073741801;
        goto LABEL_11;
      }
      v3 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
    }
    if ( v3 >= 0 )
    {
      *(wchar_t *)((char *)PoolWithTag + *((unsigned int *)PoolWithTag + 2) + 12) = 0;
      v5 = wcsstr(PoolWithTag + 6, L"FVEBOOT=");
      if ( !v5 )
        goto LABEL_8;
      v7 = v5 + 8;
      v8 = 0LL;
      v9 = v5[8];
      if ( v9 >= 0x30u )
      {
        v10 = v9;
        do
        {
          v9 = v10;
          if ( v10 > 0x39u )
            break;
          ++v7;
          v8 = v10 + 2 * (5 * v8 - 24);
          v9 = *v7;
          v10 = *v7;
        }
        while ( *v7 >= 0x30u );
      }
      if ( (v9 & 0xFFDF) != 0 )
LABEL_8:
        v3 = -1073741823;
      else
        *a1 = v8;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x66756263u);
  }
LABEL_11:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
