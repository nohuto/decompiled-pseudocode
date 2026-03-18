/*
 * XREFs of KeStartProfile @ 0x140295B2C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406C57B0 (EtwpEnableKernelTrace.c)
 *     EtwpCoverageSamplerStart @ 0x1408C8B70 (EtwpCoverageSamplerStart.c)
 *     NtStartProfile @ 0x1408DA400 (NtStartProfile.c)
 *     KiInitializeCacheErrataSupport @ 0x1409F6D84 (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400A6A60 (KeQueryMaximumProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x140175910 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     KiStartProfileTarget @ 0x140295FB0 (KiStartProfileTarget.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

char __fastcall KeStartProfile(ULONG_PTR a1)
{
  SIZE_T v2; // rbx
  PVOID PoolWithTag; // rax
  ULONG_PTR Context[26]; // [rsp+20h] [rbp-89h] BYREF

  memset(Context, 0, 0xC8uLL);
  HIDWORD(Context[1]) = KeNumberProcessors_0;
  LODWORD(Context[1]) = KeNumberProcessors_0;
  LODWORD(Context[2]) = 1310721;
  Context[0] = a1;
  memset((char *)&Context[2] + 4, 0, 0xA4uLL);
  v2 = 4 * KeQueryMaximumProcessorCountEx(0xFFFFu) + 196;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x666F7250u);
  Context[23] = (ULONG_PTR)PoolWithTag;
  if ( !PoolWithTag )
    return 1;
  memset(PoolWithTag, 0, v2);
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    KiStartProfileTarget((ULONG_PTR)Context);
  else
    KeIpiGenericCall(KiStartProfileTarget, (ULONG_PTR)Context);
  if ( Context[23] )
    ExFreePoolWithTag((PVOID)Context[23], 0x666F7250u);
  return Context[24];
}
