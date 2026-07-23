/*
 * XREFs of PpmPerfClearResponsivenessHints @ 0x140189F38
 * Callers:
 *     PpmCheckReInit @ 0x140750304 (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

__int64 PpmPerfClearResponsivenessHints()
{
  __int64 i; // rdx
  unsigned int v1; // r8d
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    v1 = 0;
    for ( *(_BYTE *)(i + 364) = 0; v1 < *(_DWORD *)(i + 200); *(_BYTE *)(v3 + result + 60) = 0 )
    {
      v2 = v1++;
      v3 = 136 * v2;
      result = *(_QWORD *)(i + 208);
    }
  }
  return result;
}
