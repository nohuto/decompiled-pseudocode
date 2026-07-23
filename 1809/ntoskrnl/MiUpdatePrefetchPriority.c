/*
 * XREFs of MiUpdatePrefetchPriority @ 0x1400B7100
 * Callers:
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 *     MiPrefetchJumpVad @ 0x1402AF3B4 (MiPrefetchJumpVad.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiUpdatePfnPriority @ 0x140082AA8 (MiUpdatePfnPriority.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 */

char __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r11
  int v5; // edi
  ULONG_PTR v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v14; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  v5 = *(_DWORD *)(a1 + 80) & 7;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = *(_QWORD *)v6;
  LOBYTE(CurrentThread) = 0;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL )
  {
    LOBYTE(CurrentThread) = -8;
    if ( v6 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      CurrentThread = (unsigned __int64)KeGetCurrentThread();
      if ( *(_BYTE *)(*(_QWORD *)(CurrentThread + 184) + 640LL) != 1
        && (v7 & 1) != 0
        && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
      {
        CurrentThread = (unsigned __int64)KeGetCurrentThread();
        a3 = *(_QWORD *)(*(_QWORD *)(CurrentThread + 184) + 1544LL);
        if ( a3 )
        {
          CurrentThread = *(_QWORD *)(a3 + 8 * ((v6 >> 3) & 0x1FF));
          a3 = v7 | 0x20;
          if ( (CurrentThread & 0x20) == 0 )
            a3 = *(_QWORD *)v6;
          v7 = a3;
          if ( (CurrentThread & 0x42) != 0 )
            v7 = a3 | 0x42;
        }
      }
    }
  }
  v15 = v7;
  if ( (v7 & 1) == 0 )
  {
    if ( !v7 )
      return CurrentThread;
    if ( (v7 & 0x400) != 0 )
      return CurrentThread;
    if ( (v7 & 0x800) == 0 )
      return CurrentThread;
    CurrentThread = MiLockTransitionLeafPage(v6, 0LL);
    v10 = CurrentThread;
    if ( !CurrentThread )
      return CurrentThread;
    goto LABEL_12;
  }
  if ( (unsigned __int64)&v15 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v15 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    a3 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( a3 )
    {
      v12 = *(_QWORD *)(a3 + 8 * (((unsigned __int64)&v15 >> 3) & 0x1FF));
      a3 = v7 | 0x20;
      if ( (v12 & 0x20) == 0 )
        a3 = v7;
      v7 = a3;
      if ( (v12 & 0x42) != 0 )
        v7 = a3 | 0x42;
    }
  }
  v9 = 6 * ((v7 >> 12) & 0xFFFFFFFFFLL);
  CurrentThread = *(_QWORD *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL);
  if ( (CurrentThread & 0x20000000000000LL) != 0 )
  {
    v10 = 48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    LODWORD(CurrentThread) = *(_BYTE *)(v10 + 35) & 7;
    if ( (_DWORD)CurrentThread != v5 )
    {
      if ( v3 )
      {
        LOBYTE(CurrentThread) = *(_DWORD *)(v3 + 48) & 7;
        if ( (_BYTE)CurrentThread == 1 )
          return CurrentThread;
      }
      else if ( *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 240LL) )
      {
        CurrentThread = MiLocateAddress(a2);
        if ( !CurrentThread )
          return CurrentThread;
        LOBYTE(CurrentThread) = *(_DWORD *)(CurrentThread + 48) & 7;
        if ( (_BYTE)CurrentThread == 1 )
          return CurrentThread;
      }
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v14, v9, a3);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
LABEL_12:
      if ( (unsigned int)MiGetPfnPriority(v10) != v5 )
        MiUpdatePfnPriority(v11);
      LOBYTE(CurrentThread) = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return CurrentThread;
}
