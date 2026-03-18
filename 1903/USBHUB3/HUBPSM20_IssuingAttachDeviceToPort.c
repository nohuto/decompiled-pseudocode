/*
 * XREFs of HUBPSM20_IssuingAttachDeviceToPort @ 0x1C0010160
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_AttachDevice @ 0x1C002CE5C (HUBMISC_AttachDevice.c)
 */

__int64 __fastcall HUBPSM20_IssuingAttachDeviceToPort(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1328LL) + 1456LL) |= 0x10000u;
  return HUBMISC_AttachDevice();
}
