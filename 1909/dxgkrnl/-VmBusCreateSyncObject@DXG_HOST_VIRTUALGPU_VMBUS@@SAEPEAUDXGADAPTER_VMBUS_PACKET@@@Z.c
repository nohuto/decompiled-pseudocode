/*
 * XREFs of ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021DA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJECT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CB2C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJEC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00F8F00 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // r12
  unsigned int v14; // eax
  char v15; // r15
  void *v16; // rsi
  _QWORD *PoolWithTag; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  int SynchronizationObjectImpl; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r12
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  _BYTE v35[24]; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v36[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v37; // [rsp+40h] [rbp-20h]
  __int64 v38; // [rsp+48h] [rbp-18h]
  __int64 v39; // [rsp+50h] [rbp-10h]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v35,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 2779LL;
LABEL_17:
    v12 = v6;
    goto LABEL_18;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATESYNCOBJECT>((__int64)a1);
  v10 = v7;
  if ( !v7 )
  {
LABEL_19:
    v15 = 0;
LABEL_20:
    v5 = v15;
    goto LABEL_21;
  }
  v11 = *(unsigned int *)(v7 + 32);
  if ( (_DWORD)v11 == 6 )
  {
    v6 = WdLogNewEntry5_WdError(v11, v8, v9);
    *(_QWORD *)(v6 + 24) = 2784LL;
    goto LABEL_17;
  }
  if ( (int)v11 >= 7 )
  {
    v12 = WdLogNewEntry5_WdError(v11, v8, v9);
    *(_QWORD *)(v12 + 24) = *(int *)(v10 + 32);
LABEL_18:
    WdLogEvent5_WdError(v12);
    goto LABEL_19;
  }
  v13 = 0LL;
  v14 = *(_DWORD *)(v7 + 36) & 0xFFFFFFFB;
  v15 = 1;
  *(_DWORD *)(v10 + 36) = v14;
  if ( !*(_DWORD *)(v10 + 24) )
  {
    if ( (_DWORD)v11 == 5 )
    {
      v6 = WdLogNewEntry5_WdError(v11, v8, v9);
      *(_QWORD *)(v6 + 24) = 2806LL;
      goto LABEL_17;
    }
    if ( (v14 & 1) == 0 )
    {
      v6 = WdLogNewEntry5_WdError(v11, v8, v9);
      *(_QWORD *)(v6 + 24) = 2811LL;
      goto LABEL_17;
    }
    v13 = *(struct DXGADAPTER **)(*((_QWORD *)a1 + 5) + 16LL);
  }
  v16 = 0LL;
  if ( (_DWORD)v11 == 4 )
  {
    if ( !*(_QWORD *)(v10 + 40) )
    {
      v6 = WdLogNewEntry5_WdError(v11, v8, v9);
      *(_QWORD *)(v6 + 24) = 2821LL;
      goto LABEL_17;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v23 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
      *(_QWORD *)(v23 + 24) = 2828LL;
      WdLogEvent5_WdLowResource(v23);
      goto LABEL_19;
    }
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *PoolWithTag = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 96LL) + 88LL);
    *((_BYTE *)PoolWithTag + 17) = 1;
    PoolWithTag[1] = *(_QWORD *)(v10 + 40);
    *(_QWORD *)(v10 + 40) = PoolWithTag;
  }
  SynchronizationObjectImpl = DxgkCreateSynchronizationObjectImpl(
                                v10 + 24,
                                *(_DWORD *)(v10 + 120) | 0x80000000,
                                0LL,
                                v13);
  v28 = SynchronizationObjectImpl;
  if ( SynchronizationObjectImpl >= 0 )
  {
    v36[0] = *(_DWORD *)(v10 + 112);
    v29 = *(_DWORD *)(v10 + 32);
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    if ( v29 == 5 )
    {
      LODWORD(v39) = *(_DWORD *)(v10 + 48);
      v38 = *(_QWORD *)(v10 + 48);
      v30 = *(_QWORD *)(v10 + 56);
    }
    else
    {
      if ( v29 != 6 )
        goto LABEL_31;
      LODWORD(v39) = *(_DWORD *)(v10 + 56);
      v38 = *(_QWORD *)(v10 + 48);
      v30 = *(_QWORD *)(v10 + 64);
    }
    v37 = v30;
LABEL_31:
    v31 = *(_DWORD *)(v10 + 36);
    v32 = *(unsigned int *)(v10 + 104);
    v36[1] = *(_DWORD *)(v10 + 104);
    if ( (v31 & 1) != 0 && !(_DWORD)v32 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v26, v32);
      *(_QWORD *)(v33 + 24) = 2866LL;
      WdLogEvent5_WdAssertion(v33);
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v36, 0x20u);
    goto LABEL_20;
  }
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v34 = WdLogNewEntry5_WdError(v26, v25, v27);
  *(_QWORD *)(v34 + 24) = v28;
  WdLogEvent5_WdError(v34);
LABEL_21:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
  return v5;
}
