/*
 * XREFs of KeDoesTebMatchThread @ 0x1402B6DE0
 * Callers:
 *     PspGetSetContextInternal @ 0x1405E7FD0 (PspGetSetContextInternal.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CD184 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeDoesTebMatchThread(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( a2 )
    return a2 == *(_QWORD *)(a1 + 240);
  return result;
}
