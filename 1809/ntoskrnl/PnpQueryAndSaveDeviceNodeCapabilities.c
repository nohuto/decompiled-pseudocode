/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x1406EB670
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1406DA66C (IopInitializeDeviceInstanceKey.c)
 *     PipProcessStartPhase3 @ 0x1406EAB38 (PipProcessStartPhase3.c)
 *     PiInitializeDevice @ 0x14083C184 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     PnpSaveDeviceCapabilities @ 0x1406E2890 (PnpSaveDeviceCapabilities.c)
 *     PpIrpQueryCapabilities @ 0x1406EB6C4 (PpIrpQueryCapabilities.c)
 */

__int64 __fastcall PnpQueryAndSaveDeviceNodeCapabilities(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[16]; // [rsp+20h] [rbp-58h] BYREF

  result = PpIrpQueryCapabilities(*(_QWORD *)(a1 + 32), v3);
  if ( (int)result >= 0 )
    return PnpSaveDeviceCapabilities(a1, v3, 0);
  return result;
}
