/*
 * XREFs of KiGetSavedSupervisorState @ 0x1402948E0
 * Callers:
 *     KiGetSavedIptState @ 0x140294830 (KiGetSavedIptState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetSavedSupervisorState(unsigned int a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( KeGetCurrentIrql() != 15 )
    return 3221225473LL;
  if ( a1 >= (unsigned int)KeNumberProcessors_0 )
    return 3221225485LL;
  _mm_lfence();
  v3 = KiProcessorBlock[a1];
  if ( !v3 )
    return 3221225473LL;
  v4 = *(_QWORD *)(v3 + 1728);
  if ( !v4 )
    return 3221225473LL;
  *a2 = v4;
  return 0LL;
}
