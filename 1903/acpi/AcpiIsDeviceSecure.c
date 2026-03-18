/*
 * XREFs of AcpiIsDeviceSecure @ 0x1C00A14E8
 * Callers:
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0097710 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     AcpiCheckSecureDevice @ 0x1C00B4DD4 (AcpiCheckSecureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     ACPIQueryDeviceBiosName @ 0x1C0095168 (ACPIQueryDeviceBiosName.c)
 *     AcpiSearchSdevTable @ 0x1C00B4EBC (AcpiSearchSdevTable.c)
 */

char __fastcall AcpiIsDeviceSecure(__int64 a1)
{
  char v1; // bl
  __int64 v4; // rsi
  struct _UNICODE_STRING v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-20h] BYREF
  __int64 v9; // [rsp+48h] [rbp-18h]

  v1 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v6 = 0LL;
  v7 = 0;
  *(_QWORD *)&v5.Length = 0LL;
  v5.Buffer = 0LL;
  if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1447380051LL, 0LL, 0LL);
    if ( v4 )
    {
      if ( (int)ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 720), &v5) >= 0
        && (unsigned __int8)AcpiSearchSdevTable(v4, &v5, (char *)&v6 + 4) )
      {
        LODWORD(v6) = 3;
        if ( (int)VslQuerySecureDevice(&v6, &v8) < 0 )
        {
          v1 = 0;
        }
        else
        {
          v1 = v8;
          *(_QWORD *)(a1 + 912) = v9;
        }
      }
    }
  }
  if ( v5.Buffer )
    ExFreePoolWithTag(v5.Buffer, 0x53706341u);
  return v1;
}
