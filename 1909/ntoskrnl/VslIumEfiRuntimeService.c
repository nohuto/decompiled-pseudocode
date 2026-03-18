/*
 * XREFs of VslIumEfiRuntimeService @ 0x14028FA90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290AEC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290CC8 (VslpUnlockPagesForTransfer.c)
 */

unsigned __int64 __fastcall VslIumEfiRuntimeService(unsigned int a1, __int64 a2, int a3, _OWORD *a4)
{
  __int64 v5; // rsi
  unsigned __int64 result; // rax
  __int128 v9; // xmm1
  unsigned __int8 CurrentIrql; // si
  NTSTATUS v11; // edi
  struct _KPRCB *CurrentPrcb; // rcx
  __int128 v13; // xmm1
  unsigned __int64 v14; // rbx
  _QWORD v15[10]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v16[14]; // [rsp+80h] [rbp-49h] BYREF

  v5 = a1;
  memset(v16, 0, 0x68uLL);
  memset(v15, 0, 0x48uLL);
  if ( a2 )
  {
    LODWORD(result) = VslpLockPagesForTransfer((unsigned int)v15, a2, a3, 2, 1);
    if ( (result & 0x80000000) != 0LL )
      return (int)result;
  }
  v16[2] = v15[0];
  v16[3] = v15[7];
  v16[1] = v5;
  if ( a4 )
  {
    v9 = a4[1];
    *(_OWORD *)&v16[5] = *a4;
    *(_OWORD *)&v16[7] = v9;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockExclusiveAtDpcLevel(&VslpIumEfiLock);
  v11 = VslpEnterIumSecureMode(2, 250LL, 0LL, (__int64)v16);
  ExReleaseSpinLockExclusiveFromDpcLevel(&VslpIumEfiLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( a4 )
  {
    v13 = *(_OWORD *)&v16[7];
    *a4 = *(_OWORD *)&v16[5];
    a4[1] = v13;
  }
  if ( v11 == -1073741811 )
  {
    v14 = 0x8000000000000002uLL;
  }
  else if ( v11 == -1073741801 )
  {
    v14 = 0x8000000000000009uLL;
  }
  else
  {
    v14 = v16[4];
    if ( v11 )
      v14 = 0x8000000000000003uLL;
  }
  if ( v15[0] )
    VslpUnlockPagesForTransfer(v15);
  return v14;
}
