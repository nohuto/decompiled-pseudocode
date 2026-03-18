/*
 * XREFs of ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C025F3BC
 * Callers:
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C023F9B8 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C634 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C0144E58 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::SuspendResumeEscapeAllDevices(
        struct _KTHREAD **this,
        const struct DXGADAPTER *a2,
        char a3,
        char a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  struct _KTHREAD *v11; // rdi
  DXGDEVICE *Current; // rax
  DXGDEVICE *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v18[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 2240LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( this[21] != KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 2241LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = this[31];
  v17[0] = this + 31;
  while ( 1 )
  {
    v17[1] = v11;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v17);
    v13 = Current;
    if ( !Current )
      break;
    if ( *(const struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL) == a2 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18, Current);
      if ( a3 )
        DXGDEVICE::FlushPagingQueues(v13);
      LOBYTE(v14) = a4;
      v15 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 544LL);
      v16 = *(_QWORD *)(v15 + 8);
      LOBYTE(v15) = a3;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(v16 + 1112))(*((_QWORD *)v13 + 81), v15, v14);
      if ( v18[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18);
    }
    v11 = *(struct _KTHREAD **)v11;
  }
}
