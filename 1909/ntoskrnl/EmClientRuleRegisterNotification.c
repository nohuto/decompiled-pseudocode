/*
 * XREFs of EmClientRuleRegisterNotification @ 0x14084C790
 * Callers:
 *     <none>
 * Callees:
 *     EmpClientRuleRegisterNotification @ 0x14084C7B0 (EmpClientRuleRegisterNotification.c)
 */

__int64 __fastcall EmClientRuleRegisterNotification(void *a1)
{
  if ( a1 )
    return EmpClientRuleRegisterNotification(a1);
  else
    return 3221225485LL;
}
