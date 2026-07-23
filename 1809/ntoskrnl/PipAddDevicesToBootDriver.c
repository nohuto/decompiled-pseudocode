/*
 * XREFs of PipAddDevicesToBootDriver @ 0x1409F6178
 * Callers:
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     PipApplyFunctionToServiceInstances @ 0x1407560E4 (PipApplyFunctionToServiceInstances.c)
 */

int __fastcall PipAddDevicesToBootDriver(_QWORD *a1, __int64 a2, ULONG a3, char a4)
{
  void *v5; // [rsp+20h] [rbp-28h]
  _DWORD *v6; // [rsp+30h] [rbp-18h]

  return PipApplyFunctionToServiceInstances(a1, (UNICODE_STRING *)(a1[6] + 24LL), a3, a4, v5, (__int64)a1, v6);
}
