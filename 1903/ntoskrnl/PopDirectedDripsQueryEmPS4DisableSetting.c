/*
 * XREFs of PopDirectedDripsQueryEmPS4DisableSetting @ 0x1405B1B5C
 * Callers:
 *     PopDirectedDripsInitializePhase3 @ 0x140A08E50 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x1405957C0 (EmClientQueryRuleState.c)
 */

__int64 __fastcall PopDirectedDripsQueryEmPS4DisableSetting(char *a1)
{
  char v2; // bl
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1;
  v4 = 1;
  result = EmClientQueryRuleState(&GUID_EM_RULE_DIRECTED_DRIPS_PLATFORM_DISABLE_PS4_MATCH, &v4);
  if ( (int)result < 0 || v4 != 2 )
    v2 = 0;
  *a1 = v2;
  return result;
}
