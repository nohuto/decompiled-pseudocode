/*
 * XREFs of ProcgrpRevertToUserAffinityThreadEx @ 0x1C00943D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ProcgrpRevertToUserAffinityThreadEx(unsigned __int64 Affinity)
{
  if ( !Affinity )
    KeRevertToUserAffinityThread();
}
