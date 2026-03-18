/*
 * XREFs of MNAllocPopup @ 0x1C0210288
 * Callers:
 *     xxxMNStartMenuState @ 0x1C0210DE4 (xxxMNStartMenuState.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C020F73C (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z @ 0x1C020F76C (--$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C020F980 (-Allocate@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void *__fastcall MNAllocPopup(int a1, void *a2)
{
  void *v2; // rbx
  __int64 **v3; // rcx

  if ( a1 || (gdwPUDFlags & 0x800000) != 0 )
  {
    v3 = (__int64 **)gpUserTypeIsolation[4];
    if ( v3 )
      v2 = NSInstrumentation::CTypeIsolation<24576,96>::Allocate(v3, a2);
    else
      v2 = 0LL;
  }
  else
  {
    gdwPUDFlags |= 0x800000u;
    v2 = gpopupMenu;
  }
  if ( v2 )
  {
    memset(v2, 0, 0x60uLL);
    if ( !InitLookAsideRef<tagPOPUPMENU>((__int64)v2) )
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>((__int64)v2);
      return 0LL;
    }
  }
  return v2;
}
