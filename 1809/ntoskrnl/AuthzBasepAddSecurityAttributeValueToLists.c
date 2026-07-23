/*
 * XREFs of AuthzBasepAddSecurityAttributeValueToLists @ 0x1400D90B8
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400CC690 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x1400D8F0C (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x140134748 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140324D28 (AuthzBasepDeleteSecurityAttributeValues.c)
 * Callees:
 *     <none>
 */

void __fastcall AuthzBasepAddSecurityAttributeValueToLists(__int64 a1, __int64 a2, char a3, char a4)
{
  _QWORD *v5; // r9
  _QWORD *v6; // r8
  _QWORD *v7; // r8

  if ( a4 && (*(_DWORD *)(a2 + 32) & 2) == 0 )
  {
    v5 = *(_QWORD **)(a1 + 104);
    v6 = (_QWORD *)(a2 + 16);
    if ( *v5 != a1 + 96 )
      goto LABEL_10;
    *v6 = a1 + 96;
    *(_QWORD *)(a2 + 24) = v5;
    *v5 = v6;
    *(_QWORD *)(a1 + 104) = v6;
    *(_DWORD *)(a2 + 32) |= 2u;
    ++*(_DWORD *)(a1 + 88);
  }
  if ( a3 && (*(_DWORD *)(a2 + 32) & 1) == 0 )
  {
    v7 = *(_QWORD **)(a1 + 80);
    if ( *v7 == a1 + 72 )
    {
      *(_QWORD *)a2 = a1 + 72;
      *(_QWORD *)(a2 + 8) = v7;
      *v7 = a2;
      *(_QWORD *)(a1 + 80) = a2;
      *(_DWORD *)(a2 + 32) |= 1u;
      ++*(_DWORD *)(a1 + 60);
      return;
    }
LABEL_10:
    __fastfail(3u);
  }
}
