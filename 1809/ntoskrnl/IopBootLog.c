/*
 * XREFs of IopBootLog @ 0x1406D04D4
 * Callers:
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 *     IopInitializeBootLogging @ 0x14081B214 (IopInitializeBootLogging.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     IopOpenRegistryKey @ 0x1406C7B50 (IopOpenRegistryKey.c)
 *     IopBootLogToFile @ 0x14081A640 (IopBootLogToFile.c)
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
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t pszDest[256]; // [rsp+78h] [rbp-90h] BYREF
  char v15; // [rsp+278h] [rbp+170h] BYREF

  *(_DWORD *)&DestinationString.Length = 0x1000000;
  DestinationString.Buffer = (wchar_t *)&v15;
  if ( qword_14096E020 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_14096E020[4], 1u);
    v4 = qword_14096E020;
    v5 = qword_14096E020;
    if ( !a2 )
      v5 = qword_14096E020 + 1;
    RtlCopyUnicodeString(&DestinationString, v5);
    RtlInitUnicodeString(&Sourcea, L" ");
    RtlAppendUnicodeStringToString(&DestinationString, &Sourcea);
    RtlAppendUnicodeStringToString(&DestinationString, Source);
    RtlInitUnicodeString(&Sourcea, L"\r\n");
    RtlAppendUnicodeStringToString(&DestinationString, &Sourcea);
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
    RtlInitUnicodeString(&v12, pszDest);
    RtlInitUnicodeString(&ValueName, &word_140767740);
    if ( BYTE4(qword_14096E020[10].Buffer) )
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
        if ( IopOpenRegistryKey((HANDLE *)&Sourcea, *(void **)&DestinationString.Length, &v12, 0xF003Fu, Dataa) >= 0 )
        {
          ZwSetValueKey(*(HANDLE *)&Sourcea.Length, &ValueName, 0, 1u, Buffer, Length + 2);
          ZwClose(*(HANDLE *)&Sourcea.Length);
        }
        ZwClose(*(HANDLE *)&DestinationString.Length);
      }
    }
    ExReleaseResourceLite((PERESOURCE)&qword_14096E020[4]);
  }
}
