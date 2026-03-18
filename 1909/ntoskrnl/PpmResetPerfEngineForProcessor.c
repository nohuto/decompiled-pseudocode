/*
 * XREFs of PpmResetPerfEngineForProcessor @ 0x14015F44C
 * Callers:
 *     PopHandleNextState @ 0x140598DB0 (PopHandleNextState.c)
 * Callees:
 *     PpmResetPerfTimes @ 0x140180AFC (PpmResetPerfTimes.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PpmResetPerfEngineForProcessor(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  void (__fastcall *v4)(_QWORD); // rax
  __int64 i; // rbx
  unsigned int j; // esi
  unsigned int k; // esi
  __int64 v9; // rcx

  if ( !*(_DWORD *)(a1 + 36) )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 207) )
      {
        if ( *(_QWORD *)(i + 264) )
        {
          for ( j = 0; j < *(_DWORD *)(i + 200); ++j )
            (*(void (__fastcall **)(_QWORD))(i + 264))(*(_QWORD *)(136LL * j + *(_QWORD *)(i + 208) + 8));
        }
      }
    }
  }
  v2 = *(_QWORD *)(a1 + 24176);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 24184);
    if ( v3 )
    {
      v4 = *(void (__fastcall **)(_QWORD))(v2 + 264);
      if ( v4 )
      {
        v4(*(_QWORD *)(v3 + 8));
        if ( a1 == *(_QWORD *)(v2 + 16) )
        {
          for ( k = 0; k < *(_DWORD *)(v2 + 200); ++k )
          {
            v9 = *(_QWORD *)(v2 + 208) + 136LL * k;
            if ( *(_BYTE *)(v9 + 16) )
              (*(void (__fastcall **)(_QWORD))(v2 + 264))(*(_QWORD *)(v9 + 8));
          }
        }
      }
    }
  }
  return PpmResetPerfTimes(a1);
}
