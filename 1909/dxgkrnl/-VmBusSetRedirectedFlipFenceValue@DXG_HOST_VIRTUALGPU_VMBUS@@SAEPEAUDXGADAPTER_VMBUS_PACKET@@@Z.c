/*
 * XREFs of ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229420
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CAB4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9E80 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetRedirectedFlipFenceValue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r14
  char v7; // si
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  PERESOURCE *Global; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+28h] [rbp-48h]
  char v26; // [rsp+30h] [rbp-40h]
  _BYTE v27[24]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v28[32]; // [rsp+50h] [rbp-20h] BYREF
  int v29; // [rsp+90h] [rbp+20h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v28,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v5 + 24) = 2720LL;
    WdLogEvent5_WdError(v5);
LABEL_4:
    v7 = 0;
    goto LABEL_16;
  }
  v29 = 0;
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v6 )
    goto LABEL_4;
  v8 = *((_QWORD *)a1 + 5);
  v26 = 0;
  v25 = *(_QWORD *)(v8 + 16);
  v9 = v25;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
  v7 = 1;
  if ( *(_DWORD *)(v9 + 176) == 1 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v27, *((struct _KTHREAD ***)a1 + 7));
    v11 = *(unsigned int *)(v6 + 24);
    v12 = *((_QWORD *)a1 + 7);
    v13 = (*(_DWORD *)(v6 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v13 < *(_DWORD *)(v12 + 224) )
    {
      v10 = *(_QWORD *)(v12 + 208);
      v11 = ((unsigned int)v11 >> 25) & 0x60;
      v12 = *(unsigned int *)(v10 + 16 * v13 + 8);
      if ( (_BYTE)v11 == (*(_BYTE *)(v10 + 16 * v13 + 8) & 0x60) && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
      {
        v12 &= 0x1Fu;
        if ( (_BYTE)v12 == 13 )
        {
          v17 = *(_QWORD *)(v10 + 16LL * (unsigned int)v13);
          if ( v17 && (*(_DWORD *)v17 == 11 || *(_DWORD *)v17 == 8) )
          {
            v18 = *(_QWORD *)(v17 + 8);
            if ( !v18 )
            {
              v19 = WdLogNewEntry5_WdAssertion(v12, v11);
              *(_QWORD *)(v19 + 24) = 2745LL;
              WdLogEvent5_WdAssertion(v19);
            }
            _InterlockedAdd((volatile signed __int32 *)(v18 + 24), 1u);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
            v21 = *(_QWORD *)(v6 + 32);
            v22 = *(_QWORD *)(v18 + 112);
            if ( v22 <= v21 )
              v22 = *(_QWORD *)(v6 + 32);
            *(_QWORD *)(v18 + 112) = v22;
            Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v21, v20);
            DXGGLOBAL::DestroySyncObject(Global, (struct DXGSYNCOBJECT *)v18, 0);
            goto LABEL_14;
          }
        }
        else
        {
          v14 = WdLogNewEntry5_WdError(v12, v11, v10);
          *(_QWORD *)(v14 + 24) = 267LL;
          WdLogEvent5_WdError(v14);
        }
      }
    }
    v15 = WdLogNewEntry5_WdError(v12, v11, v10);
    *(_QWORD *)(v15 + 24) = *(unsigned int *)(v6 + 24);
    WdLogEvent5_WdError(v15);
    v29 = -1073741811;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  }
  else
  {
    v29 = -1073741130;
  }
LABEL_14:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v29, 4u);
  if ( v26 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  return v7;
}
