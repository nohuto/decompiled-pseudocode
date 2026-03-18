/*
 * XREFs of ?GetModifiedRestingValue@CMotion@@QEBAMXZ @ 0x1801DFC5C
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18019E6E0 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CMotion::GetModifiedRestingValue(CMotion *this)
{
  __int64 v2; // rcx
  float result; // xmm0_4

  v2 = *((_QWORD *)this + 17);
  if ( !v2 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2) )
    return fminf(fmaxf(*((float *)this + 15), *((float *)this + 16)), *((float *)this + 9));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 40LL))(*((_QWORD *)this + 17));
  return result;
}
