/*
 * XREFs of sub_18002A960 @ 0x18002A960
 * Callers:
 *     <none>
 * Callees:
 *     ?ContextPriority@SchedulerProxy@details@Concurrency@@QEBAHXZ @ 0x180067EEC (-ContextPriority@SchedulerProxy@details@Concurrency@@QEBAHXZ.c)
 *     sub_180068A28 @ 0x180068A28 (sub_180068A28.c)
 *     sub_180068A90 @ 0x180068A90 (sub_180068A90.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_18002A960(Concurrency::details::SchedulerProxy *this, float a2, float a3)
{
  int v5; // eax

  if ( a2 == (*(float (__fastcall **)(Concurrency::details::SchedulerProxy *))(*(_QWORD *)this + 128LL))(this)
    && a3 == (*(float (__fastcall **)(Concurrency::details::SchedulerProxy *))(*(_QWORD *)this + 136LL))(this)
    && !(unsigned int)Concurrency::details::SchedulerProxy::ContextPriority(this) )
  {
    return 1;
  }
  v5 = Concurrency::details::SchedulerProxy::ContextPriority(this);
  if ( v5 > 0 )
    sub_180068A28(this, (unsigned int)(v5 - 1));
  if ( (unsigned __int8)sub_180068A90(this) )
  {
    (*(void (__fastcall **)(Concurrency::details::SchedulerProxy *))(*(_QWORD *)this + 416LL))(this);
    return 1;
  }
  return 0;
}
