/*
 * XREFs of ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C0144E58
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C012015C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0230240 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C025F3BC (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::FlushPagingQueues(DXGDEVICE *this)
{
  __int64 v2; // rcx
  _QWORD *i; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *(struct _KTHREAD **)(v4 + 128) != KeGetCurrentThread() )
    {
      v5 = WdLogNewEntry5_WdAssertion(v2, v4);
      *(_QWORD *)(v5 + 24) = 7722LL;
      WdLogEvent5_WdAssertion(v5);
    }
  }
  if ( (*((_BYTE *)this + 1749) & 1) == 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 49); i != (_QWORD *)((char *)this + 392) && i; i = (_QWORD *)*i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL) + 904LL))(i[4]);
  }
}
