/*
 * XREFs of StorPortSynchronizeAccess @ 0x1C0022AE0
 * Callers:
 *     StorPortSynchronizeAccessVrfy @ 0x1C00777F0 (StorPortSynchronizeAccessVrfy.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006E60 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006FF4 (RaidAdapterReleaseInterruptLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

char __fastcall StorPortSynchronizeAccess(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 *v3; // rax
  KIRQL v4; // di
  __int64 v8; // rbx
  char v9; // si

  v3 = *(__int64 **)(a1 - 16);
  v4 = 0;
  v8 = *v3;
  if ( !*v3 )
    return 0;
  if ( *(_DWORD *)(v8 + 712) == 1 )
    v4 = RaidAdapterAcquireInterruptLock(*v3);
  v9 = a2(a1, a3);
  if ( *(_DWORD *)(v8 + 712) == 1 )
    RaidAdapterReleaseInterruptLock(v8, v4);
  return v9;
}
