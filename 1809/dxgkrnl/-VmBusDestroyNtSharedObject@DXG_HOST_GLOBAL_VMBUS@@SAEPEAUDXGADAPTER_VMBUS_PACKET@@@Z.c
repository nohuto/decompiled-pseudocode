/*
 * XREFs of ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EEB70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003651C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00FE560 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C01E9E9C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyNtSharedObject(struct _KTHREAD ***a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  unsigned int v4; // r9d
  struct _KTHREAD **v5; // r10
  __int64 v6; // rax
  struct _KTHREAD *v7; // rsi
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  int *v12; // rsi
  struct VMBPACKETCOMPLETION__ *v13; // rcx
  int v14; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v15[24]; // [rsp+28h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-48h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  if ( !v2 )
    return 0;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v15, a1[7]);
  v4 = *(_DWORD *)(v2 + 24);
  v5 = a1[7];
  v6 = (v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 >= *((_DWORD *)v5 + 62)
    || (v7 = v5[29],
        v3 = (v4 >> 25) & 0x60,
        v8 = *((_DWORD *)v7 + 4 * v6 + 2),
        ((v4 >> 25) & 0x60) != (*((_BYTE *)v7 + 16 * v6 + 8) & 0x60))
    || (v8 & 0x2000) != 0
    || (v8 & 0x1F) == 0 )
  {
LABEL_8:
    v10 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v10 + 24) = *(unsigned int *)(v2 + 24);
    WdLogEvent5_WdError(v10);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
    return 0;
  }
  if ( (v8 & 0x1F) != 0xD )
  {
    v9 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v9 + 24) = 316LL;
    WdLogEvent5_WdError(v9);
    goto LABEL_8;
  }
  v12 = (int *)*((_QWORD *)v7 + 2 * (unsigned int)v6);
  if ( !v12 )
    goto LABEL_8;
  HMGRTABLE::FreeHandle((HMGRTABLE *)(v5 + 29), v4);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  KeStackAttachProcess(a1[7][7], &ApcState);
  DXGSHAREDVMOBJECT::ReleaseReference(v12);
  KeUnstackDetachProcess(&ApcState);
  v13 = (struct VMBPACKETCOMPLETION__ *)a1[9];
  v14 = 0;
  VmBusCompletePacket(v13, &v14, 4u);
  return 1;
}
