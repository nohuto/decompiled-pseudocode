/*
 * XREFs of PopFxUnregisterDeviceOrWait @ 0x1406EF00C
 * Callers:
 *     PoFxAbandonDevice @ 0x1406ED008 (PoFxAbandonDevice.c)
 *     PoFxUnregisterDevice @ 0x1408695B0 (PoFxUnregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     PopFxLockDevice @ 0x14015B058 (PopFxLockDevice.c)
 *     PopFxUnregisterDevice @ 0x14086A7AC (PopFxUnregisterDevice.c)
 */

LONG __fastcall PopFxUnregisterDeviceOrWait(struct _KEVENT *a1)
{
  ULONG_PTR v2; // rax

  _m_prefetchw(&a1[12].Header.WaitListHead);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1[12].Header.WaitListHead, 8u) & 8) != 0 )
    return KeWaitForSingleObject(&a1[4], Executive, 0, 0, 0LL);
  v2 = PopFxLockDevice((__int64)a1, 0);
  if ( v2 )
    return PopFxUnregisterDevice(v2);
  else
    return KeSetEvent(a1 + 4, 0, 0);
}
