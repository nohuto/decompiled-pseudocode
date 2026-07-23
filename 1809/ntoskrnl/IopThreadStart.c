/*
 * XREFs of IopThreadStart @ 0x140702870
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsTerminateSystemThread @ 0x1406CD810 (PsTerminateSystemThread.c)
 */

NTSTATUS __fastcall IopThreadStart(_QWORD *a1)
{
  PVOID Object[2]; // [rsp+20h] [rbp-38h]
  __int64 v3; // [rsp+40h] [rbp-18h]

  *(_OWORD *)Object = *(_OWORD *)a1;
  v3 = a1[2];
  ExFreePoolWithTag(a1, 0);
  ((void (__fastcall *)(__int64))_mm_srli_si128(*(__m128i *)Object, 8).m128i_i64[0])(v3);
  ObfDereferenceObject(Object[0]);
  return PsTerminateSystemThread(0);
}
