/*
 * XREFs of ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F8BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0021980 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003656C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetRedirectedFlipFenceValue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rsi
  char v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int *v14; // rax
  DXGSYNCOBJECT *v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  PERESOURCE *Global; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+28h] [rbp-48h]
  char v22; // [rsp+30h] [rbp-40h]
  _BYTE v23[24]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v24[32]; // [rsp+50h] [rbp-20h] BYREF
  int v25; // [rsp+90h] [rbp+20h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v24,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v3 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v3 + 24) = 2757LL;
    WdLogEvent5_WdError(v3);
LABEL_4:
    v5 = 0;
    goto LABEL_16;
  }
  v25 = 0;
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v4 )
    goto LABEL_4;
  v6 = *((_QWORD *)a1 + 5);
  v22 = 0;
  v21 = *(_QWORD *)(v6 + 16);
  v7 = v21;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
  v5 = 1;
  if ( *(_DWORD *)(v7 + 176) == 1 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v23, *((struct _KTHREAD ***)a1 + 7));
    v8 = *((_QWORD *)a1 + 7);
    v9 = (*(_DWORD *)(v4 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v9 < *(_DWORD *)(v8 + 248) )
    {
      v10 = *(_QWORD *)(v8 + 232);
      v8 = *(unsigned int *)(v10 + 16 * v9 + 8);
      if ( ((*(_DWORD *)(v4 + 24) >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60)
        && (v8 & 0x2000) == 0
        && (v8 & 0x1F) != 0 )
      {
        v8 &= 0x1Fu;
        if ( (_BYTE)v8 == 13 )
        {
          v14 = *(unsigned int **)(v10 + 16LL * (unsigned int)v9);
          if ( v14 )
          {
            v8 = *v14;
            if ( (_DWORD)v8 == 11 || (_DWORD)v8 == 8 )
            {
              v15 = (DXGSYNCOBJECT *)*((_QWORD *)v14 + 1);
              if ( !v15 )
              {
                v16 = WdLogNewEntry5_WdAssertion(v8);
                *(_QWORD *)(v16 + 24) = 2782LL;
                WdLogEvent5_WdAssertion(v16);
              }
              DXGSYNCOBJECT::AddReference(v15);
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
              v17 = *(_QWORD *)(v4 + 32);
              v18 = *((_QWORD *)v15 + 14);
              if ( v18 <= v17 )
                v18 = *(_QWORD *)(v4 + 32);
              *((_QWORD *)v15 + 14) = v18;
              Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v17);
              DXGGLOBAL::DestroySyncObject(Global, v15, 0);
              goto LABEL_14;
            }
          }
        }
        else
        {
          v11 = WdLogNewEntry5_WdError(v8);
          *(_QWORD *)(v11 + 24) = 316LL;
          WdLogEvent5_WdError(v11);
        }
      }
    }
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = *(unsigned int *)(v4 + 24);
    WdLogEvent5_WdError(v12);
    v25 = -1073741811;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  }
  else
  {
    v25 = -1073741130;
  }
LABEL_14:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v25, 4u);
  if ( v22 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return v5;
}
