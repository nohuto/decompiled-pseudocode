/*
 * XREFs of EtwpLoadMicroarchitecturalPmcs @ 0x14076DE5C
 * Callers:
 *     EtwpInitialize @ 0x140A15AEC (EtwpInitialize.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401C1290 (ZwEnumerateKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408F7BF8 (EtwpLoadMicroarchitecturalProfileGroup.c)
 */

void EtwpLoadMicroarchitecturalPmcs()
{
  __int64 v0; // rax
  SIZE_T v1; // r14
  WCHAR *PoolWithTag; // rdi
  int v3; // esi
  NTSTATUS v4; // eax
  int v5; // ebx
  HANDLE Handle; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-B0h] BYREF
  ULONG ResultLength[4]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD KeyInformation[136]; // [rsp+98h] [rbp-70h] BYREF

  memset(KeyInformation, 0, 0x218uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v0 = -1LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  do
    ++v0;
  while ( aRegistryMachin_23[v0] );
  v1 = (unsigned int)(2 * v0 + 514);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v1, 0x50777445u);
  if ( PoolWithTag )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v3 = -1;
      do
      {
        v4 = ZwEnumerateKey(KeyHandle, ++v3, KeyBasicInformation, KeyInformation, 0x216u, ResultLength);
        v5 = v4;
        if ( v4 < 0 || KeyInformation[3] >= 0x1FEu )
        {
          if ( v4 == -1073741789 || v4 == -2147483643 )
            v5 = 0;
        }
        else
        {
          *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
          if ( RtlStringCbPrintfW(
                 PoolWithTag,
                 v1,
                 L"%ws\\%ws",
                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource",
                 &KeyInformation[4]) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, PoolWithTag);
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              EtwpLoadMicroarchitecturalProfileGroup(Handle);
              ZwClose(Handle);
            }
          }
        }
      }
      while ( v5 >= 0 );
      ZwClose(KeyHandle);
    }
    ExFreePoolWithTag(PoolWithTag, 0x50777445u);
  }
}
