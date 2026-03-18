/*
 * XREFs of MiUpdatePrefetchPriority @ 0x14010A9B0
 * Callers:
 *     MiValidFault @ 0x1400C7190 (MiValidFault.c)
 *     MiPrefetchJumpVad @ 0x1402C701C (MiPrefetchJumpVad.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiUpdatePfnPriority @ 0x14008DD04 (MiUpdatePfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiLockTransitionLeafPage @ 0x1400DD76C (MiLockTransitionLeafPage.c)
 */

char __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  ULONG_PTR v3; // r9
  __int64 v4; // rcx
  unsigned __int64 CurrentThread; // rax
  unsigned __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rbx
  ULONG_PTR v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  int v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 80) & 7;
  v3 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = *(_QWORD *)v3;
  LOBYTE(CurrentThread) = 0;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL )
  {
    LOBYTE(CurrentThread) = -8;
    if ( v3 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      CurrentThread = (unsigned __int64)KeGetCurrentThread();
      if ( *(_BYTE *)(*(_QWORD *)(CurrentThread + 184) + 648LL) != 1
        && (v4 & 1) != 0
        && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
      {
        CurrentThread = (unsigned __int64)KeGetCurrentThread();
        v10 = *(_QWORD *)(*(_QWORD *)(CurrentThread + 184) + 1544LL);
        if ( v10 )
        {
          CurrentThread = *(_QWORD *)(v10 + 8 * ((v3 >> 3) & 0x1FF));
          v11 = v4 | 0x20;
          if ( (CurrentThread & 0x20) == 0 )
            v11 = *(_QWORD *)v3;
          v4 = v11;
          if ( (CurrentThread & 0x42) != 0 )
            v4 = v11 | 0x42;
        }
      }
    }
  }
  v14 = v4;
  if ( (v4 & 1) != 0 )
  {
    CurrentThread = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFLL);
    if ( (*(_QWORD *)(8 * CurrentThread - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      return CurrentThread;
    v8 = 8 * CurrentThread - 0x58000000000LL;
    LODWORD(CurrentThread) = *(_BYTE *)(v8 + 35) & 7;
    if ( (_DWORD)CurrentThread == v2 )
      return CurrentThread;
    if ( v7 )
    {
      LOBYTE(CurrentThread) = *(_DWORD *)(v7 + 48) & 0x70;
      if ( (_BYTE)CurrentThread == 16 )
        return CurrentThread;
    }
    else if ( *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 304LL) )
    {
      CurrentThread = MiLocateAddress(v6);
      if ( !CurrentThread )
        return CurrentThread;
      LOBYTE(CurrentThread) = *(_DWORD *)(CurrentThread + 48) & 0x70;
      if ( (_BYTE)CurrentThread == 16 )
        return CurrentThread;
    }
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  else
  {
    if ( !v4 )
      return CurrentThread;
    if ( (v4 & 0x400) != 0 )
      return CurrentThread;
    if ( (v4 & 0x800) == 0 )
      return CurrentThread;
    CurrentThread = MiLockTransitionLeafPage(v3, 0LL);
    v8 = CurrentThread;
    if ( !CurrentThread )
      return CurrentThread;
  }
  if ( (unsigned int)MiGetPfnPriority(v8) != v2 )
    MiUpdatePfnPriority(v9, v2, 0);
  LOBYTE(CurrentThread) = -1;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return CurrentThread;
}
