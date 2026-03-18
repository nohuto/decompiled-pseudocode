/*
 * XREFs of Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C005BB94
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010120 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Controller_UpdateIdleTimeout @ 0x1C005BA90 (Controller_UpdateIdleTimeout.c)
 */

__int64 __fastcall Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 352) <= 2u && !*(_DWORD *)(a1 + 400) && *(_DWORD *)(a1 + 448) != 5000 )
  {
    Controller_UpdateIdleTimeout((__int64 *)a1, 5000);
    v3 = 5000;
    return WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 4u, 0x1Cu, (__int64)&Context.Logger + 4, v3);
  }
  return result;
}
