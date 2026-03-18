/*
 * XREFs of PnpBootDeviceWait @ 0x1401823CC
 * Callers:
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     HeadlessKernelAddLogEntry @ 0x1400F5248 (HeadlessKernelAddLogEntry.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x1406804F4 (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x14073C494 (IopOpenRegistryKeyEx.c)
 */

__int64 __fastcall PnpBootDeviceWait(
        __int64 a1,
        int a2,
        __int64 (__fastcall *a3)(__int64, __int64, UNICODE_STRING *),
        __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // r13
  unsigned int v8; // ebx
  int RegistryValue; // edi
  int v10; // esi
  int v11; // ebx
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-28h] BYREF
  int v15; // [rsp+48h] [rbp-18h] BYREF
  const wchar_t *v16; // [rsp+50h] [rbp-10h]
  HANDLE Handle; // [rsp+A0h] [rbp+40h] BYREF

  BugCheckParameter4 = a2;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v15 = 7209068;
  v16 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v8 = 0;
  RegistryValue = IopOpenRegistryKeyEx(&Handle, 0LL, &v15, 131097LL);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 3) == 4 )
      {
        v8 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        if ( v8 >= 0xC8 )
        {
          if ( v8 > 0x2BF20 )
            v8 = 180000;
        }
        else
        {
          v8 = 0;
        }
      }
      else
      {
        RegistryValue = -1073741823;
      }
      ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
  }
  v10 = 0;
  P = (PVOID)-2000000LL;
  if ( RegistryValue >= 0 )
    v10 = v8;
  RtlFreeAnsiString(&DestinationString);
  v11 = a3(a1, a4, &DestinationString);
  if ( v11 < 0 )
  {
    do
    {
      if ( v10 <= 0 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&P);
      v10 -= 200;
      RtlFreeAnsiString(&DestinationString);
      v11 = a3(a1, a4, &DestinationString);
    }
    while ( v11 < 0 );
    if ( v11 < 0 )
    {
      HeadlessKernelAddLogEntry();
      KeBugCheckEx(0x7Bu, (ULONG_PTR)&DestinationString, v11, 0LL, BugCheckParameter4);
    }
  }
  RtlFreeAnsiString(&DestinationString);
  return 0LL;
}
