/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01F8FE0
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     MNAllocPopup @ 0x1C01F9B2C (MNAllocPopup.c)
 *     MNFlushDestroyedPopups @ 0x1C01F9C90 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C01F9F80 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C01FA6E4 (xxxMNStartMenuState.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C01F96D0 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
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
