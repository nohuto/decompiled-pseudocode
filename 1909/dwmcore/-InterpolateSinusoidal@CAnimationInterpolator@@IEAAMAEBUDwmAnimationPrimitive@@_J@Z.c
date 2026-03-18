/*
 * XREFs of ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x180229CC0
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x1800B32D0 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180229A60 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     _o_sin_0 @ 0x1800E8E34 (_o_sin_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CAnimationInterpolator::InterpolateSinusoidal(
        CAnimationInterpolator *this,
        const struct DwmAnimationPrimitive *a2,
        int a3)
{
  double v4; // xmm6_8
  __int64 v5; // rax
  double v6; // xmm0_8

  v4 = (double)(a3 - *((_DWORD *)a2 + 2));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
  v6 = (double)(int)v5;
  if ( v5 < 0 )
    v6 = v6 + 1.844674407370955e19;
  return o_sin_0(*((float *)a2 + 6) * (v4 / v6) + *((float *)a2 + 7)) * *((float *)a2 + 5) + *((float *)a2 + 4);
}
