/*
 * XREFs of PoTraceSystemTimerResolutionKernel @ 0x140112380
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140033B30 (KiCheckForTimerExpiration.c)
 *     KiSetClockInterval @ 0x140111E80 (KiSetClockInterval.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1402B03BC (KiSetVirtualHeteroClockIntervalRequest.c)
 *     ExSetTimerResolution @ 0x140337BE0 (ExSetTimerResolution.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall PoTraceSystemTimerResolutionKernel(int a1, int a2)
{
  REGHANDLE v2; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+5Ch] [rbp-1Ch]
  int v7; // [rsp+80h] [rbp+8h] BYREF
  int v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_KERNEL_STRS) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 4;
      v4 = &v8;
      v5 = 4;
      EtwWriteEx(v2, &POP_ETW_EVENT_KERNEL_STRS, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
