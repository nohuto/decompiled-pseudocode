/*
 * XREFs of RegisterHiddenIdleStates @ 0x1C001E044
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C00035A0 (RegisterKernelIdleStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     DecodeAcpi2CState @ 0x1C0023F54 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterHiddenIdleStates(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // rdx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 78) )
    return 3221225485LL;
  if ( !HalPrivateDispatchTable[147] )
    return 3221225659LL;
  v3 = *(_DWORD **)(a1 + 496);
  if ( !v3 || !*v3 || (*(_DWORD *)(a1 + 264) & 0x7F077) == 0 )
    return 3221225473LL;
  result = DecodeAcpi2CState(a1, (int)v3 + 20 * (*v3 - 1) + 4, (unsigned int)&v4, 0, 0LL);
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(_QWORD, __int64))HalPrivateDispatchTable[147])(*(unsigned int *)(a1 + 80), v4);
  return result;
}
