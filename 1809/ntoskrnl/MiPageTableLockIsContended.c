/*
 * XREFs of MiPageTableLockIsContended @ 0x140096344
 * Callers:
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 *     MiProbePacketContended @ 0x1400964DC (MiProbePacketContended.c)
 *     NtUnlockVirtualMemory @ 0x1400B3CD0 (NtUnlockVirtualMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010FCB8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x140122AC0 (MiReplaceRotateWithDemandZero.c)
 *     MiInsertViewOfPhysicalSection @ 0x14018CDD4 (MiInsertViewOfPhysicalSection.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC414 (MiDeleteSessionPoolRange.c)
 *     MiFreePhysicalPages @ 0x1402B0AD0 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402BD124 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402BE310 (MiProtectEnclavePages.c)
 *     MiScrubLargeMappedPage @ 0x1402CF428 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiGetPageTableLockBuffer @ 0x14006CE70 (MiGetPageTableLockBuffer.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     ExSpinLockIsContended @ 0x14031C1F8 (ExSpinLockIsContended.c)
 */

__int64 __fastcall MiPageTableLockIsContended(__int64 a1, unsigned __int64 a2)
{
  char v2; // di
  struct _KPRCB *CurrentPrcb; // rax
  char v6; // di
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rax
  bool v8; // zf
  char v9; // di
  __int64 v10; // rax
  char *PageTableLockBuffer; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = v2 & 7;
    if ( v6 )
    {
      if ( v6 == 7 )
      {
        SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[1];
      }
      else if ( v6 == 5 )
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
    v8 = SelfmapLockHandle->LockQueue.Next == 0LL;
    return !v8;
  }
  v9 = v2 & 7;
  if ( !v9 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(PsGetCurrentProcess(a1, a2) + 1296) + 552LL);
    if ( v10 )
      return ExSpinLockIsContended(v10 + 4 * ((a2 >> 3) & 0x1FF));
  }
  if ( v9 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    PageTableLockBuffer = MiGetPageTableLockBuffer(a1, a2, &v18);
    v8 = ((*(_DWORD *)PageTableLockBuffer >> v18) & 2) == 0;
    return !v8;
  }
  if ( MiPteInShadowRange(a2)
    && (unsigned int)MiPteHasShadow(v14, v13)
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    v15 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v15 )
    {
      v16 = v13 | 0x20;
      v17 = *(_QWORD *)(v15 + 8 * ((a2 >> 3) & 0x1FF));
      if ( (v17 & 0x20) == 0 )
        v16 = v13;
      v13 = v16;
      if ( (v17 & 0x42) != 0 )
        v13 = v16 | 0x42;
    }
  }
  return (v13 >> 60) & 2;
}
