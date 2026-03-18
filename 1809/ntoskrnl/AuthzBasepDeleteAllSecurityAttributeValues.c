/*
 * XREFs of AuthzBasepDeleteAllSecurityAttributeValues @ 0x140134658
 * Callers:
 *     AuthzBasepDeleteSecurityAttribute @ 0x1400D91F8 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x1403249E0 (AuthzBasepDeleteAllSecurityAttributes.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x1400D9018 (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1401346A8 (AuthzBasepFreeSecurityAttributeValues.c)
 */

__int64 __fastcall AuthzBasepDeleteAllSecurityAttributeValues(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  __int64 i; // rdx
  int v5; // eax
  __int64 result; // rax

  LOBYTE(a2) = 1;
  AuthzBasepFreeSecurityAttributeValues(a1, a2);
  v3 = a1 + 72;
  for ( i = *(_QWORD *)(a1 + 72); i != v3; i = *(_QWORD *)i )
  {
    v5 = *(_DWORD *)(i + 32);
    if ( (v5 & 2) == 0 )
    {
      *(_DWORD *)(i + 32) = v5 | 4;
      AuthzBasepAddSecurityAttributeValueToLists(a1, i, 0, 1);
    }
  }
  result = *(unsigned int *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = result;
  return result;
}
