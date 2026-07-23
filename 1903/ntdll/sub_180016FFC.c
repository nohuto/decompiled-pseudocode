/*
 * XREFs of sub_180016FFC @ 0x180016FFC
 * Callers:
 *     RtlUnlockHeap @ 0x180019BF0 (RtlUnlockHeap.c)
 *     sub_18006B390 @ 0x18006B390 (sub_18006B390.c)
 *     sub_18010A8F4 @ 0x18010A8F4 (sub_18010A8F4.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall sub_180016FFC(__int64 a1, int a2)
{
  _RTL_SRWLOCK *v3; // rcx
  int v5; // eax
  _QWORD *v6; // rax
  __int64 v7; // rcx

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
      if ( (v5 & 1) == 0 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 640));
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 904));
    }
  }
}
