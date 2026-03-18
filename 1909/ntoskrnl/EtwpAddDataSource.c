/*
 * XREFs of EtwpAddDataSource @ 0x140693AB8
 * Callers:
 *     EtwpQueueNotification @ 0x140693858 (EtwpQueueNotification.c)
 *     EtwpAddNotificationEvent @ 0x140693A10 (EtwpAddNotificationEvent.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall EtwpAddDataSource(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  signed __int64 v5; // rbx

  result = *(_QWORD **)(a1 + 1080);
  if ( !result )
  {
    result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x53777445u);
    v3 = result;
    if ( result )
    {
      *result = 0LL;
      result[1] = 0LL;
      result[4] = 0LL;
      v4 = result + 3;
      v4[1] = v4;
      *v4 = v4;
      v3[2] = 0LL;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1080), (signed __int64)v3, 0LL);
      if ( v5 )
      {
        ExFreePoolWithTag(v3, 0);
        return (_QWORD *)v5;
      }
      return v3;
    }
  }
  return result;
}
