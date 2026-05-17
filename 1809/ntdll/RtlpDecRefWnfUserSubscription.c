/*
 * XREFs of RtlpDecRefWnfUserSubscription @ 0x18005E64C
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18005DDCC (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18005E1EC (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18005C9C8 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpWakeByAddress @ 0x18005E81C (RtlpWakeByAddress.c)
 */

__int64 __fastcall RtlpDecRefWnfUserSubscription(unsigned __int64 a1, _QWORD *a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  _DWORD *v11; // rdi
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v8 = *(_QWORD *)(a1 + 72);
    if ( v8 )
      RtlpDecrementWnfSerializationGroup(v8, (unsigned __int64)a2, a3, a4);
    v9 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v9 + 8) != a1 + 8 || (v10 = *(_QWORD **)(a1 + 16), *v10 != a1 + 8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    v11 = *(_DWORD **)(a1 + 88);
    *a2 = *(_QWORD *)(a1 + 104);
    *a3 = *(_QWORD *)(a1 + 112);
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
    if ( v11 )
    {
      *v11 = 1;
      _InterlockedOr(v12, 0);
      return RtlpWakeByAddress(v11, 0LL);
    }
  }
  else
  {
    *a2 = 0LL;
    *a3 = 0LL;
  }
  return result;
}
