/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x14010FCB8
 * Callers:
 *     MmRotatePhysicalView @ 0x14066CAD0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140696CE4 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiInsertPhysicalPteMapping @ 0x14010FF00 (MiInsertPhysicalPteMapping.c)
 *     MiInsertVad @ 0x1401101EC (MiInsertVad.c)
 */

__int64 __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  _KPROCESS *Process; // rdx
  ULONG_PTR v10; // r14
  unsigned int v11; // edi
  __int64 v12; // rsi
  unsigned int v13; // r15d
  unsigned __int64 v14; // rbx
  __int64 v15; // r9
  unsigned __int8 v16; // r12
  unsigned int v17; // ebp
  __int64 v20; // [rsp+68h] [rbp+10h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((a7 >> 31) & 0xFFFFFFFD) + 4;
  if ( a4 )
  {
    if ( a4 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  v12 = (__int64)&Process[1].IdealNode[12];
  if ( a6 )
  {
    MiInsertVad(a6, Process, 1LL);
    v13 = (*(_DWORD *)(a6 + 48) >> 8) & 0x3F;
  }
  else
  {
    v13 = 0;
  }
  v14 = 0LL;
  v16 = MiLockWorkingSetShared(v12);
  v20 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v17 = v11;
    if ( a3 )
    {
      v17 = (*(_DWORD *)(48LL * *a3 - 0x58000000000LL + 16) >> 5) & 7;
      if ( (*(_BYTE *)(48LL * *a3 - 0x58000000000LL + 34) & 0xC0) == 0x80 )
      {
        v17 |= 0x18u;
      }
      else if ( *(_BYTE *)(48LL * *a3 - 0x58000000000LL + 34) < 0x40u )
      {
        v17 |= 8u;
      }
      ++a3;
    }
    if ( !v14 )
      goto LABEL_23;
    if ( (v10 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v12, v14);
LABEL_23:
      v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LOBYTE(v15) = v16;
      MiMakeSystemAddressValid(v10, 0LL, v13, v15, 0);
    }
    MiInsertPhysicalPteMapping(v10, *(_QWORD *)(v20 + v10), v17);
    v10 += 8LL;
    if ( (v10 & 0x78) == 0
      && (MiWorkingSetIsContended(v12) || (unsigned int)MiPageTableLockIsContended(v12, v14) || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v12, v14);
      MiUnlockWorkingSetShared(v12, v16);
      v14 = 0LL;
      MiLockWorkingSetShared(v12);
    }
    --a5;
  }
  while ( a5 );
  if ( v14 )
    MiUnlockPageTableInternal(v12, v14);
  return MiUnlockWorkingSetShared(v12, v16);
}
