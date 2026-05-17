/*
 * XREFs of LdrEnumerateLoadedModules @ 0x180079E20
 * Callers:
 *     RtlLockModuleSection @ 0x180079CE0 (RtlLockModuleSection.c)
 * Callees:
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     LdrpReleaseLoaderLock @ 0x18002AFD4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18002B034 (LdrpAcquireLoaderLock.c)
 *     LdrpDropLastInProgressCount @ 0x180079EDC (LdrpDropLastInProgressCount.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrEnumerateLoadedModules(int a1, void (__fastcall *a2)(__int64 *, __int64, char *), __int64 a3)
{
  char v5; // bl
  __int64 v6; // rcx
  __int64 *i; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v13; // [rsp+40h] [rbp+8h] BYREF
  char v14; // [rsp+58h] [rbp+20h]

  if ( a1 || !a2 )
    return 3221225485LL;
  v13 = 0;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v5 = 1;
    v14 = 1;
  }
  else
  {
    v5 = 0;
    v14 = 0;
    LdrpDrainWorkQueue(0);
  }
  LdrpAcquireLoaderLock();
  for ( i = (__int64 *)qword_1801653D0; i != &qword_1801653D0; i = (__int64 *)*i )
  {
    a2(i, a3, &v13);
    if ( v13 )
      break;
  }
  LdrpReleaseLoaderLock(v6, 15, 0);
  if ( !v5 )
    LdrpDropLastInProgressCount(v9, v8, v10, v11);
  return 0LL;
}
