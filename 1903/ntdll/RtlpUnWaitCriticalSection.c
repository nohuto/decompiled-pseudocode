/*
 * XREFs of RtlpUnWaitCriticalSection @ 0x1800E6E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007850 @ 0x180007850 (sub_180007850.c)
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

signed __int64 __fastcall RtlpUnWaitCriticalSection(__int64 a1)
{
  signed __int64 v1; // rax
  signed __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1 )
    v1 = sub_180007850(a1);
  if ( v1 == -1 )
  {
    _InterlockedOr(v4, 0);
    return sub_180006FCC(a1 + 8, 0);
  }
  else
  {
    result = ZwSetEvent();
    if ( (int)result < 0 )
      RtlRaiseStatus((unsigned int)result);
  }
  return result;
}
