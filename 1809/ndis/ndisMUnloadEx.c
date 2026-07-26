/*
 * XREFs of ndisMUnloadEx @ 0x1C00F2DC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     ndisMInvokeDriverUnload @ 0x1C00F0888 (ndisMInvokeDriverUnload.c)
 */

void __fastcall ndisMUnloadEx(PDRIVER_OBJECT DriverObject)
{
  char *DriverObjectExtension; // rbp
  char *v3; // rsi

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x67u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)DriverObject);
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E4D4944);
  v3 = (char *)IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E494944);
  if ( DriverObjectExtension )
    ndisMInvokeDriverUnload((__int64)DriverObjectExtension, (__int64)DriverObject);
  if ( v3 )
    ndisMInvokeDriverUnload((__int64)v3, (__int64)DriverObject);
  if ( DriverObjectExtension )
  {
    KeWaitForSingleObject(DriverObjectExtension + 368, Executive, 0, 0, 0LL);
    KeClearEvent((PRKEVENT)(DriverObjectExtension + 368));
  }
  if ( v3 )
  {
    KeWaitForSingleObject(v3 + 368, Executive, 0, 0, 0LL);
    KeClearEvent((PRKEVENT)(v3 + 368));
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x68u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, DriverObject, DriverObjectExtension, v3);
}
