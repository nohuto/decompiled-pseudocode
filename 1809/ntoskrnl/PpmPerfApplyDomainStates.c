/*
 * XREFs of PpmPerfApplyDomainStates @ 0x140063AB0
 * Callers:
 *     <none>
 * Callees:
 *     KeAndAffinityEx @ 0x1400DC780 (KeAndAffinityEx.c)
 *     PpmPerfApplyDomainState @ 0x140112990 (PpmPerfApplyDomainState.c)
 *     KeIsEqualAffinityEx @ 0x14018A430 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char PpmPerfApplyDomainStates()
{
  __int64 i; // rdi
  __int64 j; // rdi
  __int64 k; // rbx
  _BYTE v4[176]; // [rsp+20h] [rbp-C8h] BYREF

  if ( PpmPerfArtificialDomainEnabled )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 685) )
      {
        KeAndAffinityEx(i + 24, &PpmPerfNewCoreParkingMask, v4);
        if ( !(unsigned int)KeIsEqualAffinityEx(i + 24, v4) )
        {
          for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
          {
            KeAndAffinityEx(j + 24, &PpmPerfNewCoreParkingMask, v4);
            if ( !(unsigned int)KeIsEqualAffinityEx(j + 24, v4) )
              *(_BYTE *)(j + 685) = 1;
          }
          break;
        }
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
