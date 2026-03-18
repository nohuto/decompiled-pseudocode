/*
 * XREFs of MiMapRetpolineStubs @ 0x1401548C8
 * Callers:
 *     MiFinalizeImageRetpolineState @ 0x14070EAE8 (MiFinalizeImageRetpolineState.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409F0BB8 (MiApplyRetpolineToBootDrivers.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiGetSessionVm @ 0x140075D74 (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiLockAndIncrementShareCount @ 0x1400A39AC (MiLockAndIncrementShareCount.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiLockPageTable @ 0x14015CD54 (MiLockPageTable.c)
 *     MiUnlockPageTable @ 0x14019D098 (MiUnlockPageTable.c)
 */

unsigned __int64 __fastcall MiMapRetpolineStubs(unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 SessionVm; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbp
  unsigned __int8 v9; // r13
  __int64 v10; // r12
  unsigned __int64 v11; // rsi
  unsigned __int64 ContainingPageTable; // rax
  __int64 v13; // rdx
  int v14; // r8d
  bool v15; // zf
  __int64 v17; // [rsp+60h] [rbp+8h]
  unsigned __int8 v18; // [rsp+70h] [rbp+18h]

  v1 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v5 = SessionVm;
  v6 = v4 + ((v3 + ((unsigned int)dword_1404648B0 >> 12) + ((dword_1404648B0 & 0xFFF) != 0)) << 12);
  v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = qword_140464850;
  v8 = 0LL;
  v18 = MiLockWorkingSetShared(SessionVm);
  v9 = v18;
  if ( !dword_140464888 )
    goto LABEL_22;
  do
  {
    v10 = *(_QWORD *)(v17 + 8 * v8 + 48);
    v11 = v7 + 8 * v8;
    if ( v1 )
    {
      if ( (v11 & 0xFFF) != 0 )
        goto LABEL_9;
      MiUnlockPageTable(v5, v1);
    }
    v1 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTable(v5, v1);
LABEL_9:
    ContainingPageTable = MiGetContainingPageTable(v7 + 8 * v8);
    MiLockAndIncrementShareCount(ContainingPageTable);
    MiLockAndIncrementShareCount(v10);
    MiMakeValidPte(v7 + 8 * v8, v10, 3);
    if ( !MiPteInShadowRange(v7 + 8 * v8) )
      goto LABEL_17;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_17;
      v15 = (v13 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_17;
      v15 = (v13 & 1) == 0;
    }
    if ( !v15 )
      v13 |= 0x8000000000000000uLL;
LABEL_17:
    *(_QWORD *)v11 = v13;
    if ( v14 )
      MiWritePteShadow(v7 + 8 * v8);
    v8 = (unsigned int)(v8 + 1);
  }
  while ( (unsigned int)v8 < dword_140464888 );
  v9 = v18;
  if ( v1 )
    MiUnlockPageTable(v5, v1);
LABEL_22:
  MiUnlockWorkingSetShared(v5, v9);
  return v6;
}
