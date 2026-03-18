/*
 * XREFs of EtwpTraceThreadRundownWithStack @ 0x140331C98
 * Callers:
 *     EtwpThreadEnumCallback @ 0x14070A0A0 (EtwpThreadEnumCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x140082030 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400E5200 (KeInsertQueueApc.c)
 *     KeRemoveQueueApc @ 0x140131FF4 (KeRemoveQueueApc.c)
 *     EtwpTraceThreadRundown @ 0x140147240 (EtwpTraceThreadRundown.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall EtwpTraceThreadRundownWithStack(struct _KTHREAD *a1, __int64 a2)
{
  NTSTATUS result; // eax
  __int64 Object; // [rsp+40h] [rbp-29h] BYREF
  __int64 v6; // [rsp+48h] [rbp-21h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-19h]
  _BYTE v8[96]; // [rsp+60h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout; // [rsp+D0h] [rbp+67h] BYREF

  memset(v8, 0, 0x58uLL);
  Object = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a1 == KeGetCurrentThread() )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  if ( *(_BYTE *)(a2 + 67) )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  HIDWORD(Object) = 0;
  v7 = &v6;
  v6 = (__int64)&v6;
  LOWORD(Object) = 1;
  BYTE2(Object) = 6;
  KeInitializeApc((__int64)v8, (__int64)a1, 0, (__int64)EtwpThreadRundownApc, 0LL, 0LL, 0, 0LL);
  if ( !KeInsertQueueApc((__int64)v8, (__int64)&Object, a2, 0) )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  Timeout.QuadPart = EtwpOneMs * (unsigned int)EtwpStackCaptureTimeout;
  result = KeWaitForSingleObject(&Object, WrExecutive, 0, 0, &Timeout);
  if ( result != 258 )
    return result;
  if ( KeRemoveQueueApc((__int64)v8) )
    return EtwpTraceThreadRundown((__int64)a1, a2);
  else
    return KeWaitForSingleObject(&Object, WrExecutive, 0, 0, 0LL);
}
