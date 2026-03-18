/*
 * XREFs of IopBootLog @ 0x14070B7F0
 * Callers:
 *     PipCallDriverAddDevice @ 0x140704B38 (PipCallDriverAddDevice.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     IopInitializeBootLogging @ 0x140853614 (IopInitializeBootLogging.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400880E8 (RtlStringCchPrintfW.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     IopOpenRegistryKey @ 0x14070A534 (IopOpenRegistryKey.c)
 *     IopBootLogToFile @ 0x140852DA0 (IopBootLogToFile.c)
 */

void __fastcall IopBootLog(PCUNICODE_STRING Source, char a2)
{
  PUNICODE_STRING v4; // rdi
  const UNICODE_STRING *v5; // rdx
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // rsi
  ULONG Data; // [rsp+28h] [rbp-E0h]
  ULONG Dataa; // [rsp+28h] [rbp-E0h]
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING Sourcea; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING v12; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v13; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName; // [rsp+78h] [rbp-90h] BYREF
  wchar_t pszDest[256]; // [rsp+88h] [rbp-80h] BYREF
  char v16; // [rsp+288h] [rbp+180h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  *(_QWORD *)&v13.Length = 0LL;
  v13.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  *(_QWORD *)&v12.Length = 0LL;
  v12.Buffer = 0LL;
  *(_QWORD *)&Sourcea.Length = 0LL;
  Sourcea.Buffer = 0LL;
  DestinationString.Buffer = (wchar_t *)&v16;
  if ( qword_1409AD030 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_1409AD030[4], 1u);
    v4 = qword_1409AD030;
    v5 = qword_1409AD030;
    if ( !a2 )
      v5 = qword_1409AD030 + 1;
    RtlCopyUnicodeString(&DestinationString, v5);
    RtlInitUnicodeString(&Sourcea, L" ");
    RtlAppendUnicodeStringToString(&DestinationString, &Sourcea);
    RtlAppendUnicodeStringToString(&DestinationString, Source);
    RtlInitUnicodeString(&v12, L"\r\n");
    RtlAppendUnicodeStringToString(&DestinationString, &v12);
    Length = DestinationString.Length;
    Buffer = DestinationString.Buffer;
    if ( DestinationString.Length == DestinationString.MaximumLength )
    {
      Length = DestinationString.Length - 2;
      DestinationString.Length = Length;
      DestinationString.Buffer[(unsigned __int64)Length >> 1] = 0;
    }
    ++LODWORD(v4[10].Buffer);
    RtlStringCchPrintfW(pszDest, 0x100uLL, L"%d");
    RtlInitUnicodeString(&v13, pszDest);
    RtlInitUnicodeString(&ValueName, &word_14078F2B0);
    if ( BYTE4(qword_1409AD030[10].Buffer) )
    {
      IopBootLogToFile(&DestinationString);
    }
    else
    {
      LOBYTE(Data) = 1;
      if ( IopOpenRegistryKey(
             (HANDLE *)&DestinationString,
             0LL,
             &CmRegistryMachineSystemCurrentControlSetControlBootLog,
             0xF003Fu,
             Data) >= 0 )
      {
        LOBYTE(Dataa) = 1;
        if ( IopOpenRegistryKey((HANDLE *)&Sourcea, *(void **)&DestinationString.Length, &v13, 0xF003Fu, Dataa) >= 0 )
        {
          ZwSetValueKey(*(HANDLE *)&Sourcea.Length, &ValueName, 0, 1u, Buffer, Length + 2);
          ZwClose(*(HANDLE *)&Sourcea.Length);
        }
        ZwClose(*(HANDLE *)&DestinationString.Length);
      }
    }
    ExReleaseResourceLite((PERESOURCE)&qword_1409AD030[4]);
  }
}
