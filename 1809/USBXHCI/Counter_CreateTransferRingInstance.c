/*
 * XREFs of Counter_CreateTransferRingInstance @ 0x1C006254C
 * Callers:
 *     TR_Create @ 0x1C0061390 (TR_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x1C0011AEC (RtlStringCchPrintfW.c)
 */

NTSTATUS __fastcall Counter_CreateTransferRingInstance(__int64 *a1, int a2, PPCW_INSTANCE *a3)
{
  NTSTATUS result; // eax
  __int64 v5; // r9
  int Data; // [rsp+20h] [rbp-88h]
  int v7; // [rsp+28h] [rbp-80h]
  int v8; // [rsp+30h] [rbp-78h]
  struct _PCW_DATA v10; // [rsp+40h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-58h] BYREF
  wchar_t pszDest[24]; // [rsp+60h] [rbp-48h] BYREF

  result = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 28LL) && !a3[4] )
  {
    v5 = *a1;
    v8 = *((unsigned __int8 *)a1 + 98);
    v7 = *(unsigned __int16 *)(a1[2] + 124);
    Data = *(_DWORD *)(*a1 + 176);
    if ( *(_DWORD *)(*a1 + 180) == 1 )
      RtlStringCchPrintfW(pszDest, 0x15uLL, L"%04X.%u.%04X.%02X.%u", *(unsigned __int16 *)(v5 + 184), Data, v7, v8, a2);
    else
      RtlStringCchPrintfW(pszDest, 0x15uLL, L"%S.%u.%04X.%02X.%u", v5 + 240, Data, v7, v8, a2);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v10.Data = a3;
    v10.Size = 40;
    return PcwCreateInstance(
             a3 + 4,
             *(PPCW_REGISTRATION *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong,
             &DestinationString,
             1u,
             &v10);
  }
  return result;
}
