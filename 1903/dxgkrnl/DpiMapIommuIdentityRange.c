/*
 * XREFs of DpiMapIommuIdentityRange @ 0x1C029CC10
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0050648 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMapIommuIdentityRangeInternal @ 0x1C00507DC (DpiMapIommuIdentityRangeInternal.c)
 */

__int64 __fastcall DpiMapIommuIdentityRange(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 IoMmuContextFromDevice; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  return DpiMapIommuIdentityRangeInternal(IoMmuContextFromDevice, a2, a3, a4, a5);
}
