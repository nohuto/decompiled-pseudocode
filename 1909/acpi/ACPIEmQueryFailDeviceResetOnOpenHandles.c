/*
 * XREFs of ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x1C0060534
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C008F640 (ACPIBusIrpQueryId.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00AF240 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     ACPIComputeDeviceIdMutiStringLength @ 0x1C00604AC (ACPIComputeDeviceIdMutiStringLength.c)
 */

__int64 __fastcall ACPIEmQueryFailDeviceResetOnOpenHandles(int a1, _WORD *a2)
{
  __int64 v2; // r10
  _QWORD v4[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-10h]
  int v7; // [rsp+44h] [rbp-Ch]
  _QWORD *v8; // [rsp+68h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0;
  v5[0] = a2;
  v4[1] = 24LL;
  v5[1] = 2 * ACPIComputeDeviceIdMutiStringLength(a2);
  v4[0] = v5;
  v8 = v4;
  return EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_FAIL_RESET_ON_OPEN_HANDLES, &v8, 1LL, v2);
}
