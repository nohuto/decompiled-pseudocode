/*
 * XREFs of Win32AllocPoolWithPriorityImpl @ 0x1C020E8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KIW4_EX_POOL_PRIORITY@@@Z @ 0x1C02D2A20 (-AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KIW4_EX_POOL_.c)
 */

void *__fastcall Win32AllocPoolWithPriorityImpl(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned __int64 a2,
        unsigned int a3,
        enum _EX_POOL_PRIORITY a4)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(a1, (enum _POOL_TYPE)a1, a2, a3, a4);
}
