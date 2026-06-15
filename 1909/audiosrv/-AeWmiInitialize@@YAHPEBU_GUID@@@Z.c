/*
 * XREFs of ?AeWmiInitialize@@YAHPEBU_GUID@@@Z @ 0x1800505DC
 * Callers:
 *     DllMain @ 0x180067C84 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AeWmiInitialize(const struct _GUID *a1)
{
  GUID *v2; // [rsp+40h] [rbp-18h] BYREF

  g_fEventTracingEnabled = 1;
  v2 = &GUID_NULL;
  if ( !(unsigned int)((__int64 (__fastcall *)(unsigned int (__fastcall *)(enum WMIDPREQUESTCODE, void *, unsigned int *, void *), _QWORD, void *, __int64, GUID **, _QWORD, _QWORD, __int64 *))EtwRegisterTraceGuidsW)(
                        AeWmiCallback,
                        0LL,
                        &AEWMIGUID,
                        1LL,
                        &v2,
                        0LL,
                        0LL,
                        &qword_18014D020) )
    return 1LL;
  g_fEventTracingEnabled = 0;
  return 0LL;
}
