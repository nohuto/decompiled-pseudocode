/*
 * XREFs of VslIumEfiRuntimeService @ 0x14027B830
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 */

unsigned __int64 __fastcall VslIumEfiRuntimeService(unsigned int a1, __int64 a2, int a3, __int128 *a4)
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
  _BYTE v16[8]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v17; // [rsp+88h] [rbp-41h]
  __int64 v18; // [rsp+90h] [rbp-39h]
  __int64 v19; // [rsp+98h] [rbp-31h]
  unsigned __int64 v20; // [rsp+A0h] [rbp-29h]
  __int128 v21; // [rsp+A8h] [rbp-21h]
  __int128 v22; // [rsp+B8h] [rbp-11h]

  v5 = a1;
  memset(v15, 0, 0x48uLL);
  if ( a2 )
  {
    LODWORD(result) = VslpLockPagesForTransfer((unsigned int)v15, a2, a3, 2, 1);
    if ( (result & 0x80000000) != 0LL )
      return (int)result;
  }
  v18 = v15[0];
  v19 = v15[7];
  v17 = v5;
  if ( a4 )
  {
    v9 = a4[1];
    v21 = *a4;
    v22 = v9;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockExclusiveAtDpcLevel(&VslpIumEfiLock);
  v11 = VslpEnterIumSecureMode(2u, 233LL, 0, (__int64)v16);
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
    v13 = v22;
    *a4 = v21;
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
    v14 = v20;
    if ( v11 )
      v14 = 0x8000000000000003uLL;
  }
  if ( v15[0] )
    VslpUnlockPagesForTransfer(v15);
  return v14;
}
