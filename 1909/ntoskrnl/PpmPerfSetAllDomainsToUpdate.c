/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x14015D048
 * Callers:
 *     PpmCheckStart @ 0x14009E580 (PpmCheckStart.c)
 *     PpmPerfReApplyStates @ 0x1407263F8 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14074501C (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     <none>
 */

__int64 PpmPerfSetAllDomainsToUpdate()
{
  __int64 result; // rax

  for ( result = PpmPerfDomainHead; (__int64 *)result != &PpmPerfDomainHead; result = *(_QWORD *)result )
    *(_BYTE *)(result + 685) = 1;
  return result;
}
