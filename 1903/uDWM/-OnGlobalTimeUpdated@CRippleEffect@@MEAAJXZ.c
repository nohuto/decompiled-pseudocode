/*
 * XREFs of ?OnGlobalTimeUpdated@CRippleEffect@@MEAAJXZ @ 0x180094E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRippleEffect::OnGlobalTimeUpdated(CRippleEffect *this)
{
  (*(void (__fastcall **)(CRippleEffect *, __int64))(*(_QWORD *)this + 24LL))(this, 0x4000LL);
  return 0LL;
}
