/*
 * XREFs of RtlpHpHeapUnlock @ 0x18006D7DC
 * Callers:
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18006D1EC (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlUnlockHeap @ 0x18006D640 (RtlUnlockHeap.c)
 *     RtlpHpUnlockHeapForCloning @ 0x18010CB88 (RtlpHpUnlockHeapForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x18009F7A8 (RtlpHpReleaseQueuedLockExclusive.c)
 */

void __fastcall RtlpHpHeapUnlock(__int64 a1, int a2)
{
  _RTL_SRWLOCK *v3; // rcx
  int v5; // edx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    if ( a2 )
    {
      v6 = (_QWORD *)(a1 + 320);
      *(_DWORD *)(a1 + 220) = NtCurrentTeb()->ClientId.UniqueThread;
      *(_WORD *)(a1 + 216) = 1;
      *(_QWORD *)(a1 + 904) = 1LL;
      *(_QWORD *)(a1 + 640) = 1LL;
      v7 = 2LL;
      do
      {
        *v6 = 1LL;
        v6 += 24;
        --v7;
      }
      while ( v7 );
      v3 = (_RTL_SRWLOCK *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = 1LL;
    }
    else
    {
      v3 = (_RTL_SRWLOCK *)(a1 + 64);
    }
    if ( (*(_WORD *)(a1 + 216))-- == 1 )
    {
      *(_DWORD *)(a1 + 220) = 0;
      v5 = *(_DWORD *)(a1 + 20);
      if ( (v5 & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(v3);
        v5 = *(_DWORD *)(a1 + 20);
        if ( (v5 & 1) == 0 )
        {
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 320));
          v5 = *(_DWORD *)(a1 + 20);
          if ( (v5 & 1) == 0 )
          {
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 512));
            v5 = *(_DWORD *)(a1 + 20);
          }
        }
      }
      v8[0] = 0LL;
      v8[2] = 0LL;
      v8[1] = a1 + 640;
      if ( (v5 & 1) == 0 )
        RtlpHpReleaseQueuedLockExclusive(v3, v8);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 904));
    }
  }
}
