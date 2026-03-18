/*
 * XREFs of PoSetThermalPassiveCooling @ 0x1408A31A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopPropogateCoolingChange @ 0x140199FE8 (PopPropogateCoolingChange.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1407292C0 (PopThermalUpdatePassiveTimeTracking.c)
 *     PoGetThermalRequestSupport @ 0x1407821B0 (PoGetThermalRequestSupport.c)
 *     PopDiagTraceThermalRequestPassiveUpdate @ 0x1408B0BC4 (PopDiagTraceThermalRequestPassiveUpdate.c)
 */

__int64 __fastcall PoSetThermalPassiveCooling(__int64 a1, unsigned __int8 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned __int8 v6; // dl

  v4 = 0;
  if ( PoGetThermalRequestSupport(a1, 0) )
  {
    if ( a2 <= 0x64u )
    {
      v5 = *(_QWORD *)(a1 + 32);
      PopAcquireRwLockExclusive(v5 + 32);
      if ( *(_BYTE *)(a1 + 18) )
      {
        v6 = *(_BYTE *)(a1 + 16);
        if ( v6 != a2 )
        {
          PopThermalUpdatePassiveTimeTracking(a1 + 40, v6);
          *(_BYTE *)(a1 + 16) = a2;
          PopDiagTraceThermalRequestPassiveUpdate(a1);
          PopPropogateCoolingChange(v5);
        }
      }
      else
      {
        v4 = -1073741431;
      }
      PopReleaseRwLock(v5 + 32);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
