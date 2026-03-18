/*
 * XREFs of ??_GCTDR_GDI_RESET_THREAD@@MEAAPEAXI@Z @ 0x1C023C390
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVP_SYSTEM_THREAD@@MEAA@XZ @ 0x1C023C324 (--1CVP_SYSTEM_THREAD@@MEAA@XZ.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C023DE20 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

PVOID *__fastcall CTDR_GDI_RESET_THREAD::`scalar deleting destructor'(PVOID *this, char a2)
{
  *this = &CTDR_GDI_RESET_THREAD::`vftable';
  TdrDereferenceRecoveryContext(this[3], 0);
  CVP_SYSTEM_THREAD::~CVP_SYSTEM_THREAD((CVP_SYSTEM_THREAD *)this);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0x52445476u);
  return this;
}
