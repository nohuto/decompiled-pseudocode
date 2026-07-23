/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x140141FD4
 * Callers:
 *     PpmCheckStart @ 0x14008B8D0 (PpmCheckStart.c)
 *     PpmPerfReApplyStates @ 0x1406DE270 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14071AE2C (PpmPerfUpdateDomainPolicy.c)
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
