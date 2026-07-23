/*
 * XREFs of AuthzBasepGetOperandStringCaseForEvaluation @ 0x1400A46AC
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400A4510 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140325320 (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetOperandStringCaseForEvaluation(__int64 a1, char *a2)
{
  char v2; // r8
  __int64 v3; // rax
  unsigned __int8 CurrentIrql; // al

  v2 = 1;
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    v3 = *(_QWORD *)(a1 + 56);
LABEL_3:
    v2 = *(_BYTE *)(v3 + 36) & 2;
    goto LABEL_4;
  }
  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 52) == 1 )
    goto LABEL_3;
  if ( (*(_DWORD *)(v3 + 36) & 2) == 0 )
    v2 = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 36LL) & 2) != 0;
LABEL_4:
  *a2 = v2;
  CurrentIrql = KeGetCurrentIrql();
  if ( v2 || CurrentIrql < 2u )
    return 0LL;
  else
    return 3221225659LL;
}
