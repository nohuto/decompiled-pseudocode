/*
 * XREFs of PnpBootDeviceWait @ 0x14018D970
 * Callers:
 *     VhdInitialize @ 0x140A0F6E8 (VhdInitialize.c)
 *     IopInitializeBootDrivers @ 0x140A10470 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     HeadlessKernelAddLogEntry @ 0x140153B54 (HeadlessKernelAddLogEntry.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x14071BDB0 (IopOpenRegistryKeyEx.c)
 */

__int64 __fastcall PnpBootDeviceWait(
        __int64 a1,
        int a2,
        __int64 (__fastcall *a3)(__int64, __int64, UNICODE_STRING *),
        __int64 a4)
{
  int v4; // edi
  ULONG_PTR BugCheckParameter4; // r14
  unsigned int v9; // ebx
  int RegistryValue; // esi
  int v11; // eax
  ULONG_PTR v12; // rbx
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+40h] BYREF

  v4 = 0;
  BugCheckParameter4 = a2;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v16[0] = 7209068LL;
  v16[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v9 = 0;
  RegistryValue = IopOpenRegistryKeyEx(&Handle, 0LL, v16, 131097LL);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 3) == 4 )
      {
        v9 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(P, 0);
        if ( v9 < 0xC8 )
        {
          v9 = 0;
        }
        else if ( v9 > 0x2BF20 )
        {
          v9 = 180000;
        }
      }
      else
      {
        RegistryValue = -1073741823;
      }
    }
    ZwClose(Handle);
  }
  P = (PVOID)-2000000LL;
  if ( RegistryValue >= 0 )
    v4 = v9;
  while ( 1 )
  {
    RtlFreeAnsiString(&UnicodeString);
    v11 = a3(a1, a4, &UnicodeString);
    v12 = v11;
    if ( v11 >= 0 )
      break;
    if ( v4 <= 0 )
    {
      HeadlessKernelAddLogEntry();
      KeBugCheckEx(0x7Bu, (ULONG_PTR)&UnicodeString, v12, 0LL, BugCheckParameter4);
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&P);
    v4 -= 200;
  }
  RtlFreeAnsiString(&UnicodeString);
  return 0LL;
}
