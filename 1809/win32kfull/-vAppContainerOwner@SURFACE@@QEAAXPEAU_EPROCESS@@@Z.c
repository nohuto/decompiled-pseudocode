/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0126238
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00743A0 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00C83F0 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, struct _EPROCESS *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = (unsigned __int64)a2;
  if ( a2 )
  {
    a3 = -(__int64)((unsigned int)UserIsProcessImmersiveAppContainer(a2) != 0);
    v4 &= a3;
  }
  GreAcquireHmgrSemaphore(this, a2, a3, a4);
  HmgPentryFromPobj(this);
  *((_QWORD *)this + 80) = v4;
  GreReleaseHmgrSemaphore(v7, v6);
}
