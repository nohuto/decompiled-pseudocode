/*
 * XREFs of IopCopyBootLogRegistryToFile @ 0x1407595AC
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140759428 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400880E8 (RtlStringCchPrintfW.c)
 *     RtlInitAnsiString @ 0x1400EA030 (RtlInitAnsiString.c)
 *     ExSystemTimeToLocalTime @ 0x14013D240 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x1401453D0 (RtlTimeToTimeFields.c)
 *     RtlStringCchPrintfA @ 0x140189BB8 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwDeleteKey @ 0x1401C2630 (ZwDeleteKey.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140694F30 (RtlCreateUnicodeString.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x14070A534 (IopOpenRegistryKey.c)
 *     IopBootLogToFile @ 0x140852DA0 (IopBootLogToFile.c)
 */

_QWORD *IopCopyBootLogRegistryToFile()
{
  _QWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int i; // ebx
  NTSTATUS RegistryValue; // eax
  PVOID v4; // rdi
  PUNICODE_STRING v5; // rcx
  ULONG v6; // [rsp+28h] [rbp-E0h]
  ULONG v7; // [rsp+28h] [rbp-E0h]
  _TIME_FIELDS TimeFields; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-80h] BYREF
  _STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING v15; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v16; // [rsp+B8h] [rbp-50h] BYREF
  char pszDest[256]; // [rsp+C8h] [rbp-40h] BYREF
  wchar_t SourceString[256]; // [rsp+1C8h] [rbp+C0h] BYREF

  result = 0LL;
  LocalTime.QuadPart = 0LL;
  *(_QWORD *)&v15.Length = 0LL;
  v15.Buffer = 0LL;
  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v16.Length = 0LL;
  v16.Buffer = 0LL;
  if ( qword_1409AD030 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_1409AD030[4], 1u);
    IopBootLogToFile(&qword_1409AD030[3]);
    ExSystemTimeToLocalTime(&KeBootTime, &LocalTime);
    RtlTimeToTimeFields(&LocalTime, &TimeFields);
    RtlStringCchPrintfA(
      pszDest,
      0x100uLL,
      "%2d %2d %4d %02d:%02d:%02d.%03d\r\n",
      TimeFields.Month,
      TimeFields.Day,
      TimeFields.Year,
      TimeFields.Hour,
      TimeFields.Minute,
      TimeFields.Second,
      TimeFields.Milliseconds);
    RtlInitAnsiString(&DestinationString, pszDest);
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    IopBootLogToFile(&UnicodeString);
    RtlFreeAnsiString(&UnicodeString);
    LOBYTE(v6) = 0;
    if ( IopOpenRegistryKey(&Handle, 0LL, &CmRegistryMachineSystemCurrentControlSetControlBootLog, 0xF003Fu, v6) < 0 )
    {
      v5 = qword_1409AD030;
    }
    else
    {
      for ( i = 0; i < LODWORD(qword_1409AD030[10].Buffer); ++i )
      {
        RtlStringCchPrintfW(SourceString, 0x100uLL, L"%d", i);
        RtlCreateUnicodeString(&v15, SourceString);
        LOBYTE(v7) = 0;
        if ( IopOpenRegistryKey(&KeyHandle, Handle, &v15, 0xF003Fu, v7) >= 0 )
        {
          P = 0LL;
          RegistryValue = IopGetRegistryValue(KeyHandle, &word_14078F2B0, 256, &P);
          v4 = P;
          if ( RegistryValue >= 0 )
          {
            RtlInitUnicodeString(&v16, (PCWSTR)((char *)P + *((unsigned int *)P + 2)));
            IopBootLogToFile(&v16);
          }
          ExFreePoolWithTag(v4, 0);
          ZwDeleteKey(KeyHandle);
          ZwClose(KeyHandle);
        }
      }
      ZwDeleteKey(Handle);
      ZwClose(Handle);
      v5 = qword_1409AD030;
      BYTE4(qword_1409AD030[10].Buffer) = 1;
    }
    ExReleaseResourceLite((PERESOURCE)&v5[4]);
    return KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return result;
}
