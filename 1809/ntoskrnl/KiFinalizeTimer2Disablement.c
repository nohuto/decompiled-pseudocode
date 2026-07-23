/*
 * XREFs of KiFinalizeTimer2Disablement @ 0x1400FB0DC
 * Callers:
 *     KiUpdateTimer2Flags @ 0x1400FB3AC (KiUpdateTimer2Flags.c)
 *     KiExpireTimer2 @ 0x1400FB980 (KiExpireTimer2.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14011BCDC (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiFinalizeTimer2Disablement(unsigned __int64 a1)
{
  __int64 v1; // r15
  char v3; // bp
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  void (__fastcall *v6)(unsigned __int64); // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v9[3]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v10[32]; // [rsp+48h] [rbp-50h] BYREF

  v1 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 96);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  result = KiWaitNever;
  v5 = 0LL;
  v6 = (void (__fastcall *)(unsigned __int64))(KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(
                                                                                      KiWaitNever ^ *(_QWORD *)(a1 + 112),
                                                                                      KiWaitNever)));
  if ( v6 )
  {
    v5 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 120), KiWaitNever));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( v3 )
      EtwGetKernelTraceTimestamp(v10, 1073872896LL);
    v6(v5);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( v3 )
  {
    v9[1] = v6;
    v9[2] = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v5 ^ KiWaitAlways), KiWaitNever));
    v9[0] = 0x7E35C6C7F3DD7277LL
          * (KiWaitNever ^ __ROR8__(
                             KiWaitAlways ^ _byteswap_uint64(a1 ^ KiWaitAlways) ^ _byteswap_uint64(a1 ^ __ROL8__(v1 ^ KiWaitNever, KiWaitNever)),
                             KiWaitNever));
    if ( !v6 )
      EtwGetKernelTraceTimestamp(v10, 1073872896LL);
    return EtwTraceTimedEvent(3948, 1073872896, (unsigned int)v9, 24, 4197890, (__int64)v10);
  }
  return result;
}
