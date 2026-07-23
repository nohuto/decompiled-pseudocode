/*
 * XREFs of VmpPrefetchWorker @ 0x1408B1D10
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VmpPrefetchVirtualAddresses @ 0x14030D020 (VmpPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall VmpPrefetchWorker(PVOID P)
{
  _BYTE v2[48]; // [rsp+20h] [rbp-48h] BYREF

  KiStackAttachProcess(*((_KPROCESS **)P + 4), 0LL, (__int64)v2);
  VmpPrefetchVirtualAddresses(*(volatile LONG **)(*((_QWORD *)P + 4) + 1856LL), *((_QWORD **)P + 5), *((_QWORD *)P + 6));
  KiUnstackDetachProcess((__int64)v2, 0LL);
  ObfDereferenceObject(*((PVOID *)P + 4));
  ExFreePoolWithTag(P, 0);
}
