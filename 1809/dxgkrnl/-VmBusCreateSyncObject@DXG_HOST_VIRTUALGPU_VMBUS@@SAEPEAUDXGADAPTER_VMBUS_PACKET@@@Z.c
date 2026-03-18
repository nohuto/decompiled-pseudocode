/*
 * XREFs of ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EDA30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJECT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00365E4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJEC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00DA660 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  ADAPTER_RENDER **v9; // r12
  unsigned int v10; // eax
  char v11; // r15
  void *v12; // rsi
  _QWORD *PoolWithTag; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int SynchronizationObjectImpl; // eax
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE v27[24]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v28[4]; // [rsp+38h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v27,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 2816LL;
LABEL_17:
    v8 = v4;
    goto LABEL_18;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATESYNCOBJECT>((__int64)a1);
  v6 = v5;
  if ( !v5 )
  {
LABEL_19:
    v11 = 0;
LABEL_20:
    v3 = v11;
    goto LABEL_21;
  }
  v7 = *(unsigned int *)(v5 + 32);
  if ( (_DWORD)v7 == 6 )
  {
    v4 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v4 + 24) = 2821LL;
    goto LABEL_17;
  }
  if ( (int)v7 >= 7 )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = *(int *)(v6 + 32);
LABEL_18:
    WdLogEvent5_WdError(v8);
    goto LABEL_19;
  }
  v9 = 0LL;
  v10 = *(_DWORD *)(v5 + 36) & 0xFFFFFFFB;
  v11 = 1;
  *(_DWORD *)(v6 + 36) = v10;
  if ( !*(_DWORD *)(v6 + 24) )
  {
    if ( (_DWORD)v7 == 5 )
    {
      v4 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v4 + 24) = 2843LL;
      goto LABEL_17;
    }
    if ( (v10 & 1) == 0 )
    {
      v4 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v4 + 24) = 2848LL;
      goto LABEL_17;
    }
    v9 = *(ADAPTER_RENDER ***)(*((_QWORD *)a1 + 5) + 16LL);
  }
  v12 = 0LL;
  if ( (_DWORD)v7 == 4 )
  {
    if ( !*(_QWORD *)(v6 + 40) )
    {
      v4 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v4 + 24) = 2858LL;
      goto LABEL_17;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v16 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v16 + 24) = 2865LL;
      WdLogEvent5_WdLowResource(v16);
      goto LABEL_19;
    }
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *PoolWithTag = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 96LL) + 88LL);
    *((_BYTE *)PoolWithTag + 16) = 0;
    *((_BYTE *)PoolWithTag + 17) = 1;
    PoolWithTag[1] = *(_QWORD *)(v6 + 40);
    *(_QWORD *)(v6 + 40) = PoolWithTag;
  }
  SynchronizationObjectImpl = DxgkCreateSynchronizationObjectImpl(v6 + 24, *(_DWORD *)(v6 + 120) | 0x80000000, 0LL, v9);
  v19 = SynchronizationObjectImpl;
  if ( SynchronizationObjectImpl >= 0 )
  {
    memset(v28, 0, sizeof(v28));
    LODWORD(v28[0]) = *(_DWORD *)(v6 + 112);
    v21 = *(_DWORD *)(v6 + 32);
    if ( v21 == 5 )
    {
      LODWORD(v28[3]) = *(_DWORD *)(v6 + 48);
      v28[2] = *(_QWORD *)(v6 + 48);
      v22 = *(_QWORD *)(v6 + 56);
    }
    else
    {
      if ( v21 != 6 )
        goto LABEL_31;
      LODWORD(v28[3]) = *(_DWORD *)(v6 + 56);
      v28[2] = *(_QWORD *)(v6 + 48);
      v22 = *(_QWORD *)(v6 + 64);
    }
    v28[1] = v22;
LABEL_31:
    v23 = *(_DWORD *)(v6 + 36);
    v24 = *(_DWORD *)(v6 + 104);
    HIDWORD(v28[0]) = v24;
    if ( (v23 & 1) != 0 && !v24 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v25 + 24) = 2903LL;
      WdLogEvent5_WdAssertion(v25);
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v28, 0x20u);
    goto LABEL_20;
  }
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v26 = WdLogNewEntry5_WdError(v18);
  *(_QWORD *)(v26 + 24) = v19;
  WdLogEvent5_WdError(v26);
LABEL_21:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  return v3;
}
