/*
 * XREFs of Win32AllocateFromPagedLookasideListImpl @ 0x1C00D2970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D27C4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 */

struct _SLIST_ENTRY *__fastcall Win32AllocateFromPagedLookasideListImpl(__int64 a1)
{
  __int64 v2; // rbp
  struct _SLIST_ENTRY *v3; // rdi
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  ++*(_DWORD *)(a1 + 36);
  v2 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 16));
  if ( !v3 )
  {
    v5 = *(unsigned int *)(a1 + 60);
    v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 64);
    v7 = *(unsigned int *)(a1 + 56);
    v8 = *(unsigned int *)(a1 + 52);
    ++*(_DWORD *)(a1 + 40);
    v3 = (struct _SLIST_ENTRY *)v6(v8, v5, v7);
    if ( !v3 )
      return 0LL;
  }
  if ( !*(_BYTE *)a1 )
    return v3;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v2,
                           v3,
                           BackTrace) )
  {
    ++*(_DWORD *)(a1 + 44);
    if ( ExQueryDepthSList((PSLIST_HEADER)(a1 + 16)) < *(_WORD *)(a1 + 32) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 16), v3);
    }
    else
    {
      ++*(_DWORD *)(a1 + 48);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *))(a1 + 72))(v3);
    }
    return 0LL;
  }
  return v3 + 1;
}
