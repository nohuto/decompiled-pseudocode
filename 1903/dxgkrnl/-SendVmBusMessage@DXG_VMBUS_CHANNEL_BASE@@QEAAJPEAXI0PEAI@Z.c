/*
 * XREFs of ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C021989C
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C021803C (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C003CBE0 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(
        struct _KTHREAD **this,
        void *a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5)
{
  __int64 v9; // rdx
  unsigned int *v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v16; // rax
  _BYTE v18[32]; // [rsp+50h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v18, this + 1);
  if ( !*((_BYTE *)this + 48) )
    goto LABEL_6;
  if ( a3 > 0x20000 || (v10 = a5, *a5 > 0x20000) )
  {
    v16 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v16 + 24) = 10140LL;
    WdLogEvent5_WdWarning(v16);
LABEL_6:
    v12 = -1073741811;
    goto LABEL_7;
  }
  v12 = ((__int64 (__fastcall *)(struct _KTHREAD *, void *, _QWORD, _QWORD, int, void *, unsigned int *, _QWORD))qword_1C00A3C90)(
          *this,
          a2,
          a3,
          0LL,
          1,
          a4,
          a5,
          0LL);
  Global = DXGGLOBAL::GetGlobal(v14, v13);
  DXGGLOBAL::CheckDebugBreak(Global);
LABEL_7:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return v12;
}
