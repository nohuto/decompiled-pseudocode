/*
 * XREFs of Counter_CreateCommonBufferInstance @ 0x1C006234C
 * Callers:
 *     CommonBuffer_Create @ 0x1C0057658 (CommonBuffer_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x1C0011AEC (RtlStringCchPrintfW.c)
 */

NTSTATUS __fastcall Counter_CreateCommonBufferInstance(PPCW_INSTANCE *a1)
{
  NTSTATUS result; // eax
  PPCW_INSTANCE v3; // r9
  int Data; // [rsp+20h] [rbp-58h]
  struct _PCW_DATA v5; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  wchar_t pszDest[12]; // [rsp+50h] [rbp-28h] BYREF

  result = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  v3 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 28LL) && !a1[2] )
  {
    Data = *((_DWORD *)v3 + 44);
    if ( *((_DWORD *)v3 + 45) == 1 )
      RtlStringCchPrintfW(pszDest, 0xAuLL, L"%04X.%u", *((unsigned __int16 *)v3 + 92), Data);
    else
      RtlStringCchPrintfW(pszDest, 0xAuLL, L"%S.%u", (char *)v3 + 240, Data);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v5.Data = a1[1];
    v5.Size = 16;
    return PcwCreateInstance(a1 + 2, (PPCW_REGISTRATION)WPP_MAIN_CB.Dpc.DpcListEntry.Next, &DestinationString, 1u, &v5);
  }
  return result;
}
