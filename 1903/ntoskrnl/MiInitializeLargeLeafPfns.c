/*
 * XREFs of MiInitializeLargeLeafPfns @ 0x1402DFDF0
 * Callers:
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiDoGangAssignment @ 0x1402E845C (MiDoGangAssignment.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14013D07C (MiGetLeafPfnBuddy.c)
 *     MiInitializeLargeLeafPfn @ 0x1402DFBF4 (MiInitializeLargeLeafPfn.c)
 */

void __fastcall MiInitializeLargeLeafPfns(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *LeafPfnBuddy; // rbx

  if ( a1 )
  {
    LeafPfnBuddy = a1;
    do
    {
      MiInitializeLargeLeafPfn((unsigned __int64)LeafPfnBuddy, a2);
      LeafPfnBuddy = (_QWORD *)MiGetLeafPfnBuddy(LeafPfnBuddy);
    }
    while ( LeafPfnBuddy );
  }
}
