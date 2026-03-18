/*
 * XREFs of ?CalculateNaturalEndpoint@CPositionMotion@@MEBAMXZ @ 0x1801E0900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x1801E0BA8 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 */

float __fastcall CPositionMotion::CalculateNaturalEndpoint(CPositionMotion *this)
{
  float v2; // xmm6_4
  float v3; // xmm0_4

  v2 = *((float *)this + 43) / *((float *)this + 40);
  v3 = (*(float (__fastcall **)(CPositionMotion *))(*(_QWORD *)this + 40LL))(this);
  return (float)((float)((float)(CPositionMotion::UnboundedInertiaPanningAtTime(this, v3) + *((float *)this + 11))
                       - *((float *)this + 42))
               * v2)
       + *((float *)this + 42);
}
