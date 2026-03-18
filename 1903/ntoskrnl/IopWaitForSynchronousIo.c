/*
 * XREFs of IopWaitForSynchronousIo @ 0x140088480
 * Callers:
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14062AFE4 (IopQueryXxxInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     IopCancelAlertedRequest @ 0x14085385C (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(PIRP Irp, unsigned int *a2, char a3)
{
  _DWORD *v3; // rbx
  int v4; // edi
  NTSTATUS v9; // eax
  bool v10; // bp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = a2 + 38;
  v4 = a2[20] & 4;
  while ( (*(_BYTE *)v3 & 0x7F) != 0 || !v3[1] )
  {
    v9 = KeWaitForSingleObject(v3, Executive, v4 != 0 ? a3 : 0, 1u, 0LL);
    if ( v9 != 257 && v9 != 192 )
      break;
    if ( !v4 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
    {
      v10 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !v3[1] )
        v10 = Irp->Cancel == 1;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      if ( !v10 )
        continue;
    }
    IopCancelAlertedRequest(v3, Irp);
    return a2[14];
  }
  return a2[14];
}
