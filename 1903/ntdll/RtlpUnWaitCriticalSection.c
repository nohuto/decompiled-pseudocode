/*
 * XREFs of RtlpUnWaitCriticalSection @ 0x1800E6E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007850 @ 0x180007850 (sub_180007850.c)
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

int __fastcall RtlpUnWaitCriticalSection(__int64 a1)
{
  HANDLE v1; // rax
  int result; // eax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(HANDLE *)(a1 + 24);
  if ( !v1 )
    v1 = sub_180007850(a1);
  if ( v1 == (HANDLE)-1LL )
  {
    _InterlockedOr(v4, 0);
    return sub_180006FCC(a1 + 8, 0);
  }
  else
  {
    result = ZwSetEvent(v1, 0LL);
    if ( result < 0 )
      RtlRaiseStatus(result);
  }
  return result;
}
