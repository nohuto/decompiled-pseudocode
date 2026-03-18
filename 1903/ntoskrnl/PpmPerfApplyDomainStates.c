/*
 * XREFs of PpmPerfApplyDomainStates @ 0x14010C910
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyDomainState @ 0x14010C980 (PpmPerfApplyDomainState.c)
 *     KeIsSubsetAffinityEx @ 0x1402A4EA0 (KeIsSubsetAffinityEx.c)
 */

char PpmPerfApplyDomainStates()
{
  __int64 k; // rbx
  __int64 i; // rbx
  __int64 j; // rbx

  if ( PpmPerfArtificialDomainEnabled )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 685) && !(unsigned int)KeIsSubsetAffinityEx(i + 24, &PpmPerfNewCoreParkingMask) )
      {
        for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
        {
          if ( !(unsigned int)KeIsSubsetAffinityEx(j + 24, &PpmPerfNewCoreParkingMask) )
            *(_BYTE *)(j + 685) = 1;
        }
        break;
      }
    }
  }
  for ( k = PpmPerfDomainHead; (__int64 *)k != &PpmPerfDomainHead; k = *(_QWORD *)k )
  {
    if ( *(_BYTE *)(k + 685) )
    {
      if ( (unsigned __int8)PpmPerfApplyDomainState(k) )
        *(_BYTE *)(k + 686) = 1;
      *(_BYTE *)(k + 685) = 0;
    }
  }
  return 1;
}
