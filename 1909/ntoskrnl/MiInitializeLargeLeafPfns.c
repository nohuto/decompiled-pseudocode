/*
 * XREFs of MiInitializeLargeLeafPfns @ 0x1402DFB50
 * Callers:
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiDoGangAssignment @ 0x1402E81BC (MiDoGangAssignment.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14013D5BC (MiGetLeafPfnBuddy.c)
 *     MiInitializeLargeLeafPfn @ 0x1402DF954 (MiInitializeLargeLeafPfn.c)
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
