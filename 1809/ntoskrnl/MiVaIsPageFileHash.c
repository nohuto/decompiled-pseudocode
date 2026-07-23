/*
 * XREFs of MiVaIsPageFileHash @ 0x14009D9C8
 * Callers:
 *     MiActivePageClaimCandidate @ 0x14009C990 (MiActivePageClaimCandidate.c)
 *     MiLockStealSystemVm @ 0x1400E99F8 (MiLockStealSystemVm.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVaIsPageFileHash(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r11d
  int v3; // r10d
  __int64 i; // r9
  unsigned __int64 v5; // rcx

  v2 = *(_DWORD *)(a1 + 7128);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  for ( i = a1 + 7136; ; i += 8LL )
  {
    v5 = *(_QWORD *)(*(_QWORD *)i + 216LL);
    if ( v5 )
    {
      if ( a2 >= v5 && a2 < v5 + 4LL * *(_QWORD *)(*(_QWORD *)i + 8LL) )
        break;
    }
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return *(_QWORD *)i;
}
