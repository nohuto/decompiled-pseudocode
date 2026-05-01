/*
 * XREFs of ?UpdateGhostDivider@JointResize@@AEAAXUtagPOINT@@@Z @ 0x1803F0CF8
 * Callers:
 *     _lambda_2c3efae7d26e0e657137d3ad3e752f20_::operator() @ 0x1803EEAB4 (_lambda_2c3efae7d26e0e657137d3ad3e752f20_--operator().c)
 *     ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x1803EFF40 (-OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall JointResize::UpdateGhostDivider(JointResize *this, struct tagPOINT a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 21);
  if ( v2 )
    (*(void (__fastcall **)(__int64, struct tagPOINT))(*(_QWORD *)v2 + 48LL))(v2, a2);
}
