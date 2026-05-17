/*
 * XREFs of sub_180062DB0 @ 0x180062DB0
 * Callers:
 *     sub_180031AA0 @ 0x180031AA0 (sub_180031AA0.c)
 *     TpSimpleTryPost @ 0x180037260 (TpSimpleTryPost.c)
 *     TpAllocIoCompletion @ 0x180062780 (TpAllocIoCompletion.c)
 *     TpAllocWork @ 0x180062C70 (TpAllocWork.c)
 *     sub_1800787D4 @ 0x1800787D4 (sub_1800787D4.c)
 *     TpAllocJobNotification @ 0x18007E070 (TpAllocJobNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_180062DB0(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rdx

  v2 = a1[2];
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v2 + 8));
  v3 = a1 + 5;
  v4 = *(_QWORD **)(v2 + 24);
  if ( *v4 != v2 + 16 )
    __fastfail(3u);
  *v3 = v2 + 16;
  a1[6] = v4;
  *v4 = v3;
  *(_QWORD *)(v2 + 24) = v3;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v2 + 8));
}
