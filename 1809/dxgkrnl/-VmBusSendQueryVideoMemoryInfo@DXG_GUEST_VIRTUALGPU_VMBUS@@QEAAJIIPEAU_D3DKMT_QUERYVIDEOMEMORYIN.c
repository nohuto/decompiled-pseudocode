/*
 * XREFs of ?VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C01F5F70
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00B3150 (DxgkQueryVideoMemoryInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryVideoMemoryInfo(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        struct _D3DKMT_QUERYVIDEOMEMORYINFO *a4)
{
  D3DKMT_MEMORY_SEGMENT_GROUP MemorySegmentGroup; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rax
  struct _MDL *v12; // [rsp+28h] [rbp-21h]
  unsigned int v13; // [rsp+30h] [rbp-19h] BYREF
  __int64 v14; // [rsp+38h] [rbp-11h] BYREF
  int v15; // [rsp+40h] [rbp-9h]
  int v16; // [rsp+44h] [rbp-5h]
  int v17; // [rsp+48h] [rbp-1h]
  int v18; // [rsp+50h] [rbp+7h]
  D3DKMT_MEMORY_SEGMENT_GROUP v19; // [rsp+54h] [rbp+Bh]
  UINT PhysicalAdapterIndex; // [rsp+58h] [rbp+Fh]
  _QWORD v21[4]; // [rsp+60h] [rbp+17h] BYREF

  MemorySegmentGroup = a4->MemorySegmentGroup;
  v14 = 0LL;
  v16 = 0;
  v19 = MemorySegmentGroup;
  PhysicalAdapterIndex = a4->PhysicalAdapterIndex;
  v15 = a2;
  v18 = a3;
  v17 = 21;
  v13 = 32;
  v8 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v14, 0x28u, v21, &v13, v12);
  if ( v8 < 0 || (v8 = -1073741823, v13 < 0x20) )
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v9);
    *(_QWORD *)(v10 + 24) = v8;
    WdLogEvent5_WdWarning(v10);
  }
  else
  {
    v8 = 0;
    a4->Budget = v21[0];
    a4->AvailableForReservation = v21[3];
    a4->CurrentReservation = v21[2];
    a4->CurrentUsage = v21[1];
  }
  return (unsigned int)v8;
}
