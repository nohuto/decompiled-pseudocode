/*
 * XREFs of PoFxUnregisterDevice @ 0x14078CC80
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDestroyDeviceDpm @ 0x14019CF54 (PopFxDestroyDeviceDpm.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140732EB8 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x14077189C (PopFxUnregisterDevice.c)
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
