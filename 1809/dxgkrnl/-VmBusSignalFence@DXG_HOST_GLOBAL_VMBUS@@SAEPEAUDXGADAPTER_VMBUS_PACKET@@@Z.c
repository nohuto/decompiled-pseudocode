/*
 * XREFs of ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F8E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0021980 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003656C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C00D822C (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSignalFence(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _KTHREAD **v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  DXGSYNCOBJECT *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  PERESOURCE *Global; // rax
  _BYTE v24[32]; // [rsp+20h] [rbp-20h] BYREF
  int v25; // [rsp+58h] [rbp+18h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = (struct _KTHREAD **)*((_QWORD *)a1 + 7);
    v25 = 0;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v24, v4);
    v6 = *(_DWORD *)(v3 + 28);
    if ( !v6 )
    {
      v7 = *((_QWORD *)a1 + 7);
      v8 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 248) )
        goto LABEL_9;
      v9 = *(_QWORD *)(v7 + 232);
      v7 = *(unsigned int *)(v9 + 16 * v8 + 8);
      if ( ((*(_DWORD *)(v3 + 24) >> 25) & 0x60) != (*(_BYTE *)(v9 + 16 * v8 + 8) & 0x60)
        || (v7 & 0x2000) != 0
        || (v7 & 0x1F) == 0 )
      {
        goto LABEL_9;
      }
      v7 &= 0x1Fu;
      if ( (_BYTE)v7 != 13 )
      {
        v10 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v10 + 24) = 316LL;
        WdLogEvent5_WdError(v10);
LABEL_9:
        v11 = WdLogNewEntry5_WdError(v7);
        v12 = *(unsigned int *)(v3 + 24);
LABEL_24:
        *(_QWORD *)(v11 + 24) = v12;
        WdLogEvent5_WdError(v11);
        v25 = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
LABEL_25:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v25, 4u);
        LOBYTE(v2) = 1;
        return v2;
      }
      v13 = *(_QWORD *)(v9 + 16LL * (unsigned int)v8);
      if ( !v13 || *(_DWORD *)v13 != 11 && *(_DWORD *)v13 != 8 )
        goto LABEL_9;
      v14 = *(DXGSYNCOBJECT **)(v13 + 8);
      if ( !v14 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v7);
        *(_QWORD *)(v15 + 24) = 5231LL;
        WdLogEvent5_WdAssertion(v15);
      }
LABEL_28:
      DXGSYNCOBJECT::AddReference(v14);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
      v25 = DXGSYNCOBJECT::SignalFence((__int64)v14, *(_QWORD *)(v3 + 32), 0, 0);
      if ( v25 < 0 )
      {
        v21 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v21 + 24) = v25;
        WdLogEvent5_WdError(v21);
      }
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v20);
      DXGGLOBAL::DestroySyncObject(Global, v14, 0);
      goto LABEL_25;
    }
    if ( v6 != 1 )
    {
      v11 = WdLogNewEntry5_WdError(v5);
      v12 = *(int *)(v3 + 28);
      goto LABEL_24;
    }
    v16 = *((_QWORD *)a1 + 7);
    v17 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v17 < *(_DWORD *)(v16 + 248) )
    {
      v18 = *(_QWORD *)(v16 + 232);
      v16 = *(unsigned int *)(v18 + 16 * v17 + 8);
      if ( ((*(_DWORD *)(v3 + 24) >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
        && (v16 & 0x2000) == 0
        && (v16 & 0x1F) != 0 )
      {
        v16 &= 0x1Fu;
        if ( (_BYTE)v16 == 8 )
        {
          v14 = *(DXGSYNCOBJECT **)(v18 + 16LL * (unsigned int)v17);
          if ( v14 )
            goto LABEL_28;
        }
        else
        {
          v19 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v19 + 24) = 316LL;
          WdLogEvent5_WdError(v19);
        }
      }
    }
    v11 = WdLogNewEntry5_WdError(v16);
    v12 = *(unsigned int *)(v3 + 24);
    *(_QWORD *)(v11 + 32) = 5226LL;
    goto LABEL_24;
  }
  return v2;
}
