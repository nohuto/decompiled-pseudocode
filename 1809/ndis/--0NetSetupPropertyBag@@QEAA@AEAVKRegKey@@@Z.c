/*
 * XREFs of ??0NetSetupPropertyBag@@QEAA@AEAVKRegKey@@@Z @ 0x1C00B4314
 * Callers:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C001C9E8 (ndisIfReadNetworkGuidFromKey.c)
 * Callees:
 *     <none>
 */

NetSetupPropertyBag *__fastcall NetSetupPropertyBag::NetSetupPropertyBag(NetSetupPropertyBag *this, struct KRegKey *a2)
{
  *(_QWORD *)this = a2;
  return this;
}
