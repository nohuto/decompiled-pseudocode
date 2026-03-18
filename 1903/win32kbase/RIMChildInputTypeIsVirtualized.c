/*
 * XREFs of RIMChildInputTypeIsVirtualized @ 0x1C006C9B8
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C006A50C (RIMDiscoverDevicesOfInputType.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C006B6E0 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     isChildPartition @ 0x1C00323E8 (isChildPartition.c)
 *     IsMouseIVEnabled @ 0x1C00327F4 (IsMouseIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C00421F8 (IsPTPIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C018E15C (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C018E1B8 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C018E22C (IsTouchIVEnabled.c)
 */

char __fastcall RIMChildInputTypeIsVirtualized(int a1)
{
  int *v3; // rcx

  if ( !isChildPartition() )
    return 0;
  if ( (dword_1C02199F0 & 1) == 0 )
  {
    dword_1C02199F0 |= 1u;
    dword_1C02198C8 = (unsigned __int8)IsMouseIVEnabled();
    dword_1C02198CC = 1;
    dword_1C02198D0 = (unsigned __int8)IsKeyboardIVEnabled();
    dword_1C02198D4 = 2;
    dword_1C02198D8 = (unsigned __int8)IsTouchIVEnabled();
    dword_1C02198DC = 16;
    dword_1C02198E0 = (unsigned __int8)IsPenIVEnabled();
    dword_1C02198E4 = 4;
    dword_1C02198E8 = (unsigned __int8)IsPTPIVEnabled();
    dword_1C02198EC = 8;
  }
  v3 = &dword_1C02198C8;
  while ( (v3[1] & a1) == 0 || !*v3 )
  {
    v3 += 2;
    if ( v3 == (int *)&Feature_PenTapped__private_propertyCache )
      return 0;
  }
  return 1;
}
