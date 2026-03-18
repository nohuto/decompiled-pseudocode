/*
 * XREFs of HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure @ 0x1C0023754
 * Callers:
 *     HUBDSM_CheckingIfEndpointsToBeDisabledOnDetach @ 0x1C001F850 (HUBDSM_CheckingIfEndpointsToBeDisabledOnDetach.c)
 * Callees:
 *     memmove @ 0x1C003C640 (memmove.c)
 */

__int64 __fastcall HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 i; // rdx
  __int64 v8; // rax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 112);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    if ( v3 )
    {
      v4 = v3 + 16;
      v5 = *(_QWORD *)(v3 + 16);
      v6 = v5 - 8;
      if ( v4 != v5 )
      {
        do
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v6 + 24); i = (unsigned int)(i + 1) )
          {
            if ( *(_DWORD *)(v6 + 72 * i + 48) == 3 )
              *(_DWORD *)(v6 + 72 * i + 48) = 6;
          }
          v8 = *(_QWORD *)(v6 + 8);
          v6 = v8 - 8;
        }
        while ( v4 != v8 );
        v1 = *(_DWORD *)(a1 + 112);
      }
      memmove((void *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(a1 + 144)), *(const void **)(a1 + 104), 8LL * v1);
      *(_DWORD *)(a1 + 144) += *(_DWORD *)(a1 + 112);
      *(_DWORD *)(a1 + 112) = 0;
    }
  }
  result = 4089LL;
  if ( !*(_DWORD *)(a1 + 128) )
    return 4061LL;
  return result;
}
