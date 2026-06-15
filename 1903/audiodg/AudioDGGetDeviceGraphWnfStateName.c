/*
 * XREFs of AudioDGGetDeviceGraphWnfStateName @ 0x14003A740
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400046B4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?CreateDeviceGraphWnfState@@YAJXZ @ 0x14002A56C (-CreateDeviceGraphWnfState@@YAJXZ.c)
 */

__int64 __fastcall AudioDGGetDeviceGraphWnfStateName(__int64 a1, struct _WNF_STATE_NAME *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int DeviceGraphWnfState; // ebx

  DeviceGraphWnfState = CreateDeviceGraphWnfState();
  if ( DeviceGraphWnfState >= 0 )
  {
    PublishDeviceGraphWnfState(v4, v3);
    *a2 = g_DeviceGraphWnfStateName;
  }
  return (unsigned int)DeviceGraphWnfState;
}
