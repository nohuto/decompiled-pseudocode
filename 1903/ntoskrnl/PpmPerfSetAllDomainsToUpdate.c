/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x14015C9A8
 * Callers:
 *     PpmCheckStart @ 0x1400BE700 (PpmCheckStart.c)
 *     PpmPerfReApplyStates @ 0x140724558 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14074311C (PpmPerfUpdateDomainPolicy.c)
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
