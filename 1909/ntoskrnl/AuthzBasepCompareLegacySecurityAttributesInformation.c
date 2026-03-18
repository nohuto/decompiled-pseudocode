/*
 * XREFs of AuthzBasepCompareLegacySecurityAttributesInformation @ 0x14061B8D4
 * Callers:
 *     NtCompareTokens @ 0x14061B9D0 (NtCompareTokens.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1400CF9D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x14061B828 (AuthzBasepCompareSecurityAttribute.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x14061B99C (AuthzBasepIsCompareRelevantAttribute.c)
 */

bool __fastcall AuthzBasepCompareLegacySecurityAttributesInformation(int *a1, __int64 a2)
{
  int v2; // ebp
  char v3; // bl
  int v4; // esi
  int *v6; // r14
  __int64 i; // rdi
  const UNICODE_STRING *SecurityAttribute; // rax
  _QWORD *v10; // rdi
  char IsCompareRelevantAttribute; // al
  int v12; // ecx

  v2 = *a1;
  v3 = 0;
  v4 = *(_DWORD *)a2;
  if ( !*a1 && !v4 )
    return 1;
  v6 = a1 + 2;
  for ( i = *((_QWORD *)a1 + 1); (int *)i != v6; i = *(_QWORD *)i )
  {
    if ( (unsigned __int8)AuthzBasepIsCompareRelevantAttribute(i) )
    {
      SecurityAttribute = AuthzBasepFindSecurityAttribute(a2, (const UNICODE_STRING *)(i + 32));
      if ( !SecurityAttribute || !AuthzBasepCompareSecurityAttribute(i, (__int64)SecurityAttribute) )
        return v3;
    }
    else
    {
      --v2;
    }
  }
  v10 = *(_QWORD **)(a2 + 8);
  while ( v10 != (_QWORD *)(a2 + 8) )
  {
    IsCompareRelevantAttribute = AuthzBasepIsCompareRelevantAttribute(v10);
    v10 = (_QWORD *)*v10;
    v12 = v4 - 1;
    if ( IsCompareRelevantAttribute )
      v12 = v4;
    v4 = v12;
  }
  return v2 == v4;
}
