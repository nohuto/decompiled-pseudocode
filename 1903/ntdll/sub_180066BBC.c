/*
 * XREFs of sub_180066BBC @ 0x180066BBC
 * Callers:
 *     sub_180030390 @ 0x180030390 (sub_180030390.c)
 *     sub_180030488 @ 0x180030488 (sub_180030488.c)
 *     sub_180031458 @ 0x180031458 (sub_180031458.c)
 *     sub_180031C98 @ 0x180031C98 (sub_180031C98.c)
 *     sub_180032F0C @ 0x180032F0C (sub_180032F0C.c)
 *     sub_1800332A0 @ 0x1800332A0 (sub_1800332A0.c)
 *     sub_1800351D0 @ 0x1800351D0 (sub_1800351D0.c)
 *     TpWaitForIoCompletion @ 0x180062640 (TpWaitForIoCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x1800626B0 (TpCancelAsyncIoOperation.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800668E0 (TpReleaseCleanupGroupMembers.c)
 *     TpWaitForAlpcCompletion @ 0x180078640 (TpWaitForAlpcCompletion.c)
 *     TpWaitForJobNotification @ 0x18007DE70 (TpWaitForJobNotification.c)
 *     TpDisassociateCallback @ 0x18007F330 (TpDisassociateCallback.c)
 *     sub_18007FC20 @ 0x18007FC20 (sub_18007FC20.c)
 *     sub_180084810 @ 0x180084810 (sub_180084810.c)
 *     sub_18010E7E0 @ 0x18010E7E0 (sub_18010E7E0.c)
 *     sub_18010EC80 @ 0x18010EC80 (sub_18010EC80.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180066D0C @ 0x180066D0C (sub_180066D0C.c)
 *     sub_180066D3C @ 0x180066D3C (sub_180066D3C.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A0010 (ZwWaitForAlertByThreadId.c)
 */

int __fastcall sub_180066BBC(_RTL_SRWLOCK *a1, int a2, int a3)
{
  char v3; // bp
  char v5; // r14
  unsigned __int64 Ptr; // rbx
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rbx
  signed __int64 v11; // rax
  PVOID v12; // rbx
  _BYTE v14[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v5 = 0;
  _m_prefetchw(a1);
  Ptr = (unsigned __int64)a1->Ptr;
  v8 = a2;
  do
  {
    if ( v5 )
    {
      RtlReleaseSRWLockExclusive(a1 + 1);
      v5 = 0;
    }
    else if ( v3 )
    {
      RtlReleaseSRWLockShared(a1 + 1);
      v3 = 0;
    }
    v9 = Ptr;
    v10 = (Ptr ^ (v8 + Ptr)) & 0xFFFFFFFFFFFFFFFLL ^ Ptr;
    if ( (v10 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v9 >> 60) & 8) != 0 )
    {
      v10 &= ~0x8000000000000000uLL;
      v5 = 1;
      RtlAcquireSRWLockExclusive(a1 + 1);
    }
    else if ( a3 && (v10 & 0xFFFFFFFFFFFFFFFLL) != 0 )
    {
      v10 |= 0x8000000000000000uLL;
      v3 = 1;
      RtlAcquireSRWLockShared(a1 + 1);
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v10, v9);
    Ptr = v11;
  }
  while ( v9 != v11 );
  if ( v5 )
  {
    v12 = a1[2].Ptr;
    a1[2].Ptr = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 1);
    LODWORD(v11) = sub_180066D3C(v12);
  }
  else if ( v3 )
  {
    sub_180066D0C(&a1[2], v14);
    RtlReleaseSRWLockShared(a1 + 1);
    LODWORD(v11) = ZwWaitForAlertByThreadId(&a1[2], 0LL);
  }
  return v11;
}
