/*
 * XREFs of CiProcessDereference @ 0x1C000A7C0
 * Callers:
 *     CiProcessNotification @ 0x1C0001BA0 (CiProcessNotification.c)
 *     CiDispatchClose @ 0x1C000A500 (CiDispatchClose.c)
 *     CiThreadCleanup @ 0x1C000A630 (CiThreadCleanup.c)
 *     CiThreadCreate @ 0x1C000AE70 (CiThreadCreate.c)
 *     CiDispatchCreateNotificationClient @ 0x1C000C230 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     <none>
 */

void __fastcall CiProcessDereference(char *P)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rcx
  char v4; // di
  signed __int64 v5; // rax
  bool v6; // cc
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  _m_prefetchw(P + 32);
  v2 = *((_QWORD *)P + 4);
  v3 = v2 - 1;
  if ( v2 - 1 > 0 )
  {
    while ( 1 )
    {
      v8 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)P + 4, v3, v2);
      if ( v8 == v2 )
        break;
      v3 = v2 - 1;
      if ( v2 - 1 <= 0 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    if ( v3 )
      __fastfail(0xEu);
    v4 = 0;
    ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
    WPP_MAIN_CB.DeviceQueue.Lock = (KSPIN_LOCK)KeGetCurrentThread();
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 4, 0xFFFFFFFFFFFFFFFFuLL);
    v6 = v5 <= 1;
    v7 = v5 - 1;
    if ( v6 )
    {
      if ( v7 )
        __fastfail(0xEu);
      v4 = 1;
      RtlRbRemoveNode(&WPP_MAIN_CB.DeviceQueue.Busy, P + 40);
    }
    WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
    ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
    if ( v4 )
    {
      ObfDereferenceObject(*((PVOID *)P + 10));
      ExFreePoolWithTag(P, 0x5073634Du);
    }
  }
}
