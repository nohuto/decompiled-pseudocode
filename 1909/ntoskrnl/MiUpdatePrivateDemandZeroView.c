/*
 * XREFs of MiUpdatePrivateDemandZeroView @ 0x1402BCCAC
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14001F890 (MiIncreaseUsedPtesCount.c)
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x14002DEA0 (MiGetUsedPtesHandle.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 */

__int64 __fastcall MiUpdatePrivateDemandZeroView(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r12
  __int64 v5; // r14
  unsigned __int64 v6; // rdi
  int v7; // r13d
  unsigned __int64 v8; // rbx
  unsigned __int64 ProtoPteAddress; // rsi
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  unsigned __int16 v15; // r10
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // ecx
  unsigned __int64 v22; // r14
  unsigned __int64 UsedPtesHandle; // rbp
  char v24; // bl
  unsigned __int8 v25; // r13
  __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // r8d
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v32; // [rsp+30h] [rbp-68h]
  unsigned __int64 v33; // [rsp+38h] [rbp-60h]
  unsigned __int64 v34; // [rsp+40h] [rbp-58h]
  unsigned __int64 v35; // [rsp+A0h] [rbp+8h]
  __int64 v38; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a1 + 1280;
  v5 = 0LL;
  v6 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v7 = a3;
  v32 = 0LL;
  v8 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
  ProtoPteAddress = MiGetProtoPteAddress(a2, v6, 6, &v38);
  v35 = ProtoPteAddress;
  v10 = *(_QWORD *)(a2 + 80) + 8 * (v8 - v6);
  v33 = v10;
  v11 = v38;
  v12 = 8 * (v6 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  while ( 1 )
  {
    if ( !v11 )
      return v5;
    v13 = v10;
    v14 = *(_QWORD *)(v11 + 8);
    if ( v14 + 8 * (*(unsigned int *)(v11 + 44) - 1LL) <= v10 )
      v13 = v14 + 8 * (*(unsigned int *)(v11 + 44) - 1LL);
    v34 = v13;
    if ( (*(_BYTE *)(v11 + 34) & 2) == 0 )
    {
      v15 = *(_WORD *)(v11 + 32);
      if ( (v15 & 8) == 0 || (v15 & 0xA) == 0xA )
      {
        v16 = *(_DWORD *)(v11 + 40);
        if ( v16 )
          v14 += 8 * ((unsigned __int64)(unsigned int)((v16 << 9) - 1) >> 12) + 8;
        if ( v14 <= v13 )
          break;
      }
    }
LABEL_50:
    v30 = 8LL * (unsigned int)((__int64)(v13 - ProtoPteAddress + 8) >> 3);
    ProtoPteAddress += v30;
    v12 += v30;
    v35 = ProtoPteAddress;
    if ( ProtoPteAddress > v10 )
      return v5;
    v11 = *(_QWORD *)(v11 + 16);
    v38 = v11;
  }
  if ( ProtoPteAddress < v14 )
  {
    v35 = v14;
    v17 = v14 - ProtoPteAddress;
    ProtoPteAddress = v14;
    v12 += 8 * (v17 >> 3);
  }
  if ( ProtoPteAddress <= v10 )
  {
    v18 = 0LL;
    if ( ProtoPteAddress <= v13 )
    {
      do
      {
        v19 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
        if ( (v19 & 1) != 0 )
        {
          LODWORD(v20) = v15 >> 1;
        }
        else
        {
          if ( !v19 )
            break;
          v20 = v19 >> 5;
        }
        if ( (v20 & 0x1F) == 0x18 )
          break;
        v18 = (unsigned int)(v18 + 1);
        ProtoPteAddress += 8LL;
      }
      while ( ProtoPteAddress <= v13 );
      v10 = v33;
      v35 = ProtoPteAddress;
    }
    if ( (v15 & 0xA) != 0xA )
    {
      v5 += (unsigned int)v18;
      v32 = v5;
    }
    if ( !v7 || !(_DWORD)v18 )
    {
      v12 += 8 * v18;
      goto LABEL_50;
    }
    v21 = v15 >> 1;
    if ( (v15 & 8) != 0 )
      LOBYTE(v21) = v21 & 2 | 4;
    v22 = 0LL;
    UsedPtesHandle = 0LL;
    v24 = MiSwizzleInvalidPte(32LL * (v21 & 0x1F));
    v25 = MiLockWorkingSetShared(v3);
    while ( 1 )
    {
      if ( v22 )
      {
        if ( (v12 & 0xFFF) != 0 )
          goto LABEL_35;
        MiUnlockPageTableInternal(v3, v22);
      }
      if ( MiWorkingSetIsContended(v3) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(v3, v25);
        MiLockWorkingSetShared(v3);
      }
      MiMakeSystemAddressValid(v12, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x3F, v25, 0);
      UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v12 << 25) >> 16);
      v22 = v26 + ((v12 >> 9) & 0x7FFFFFFFF8LL);
LABEL_35:
      if ( MiPteInShadowRange(v12) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v28 = 1;
          if ( !HIBYTE(word_1404658EC) )
          {
            v29 = (v24 & 1) == 0;
            goto LABEL_41;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
          v29 = (v24 & 1) == 0;
LABEL_41:
          if ( !v29 )
            v27 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v12 = v27;
      if ( v28 )
        MiWritePteShadow(v12);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
      v12 += 8LL;
      LODWORD(v18) = v18 - 1;
      if ( !(_DWORD)v18 )
      {
        ProtoPteAddress = v35;
        v13 = v34;
        if ( v22 )
          MiUnlockPageTableInternal(v3, v22);
        MiUnlockWorkingSetShared(v3, v25);
        v11 = v38;
        v10 = v33;
        v5 = v32;
        v7 = a3;
        goto LABEL_50;
      }
    }
  }
  return v5;
}
