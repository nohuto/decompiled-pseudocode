/*
 * XREFs of ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C025E670
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00D35C0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0006B3C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0124B10 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

void __fastcall DXGPROCESS::FlushAllDevice(struct _KTHREAD **this, const struct DXGADAPTER *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rax
  struct _KTHREAD *v8; // rbx
  _QWORD *Current; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 2356LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 2358LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( this[21] != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 2359LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (char *)(this + 31);
  v8 = this[31];
  v10[0] = v7;
  while ( 1 )
  {
    v10[1] = v8;
    Current = (_QWORD *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v10);
    if ( !Current )
      break;
    if ( *(const struct DXGADAPTER **)(Current[2] + 16LL) == a2 )
      DXGDEVICE::FlushScheduler(Current, 5u);
    v8 = *(struct _KTHREAD **)v8;
  }
}
