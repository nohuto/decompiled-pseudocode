/*
 * XREFs of RtlFreeUserFiberShadowStack @ 0x1800E0AC0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetInformationProcess @ 0x18009CA60 (ZwSetInformationProcess.c)
 */

NTSTATUS __fastcall RtlFreeUserFiberShadowStack(__int64 a1)
{
  __int64 ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  ProcessInformation = a1;
  return ZwSetInformationProcess(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           ProcessFreeFiberShadowStackAllocation,
           &ProcessInformation,
           8u);
}
