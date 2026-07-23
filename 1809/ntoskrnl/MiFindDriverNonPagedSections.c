/*
 * XREFs of MiFindDriverNonPagedSections @ 0x14065685C
 * Callers:
 *     MiHandleDriverNonPagedSections @ 0x14065694C (MiHandleDriverNonPagedSections.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140028C00 (RtlFindNextForwardRunClear.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     RtlFindSetBits @ 0x14008BE40 (RtlFindSetBits.c)
 *     MiUnlockLoaderEntry @ 0x1400DBBAC (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1400DBDE4 (MiLockLoaderEntry.c)
 */

__int64 __fastcall MiFindDriverNonPagedSections(__int64 a1, ULONG *a2, __int64 *a3, _QWORD *a4)
{
  __int64 v4; // r13
  __int64 v5; // rsi
  _RTL_BITMAP *v9; // rdi
  ULONG v10; // ebp
  ULONG SetBits; // eax
  ULONG v12; // ebx
  ULONG NextForwardRunClear; // eax
  ULONG SizeOfBitMap; // r8d
  __int64 PteAddress; // rax
  int v16; // r8d
  ULONG StartingRunIndex; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v5 = a1 + 160;
  MiLockLoaderEntry(a1 + 160, 2uLL);
  v9 = *(_RTL_BITMAP **)(v5 + 112);
  v10 = *a2;
  if ( *a2 == v9->SizeOfBitMap
    || (SetBits = RtlFindSetBits(*(PRTL_BITMAP *)(v5 + 112), 1u, v10), v12 = SetBits, SetBits < v10)
    || SetBits == -1 )
  {
    MiUnlockLoaderEntry(v5, 2);
    return 3221226021LL;
  }
  else
  {
    NextForwardRunClear = RtlFindNextForwardRunClear(v9, SetBits, &StartingRunIndex);
    SizeOfBitMap = StartingRunIndex;
    if ( !NextForwardRunClear )
      SizeOfBitMap = v9->SizeOfBitMap;
    *a2 = SizeOfBitMap;
    PteAddress = MiGetPteAddress(v4 + (v12 << 12));
    *a3 = PteAddress;
    *a4 = PteAddress + 8LL * (unsigned int)(v16 - 1);
    MiUnlockLoaderEntry(v5, 2);
    return 0LL;
  }
}
