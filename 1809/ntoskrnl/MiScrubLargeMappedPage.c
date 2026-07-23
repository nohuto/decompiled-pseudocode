/*
 * XREFs of MiScrubLargeMappedPage @ 0x1402CF428
 * Callers:
 *     MiScrubProcessLargePages @ 0x1402CFD2C (MiScrubProcessLargePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiRewritePteWithLockBit @ 0x1402BF86C (MiRewritePteWithLockBit.c)
 *     MiMakePageBad @ 0x1402CF318 (MiMakePageBad.c)
 *     MiScrubPage @ 0x1402CFB40 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r9
  unsigned __int8 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // r10
  __int64 v13; // rbx
  int v14; // edx
  unsigned __int64 v15; // r13
  __int64 v16; // r9
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  ULONG_PTR i; // r12
  __int64 v25; // rbx
  __int64 v26; // rdx
  int v27; // r8d
  volatile __int64 *v28; // r9
  unsigned __int8 v30; // [rsp+20h] [rbp-178h]
  char v31; // [rsp+21h] [rbp-177h]
  int v32; // [rsp+24h] [rbp-174h]
  int v33; // [rsp+24h] [rbp-174h]
  unsigned __int64 v34; // [rsp+30h] [rbp-168h]
  volatile __int64 *v35; // [rsp+38h] [rbp-160h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp-158h]
  unsigned __int64 v37; // [rsp+48h] [rbp-150h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-148h]
  unsigned __int64 v39; // [rsp+58h] [rbp-140h]
  unsigned __int64 valid; // [rsp+60h] [rbp-138h]
  __int64 v41; // [rsp+68h] [rbp-130h]
  __int64 v42; // [rsp+70h] [rbp-128h]
  __int64 v43; // [rsp+80h] [rbp-118h]
  int v44; // [rsp+90h] [rbp-108h] BYREF
  __int16 v45; // [rsp+94h] [rbp-104h]
  int v46; // [rsp+98h] [rbp-100h]
  int v47; // [rsp+9Ch] [rbp-FCh]
  __int64 v48; // [rsp+A0h] [rbp-F8h]
  __int64 v49; // [rsp+A8h] [rbp-F0h]

  v41 = a2;
  v43 = a2;
  v4 = 1;
  v47 = 0;
  v44 = 1;
  v45 = 0;
  v48 = 0LL;
  v46 = 20;
  v49 = 0LL;
  v31 = 0;
  v34 = 0LL;
  v5 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
  v6 = ((((unsigned __int64)*(unsigned int *)(a1 + 24) >> 6) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 26)) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v39 = v6;
  v7 = ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v36 = v7;
  v8 = a3 + 1280;
  v42 = a3 + 1280;
  v10 = MiLockWorkingSetShared(a3 + 1280);
  v30 = v10;
  while ( v6 <= v7 )
  {
    v35 = (volatile __int64 *)v6;
    v38 = 0LL;
    valid = MiLockLowestValidPageTable(v8, v6, (unsigned __int64 *)&v35, v9);
    v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v35);
    v13 = v11;
    v37 = v11;
    if ( (v11 & 1) != 0 && (v11 & 0x80u) != 0LL )
    {
      v37 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v37) >> 12) & 0xFFFFFFFFFLL;
      v14 = 1;
      v15 = 512LL;
      v17 = (__int64)(((__int64)((v16 << 25) - v38) >> 16 << 25) - v38) >> 16;
      while ( v17 >= 0xFFFFF68000000000uLL && v17 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v17 = (__int64)((v17 << 25) - v38) >> 16;
        v15 <<= 9;
        ++v14;
      }
      v32 = v14;
      MiRewritePteWithLockBit(v8, v35, ZeroPte);
      v18 = v13 & 0xCFFFFFFFFFFFFFFFuLL;
      MiInsertTbFlushEntry((__int64)&v44, (__int64)(v6 << 25) >> 16 << 25 >> 16, 1LL, v32);
      MiFlushTbList(&v44, v19, v20, v21);
      v22 = v34 & -(__int64)(v34 < v15);
      v34 = v22;
      v33 = 0;
      v23 = 48 * (v37 + v15) - 0x58000000000LL;
      v38 = v23;
      for ( i = 48 * (v22 + v37) - 0x58000000000LL; i < v23; i += 48LL )
      {
        v34 = ++v22;
        if ( *(_WORD *)(i + 32) == 2 )
        {
          if ( (int)MiScrubPage(v41, i, 0LL, 1LL) < 0 )
            MiMakePageBad(i, 1);
          if ( MiWorkingSetIsContended(v8)
            || (unsigned int)MiPageTableLockIsContended(v8, valid)
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
          v23 = v38;
        }
      }
      v25 = v18 | 0x20;
      v37 = v25;
      if ( !MiPteInShadowRange((unsigned __int64)v35) )
        goto LABEL_29;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v27 = 1;
        if ( !HIBYTE(word_14043B26C) )
          goto LABEL_27;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
LABEL_27:
        if ( (v25 & 1) != 0 )
          v26 |= 0x8000000000000000uLL;
      }
LABEL_29:
      v28 = v35;
      *v35 = v26;
      if ( v27 )
        MiWritePteShadow((__int64)v28, v26);
      MiUnlockPageTableInternal(v8, valid);
      if ( i == v38 )
      {
        v6 += 8 * (v15 >> 9);
        v39 = v6;
        v34 = 0LL;
      }
      v10 = v30;
      if ( v31 == 1 )
      {
        v4 = 0;
        break;
      }
      v7 = v36;
      v4 = 1;
      if ( v33 )
      {
        v10 = v30;
        MiUnlockWorkingSetShared(v8, v30);
        goto LABEL_39;
      }
    }
    else
    {
      MiUnlockPageTableInternal(v8, v12);
      MiUnlockWorkingSetShared(v8, v10);
      v7 = v36;
      v4 = 1;
LABEL_39:
      MiLockWorkingSetShared(v8);
    }
  }
  MiUnlockWorkingSetShared(v8, v10);
  return v4;
}
