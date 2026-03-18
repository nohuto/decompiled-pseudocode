/*
 * XREFs of AuthzBasepFinaliseSecurityAttributesList @ 0x140084D64
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140084C80 (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x14000A7C0 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x14034612C (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall AuthzBasepFinaliseSecurityAttributesList(__int64 a1, char a2, _QWORD *a3)
{
  _QWORD *v4; // rsi
  _QWORD *result; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  char v9; // al

  v4 = (_QWORD *)(a1 + 32);
  while ( 1 )
  {
    result = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v7 = result - 2;
    v8 = (__int64)(result - 2);
    if ( a2 )
      v9 = AuthzBasepCommitSecurityAttributeChanges(a1, v8, a3);
    else
      v9 = AuthzBasepRollbackSecurityAttributeChanges(a1, v8);
    if ( v9 )
      ExFreePoolWithTag(v7, 0);
  }
  return result;
}
