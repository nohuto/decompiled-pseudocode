/*
 * XREFs of MmMapViewInSessionSpaceEx @ 0x1406BC850
 * Callers:
 *     MmMapViewInSessionSpace @ 0x1406BC820 (MmMapViewInSessionSpace.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1405E03F4 (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall MmMapViewInSessionSpaceEx(__int64 a1, _QWORD *a2, unsigned __int64 *a3, __int64 *a4, __int64 a5)
{
  _KPROCESS *Process; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return MiMapViewInSystemSpace(a1, Process[1].ActiveProcessors.Bitmap[2] + 2944, a2, a3, a4, a5, 0LL);
  else
    return 3221225497LL;
}
