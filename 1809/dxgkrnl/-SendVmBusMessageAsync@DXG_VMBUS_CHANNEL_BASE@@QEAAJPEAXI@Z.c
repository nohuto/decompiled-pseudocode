/*
 * XREFs of ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C01EA048
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C01E88C8 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C00367F8 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::SendVmBusMessageAsync(
        DXG_VMBUS_CHANNEL_BASE *this,
        void *a2,
        unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v11; // rcx
  DXGGLOBAL *Global; // rax
  _BYTE v13[32]; // [rsp+50h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v13,
    (DXG_VMBUS_CHANNEL_BASE *)((char *)this + 8));
  if ( *((_BYTE *)this + 48) )
  {
    if ( a3 <= 0x20000 )
    {
      v9 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))qword_1C008FC80)(
             *(_QWORD *)this,
             a2,
             a3,
             0LL,
             0,
             0LL,
             0LL,
             0LL);
      Global = DXGGLOBAL::GetGlobal(v11);
      DXGGLOBAL::CheckDebugBreak(Global);
      goto LABEL_5;
    }
    v8 = WdLogNewEntry5_WdWarning(0LL, v6, v7);
    *(_QWORD *)(v8 + 24) = 10147LL;
    WdLogEvent5_WdWarning(v8);
  }
  v9 = -1073741811;
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v9;
}
