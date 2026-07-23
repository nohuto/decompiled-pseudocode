/*
 * XREFs of RtlStringCopyWorkerA_0 @ 0x14012A90C
 * Callers:
 *     RtlStringCchCopyA @ 0x14012A8C4 (RtlStringCchCopyA.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1409C022C (EmpParseTargetRuleStringIndexList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerA_0(
        NTSTRSAFE_PSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZCH pszSrc,
        size_t cchToCopy)
{
  NTSTRSAFE_PSTR v5; // r8
  signed __int64 v7; // r9
  char v8; // cl
  NTSTRSAFE_PSTR v9; // rcx
  NTSTATUS result; // eax

  v5 = pszDest;
  if ( cchDest )
  {
    v7 = pszSrc - pszDest;
    do
    {
      if ( !cchToCopy )
        break;
      v8 = v5[v7];
      if ( !v8 )
        break;
      *v5 = v8;
      --cchToCopy;
      ++v5;
      --cchDest;
    }
    while ( cchDest );
  }
  v9 = v5 - 1;
  result = cchDest == 0 ? 0x80000005 : 0;
  if ( cchDest )
    v9 = v5;
  *v9 = 0;
  return result;
}
