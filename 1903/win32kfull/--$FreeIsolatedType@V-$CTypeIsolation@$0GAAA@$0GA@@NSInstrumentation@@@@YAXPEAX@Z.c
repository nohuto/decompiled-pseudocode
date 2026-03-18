/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C020FC7C
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     MNAllocPopup @ 0x1C02107C8 (MNAllocPopup.c)
 *     MNFlushDestroyedPopups @ 0x1C0210930 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C0210C40 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C0211324 (xxxMNStartMenuState.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C02102E8 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

unsigned __int8 **__fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(__int64 a1)
{
  unsigned __int8 **result; // rax
  unsigned __int8 *v3; // rcx

  result = gpUserTypeIsolation;
  v3 = gpUserTypeIsolation[4];
  if ( v3 )
    return (unsigned __int8 **)NSInstrumentation::CTypeIsolation<24576,96>::Free(v3, a1);
  return result;
}
