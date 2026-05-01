/*
 * XREFs of ?UpdateGhostDivider@JointResize@@AEAAXUtagPOINT@@@Z @ 0x1803D1718
 * Callers:
 *     _lambda_2c3efae7d26e0e657137d3ad3e752f20_::operator() @ 0x1803CF4D4 (_lambda_2c3efae7d26e0e657137d3ad3e752f20_--operator().c)
 *     ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x1803D0960 (-OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall JointResize::UpdateGhostDivider(JointResize *this, struct tagPOINT a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 21);
  if ( v2 )
    (*(void (__fastcall **)(__int64, struct tagPOINT))(*(_QWORD *)v2 + 48LL))(v2, a2);
}
