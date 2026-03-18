/*
 * XREFs of ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BB868
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C007095C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012BB8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0076C38 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B03D8 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C00BCC40 (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VID.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  VIDMM_GLOBAL *v8; // rcx
  struct _LIST_ENTRY *v9; // rdi
  struct _LIST_ENTRY *v10; // rdx
  VIDMM_GLOBAL **v11; // rbx
  struct _LIST_ENTRY *v12[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 1);
  v12[1] = (struct _LIST_ENTRY *)v12;
  v12[0] = (struct _LIST_ENTRY *)v12;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v13, (struct _KTHREAD **)(v3 + 41240));
  if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(this, v12, a2, 6LL) )
  {
    v7 = WdLogNewEntry5_WdWarning(v6, v5);
    WdLogEvent5_WdWarning(v7);
    if ( *((_DWORD *)this + 103) )
    {
      v9 = v12[0];
      while ( v9 != (struct _LIST_ENTRY *)v12 )
      {
        v10 = v9;
        v11 = (VIDMM_GLOBAL **)&v9[-11];
        v9 = v9->Flink;
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v8, v10);
        VIDMM_DEVICE::PartiallySuspend(v11);
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v11);
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
}
