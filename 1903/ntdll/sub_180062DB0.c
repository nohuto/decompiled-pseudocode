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

void __fastcall sub_180062DB0(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rbx
  _RTL_SRWLOCK *v3; // rax
  _RTL_SRWLOCK **Ptr; // rdx

  v2 = *(_RTL_SRWLOCK **)(a1 + 16);
  RtlAcquireSRWLockExclusive(v2 + 1);
  v3 = (_RTL_SRWLOCK *)(a1 + 40);
  Ptr = (_RTL_SRWLOCK **)v2[3].Ptr;
  if ( *Ptr != &v2[2] )
    __fastfail(3u);
  v3->Ptr = &v2[2];
  *(_QWORD *)(a1 + 48) = Ptr;
  *Ptr = v3;
  v2[3].Ptr = v3;
  RtlReleaseSRWLockExclusive(v2 + 1);
}
