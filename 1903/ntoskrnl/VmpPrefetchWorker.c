/*
 * XREFs of VmpPrefetchWorker @ 0x1408EDF40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VmpPrefetchVirtualAddresses @ 0x14032AA00 (VmpPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall VmpPrefetchWorker(PVOID P)
{
  _BYTE v2[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v2, 0, sizeof(v2));
  KiStackAttachProcess(*((_KPROCESS **)P + 4), 0, (__int64)v2);
  VmpPrefetchVirtualAddresses(*(volatile LONG **)(*((_QWORD *)P + 4) + 1904LL), *((_QWORD **)P + 5), *((_QWORD *)P + 6));
  KiUnstackDetachProcess((struct _KTHREAD *)v2, 0);
  ObfDereferenceObject(*((PVOID *)P + 4));
  ExFreePoolWithTag(P, 0);
}
