/*
 * XREFs of ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x1C0091750
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00E3170 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall OPM::OPMFreeMemory(OPM *this, void *a2)
{
  if ( this )
    ExFreePoolWithTag(this, 0x4D504F47u);
}
