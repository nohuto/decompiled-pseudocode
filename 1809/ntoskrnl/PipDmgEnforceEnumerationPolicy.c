/*
 * XREFs of PipDmgEnforceEnumerationPolicy @ 0x14083A580
 * Callers:
 *     PiDmaGuardAddDevice @ 0x1407035D8 (PiDmaGuardAddDevice.c)
 * Callees:
 *     PipDmaGuardBlockAddDevice @ 0x14083A458 (PipDmaGuardBlockAddDevice.c)
 *     PiCslIsConsoleLocked @ 0x14083B3D4 (PiCslIsConsoleLocked.c)
 *     PiIommuIsDeviceSafeWhileConsoleLocked @ 0x14083E034 (PiIommuIsDeviceSafeWhileConsoleLocked.c)
 */

__int64 __fastcall PipDmgEnforceEnumerationPolicy(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  bool v4; // al

  v1 = 0;
  v2 = *(_QWORD *)(BugCheckParameter2 + 720);
  if ( PipDmaGuardPolicy != 1 )
  {
    if ( PipDmaGuardPolicy == 2 )
    {
      if ( !(unsigned __int8)PiCslIsConsoleLocked() || (unsigned __int8)PiIommuIsDeviceSafeWhileConsoleLocked(v2) )
        return v1;
      v4 = 1;
    }
    else
    {
      if ( PipDmaGuardPolicy != 3 )
        __fastfail(5u);
      v4 = (unsigned __int8)PiIommuIsDeviceSafeWhileConsoleLocked(*(_QWORD *)(BugCheckParameter2 + 720)) == 0;
    }
    if ( v4 )
      return (unsigned int)PipDmaGuardBlockAddDevice(BugCheckParameter2);
  }
  return v1;
}
