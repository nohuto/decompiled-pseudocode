/*
 * XREFs of ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C010D8C0
 * Callers:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C010D814 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAXW4_POOL_TYPE@@_KIPEAI@Z @ 0x1C020E058 (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 * Callees:
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C010D92C (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D27C4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D2864 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

char *__fastcall NSInstrumentation::CLeakTrackingAllocator::Allocate(
        NSInstrumentation::CLeakTrackingAllocator *this,
        enum _POOL_TYPE a2,
        __int64 a3,
        unsigned int a4)
{
  ULONG v5; // r9d
  SIZE_T v6; // r10
  POOL_TYPE v7; // r11d
  __int64 v8; // rbx
  char v10; // bp
  char *PoolWithTag; // rdi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v8 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(this, a4) )
    return (char *)ExAllocatePoolWithTag(v7, v6, v5);
  v10 = 0;
  if ( v6 < 0x1000 || (v6 & 0xFFF) != 0 )
  {
    v10 = 1;
    v6 += 16LL;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(v7, v6, v5);
  if ( PoolWithTag )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v10 && (unsigned __int64)((unsigned __int16)PoolWithTag & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              this,
                              PoolWithTag,
                              BackTrace) )
        return PoolWithTag + 16;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 this,
                                 PoolWithTag,
                                 BackTrace) )
    {
      return PoolWithTag;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (char *)v8;
}
