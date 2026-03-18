/*
 * XREFs of ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x1C00BAF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall OPM::OPMFreeMemory(OPM *this, void *a2)
{
  if ( this )
    ExFreePoolWithTag(this, 0x4D504F47u);
}
