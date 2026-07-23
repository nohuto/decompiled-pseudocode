/*
 * XREFs of sub_18007A798 @ 0x18007A798
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_18007A798(__int64 a1)
{
  __int64 v1; // r8
  LOGICAL result; // eax

  v1 = *(_QWORD *)(a1 + 336);
  if ( v1 )
  {
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF);
    if ( result == 1 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 3145728, *(PVOID *)v1);
  }
  return result;
}
