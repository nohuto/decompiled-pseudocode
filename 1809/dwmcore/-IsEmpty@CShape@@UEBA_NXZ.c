/*
 * XREFs of ?IsEmpty@CShape@@UEBA_NXZ @ 0x18005FFB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CShape::IsEmpty(CShape *this)
{
  float v2[4]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(CShape *, float *, _QWORD))(*(_QWORD *)this + 32LL))(this, v2, 0LL);
  return v2[2] <= v2[0] || v2[3] <= v2[1];
}
