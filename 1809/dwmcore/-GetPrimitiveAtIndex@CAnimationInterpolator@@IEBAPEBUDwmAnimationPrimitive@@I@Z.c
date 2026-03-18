/*
 * XREFs of ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x18021BA74
 * Callers:
 *     ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z @ 0x18021B6CC (-FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18021B8FC (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

const struct DwmAnimationPrimitive *__fastcall CAnimationInterpolator::GetPrimitiveAtIndex(
        CAnimationInterpolator *this,
        unsigned int a2)
{
  if ( a2 >= (***(unsigned int (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) )
    return 0LL;
  else
    return (const struct DwmAnimationPrimitive *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 8LL))(
                                                   *(_QWORD *)this,
                                                   a2);
}
