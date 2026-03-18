/*
 * XREFs of RIMDiscoverSpecificDevice @ 0x1C014E248
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C005A290 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMCreateDev @ 0x1C0057C10 (RIMCreateDev.c)
 *     RimInputTypeToDeviceType @ 0x1C005B520 (RimInputTypeToDeviceType.c)
 *     RIMDoOnPnpNotification @ 0x1C00A4EFC (RIMDoOnPnpNotification.c)
 *     RIMFreeDev @ 0x1C014B7F4 (RIMFreeDev.c)
 */

__int64 __fastcall RIMDiscoverSpecificDevice(CDeviceIdentity **Object, __int64 a2)
{
  unsigned int v4; // eax
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = RimInputTypeToDeviceType(*((_DWORD *)Object + 21));
  v5 = RIMCreateDev(Object, v4, a2, 1, 0, 0LL, &v11);
  if ( v5 >= 0 )
  {
    v7 = v11;
    v8 = v11;
    *(_DWORD *)(v11 + 184) |= 1u;
    v5 = RIMDoOnPnpNotification(Object, v8, v6);
    if ( v5 < 0 )
      RIMFreeDev((__int64)Object, v7, v9);
  }
  return (unsigned int)v5;
}
