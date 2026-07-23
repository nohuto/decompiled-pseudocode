/*
 * XREFs of EtwpAddDataSource @ 0x1405C1704
 * Callers:
 *     EtwpAddNotificationEvent @ 0x1405C12F4 (EtwpAddNotificationEvent.c)
 *     EtwpQueueNotification @ 0x1405C154C (EtwpQueueNotification.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall EtwpAddDataSource(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  signed __int64 v4; // rdi

  result = *(_QWORD **)(a1 + 1080);
  if ( !result )
  {
    result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x53777445u);
    v3 = result;
    if ( result )
    {
      memset(result, 0, 0x28uLL);
      v3[4] = v3 + 3;
      v3[3] = v3 + 3;
      v3[2] = 0LL;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1080), (signed __int64)v3, 0LL);
      if ( v4 )
      {
        ExFreePoolWithTag(v3, 0);
        return (_QWORD *)v4;
      }
      return v3;
    }
  }
  return result;
}
