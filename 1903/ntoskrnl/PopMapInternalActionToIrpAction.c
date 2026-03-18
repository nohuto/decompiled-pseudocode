/*
 * XREFs of PopMapInternalActionToIrpAction @ 0x14015EC44
 * Callers:
 *     PopRequestPowerIrp @ 0x140172EB0 (PopRequestPowerIrp.c)
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 *     PopNotifyDevice @ 0x1405985F0 (PopNotifyDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopMapInternalActionToIrpAction(unsigned int a1, int a2, char a3)
{
  __int64 result; // rax

  result = 7LL;
  if ( a1 == 7 )
  {
    if ( a3 )
      return 3 - (unsigned int)(a2 != 5);
  }
  else
  {
    if ( a2 == 5 )
      return 3;
    return a1;
  }
  return result;
}
