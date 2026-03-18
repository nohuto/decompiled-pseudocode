/*
 * XREFs of Counter_CreateInterrupterInstance @ 0x1C006A61C
 * Callers:
 *     Interrupter_CreateInterrupter @ 0x1C0065AE8 (Interrupter_CreateInterrupter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x1C00144EC (RtlStringCchPrintfW.c)
 */

NTSTATUS __fastcall Counter_CreateInterrupterInstance(__int64 a1)
{
  __int64 v1; // r9
  NTSTATUS result; // eax
  int Data; // [rsp+20h] [rbp-68h]
  int v5; // [rsp+28h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-58h] BYREF
  struct _PCW_DATA v7; // [rsp+40h] [rbp-48h] BYREF
  WCHAR SourceString[16]; // [rsp+50h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 28LL) && !*(_QWORD *)(a1 + 88) )
  {
    v5 = *(_DWORD *)(a1 + 32);
    Data = *(_DWORD *)(v1 + 176);
    if ( *(_DWORD *)(v1 + 244) == 1 )
      RtlStringCchPrintfW(
        SourceString,
        0x10uLL,
        L"%04X.%u.%u",
        *(unsigned __int16 *)(v1 + 248),
        Data,
        v5,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer);
    else
      RtlStringCchPrintfW(
        SourceString,
        0x10uLL,
        L"%S.%u.%u",
        v1 + 304,
        Data,
        v5,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v7.Data = (const void *)(a1 + 40);
    v7.Size = 56;
    return PcwCreateInstance(
             (PPCW_INSTANCE *)(a1 + 88),
             *(PPCW_REGISTRATION *)&WPP_MAIN_CB.DeviceQueue.32,
             &DestinationString,
             1u,
             &v7);
  }
  return result;
}
