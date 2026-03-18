/*
 * XREFs of PnpIrpDeviceEnumerated @ 0x14015BAC8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopSynchronousCall @ 0x140663D44 (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpDeviceEnumerated(int a1)
{
  _WORD v3[36]; // [rsp+30h] [rbp-58h] BYREF

  memset(v3, 0, sizeof(v3));
  v3[0] = 6427;
  return IopSynchronousCall(a1, (unsigned int)v3, -1073741637, 0, 0LL);
}
