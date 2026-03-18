/*
 * XREFs of MNAllocPopup @ 0x1C01F9B2C
 * Callers:
 *     xxxMNStartMenuState @ 0x1C01FA6E4 (xxxMNStartMenuState.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01F8FE0 (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z @ 0x1C01F9010 (--$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01F9224 (-Allocate@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void *__fastcall MNAllocPopup(int a1)
{
  void *v1; // rbx
  __int64 **v2; // rcx

  if ( a1 || (gdwPUDFlags & 0x800000) != 0 )
  {
    v2 = (__int64 **)gpUserTypeIsolation[4];
    if ( v2 )
      v1 = (void *)NSInstrumentation::CTypeIsolation<24576,96>::Allocate(v2);
    else
      v1 = 0LL;
  }
  else
  {
    gdwPUDFlags |= 0x800000u;
    v1 = gpopupMenu;
  }
  if ( v1 )
  {
    memset(v1, 0, 0x60uLL);
    if ( !InitLookAsideRef<tagPOPUPMENU>((__int64)v1) )
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>((__int64)v1);
      return 0LL;
    }
  }
  return v1;
}
