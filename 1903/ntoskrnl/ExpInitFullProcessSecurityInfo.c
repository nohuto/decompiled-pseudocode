/*
 * XREFs of ExpInitFullProcessSecurityInfo @ 0x140788DB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

_BOOL8 __fastcall ExpInitFullProcessSecurityInfo(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  NTSTATUS v4; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp-59h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-49h] BYREF
  size_t KeyValueInformation[12]; // [rsp+78h] [rbp-19h] BYREF

  memset(KeyValueInformation, 0, 0x54uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"tv";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    v4 = ZwQueryValueKey(
           KeyHandle,
           &stru_140426FB8,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x54u,
           &ResultLength);
    if ( v4 >= 0 )
    {
      if ( LODWORD(KeyValueInformation[1]) > 0x44 )
      {
        v4 = -1073741789;
      }
      else
      {
        memmove(&ExpFullProcessInformationSid, (char *)&KeyValueInformation[1] + 4, LODWORD(KeyValueInformation[1]));
        *a3 = &ExpFullProcessInformationSid;
      }
    }
    ZwClose(KeyHandle);
  }
  return v4 >= 0;
}
