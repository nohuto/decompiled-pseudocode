/*
 * XREFs of PpmPerfForceDomainStates @ 0x140177E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmPerfForceDomainStates()
{
  __int64 i; // r8
  unsigned int v1; // r9d
  __int64 v2; // rax

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 685) )
    {
      v1 = 0;
      for ( *(_BYTE *)(i + 684) = 1; v1 < *(_DWORD *)(i + 200); *(_BYTE *)(136 * v2 + *(_QWORD *)(i + 208) + 120) = 1 )
        v2 = v1++;
    }
  }
  return 1;
}
