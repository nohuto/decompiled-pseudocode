/*
 * XREFs of ?GetConnectorFormat@CSaDeviceProxy@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x1800E3BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct tWAVEFORMATEX *__fastcall CSaDeviceProxy::GetConnectorFormat(CSaDeviceProxy *this)
{
  return *(const struct tWAVEFORMATEX **)(*((_QWORD *)this + 5) + 16LL);
}
