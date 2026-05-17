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

_UNKNOWN **__fastcall sub_18006B424(__int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _UNKNOWN **result; // rax
  char v5; // bp
  unsigned int v7; // esi
  __int64 v8; // r15
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rcx
  _QWORD *v12; // r14
  unsigned int v13; // ecx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  void (*v17)(void); // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a3;
  if ( (a3 & 1) != 0 )
  {
    if ( (_DWORD)qword_180166178 )
    {
      v7 = 17;
      v8 = (unsigned int)qword_180166178;
      do
      {
        _BitScanReverse(&v9, v7);
        v10 = v7 ^ (1 << v9);
        v11 = a2[v9 - 2];
        if ( v11 )
        {
          v12 = (_QWORD *)(v11 + 8 * (v10 + 1LL));
          if ( v12 )
          {
            if ( *v12 )
            {
              _BitScanReverse(&v13, v7);
              v14 = v7 ^ (1 << v13);
              v15 = qword_180166120[v13 - 3];
              if ( v15 )
                v16 = 16LL * (unsigned int)v14 + v15 + 8;
              else
                v16 = 0LL;
              RtlAcquireSRWLockShared((volatile signed __int64 *)v16, v14, a3, a4);
              v17 = *(void (**)(void))(v16 + 8);
              if ( (unsigned __int64)v17 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v12 )
              {
                v17();
                *v12 = 0LL;
              }
              RtlReleaseSRWLockShared((volatile signed __int64 *)v16);
            }
          }
        }
        ++v7;
        --v8;
      }
      while ( v8 );
    }
    RtlAcquireSRWLockExclusive(qword_180166120);
    v18 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v19 = (_QWORD *)a2[1], (_QWORD *)*v19 != a2) )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    result = (_UNKNOWN **)RtlReleaseSRWLockExclusive(qword_180166120);
  }
  if ( (v5 & 2) != 0 )
  {
    sub_18009BBC8(a2 + 2);
    return (_UNKNOWN **)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a2);
  }
  return result;
}
