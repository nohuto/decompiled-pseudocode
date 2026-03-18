/*
 * XREFs of ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C01F44EC
 * Callers:
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0134F10 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(
        DXGADAPTER **this,
        unsigned int a2,
        char a3,
        ULONG a4,
        PVOID *Object)
{
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  KWAIT_REASON v14; // r9d
  __int64 v16; // rax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-1E8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+50h] [rbp-1D8h] BYREF

  v8 = a2;
  if ( DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v12 + 24) = 6996LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( a4 - 1 > 8 )
  {
    v16 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    return -1073741811;
  }
  else
  {
    v13 = (__int64)this[14] + 912;
    Timeout.QuadPart = -800000LL;
    *Object = (PVOID)(v13 + 3968 * v8);
    if ( a3 )
      v14 = UserRequest;
    else
      v14 = Executive;
    return KeWaitForMultipleObjects(a4, Object, WaitAny, v14, 0, 0, &Timeout, &WaitBlockArray);
  }
}
