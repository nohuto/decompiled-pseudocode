/*
 * XREFs of MiCommitHotPatchTable @ 0x1402CF5E0
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408904FC (MiPrepareToHotPatchImage.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14001F890 (MiIncreaseUsedPtesCount.c)
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x14002DEA0 (MiGetUsedPtesHandle.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiChargeFullProcessCommitment @ 0x140605690 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitHotPatchTable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rbx
  __int64 result; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  unsigned int v10; // r14d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r12
  unsigned int v13; // edi
  char v14; // bl
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // r9
  bool v19; // zf
  unsigned __int64 UsedPtesHandle; // [rsp+30h] [rbp-48h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]
  unsigned __int8 v23; // [rsp+98h] [rbp+20h]

  Process = KeGetCurrentThread()->ApcState.Process;
  result = MiChargeFullProcessCommitment(Process, a3);
  if ( (int)result >= 0 )
  {
    v8 = (__int64)&Process[1].IdealNode[6];
    v9 = 0LL;
    v10 = 0;
    UsedPtesHandle = 0LL;
    v11 = a3 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | *(_DWORD *)(a1 + 52) & 0x7FFFFFFF);
    v12 = a2;
    *(_DWORD *)(a1 + 52) ^= (v11 ^ *(_DWORD *)(a1 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(a1 + 34) = v11 >> 31;
    v13 = (*(_DWORD *)(a1 + 48) >> 12) & 0x3F;
    v14 = MiSwizzleInvalidPte(32LL);
    v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v21 = v15 + 8 * (a3 - 1);
    v23 = MiLockWorkingSetShared(v8);
    while ( v15 <= v21 )
    {
      if ( v12 == a2 || (v15 & 0xFFF) == 0 )
      {
        if ( v10 )
        {
          MiIncreaseUsedPtesCount(UsedPtesHandle, v10);
          v10 = 0;
        }
        if ( v9 )
          MiUnlockPageTableInternal(v8, v9);
        v9 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v15, 0LL, v13, v23, 0);
        UsedPtesHandle = MiGetUsedPtesHandle(v12);
      }
      if ( !MiPteInShadowRange(v15) )
        goto LABEL_18;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v17 = 1;
        if ( !HIBYTE(word_1404658EC) )
        {
          v19 = (v14 & 1) == 0;
          goto LABEL_16;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        v19 = (v14 & 1) == 0;
LABEL_16:
        if ( !v19 )
          v16 |= v18;
      }
LABEL_18:
      *(_QWORD *)v15 = v16;
      if ( v17 )
        MiWritePteShadow(v15);
      ++v10;
      v15 += 8LL;
      v12 += 4096LL;
    }
    MiIncreaseUsedPtesCount(UsedPtesHandle, v10);
    MiUnlockPageTableInternal(v8, v9);
    MiUnlockWorkingSetShared(v8, v23);
    return 0LL;
  }
  return result;
}
