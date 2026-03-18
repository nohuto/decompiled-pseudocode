/*
 * XREFs of MiInSwapStoreWorker @ 0x1406A4D30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiInSwapStoreContextDereference @ 0x1406A4DD8 (MiInSwapStoreContextDereference.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406A4DFC (EtwTraceWorkingSetInSwapStoreFail.c)
 *     SmSwapStore @ 0x1406A4EB0 (SmSwapStore.c)
 */

__int64 __fastcall MiInSwapStoreWorker(__int64 a1)
{
  int v2; // edi
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v4, 0, sizeof(v4));
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 32), 0, (__int64)v4);
  v2 = SmSwapStore(2LL);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( v2 < 0 )
    EtwTraceWorkingSetInSwapStoreFail(*(PEPROCESS *)(a1 + 32));
  KiUnstackDetachProcess((struct _KTHREAD *)v4, 0);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
