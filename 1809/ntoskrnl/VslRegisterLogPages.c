/*
 * XREFs of VslRegisterLogPages @ 0x14027BCE0
 * Callers:
 *     PsIumResumeAfterHibernate @ 0x140142A58 (PsIumResumeAfterHibernate.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012A0E4 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 */

__int64 VslRegisterLogPages()
{
  int v0; // edx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned int v3; // edi
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v5[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v6[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v7; // [rsp+88h] [rbp-80h]
  __int64 v8; // [rsp+90h] [rbp-78h]

  if ( !HvlQueryVsmConnection(0LL) )
    return 3221225629LL;
  result = VslpLockPagesForTransfer((unsigned int)v5, v0, 0x2000, 1, 2);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v7 = v5[0];
    v8 = v5[7];
    v3 = VslpEnterIumSecureMode(2u, 235LL, 0, (__int64)v6);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    VslpUnlockPagesForTransfer(v5);
    return v3;
  }
  return result;
}
