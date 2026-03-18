/*
 * XREFs of Win32AllocPoolImpl @ 0x1C00D5230
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02ADE34 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02ADED4 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

char *__fastcall Win32AllocPoolImpl(POOL_TYPE a1, SIZE_T a2, ULONG a3)
{
  PVOID v3; // rbx
  __int64 v5; // rax
  char v6; // si
  char *PoolWithTag; // rdi
  PVOID BackTrace[21]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = gpLeakTrackingAllocator;
  if ( (a3 & *((_DWORD *)gpLeakTrackingAllocator + 10)) != a3 )
    return (char *)ExAllocatePoolWithTag(a1, a2, a3);
  v5 = 0LL;
  if ( !*((_DWORD *)gpLeakTrackingAllocator + 11) )
    return (char *)ExAllocatePoolWithTag(a1, a2, a3);
  while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != a3 )
  {
    if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      return (char *)ExAllocatePoolWithTag(a1, a2, a3);
  }
  v6 = 0;
  if ( a2 < 0x1000 || (a2 & 0xFFF) != 0 )
  {
    v6 = 1;
    a2 += 16LL;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(a1, a2, a3);
  if ( PoolWithTag )
  {
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v6 && (unsigned __int64)((unsigned __int16)PoolWithTag & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v3,
                              PoolWithTag,
                              BackTrace) )
        return PoolWithTag + 16;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v3,
                                 PoolWithTag,
                                 BackTrace) )
    {
      return PoolWithTag;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return 0LL;
}
