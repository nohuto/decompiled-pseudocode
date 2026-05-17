/*
 * XREFs of TppCleanupGroupAddMember @ 0x18002F138
 * Callers:
 *     TpSimpleTryPost @ 0x18002D4A0 (TpSimpleTryPost.c)
 *     TpAllocWork @ 0x18002D890 (TpAllocWork.c)
 *     TppInitializeTimer @ 0x18002D9D4 (TppInitializeTimer.c)
 *     TpAllocIoCompletion @ 0x180030F30 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x1800313F8 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180032300 (TpAllocJobNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall TppCleanupGroupAddMember(_QWORD *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx

  v5 = a1[2];
  RtlAcquireSRWLockExclusive(v5 + 8, a2, a3, a4);
  v6 = a1 + 5;
  v7 = *(_QWORD **)(v5 + 24);
  if ( *v7 != v5 + 16 )
    __fastfail(3u);
  *v6 = v5 + 16;
  a1[6] = v7;
  *v7 = v6;
  *(_QWORD *)(v5 + 24) = v6;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 8));
}
