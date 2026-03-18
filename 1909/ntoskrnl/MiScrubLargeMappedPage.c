/*
 * XREFs of MiScrubLargeMappedPage @ 0x1402EC2C8
 * Callers:
 *     MiScrubProcessLargePages @ 0x1402ECC74 (MiScrubProcessLargePages.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiLockLowestValidPageTable @ 0x14004AE30 (MiLockLowestValidPageTable.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x1400CB088 (MiPageTableLockIsContended.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiRewritePteWithLockBit @ 0x1402D8C90 (MiRewritePteWithLockBit.c)
 *     MiMakePageBad @ 0x1402EC1B8 (MiMakePageBad.c)
 *     MiScrubPage @ 0x1402ECA88 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  __int64 v14; // rbx
  int v15; // r9d
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  ULONG_PTR i; // r13
  __int64 v25; // rbx
  __int64 v26; // rdx
  int v27; // r8d
  unsigned int v28; // ebx
  unsigned __int8 v30; // [rsp+20h] [rbp-178h]
  char v31; // [rsp+21h] [rbp-177h]
  int v32; // [rsp+24h] [rbp-174h]
  int v33; // [rsp+24h] [rbp-174h]
  unsigned __int64 v34; // [rsp+28h] [rbp-170h]
  unsigned __int64 v35; // [rsp+30h] [rbp-168h]
  unsigned __int64 v36; // [rsp+40h] [rbp-158h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-150h]
  unsigned __int64 v38; // [rsp+50h] [rbp-148h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-140h]
  unsigned __int64 v40; // [rsp+60h] [rbp-138h]
  unsigned __int64 valid; // [rsp+68h] [rbp-130h]
  __int64 v42; // [rsp+70h] [rbp-128h]
  __int64 v43; // [rsp+78h] [rbp-120h]
  __int64 v44; // [rsp+80h] [rbp-118h]
  _QWORD v45[24]; // [rsp+90h] [rbp-108h] BYREF

  v42 = a2;
  v44 = a2;
  memset(v45, 0, 0xB8uLL);
  LODWORD(v45[0]) = 1;
  WORD2(v45[0]) = 0;
  v45[2] = 0LL;
  LODWORD(v45[1]) = 20;
  v45[3] = 0LL;
  v31 = 0;
  v34 = 0LL;
  v6 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
  v7 = ((((unsigned __int64)*(unsigned int *)(a1 + 24) >> 6) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 26)) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v37 = v7;
  v8 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v35 = v8;
  v9 = a3 + 1280;
  v43 = v9;
  v30 = MiLockWorkingSetShared(v9);
  while ( v7 <= v8 )
  {
    v36 = v7;
    v39 = 0LL;
    valid = MiLockLowestValidPageTable(v9, v7, &v36);
    v10 = v36;
    do
    {
      v11 = MI_READ_PTE_LOCK_FREE(v10);
      v14 = v11;
      v38 = v11;
      if ( v11 )
        break;
      v34 = 0LL;
      v10 += 8LL;
      if ( (v10 & 0xFFF) == 0 )
        break;
    }
    while ( v10 <= v12 );
    v36 = v10;
    if ( v11 )
    {
      if ( (v11 & 1) != 0 && (v11 & 0x80u) != 0LL )
      {
        v38 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38) >> 12) & 0xFFFFFFFFFLL;
        v15 = 1;
        v16 = 512LL;
        v17 = (__int64)(((__int64)((v10 << 25) - v39) >> 16 << 25) - v39) >> 16;
        while ( v17 >= 0xFFFFF68000000000uLL && v17 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v17 = (__int64)((v17 << 25) - v39) >> 16;
          v16 <<= 9;
          ++v15;
        }
        v32 = v15;
        v40 = v16;
        MiRewritePteWithLockBit(v9, (volatile __int64 *)v10, ZeroPte);
        v18 = v14 & 0xCFFFFFFFFFFFFFFFuLL;
        MiInsertTbFlushEntry((__int64)v45, (__int64)(v7 << 25) >> 16 << 25 >> 16, 1LL, v32);
        MiFlushTbList((int *)v45, v19, v20, v21);
        v22 = v34 & -(__int64)(v34 < v40);
        v34 = v22;
        v33 = 0;
        v23 = 48 * (v40 + v38) - 0x58000000000LL;
        v39 = v23;
        for ( i = 48 * (v22 + v38) - 0x58000000000LL; i < v23; i += 48LL )
        {
          v34 = ++v22;
          if ( *(_WORD *)(i + 32) == 2 )
          {
            if ( (int)MiScrubPage(v42, i, 0LL, 1LL) < 0 )
              MiMakePageBad(i, 1);
            if ( MiWorkingSetIsContended(v9)
              || (unsigned int)MiPageTableLockIsContended(v9, valid)
              || KeShouldYieldProcessor() )
            {
              v33 = 1;
              break;
            }
            if ( *(_DWORD *)(a4 + 4) )
            {
              v31 = 1;
              break;
            }
            v22 = v34;
            v23 = v39;
          }
        }
        v25 = v18 | 0x20;
        v38 = v25;
        if ( MiPteInShadowRange(v10) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v27 = 1;
            if ( !HIBYTE(word_1404658EC) && (v25 & 1) != 0 )
              v26 |= 0x8000000000000000uLL;
          }
          else
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
              && (v25 & 1) != 0 )
            {
              v26 |= 0x8000000000000000uLL;
            }
            v10 = v36;
          }
        }
        *(_QWORD *)v10 = v26;
        if ( v27 )
          MiWritePteShadow(v10);
        MiUnlockPageTableInternal(v9, valid);
        if ( i == v39 )
        {
          v7 += 8 * (v40 >> 9);
          v37 = v7;
          v34 = 0LL;
        }
        if ( v31 == 1 )
        {
          v28 = 0;
          goto LABEL_47;
        }
        v8 = v35;
        if ( v33 )
        {
          MiUnlockWorkingSetShared(v9, v30);
          MiLockWorkingSetShared(v9);
        }
      }
      else
      {
        MiUnlockPageTableInternal(v9, v13);
        MiUnlockWorkingSetShared(v9, v30);
        v8 = v35;
        MiLockWorkingSetShared(v9);
      }
    }
    else
    {
      MiUnlockPageTableInternal(v9, v13);
      v7 = ((MiGetLeafVa(v10) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v37 = v7;
      v8 = v35;
    }
  }
  v28 = 1;
LABEL_47:
  MiUnlockWorkingSetShared(v9, v30);
  return v28;
}
