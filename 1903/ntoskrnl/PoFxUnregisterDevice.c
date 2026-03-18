/*
 * XREFs of PoFxUnregisterDevice @ 0x14078A7E0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDestroyDeviceDpm @ 0x14019C7D4 (PopFxDestroyDeviceDpm.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140730C58 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x14076EA3C (PopFxUnregisterDevice.c)
 */

LONG __fastcall PoFxUnregisterDevice(ULONG_PTR a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
    PopFxUnregisterDeviceOrWait(*(struct _KEVENT **)(a1 + 48));
  else
    PopFxUnregisterDevice(a1);
  return PopFxDestroyDeviceDpm(v1, a1);
}
