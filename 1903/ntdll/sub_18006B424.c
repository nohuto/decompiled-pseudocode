/*
 * XREFs of sub_18006B424 @ 0x18006B424
 * Callers:
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x18006AFD0 (LdrShutdownProcess.c)
 *     RtlProcessFlsData @ 0x18006B410 (RtlProcessFlsData.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18009BBC8 @ 0x18009BBC8 (sub_18009BBC8.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18006B424(__int64 a1, _QWORD *a2, char a3)
{
  unsigned int v5; // esi
  __int64 v6; // r15
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // rcx
  _QWORD *v10; // r14
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rcx
  _RTL_SRWLOCK *v14; // rdi
  void (*Ptr)(void); // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax

  if ( (a3 & 1) != 0 )
  {
    if ( (_DWORD)qword_180166178 )
    {
      v5 = 17;
      v6 = (unsigned int)qword_180166178;
      do
      {
        _BitScanReverse(&v7, v5);
        v8 = v5 ^ (1 << v7);
        v9 = a2[v7 - 2];
        if ( v9 )
        {
          v10 = (_QWORD *)(v9 + 8 * (v8 + 1LL));
          if ( v10 )
          {
            if ( *v10 )
            {
              _BitScanReverse(&v11, v5);
              v12 = v5 ^ (1 << v11);
              v13 = *((_QWORD *)&stru_180166120 + v11 - 3);
              if ( v13 )
                v14 = (_RTL_SRWLOCK *)(16LL * v12 + v13 + 8);
              else
                v14 = 0LL;
              RtlAcquireSRWLockShared(v14);
              Ptr = (void (*)(void))v14[1].Ptr;
              if ( (unsigned __int64)Ptr - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v10 )
              {
                Ptr();
                *v10 = 0LL;
              }
              RtlReleaseSRWLockShared(v14);
            }
          }
        }
        ++v5;
        --v6;
      }
      while ( v6 );
    }
    RtlAcquireSRWLockExclusive(&stru_180166120);
    v16 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v17 = (_QWORD *)a2[1], (_QWORD *)*v17 != a2) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    RtlReleaseSRWLockExclusive(&stru_180166120);
  }
  if ( (a3 & 2) != 0 )
  {
    sub_18009BBC8(a2 + 2);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
}
