/*
 * XREFs of RIMDiscoverSpecificDevice @ 0x1C00F9FF8
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00E4800 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RimInputTypeToDeviceType @ 0x1C00E5EE0 (RimInputTypeToDeviceType.c)
 *     RIMCreateDev @ 0x1C00F7534 (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1C00F78F4 (RIMFreeDev.c)
 *     RIMDoOnPnpNotification @ 0x1C00FAC6C (RIMDoOnPnpNotification.c)
 */

__int64 __fastcall RIMDiscoverSpecificDevice(CDeviceIdentity **Object, const UNICODE_STRING *a2)
{
  unsigned int v4; // eax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = RimInputTypeToDeviceType(*((_DWORD *)Object + 19));
  v5 = RIMCreateDev(Object, v4, a2, 1, 0, 0LL, &v9);
  if ( v5 >= 0 )
  {
    v6 = v9;
    v7 = v9;
    *(_DWORD *)(v9 + 184) |= 1u;
    v5 = RIMDoOnPnpNotification(Object, v7);
    if ( v5 < 0 )
      RIMFreeDev((__int64)Object, v6);
  }
  return (unsigned int)v5;
}
