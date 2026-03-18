/*
 * XREFs of MiPageTableLockIsContended @ 0x1400CB088
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 *     NtUnlockVirtualMemory @ 0x1400A40B0 (NtUnlockVirtualMemory.c)
 *     MiProbePacketContended @ 0x1400CB040 (MiProbePacketContended.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400F4884 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1400F7034 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x14019773C (MiInsertViewOfPhysicalSection.c)
 *     MiAddPagesToEnclave @ 0x1402D2F88 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402D35E0 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3880 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402D4818 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x1402D5D78 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x1402D7B68 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x1402EC2C8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiGetPageTableLockBuffer @ 0x14010027C (MiGetPageTableLockBuffer.c)
 */

__int64 __fastcall MiPageTableLockIsContended(__int64 a1, unsigned __int64 a2)
{
  char v3; // dl
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r9
  struct _KPRCB *CurrentPrcb; // rax
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rax
  __int64 v9; // rcx
  _DWORD *PageTableLockBuffer; // rax
  bool v11; // zf
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_BYTE *)(a1 + 184) & 7;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v3 )
    {
      if ( v3 == 7 )
      {
        SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[1];
      }
      else if ( v3 == 5 )
      {
        SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
      }
      else
      {
        SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
      }
    }
    else
    {
      SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[2];
    }
    v11 = SelfmapLockHandle->LockQueue.Next == 0LL;
    return !v11;
  }
  if ( !v3 )
  {
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v9 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL);
      if ( v9 )
        return (*(_DWORD *)(v9 + 4 * ((a2 >> 3) & 0x1FF)) >> 30) & 1;
    }
    goto LABEL_4;
  }
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(a1, a2, &v15);
    v11 = ((*PageTableLockBuffer >> v15) & 2) == 0;
    return !v11;
  }
LABEL_4:
  if ( MiPteInShadowRange(a2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v13 = v4 | 0x20;
      v14 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v5 >> 3) & 0x1FF));
      if ( (v14 & 0x20) == 0 )
        v13 = v4;
      v4 = v13;
      if ( (v14 & 0x42) != 0 )
        v4 = v13 | 0x42;
    }
  }
  return (v4 >> 60) & 2;
}
