/*
 * XREFs of RegisterKernelCpc @ 0x1C0031A50
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C002FF1C (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterKernelCpc(__int64 a1)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterKernelPerfStatesCallback);
}
