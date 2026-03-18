/*
 * XREFs of ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02212C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CA64 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00FF7CC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // bl
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
  _QWORD *v21; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+28h] [rbp-30h]
  char v24; // [rsp+30h] [rbp-28h]
  _BYTE v25[32]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v26; // [rsp+68h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v6 = v2;
  if ( v2 )
  {
    v7 = *(_DWORD *)(v2 + 24);
    if ( v7 <= 0x10 )
    {
      v4 = *(unsigned int *)(v6 + 28);
      if ( (unsigned int)v4 >= 0x10 && v7 >= (unsigned int)v4 )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v25,
          (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
        v11 = *((_QWORD *)a1 + 5);
        if ( *(_BYTE *)(v11 + 157) )
        {
          v12 = WdLogNewEntry5_WdError(v9, v8, v10);
          *(_QWORD *)(v12 + 24) = 4231LL;
          WdLogEvent5_WdError(v12);
          v13 = 0;
LABEL_14:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
          return v13;
        }
        v23 = *(_QWORD *)(v11 + 16);
        v24 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
        v13 = 1;
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 176LL) == 1 )
        {
          v14 = DXGADAPTER::CreateHandle(
                  *(DXGADAPTER **)(*((_QWORD *)a1 + 5) + 16LL),
                  *(struct DXGPROCESS **)(*((_QWORD *)a1 + 5) + 88LL),
                  &v26);
          v18 = v14;
          if ( v14 >= 0 )
          {
            *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) = 1;
            VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v26, 4u);
            goto LABEL_12;
          }
          v19 = WdLogNewEntry5_WdError(v16, v15, v17);
          *(_QWORD *)(v19 + 24) = v18;
          WdLogEvent5_WdError(v19);
        }
        v13 = 0;
LABEL_12:
        if ( v24 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
        goto LABEL_14;
      }
    }
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v4, v3, v5);
    v21[3] = 16LL;
    v21[4] = 16LL;
    v21[5] = *(unsigned int *)(v6 + 24);
    v21[6] = *(unsigned int *)(v6 + 28);
    WdLogEvent5_WdError(v21);
  }
  return 0;
}
