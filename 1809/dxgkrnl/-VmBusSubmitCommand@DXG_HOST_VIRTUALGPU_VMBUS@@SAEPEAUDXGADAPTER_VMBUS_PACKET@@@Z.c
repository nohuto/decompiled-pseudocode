/*
 * XREFs of ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F9A20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00366D4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C01109C0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // si
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  struct DXGPROCESS *Current; // rax
  const GUID *v13; // r8
  struct VMBPACKETCOMPLETION__ *v14; // rcx
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v16,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_SUBMITCOMMAND>((__int64)a1);
    v6 = v5;
    if ( !v5 )
      goto LABEL_13;
    v17 = 0;
    v7 = 4LL * *(unsigned int *)(v5 + 392);
    if ( v7 <= 0xFFFFFFFF )
    {
      v10 = *((unsigned int *)a1 + 22);
      if ( v10 - 408 >= (unsigned __int64)(unsigned int)v7 )
      {
        v11 = v10 - (unsigned int)v7 - 408;
        if ( v11 >= *(unsigned int *)(v6 + 320) )
        {
          *(_QWORD *)(v6 + 400) = v6 + 408;
          *(_QWORD *)(v6 + 312) = (unsigned int)v7 + v6 + 408;
          Current = DXGPROCESS::GetCurrent();
          v9 = DxgkSubmitCommandInternal((struct _D3DKMT_SUBMITCOMMAND *)(v6 + 24), Current, v13);
          goto LABEL_12;
        }
        v8 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v8 + 24) = *((unsigned int *)a1 + 22);
        *(_QWORD *)(v8 + 32) = 4013LL;
      }
      else
      {
        v8 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v8 + 24) = *((unsigned int *)a1 + 22);
      }
    }
    else
    {
      v8 = WdLogNewEntry5_WdError(0xFFFFFFFFLL);
      *(_QWORD *)(v8 + 24) = 4001LL;
    }
    WdLogEvent5_WdError(v8);
    v9 = -1073741811;
LABEL_12:
    v14 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    v17 = v9;
    VmBusCompletePacket(v14, &v17, 4u);
    v3 = 1;
    goto LABEL_13;
  }
  v4 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v4 + 24) = 3992LL;
  WdLogEvent5_WdError(v4);
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v3;
}
