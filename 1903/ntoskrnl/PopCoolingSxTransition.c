/*
 * XREFs of PopCoolingSxTransition @ 0x14016775C
 * Callers:
 *     PopThermalSxEntry @ 0x140167290 (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x140167360 (PopThermalSxExit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140167860 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140167A2C (PopTraceThermalRequestActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140727F50 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140746C58 (PopThermalUpdateActiveTimeTracking.c)
 */

void __fastcall PopCoolingSxTransition(char a1)
{
  __int64 i; // rdi
  __int64 v3; // rdx
  __int64 *j; // rbx
  __int64 v5; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive(i + 32);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 18) )
        {
          if ( a1 )
          {
            if ( *(_QWORD *)(i + 136) )
            {
              LOBYTE(v3) = *((_BYTE *)j + 16);
              PopThermalUpdatePassiveTimeTracking(j + 5, v3);
              PopTraceThermalRequestPassiveHistogram(j);
            }
            if ( *(_QWORD *)(i + 128) )
            {
              LOBYTE(v3) = *((_BYTE *)j + 17) == 0;
              PopThermalUpdateActiveTimeTracking(j + 5, v3);
              PopTraceThermalRequestActiveActivity(j);
            }
            *((_BYTE *)j + 40) = 1;
          }
          else
          {
            v5 = MEMORY[0xFFFFF78000000008];
            j[6] = MEMORY[0xFFFFF78000000008];
            j[7] = v5;
            *((_BYTE *)j + 40) = 0;
          }
        }
      }
      PopReleaseRwLock(i + 32);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
}
