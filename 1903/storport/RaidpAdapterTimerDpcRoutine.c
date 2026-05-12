/*
 * XREFs of RaidpAdapterTimerDpcRoutine @ 0x1C0006F80
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C00070AC (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C00070DC (RaidAdapterAcquireStartIoLock.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007118 (RaidAcquireAdapterRemoveLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdd @ 0x1C0037A58 (WPP_SF_qdd.c)
 */

void __fastcall RaidpAdapterTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        unsigned __int64 SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64); // rdi
  __int64 v6; // rdx
  struct _DEVICE_OBJECT *v7; // rcx
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = DeferredContext[8];
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v5 = (void (__fastcall *)(__int64))_InterlockedExchange64((volatile __int64 *)(v4 + 1920), 0LL);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v4 + 264);
    if ( (int)v6 < 6 || (SystemArgument1 = *(unsigned int *)(v4 + 268), (int)SystemArgument1 < 4) )
    {
      if ( (int)RaidAcquireAdapterRemoveLock(v4, v6, SystemArgument1, SystemArgument2) >= 0 )
      {
        RaidAdapterAcquireStartIoLock(v4, &v8);
        v5(*(_QWORD *)(v4 + 536) + 16LL);
        RaidAdapterReleaseStartIoLock(v4, &v8);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 256));
        if ( *(_BYTE *)(v4 + 105) )
        {
          v7 = *(struct _DEVICE_OBJECT **)(v4 + 32);
          *(_BYTE *)(v4 + 105) = 0;
          IoInvalidateDeviceRelations(v7, BusRelations);
        }
      }
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qdd(WPP_GLOBAL_Control->AttachedDevice, v6, SystemArgument1, v4, v6, *(_DWORD *)(v4 + 268), v8, v9, v10);
    }
  }
}
