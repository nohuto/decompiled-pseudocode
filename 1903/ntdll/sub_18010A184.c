/*
 * XREFs of sub_18010A184 @ 0x18010A184
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800F36C0 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     sub_1800665B4 @ 0x1800665B4 (sub_1800665B4.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwGetContextThread @ 0x18009E470 (ZwGetContextThread.c)
 */

__int64 __fastcall sub_18010A184(__int64 a1)
{
  __int64 v3; // rcx
  NTSTATUS ContextThread; // edi
  struct _CONTEXT ThreadContext; // [rsp+20h] [rbp-4E8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  ThreadContext.ContextFlags = 1048592;
  ContextThread = ZwGetContextThread((HANDLE)0xFFFFFFFFFFFFFFFELL, &ThreadContext);
  if ( ContextThread >= 0 )
  {
    sub_1800665B4(v3, a1 + 16, 1048592);
    if ( (*(_DWORD *)(a1 + 128) & 0x355LL) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1264), 4u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1264), 4u);
  }
  return (unsigned int)ContextThread;
}
