/*
 * XREFs of VslRegisterLogPages @ 0x14028FFD0
 * Callers:
 *     PsIumResumeAfterHibernate @ 0x14015E434 (PsIumResumeAfterHibernate.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012B22C (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290AEC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290CC8 (VslpUnlockPagesForTransfer.c)
 */

__int64 VslRegisterLogPages()
{
  int v0; // ebx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned int v3; // edi
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v5[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v6[14]; // [rsp+80h] [rbp-88h] BYREF

  v0 = PspIumLogBuffer;
  memset(v6, 0, 0x68uLL);
  memset(v5, 0, 0x48uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 3221225629LL;
  result = VslpLockPagesForTransfer((unsigned int)v5, v0, 0x2000, 1, 2);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v6[1] = v5[0];
    v6[2] = v5[7];
    v3 = VslpEnterIumSecureMode(2, 252LL, 0LL, (__int64)v6);
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
