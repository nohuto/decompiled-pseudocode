/*
 * XREFs of PpmPerfSelectDomainStates @ 0x140111E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmPerfSelectDomainStates()
{
  __int64 i; // rcx
  unsigned int v1; // eax
  char v2; // r11
  char v3; // r9
  unsigned int v4; // r8d
  __int64 v5; // r10
  __int64 v6; // rdx
  unsigned int v7; // eax

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    v1 = *(_DWORD *)(i + 200);
    v2 = 0;
    v3 = 0;
    v4 = 1;
    if ( v1 )
    {
      v5 = v1;
      v6 = *(_QWORD *)(i + 208) + 56LL;
      do
      {
        if ( !*(_BYTE *)(v6 - 40) )
        {
          v7 = *(_DWORD *)v6;
          if ( *(_DWORD *)v6 <= v4 )
            v7 = v4;
          v4 = v7;
          if ( *(_BYTE *)(v6 + 4) )
            v3 = 1;
        }
        v6 += 136LL;
        --v5;
      }
      while ( v5 );
    }
    if ( *(_DWORD *)(i + 356) != v4 || *(_BYTE *)(i + 364) != v3 )
      v2 = 1;
    *(_DWORD *)(i + 356) = v4;
    *(_BYTE *)(i + 364) = v3;
    if ( v2 )
      *(_BYTE *)(i + 685) = 1;
  }
  return 1;
}
