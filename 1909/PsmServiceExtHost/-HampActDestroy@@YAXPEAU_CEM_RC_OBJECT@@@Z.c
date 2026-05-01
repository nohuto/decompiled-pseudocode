/*
 * XREFs of ?HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800302B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x1800303D8 (CempLockTrackerMarkAcquired.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampActDestroy(struct _CEM_RC_OBJECT *a1, __int64 a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  bool v6; // zf
  _QWORD *Value; // rax
  unsigned __int64 v8; // rdi

  v3 = (__int64 *)*((_QWORD *)a1 + 11);
  if ( v3 )
  {
    v4 = *v3;
    v3[1] = 0LL;
    (*(void (**)(void))(v4 + 16))();
  }
  v5 = *((_QWORD *)a1 + 10);
  if ( v5 )
  {
    CempLockTrackerMarkAcquired(v3, a2, 0LL);
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    dword_1800AC208 = GetCurrentThreadId();
    v6 = (*(_QWORD *)(v5 + 592))-- == 1LL;
    if ( v6 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v5 - 64));
    dword_1800AC208 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)Value & 1) == 0 )
        __int2c();
      v6 = Value[1]-- == 1LL;
      if ( v6 )
        *Value &= ~1uLL;
    }
  }
  if ( *((_QWORD *)a1 + 3) )
    __int2c();
  if ( *((_QWORD *)a1 + 2) != -1LL )
  {
    v8 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    RtlAcquireSRWLockExclusive(v8 + 16);
    RtlRbRemoveNode(v8, a1);
    --*(_DWORD *)(v8 + 40);
    RtlReleaseSRWLockExclusive(v8 + 16);
    RtlWakeAllConditionVariable(v8 + 32);
  }
  *((_QWORD *)a1 + 4) |= 0xFFFFFFFFFFFFFFFCuLL;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
