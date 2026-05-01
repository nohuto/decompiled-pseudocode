/*
 * XREFs of ??0ModernResourceEnforcer@@IEAA@XZ @ 0x180040DA0
 * Callers:
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x180040C60 (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 * Callees:
 *     <none>
 */

ModernResourceEnforcer *__fastcall ModernResourceEnforcer::ModernResourceEnforcer(ModernResourceEnforcer *this)
{
  *(_QWORD *)this = &ModernResourceEnforcer::`vftable';
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 56) = 1;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 36) = (char *)this + 280;
  *((_QWORD *)this + 35) = (char *)this + 280;
  RtlInitializeCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 232));
  return this;
}
