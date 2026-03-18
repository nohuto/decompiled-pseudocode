/*
 * XREFs of ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CABC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C010ACB0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  struct _KTHREAD **Current; // rax
  const GUID *v16; // r8
  int v17; // eax
  struct VMBPACKETCOMPLETION__ *v18; // rcx
  _BYTE v20[40]; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v20,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_SUBMITCOMMAND>((__int64)a1);
    v10 = v7;
    if ( !v7 )
      goto LABEL_13;
    v11 = 4LL * *(unsigned int *)(v7 + 392);
    if ( v11 > 0xFFFFFFFF )
    {
      v13 = WdLogNewEntry5_WdError(0xFFFFFFFFLL, v8, v9);
      *(_QWORD *)(v13 + 24) = 3946LL;
    }
    else
    {
      v12 = *((unsigned int *)a1 + 22);
      if ( v12 - 408 >= (unsigned __int64)(unsigned int)v11 )
      {
        v14 = v12 - (unsigned int)v11 - 408;
        if ( v14 >= *(unsigned int *)(v10 + 320) )
        {
          *(_QWORD *)(v10 + 400) = v10 + 408;
          *(_QWORD *)(v10 + 312) = (unsigned int)v11 + v10 + 408;
          Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v14, (unsigned int)v11);
          v17 = DxgkSubmitCommandInternal((const struct _D3DKMT_SUBMITCOMMAND *)(v10 + 24), Current, v16);
LABEL_12:
          v18 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
          v21 = v17;
          VmBusCompletePacket(v18, &v21, 4u);
          v5 = 1;
          goto LABEL_13;
        }
        v13 = WdLogNewEntry5_WdError(v14, (unsigned int)v11, v9);
        *(_QWORD *)(v13 + 24) = *((unsigned int *)a1 + 22);
        *(_QWORD *)(v13 + 32) = 3958LL;
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(v12, (unsigned int)v11, v9);
        *(_QWORD *)(v13 + 24) = *((unsigned int *)a1 + 22);
      }
    }
    WdLogEvent5_WdError(v13);
    v17 = -1073741811;
    goto LABEL_12;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v6 + 24) = 3937LL;
  WdLogEvent5_WdError(v6);
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return v5;
}
