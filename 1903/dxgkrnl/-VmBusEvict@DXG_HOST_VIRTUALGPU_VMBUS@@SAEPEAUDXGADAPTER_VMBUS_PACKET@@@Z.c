/*
 * XREFs of ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021EB90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C954 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0133090 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEvict(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // rsi
  unsigned __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  struct VMBPACKETCOMPLETION__ *v17; // rcx
  _BYTE v19[24]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v20[5]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v19,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 3811LL;
LABEL_10:
    WdLogEvent5_WdError(v6);
    goto LABEL_11;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v10 = (_DWORD *)v7;
  if ( v7 )
  {
    v11 = *(unsigned int *)(v7 + 32);
    if ( !(_DWORD)v11
      || (v8 = ((unsigned __int64)*((unsigned int *)a1 + 22) - 36) % v11,
          ((unsigned __int64)*((unsigned int *)a1 + 22) - 36) / v11 < 4) )
    {
      v6 = WdLogNewEntry5_WdError(v11, v8, v9);
      *(_QWORD *)(v6 + 24) = *((unsigned int *)a1 + 22);
      goto LABEL_10;
    }
    memset(v20, 0, 0x20uLL);
    LODWORD(v20[2]) = v10[7];
    v20[1] = v10 + 9;
    HIDWORD(v20[0]) = v10[8];
    LODWORD(v20[0]) = v10[6];
    v12 = DxgkEvictInternal((ULONG64)v20, 0, (const GUID *)0xFFFFFFFFLL, 0LL);
    v16 = v12;
    if ( v12 < 0 )
    {
      v6 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v6 + 24) = v16;
      goto LABEL_10;
    }
    v17 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    v21 = v20[3];
    VmBusCompletePacket(v17, &v21, 8u);
    v5 = 1;
  }
LABEL_11:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return v5;
}
