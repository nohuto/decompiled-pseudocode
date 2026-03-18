/*
 * XREFs of ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C01F1A80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0ppq @ 0x1C0037720 (McTemplateK0ppq.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C01EF2EC (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 */

void __fastcall VmBusProcessPacket(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2, const GUID *a3)
{
  __int64 v3; // rax
  struct DXGADAPTER_VMBUS_PACKET *v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r14
  int v8; // r13d
  int v9; // ebp
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v15; // rax
  unsigned int v16; // eax
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v17; // rcx
  __int64 (__fastcall *v18)(struct DXGADAPTER_VMBUS_PACKET *); // rax
  char v19; // al
  __int64 v20; // rcx
  const GUID *v21; // r8
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 v23; // [rsp+28h] [rbp-30h]

  v3 = *((_QWORD *)a1 + 5);
  v4 = a1;
  v5 = (_QWORD *)*((_QWORD *)a1 + 10);
  if ( v3 )
  {
    v6 = v3 + 160;
  }
  else
  {
    a1 = (struct DXGADAPTER_VMBUS_PACKET *)*((_QWORD *)a1 + 7);
    if ( a1 )
      v6 = *((_QWORD *)a1 + 57) + 88LL;
    else
      v6 = *((_QWORD *)v4 + 8);
  }
  v7 = *v5;
  v8 = 0;
  v9 = *((_DWORD *)v5 + 3);
  v10 = 0;
  v11 = 0;
  LOBYTE(a1) = 64;
  if ( !*(_BYTE *)(v6 + 49) )
  {
    if ( *(_DWORD *)(v6 + 32) != v9 )
    {
      v12 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v12 + 24) = 269LL;
LABEL_43:
      v13 = v12;
      goto LABEL_44;
    }
    if ( !*((_QWORD *)v4 + 7) && v3 )
      *((_QWORD *)v4 + 7) = *(_QWORD *)(v3 + 88);
    _InterlockedIncrement(&g_VgpuNumWorkItemProcessed);
    if ( v9 == 1 )
    {
      if ( *((_DWORD *)v4 + 22) < 0x18u )
      {
        v13 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v13 + 24) = *((unsigned int *)v4 + 22);
        *(_QWORD *)(v13 + 32) = 287LL;
LABEL_44:
        WdLogEvent5_WdError(v13);
        goto LABEL_45;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        McTemplateK0ppq(
          (__int64)a1,
          &EventVmBusProcessPacketGlobalWorkerBegin,
          a3,
          *((_QWORD *)v4 + 4),
          *v5,
          *((_DWORD *)v5 + 4));
      v8 = *((_DWORD *)v5 + 4);
      if ( (unsigned int)(v8 - 1000) > 0xA )
      {
        v13 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v13 + 24) = *((int *)v5 + 4);
        *(_QWORD *)(v13 + 32) = 297LL;
        goto LABEL_44;
      }
      v14 = v8 - 1000;
      v15 = &DXG_HOST_GLOBAL_VMBUS::VmBusCommandTableVmToHost;
    }
    else
    {
      v16 = *((_DWORD *)v4 + 22);
      if ( *((_DWORD *)v5 + 3) )
      {
        if ( v16 < 0x18 )
        {
          v13 = WdLogNewEntry5_WdError(a1);
          *(_QWORD *)(v13 + 24) = *((unsigned int *)v4 + 22);
          *(_QWORD *)(v13 + 32) = 328LL;
          goto LABEL_44;
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
          McTemplateK0ppq(
            (__int64)a1,
            &EventVmBusProcessPacketHostToVmWorkerBegin,
            a3,
            *((_QWORD *)v4 + 4),
            *v5,
            *((_DWORD *)v5 + 4));
        v10 = *((_DWORD *)v5 + 4);
        if ( v10 > 3 )
        {
          v12 = WdLogNewEntry5_WdError(a1);
          *(_QWORD *)(v12 + 24) = *((int *)v5 + 4);
          *(_QWORD *)(v12 + 32) = 338LL;
          goto LABEL_43;
        }
        v14 = *((int *)v5 + 4);
        v15 = (const struct DXG_VMBUS_COMMAND_TABLE near *const *)&DXG_GUEST_GLOBAL_VMBUS::VmBusCommandTableHostToVm;
      }
      else
      {
        if ( v16 < 0x18 )
        {
          v13 = WdLogNewEntry5_WdError(a1);
          *(_QWORD *)(v13 + 24) = *((unsigned int *)v4 + 22);
          *(_QWORD *)(v13 + 32) = 308LL;
          goto LABEL_44;
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
          McTemplateK0ppq(
            (__int64)a1,
            &EventVmBusProcessPacketWorkerBegin,
            a3,
            *((_QWORD *)v4 + 4),
            *v5,
            *((_DWORD *)v5 + 4));
        v11 = *((_DWORD *)v5 + 4);
        if ( v11 > 0x37 )
        {
          v13 = WdLogNewEntry5_WdError(a1);
          *(_QWORD *)(v13 + 24) = *((int *)v5 + 4);
          *(_QWORD *)(v13 + 32) = 318LL;
          goto LABEL_44;
        }
        v14 = *((int *)v5 + 4);
        v15 = &DXG_HOST_VIRTUALGPU_VMBUS::VmBusCommandTableVgpuToHost;
      }
    }
    v17 = &v15[2 * v14];
    if ( *((_DWORD *)v4 + 22) >= *((_DWORD *)v17 + 3) )
    {
      v18 = (__int64 (__fastcall *)(struct DXGADAPTER_VMBUS_PACKET *))*v17;
      if ( *((_BYTE *)v17 + 8) )
        v19 = VmBusExecuteCommandInProcessContext(v4, v18);
      else
        v19 = v18(v4);
LABEL_47:
      if ( v19 )
        goto LABEL_49;
      goto LABEL_48;
    }
    v13 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v13 + 24) = *((unsigned int *)v4 + 22);
    *(_QWORD *)(v13 + 32) = 345LL;
    goto LABEL_44;
  }
LABEL_45:
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal((__int64)a1) + 20266) )
  {
    v19 = 0;
    *(_BYTE *)(v6 + 49) = 1;
    goto LABEL_47;
  }
LABEL_48:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v4 + 9), 0LL, 0);
LABEL_49:
  if ( bTracingEnabled )
  {
    if ( v9 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        LODWORD(v23) = v8;
        v22 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalWorkerEnd;
LABEL_58:
        McTemplateK0ppq(v20, v22, v21, *((_QWORD *)v4 + 4), v7, v23);
      }
    }
    else if ( v9 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        LODWORD(v23) = v10;
        v22 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketHostToVmWorkerEnd;
        goto LABEL_58;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    {
      LODWORD(v23) = v11;
      v22 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketWorkerEnd;
      goto LABEL_58;
    }
  }
  ExFreePoolWithTag(v4, 0x4B677844u);
}
