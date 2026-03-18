/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x140702254
 * Callers:
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x140723480 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x1408769E0 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpIrpQueryCapabilities @ 0x1407021CC (PpIrpQueryCapabilities.c)
 *     PnpSaveDeviceCapabilities @ 0x14070580C (PnpSaveDeviceCapabilities.c)
 */

__int64 __fastcall PnpQueryAndSaveDeviceNodeCapabilities(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[16]; // [rsp+20h] [rbp-58h] BYREF

  memset(v3, 0, sizeof(v3));
  result = PpIrpQueryCapabilities(*(struct _DEVICE_OBJECT **)(a1 + 32), v3);
  if ( (int)result >= 0 )
    return PnpSaveDeviceCapabilities(a1, v3, 0LL);
  return result;
}
