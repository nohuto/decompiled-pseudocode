/*
 * XREFs of ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C0196AC8
 * Callers:
 *     Win32UAFMAllocPoolWithQuotaImpl @ 0x1C01D3EE0 (Win32UAFMAllocPoolWithQuotaImpl.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_ec6537825fc6790e67aff99146f8d1bf___lambda_f46a24200fa13ebf3509176f7b31ac85___ @ 0x1C0196CB4 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_ec6537825fc6790e67aff99146f8d1.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
        NSInstrumentation::CLeakTrackingAllocator *this,
        enum _POOL_TYPE a2,
        __int64 a3,
        unsigned int a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF
  enum _POOL_TYPE v6; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+68h] [rbp+20h] BYREF

  v7 = a4;
  v6 = a2;
  v5[0] = &v6;
  v5[1] = &v7;
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_ec6537825fc6790e67aff99146f8d1bf___lambda_f46a24200fa13ebf3509176f7b31ac85___(
           gpLeakTrackingAllocator,
           a3,
           a4,
           v5);
}
