/*
 * XREFs of ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F0FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003651C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00DCB84 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // bl
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  _QWORD *v15; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h]
  char v18; // [rsp+30h] [rbp-28h]
  _BYTE v19[32]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v4 = v2;
  if ( v2 )
  {
    v5 = *(_DWORD *)(v2 + 24);
    if ( v5 <= 0x10 )
    {
      v3 = *(unsigned int *)(v4 + 28);
      if ( (unsigned int)v3 >= 0x10 && v5 >= (unsigned int)v3 )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v19,
          (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
        v7 = *((_QWORD *)a1 + 5);
        if ( *(_BYTE *)(v7 + 157) )
        {
          v8 = WdLogNewEntry5_WdError(v6);
          *(_QWORD *)(v8 + 24) = 4301LL;
          WdLogEvent5_WdError(v8);
          v9 = 0;
LABEL_14:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
          return v9;
        }
        v17 = *(_QWORD *)(v7 + 16);
        v18 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
        v9 = 1;
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 176LL) == 1 )
        {
          v10 = DXGADAPTER::CreateHandle(
                  *(DXGADAPTER **)(*((_QWORD *)a1 + 5) + 16LL),
                  *(struct DXGPROCESS **)(*((_QWORD *)a1 + 5) + 88LL),
                  &v20);
          v12 = v10;
          if ( v10 >= 0 )
          {
            *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) = 1;
            VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v20, 4u);
            goto LABEL_12;
          }
          v13 = WdLogNewEntry5_WdError(v11);
          *(_QWORD *)(v13 + 24) = v12;
          WdLogEvent5_WdError(v13);
        }
        v9 = 0;
LABEL_12:
        if ( v18 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
        goto LABEL_14;
      }
    }
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v3);
    v15[3] = 16LL;
    v15[4] = 16LL;
    v15[5] = *(unsigned int *)(v4 + 24);
    v15[6] = *(unsigned int *)(v4 + 28);
    WdLogEvent5_WdError(v15);
  }
  return 0;
}
