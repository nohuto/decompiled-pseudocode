/*
 * XREFs of WPP_SF_dL @ 0x18012B454
 * Callers:
 *     ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x18012AF70 (-LockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_dL(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_31719bc1b6a93d8e0985d66f04e9a71e_Traceguids, 0xAu, &v5, 4LL, va, 4LL, 0LL);
}
