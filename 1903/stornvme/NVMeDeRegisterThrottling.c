/*
 * XREFs of NVMeDeRegisterThrottling @ 0x1C0004E54
 * Callers:
 *     NVMeDisableThrottling @ 0x1C0004D90 (NVMeDisableThrottling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeDeRegisterThrottling(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  __int64 result; // rax

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 8LL * a2 + 3800);
  if ( !v4 )
    return 3238002695LL;
  result = StorPortExtendedFunction(1LL, a1, v4);
  *(_QWORD *)(a1 + 8 * v2 + 3800) = 0LL;
  return result;
}
