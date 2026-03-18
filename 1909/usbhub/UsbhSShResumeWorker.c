/*
 * XREFs of UsbhSShResumeWorker @ 0x1C005DAF0
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0010580 (Usbh_SSH_Event.c)
 *     Log @ 0x1C0013360 (Log.c)
 */

__int64 __fastcall UsbhSShResumeWorker(__int64 a1, unsigned int a2)
{
  struct _DEVICE_OBJECT *v2; // r9
  __int64 v3; // r10

  Log(a1, 0x10000, 1400066647, a1, a2);
  return Usbh_SSH_Event(v2, 6u, v3);
}
