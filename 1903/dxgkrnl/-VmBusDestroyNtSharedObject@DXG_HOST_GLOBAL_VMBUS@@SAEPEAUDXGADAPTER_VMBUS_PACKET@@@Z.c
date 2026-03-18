/*
 * XREFs of ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021E550
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C904 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0115DE0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C02197CC (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyNtSharedObject(struct _KTHREAD ***a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r9d
  struct _KTHREAD **v7; // r10
  __int64 v8; // rax
  struct _KTHREAD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  int *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  struct VMBPACKETCOMPLETION__ *v16; // rcx
  int v17; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v18[24]; // [rsp+28h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-48h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  if ( !v2 )
    return 0;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v18, a1[7]);
  v6 = *(_DWORD *)(v2 + 24);
  v7 = a1[7];
  v8 = (v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v8 >= *((_DWORD *)v7 + 56)
    || (v9 = v7[26],
        v5 = (unsigned int)v8,
        v4 = (v6 >> 25) & 0x60,
        v3 = *((unsigned int *)v9 + 4 * v8 + 2),
        ((v6 >> 25) & 0x60) != (*((_BYTE *)v9 + 16 * v8 + 8) & 0x60))
    || (v3 & 0x2000) != 0
    || (v3 & 0x1F) == 0 )
  {
LABEL_8:
    v11 = WdLogNewEntry5_WdError(v4, v3, v5);
    *(_QWORD *)(v11 + 24) = *(unsigned int *)(v2 + 24);
    WdLogEvent5_WdError(v11);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    return 0;
  }
  v5 = 2LL * (unsigned int)v8;
  v3 &= 0x1Fu;
  if ( (_BYTE)v3 != 13 )
  {
    v10 = WdLogNewEntry5_WdError(v4, v3, v5);
    *(_QWORD *)(v10 + 24) = 267LL;
    WdLogEvent5_WdError(v10);
    goto LABEL_8;
  }
  v13 = (int *)*((_QWORD *)v9 + 2 * (unsigned int)v8);
  if ( !v13 )
    goto LABEL_8;
  HMGRTABLE::FreeHandle((HMGRTABLE *)(v7 + 26), v6);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(a1[7][7], &ApcState);
  DXGSHAREDVMOBJECT::ReleaseReference(v13, v14, v15);
  KeUnstackDetachProcess(&ApcState);
  v16 = (struct VMBPACKETCOMPLETION__ *)a1[9];
  v17 = 0;
  VmBusCompletePacket(v16, &v17, 4u);
  return 1;
}
