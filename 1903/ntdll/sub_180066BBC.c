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

__int64 __fastcall sub_180066BBC(volatile signed __int64 *a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  char v4; // bp
  int v5; // r15d
  char v6; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rdi
  signed __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = a3;
  v6 = 0;
  _m_prefetchw((const void *)a1);
  v8 = *a1;
  v9 = a2;
  do
  {
    if ( v6 )
    {
      RtlReleaseSRWLockExclusive(a1 + 1);
      v6 = 0;
    }
    else if ( v4 )
    {
      RtlReleaseSRWLockShared(a1 + 1);
      v4 = 0;
    }
    v10 = v8;
    v11 = (v8 ^ (v9 + v8)) & 0xFFFFFFFFFFFFFFFLL ^ v8;
    v12 = v11 & 0xFFFFFFFFFFFFFFFLL;
    if ( (v11 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v10 >> 60) & 8) != 0 )
    {
      v11 &= ~0x8000000000000000uLL;
      v6 = 1;
      RtlAcquireSRWLockExclusive(a1 + 1);
    }
    else if ( v5 && v12 )
    {
      v11 |= 0x8000000000000000uLL;
      v4 = 1;
      RtlAcquireSRWLockShared(a1 + 1, v12, a3, a4);
    }
    result = _InterlockedCompareExchange64(a1, v11, v10);
    v8 = result;
  }
  while ( v10 != result );
  if ( v6 )
  {
    v14 = *((_QWORD *)a1 + 2);
    *((_QWORD *)a1 + 2) = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 1);
    return sub_180066D3C(v14);
  }
  else if ( v4 )
  {
    sub_180066D0C(a1 + 2, v15);
    RtlReleaseSRWLockShared(a1 + 1);
    return ZwWaitForAlertByThreadId(a1 + 2, 0LL);
  }
  return result;
}
