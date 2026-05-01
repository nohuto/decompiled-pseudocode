/*
 * XREFs of ?UpdateGhostDivider@JointResize@@AEAAXUtagPOINT@@@Z @ 0x18036B7F8
 * Callers:
 *     _lambda_46d2ac6b30f5d317ef4bcc4e3f77555a_::operator() @ 0x1803695C8 (_lambda_46d2ac6b30f5d317ef4bcc4e3f77555a_--operator().c)
 *     ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x18036AAA0 (-OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall JointResize::UpdateGhostDivider(JointResize *this, struct tagPOINT a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 21);
  if ( v2 )
    (*(void (__fastcall **)(__int64, struct tagPOINT))(*(_QWORD *)v2 + 48LL))(v2, a2);
}
