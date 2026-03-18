/*
 * XREFs of Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C00631E8
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_UpdateIdleTimeout @ 0x1C00630D0 (Controller_UpdateIdleTimeout.c)
 */

_UNKNOWN **__fastcall Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v3; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 420) <= 2u && !*(_DWORD *)(a1 + 464) && *(_DWORD *)(a1 + 512) != 5000 )
  {
    Controller_UpdateIdleTimeout((__int64 *)a1, 5000);
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = 5000;
      return (_UNKNOWN **)WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 4u, 0x1Cu, (__int64)&Context.Logger + 4, v3);
    }
  }
  return result;
}
