/*
 * XREFs of MiCommitHotPatchTable @ 0x1402B9590
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408585A8 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiGetUsedPtesHandle @ 0x140098640 (MiGetUsedPtesHandle.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiIncreaseUsedPtesCount @ 0x1401100E4 (MiIncreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiChargeFullProcessCommitment @ 0x1405E1510 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitHotPatchTable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rbx
  __int64 result; // rax
  __int64 v8; // r12
  unsigned int v9; // ebp
  __int64 UsedPtesHandle; // r13
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rsi
  char v14; // bl
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r9
  bool v20; // zf
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  unsigned __int8 v24; // [rsp+98h] [rbp+20h]

  Process = KeGetCurrentThread()->ApcState.Process;
  result = MiChargeFullProcessCommitment(Process, a3);
  if ( (int)result >= 0 )
  {
    v8 = (__int64)&Process[1].IdealNode[12];
    v9 = 0;
    UsedPtesHandle = 0LL;
    v11 = a3 + (*(_DWORD *)(a1 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31));
    v12 = a2;
    *(_DWORD *)(a1 + 52) ^= (v11 ^ *(_DWORD *)(a1 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(a1 + 34) = v11 >> 31;
    v13 = 0LL;
    v14 = MiSwizzleInvalidPte(32LL);
    v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v21 = v15 + 8 * (a3 - 1);
    v24 = MiLockWorkingSetShared(v8);
    if ( v15 <= v21 )
    {
      v17 = 0x8000000000000000uLL;
      do
      {
        if ( v12 == a2 || (v15 & 0xFFF) == 0 )
        {
          if ( v9 )
          {
            MiIncreaseUsedPtesCount(UsedPtesHandle, v9, v16);
            v9 = 0;
          }
          if ( v13 )
            MiUnlockPageTableInternal(v8, v13);
          LOBYTE(v17) = v24;
          v13 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiMakeSystemAddressValid(v15, 0LL, (*(_DWORD *)(a1 + 48) >> 8) & 0x3F, v17, 0);
          UsedPtesHandle = MiGetUsedPtesHandle(v12);
        }
        if ( !MiPteInShadowRange(v15) )
          goto LABEL_19;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v16 = 1LL;
          if ( !HIBYTE(word_14043B26C) )
          {
            v20 = (v14 & 1) == 0;
            goto LABEL_17;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          v20 = (v14 & 1) == 0;
LABEL_17:
          if ( !v20 )
            v18 |= v19;
        }
LABEL_19:
        *(_QWORD *)v15 = v18;
        if ( (_DWORD)v16 )
          MiWritePteShadow(v15, v18);
        ++v9;
        v15 += 8LL;
        v12 += 4096LL;
        v17 = 0x8000000000000000uLL;
      }
      while ( v15 <= v21 );
    }
    MiIncreaseUsedPtesCount(UsedPtesHandle, v9, v16);
    MiUnlockPageTableInternal(v8, v13);
    MiUnlockWorkingSetShared(v8, v24);
    return 0LL;
  }
  return result;
}
