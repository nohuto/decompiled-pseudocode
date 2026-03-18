/*
 * XREFs of ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C01E9F6C
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C01E88C8 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C00367F8 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(
        DXG_VMBUS_CHANNEL_BASE *this,
        void *a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5)
{
  __int64 v9; // rdx
  unsigned int *v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v15; // rax
  _BYTE v17[32]; // [rsp+50h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v17,
    (DXG_VMBUS_CHANNEL_BASE *)((char *)this + 8));
  if ( !*((_BYTE *)this + 48) )
    goto LABEL_6;
  if ( a3 > 0x20000 || (v10 = a5, *a5 > 0x20000) )
  {
    v15 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v15 + 24) = 10119LL;
    WdLogEvent5_WdWarning(v15);
LABEL_6:
    v12 = -1073741811;
    goto LABEL_7;
  }
  v12 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, _QWORD, int, void *, unsigned int *, _QWORD))qword_1C008FC80)(
          *(_QWORD *)this,
          a2,
          a3,
          0LL,
          1,
          a4,
          a5,
          0LL);
  Global = DXGGLOBAL::GetGlobal(v13);
  DXGGLOBAL::CheckDebugBreak(Global);
LABEL_7:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v12;
}
