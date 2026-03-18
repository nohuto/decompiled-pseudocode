/*
 * XREFs of RIMChildInputTypeIsVirtualized @ 0x1C0058A58
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C00565AC (RIMDiscoverDevicesOfInputType.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0057780 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     isChildPartition @ 0x1C0031698 (isChildPartition.c)
 *     IsMouseIVEnabled @ 0x1C0031AA4 (IsMouseIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C004A2BC (IsPTPIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C018BF6C (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C018BFC8 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C018C03C (IsTouchIVEnabled.c)
 */

char __fastcall RIMChildInputTypeIsVirtualized(int a1)
{
  int *v3; // rcx

  if ( !isChildPartition() )
    return 0;
  if ( (dword_1C02169E8 & 1) == 0 )
  {
    dword_1C02169E8 |= 1u;
    dword_1C02168C8 = (unsigned __int8)IsMouseIVEnabled();
    dword_1C02168CC = 1;
    dword_1C02168D0 = (unsigned __int8)IsKeyboardIVEnabled();
    dword_1C02168D4 = 2;
    dword_1C02168D8 = (unsigned __int8)IsTouchIVEnabled();
    dword_1C02168DC = 16;
    dword_1C02168E0 = (unsigned __int8)IsPenIVEnabled();
    dword_1C02168E4 = 4;
    dword_1C02168E8 = (unsigned __int8)IsPTPIVEnabled();
    dword_1C02168EC = 8;
  }
  v3 = &dword_1C02168C8;
  while ( (v3[1] & a1) == 0 || !*v3 )
  {
    v3 += 2;
    if ( v3 == (int *)&Feature_PenTapped__private_propertyCache )
      return 0;
  }
  return 1;
}
