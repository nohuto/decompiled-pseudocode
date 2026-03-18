/*
 * XREFs of AuthzBasepFreeSecurityAttributeValues @ 0x140135534
 * Callers:
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x14000A730 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140085284 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x1401354E4 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x1403466CC (AuthzBasepRollbackSecurityAttributeChanges.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1401355A0 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributeValues(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _DWORD *v7; // rbp

  if ( !a2 )
  {
    v5 = (_QWORD *)(a1 + 72);
    while ( 1 )
    {
      v6 = (_QWORD *)*v5;
      if ( (_QWORD *)*v5 == v5 )
        break;
      LOBYTE(a3) = 1;
      AuthzBasepRemoveSecurityAttributeValueFromLists(a1, *v5, a3);
      ExFreePoolWithTag(v6, 0);
    }
  }
  v4 = *(_QWORD **)(a1 + 96);
  while ( v4 != (_QWORD *)(a1 + 96) )
  {
    v7 = v4 - 2;
    v4 = (_QWORD *)*v4;
    if ( (v7[8] & 1) == 0 )
    {
      AuthzBasepRemoveSecurityAttributeValueFromLists(a1, v7, 0LL);
      ExFreePoolWithTag(v7, 0);
    }
  }
}
