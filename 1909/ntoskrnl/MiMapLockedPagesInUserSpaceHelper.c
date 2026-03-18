/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x1400F7034
 * Callers:
 *     MmRotatePhysicalView @ 0x1406A4CA0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140713B18 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x1400CB088 (MiPageTableLockIsContended.c)
 *     MiInsertPhysicalPteMapping @ 0x1400F727C (MiInsertPhysicalPteMapping.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     MiInsertVad @ 0x14015AE70 (MiInsertVad.c)
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
  ULONG_PTR v10; // r15
  unsigned int v11; // esi
  unsigned int v12; // ebx
  __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  unsigned __int8 v15; // r12
  unsigned int v16; // r14d
  __int64 v19; // [rsp+68h] [rbp+10h]

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
  v12 = a6;
  v13 = (__int64)&Process[1].IdealNode[6];
  if ( a6 )
  {
    MiInsertVad(a6, Process, 1LL);
    v12 = (*(_DWORD *)(a6 + 48) >> 12) & 0x3F;
  }
  v14 = 0LL;
  v15 = MiLockWorkingSetShared(v13);
  v19 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v16 = v11;
    if ( a3 )
    {
      v16 = (*(_DWORD *)(48LL * *a3 - 0x58000000000LL + 16) >> 5) & 7;
      if ( (*(_BYTE *)(48LL * *a3 - 0x58000000000LL + 34) & 0xC0) == 0x80 )
      {
        v16 |= 0x18u;
      }
      else if ( *(_BYTE *)(48LL * *a3 - 0x58000000000LL + 34) < 0x40u )
      {
        v16 |= 8u;
      }
      ++a3;
    }
    if ( !v14 )
      goto LABEL_23;
    if ( (v10 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v13);
LABEL_23:
      v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v10, 0LL, v12, v15, 0);
    }
    MiInsertPhysicalPteMapping(v10, *(_QWORD *)(v19 + v10), v16);
    v10 += 8LL;
    if ( (v10 & 0x78) == 0
      && (MiWorkingSetIsContended(v13) || (unsigned int)MiPageTableLockIsContended(v13, v14) || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v13);
      MiUnlockWorkingSetShared(v13, v15);
      v14 = 0LL;
      MiLockWorkingSetShared(v13);
    }
    --a5;
  }
  while ( a5 );
  if ( v14 )
    MiUnlockPageTableInternal(v13);
  return MiUnlockWorkingSetShared(v13, v15);
}
