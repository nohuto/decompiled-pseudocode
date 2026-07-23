/*
 * XREFs of TpStartAsyncIoOperation @ 0x1800629D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180066D3C @ 0x180066D3C (sub_180066D3C.c)
 *     sub_18010EB1C @ 0x18010EB1C (sub_18010EB1C.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

void __cdecl TpStartAsyncIoOperation(PTP_IO Io)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  PTP_IO v3; // rsi
  int v4; // eax
  char v5; // r14
  signed __int64 v6; // rbx
  signed __int64 v7; // rdi
  signed __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rbx

  v3 = Io;
  if ( !Io
    || (v4 = *((_DWORD *)Io + 42), (v4 & 0x10000) != 0)
    || (v4 & 0x20000) != 0
    || *((__int64 (__fastcall ***)(PVOID))Io + 1) != &off_180118410
    || (Io = (PTP_IO)NtCurrentPeb()->Ldr, *((_BYTE *)Io + 72)) )
  {
    sub_18010EFC8(Io, v1, v2);
  }
  else
  {
    v5 = 0;
    _m_prefetchw((char *)v3 + 56);
    v6 = *((_QWORD *)v3 + 7);
    do
    {
      if ( v5 )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v3 + 8);
        v5 = 0;
      }
      v7 = v6;
      v8 = (v6 ^ (v6 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v6;
      if ( v7 < 0 && (v8 & 0xFFFFFFFFFFFFFFFLL) == 0 )
      {
        v8 &= ~0x8000000000000000uLL;
        v5 = 1;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v3 + 8);
      }
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v3 + 7, v8, v7);
    }
    while ( v7 != v6 );
    if ( v5 )
    {
      v11 = *((_QWORD *)v3 + 9);
      *((_QWORD *)v3 + 9) = 0LL;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v3 + 8);
      sub_180066D3C(v11);
    }
    _InterlockedIncrement((volatile signed __int32 *)v3 + 70);
    _InterlockedIncrement((volatile signed __int32 *)v3);
    v9 = *((_QWORD *)v3 + 18);
    if ( !v9 || (v10 = *(_DWORD *)(v9 + 440)) == 0 )
      v10 = MEMORY[0x7FFE03C0];
    if ( *(_DWORD *)(v9 + 424) != v10 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v9 + 72));
      sub_18010EB1C(v9);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v9 + 72));
    }
  }
}
