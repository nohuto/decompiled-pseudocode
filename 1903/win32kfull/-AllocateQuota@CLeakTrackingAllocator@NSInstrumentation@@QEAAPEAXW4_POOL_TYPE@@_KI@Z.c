/*
 * XREFs of ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C02D2F34
 * Callers:
 *     Win32UAFMAllocPoolWithQuotaImpl @ 0x1C020ECA0 (Win32UAFMAllocPoolWithQuotaImpl.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_5a5c26db124383813a4ad6aa9f2996d5___lambda_f46a24200fa13ebf3509176f7b31ac85___ @ 0x1C02D2A00 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_5a5c26db124383813a4ad6aa9f2996.c)
 */

char *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
        NSInstrumentation::CLeakTrackingAllocator *this,
        enum _POOL_TYPE a2,
        __int64 a3,
        int a4)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_5a5c26db124383813a4ad6aa9f2996d5___lambda_f46a24200fa13ebf3509176f7b31ac85___(
           *(NSInstrumentation::CLeakTrackingAllocator **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
           a3,
           a4);
}
