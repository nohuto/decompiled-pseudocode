/*
 * XREFs of MiReplenishPageSlist @ 0x1400EE420
 * Callers:
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiGetPerfectColorHeadPage @ 0x1400EE0C8 (MiGetPerfectColorHeadPage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     MiIsFreeZeroPfnCold @ 0x140082360 (MiIsFreeZeroPfnCold.c)
 *     MiIncreaseAvailablePages @ 0x14009CE20 (MiIncreaseAvailablePages.c)
 *     MiNodeFreeZeroPages @ 0x1400EE374 (MiNodeFreeZeroPages.c)
 *     MiDecreaseAvailablePages @ 0x1400EE8CC (MiDecreaseAvailablePages.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400EE9A8 (MiNodeLargeFreeZeroPages.c)
 *     MiUpdateZeroFreeBitmap @ 0x1400EEA54 (MiUpdateZeroFreeBitmap.c)
 *     MiPageListCollision @ 0x140121394 (MiPageListCollision.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     InterlockedPushListSList @ 0x1401C55E0 (InterlockedPushListSList.c)
 *     MiArePageContentsZero @ 0x1402BF958 (MiArePageContentsZero.c)
 *     MiNotifyPageHeat @ 0x1402CF130 (MiNotifyPageHeat.c)
 */

void __fastcall MiReplenishPageSlist(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // rsi
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rbp
  BOOL v16; // r12d
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // r10
  __int64 v20; // rdi
  __int64 v21; // r9
  unsigned __int64 v22; // r8
  unsigned int v23; // edx
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r11
  __int64 v31; // r10
  volatile signed __int32 *v32; // r8
  unsigned int v33; // eax
  unsigned __int64 v34; // rcx
  int v35; // r11d
  unsigned __int64 v36; // rdx
  int v37; // eax
  unsigned int v40; // [rsp+2Ch] [rbp-11Ch]
  volatile signed __int64 *v41; // [rsp+30h] [rbp-118h]
  unsigned __int64 v42; // [rsp+38h] [rbp-110h]
  unsigned __int64 *v43; // [rsp+40h] [rbp-108h]
  __int64 v44; // [rsp+48h] [rbp-100h]
  __int64 v45; // [rsp+50h] [rbp-F8h]
  _SLIST_ENTRY *List; // [rsp+58h] [rbp-F0h]
  __int64 v47; // [rsp+60h] [rbp-E8h]
  int v48; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int v49; // [rsp+74h] [rbp-D4h]
  int v50; // [rsp+78h] [rbp-D0h]
  _QWORD v51[16]; // [rsp+80h] [rbp-C8h]

  v4 = a2;
  v44 = 16LL * a3;
  v45 = *(_QWORD *)(a1 + 8LL * a2 + 4136);
  v5 = a3;
  v6 = *(unsigned __int16 *)(v44 + v45);
  v7 = *(unsigned int *)(a1 + 6556);
  if ( v6 >= v7 )
    return;
  v8 = (int)v7 - v6;
  v9 = *(_QWORD *)(a1 + 16) + 1984 * ((unsigned __int64)a3 >> byte_14043B109);
  v47 = v9;
  v40 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_14043B10A));
  if ( a2 )
  {
    v10 = *(_QWORD *)(a1 + 2120);
    v41 = (volatile signed __int64 *)(a1 + 2240);
    if ( MiNodeFreeZeroPages(v9, (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_14043B10A)), 4096) < v8 + 64 )
      return;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 2112);
    v41 = (volatile signed __int64 *)(a1 + 2176);
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v11 = *(_QWORD *)(v9 + 16 * ((unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_14043B10A)) + 114LL));
    else
      v11 = *(_QWORD *)(v9 + 1760);
    if ( v11
       + MiNodeLargeFreeZeroPages(v9, (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_14043B10A)), 0LL) < v8 + 64
      || *(_BYTE *)(a1 + 4765) == 1 )
    {
      return;
    }
  }
  v12 = (unsigned __int64 *)(v10 + 40 * v5);
  v13 = *v12;
  v43 = v12;
  if ( v8 <= *v12 )
    v13 = v8;
  v42 = v13;
  if ( *(_QWORD *)(a1 + 7296) - v13 >= 0x420 )
  {
    v14 = a1;
    v15 = 0LL;
    v49 = 0;
    v50 = 16;
    v16 = (HvlEnlightenments & 0x200000) != 0;
    if ( !(unsigned int)MiDecreaseAvailablePages(a1, v13, 1056LL, 0LL) )
      goto LABEL_37;
    v17 = v12[2];
    v18 = 48 * v17 - 0x58000000000LL;
    v19 = 0x2AAAAAAAAAAAAAABLL;
    v20 = 0LL;
    List = (_SLIST_ENTRY *)v18;
    v21 = 0xFFFFFFFFFLL;
    v22 = 0xFFFFFFFE00000000uLL;
    while ( 1 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        v23 = v49;
LABEL_30:
        v13 = v42 - v15;
        if ( v15 )
        {
          if ( v23 )
          {
            v48 = 1;
            MiNotifyPageHeat(&v48);
            v21 = 0xFFFFFFFFFLL;
          }
          v43[2] = v17;
          if ( v17 == v21 )
          {
            v14 = a1;
            MiUpdateZeroFreeBitmap(a1, (unsigned int)v4, a3, 0LL);
            v43[3] = 0xFFFFFFFFFLL;
          }
          else
          {
            MiSetPfnBlink(v18, v21, 0);
            v14 = a1;
          }
          InterlockedPushListSList((PSLIST_HEADER)(v44 + v45), List, (PSLIST_ENTRY)v20, v15);
          *v43 -= v15;
          v28 = -v15;
          _InterlockedExchangeAdd64(v41, v28);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 8 * v4 + 1760), v28);
          if ( (unsigned int)MmNumberOfChannels > 1 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 8 * (v4 + 2LL * v40) + 1824), v28);
        }
        else
        {
          v14 = a1;
        }
LABEL_37:
        if ( v13 )
          MiIncreaseAvailablePages(v14, v13);
        return;
      }
      v20 = v18;
      if ( !(_DWORD)v4 && (MiFlags & 0x80u) != 0 && (++dword_14043B92C & MmPageValidationFrequency) == 0 )
      {
        v34 = (__int64)((unsigned __int128)((v18 + 0x58000000000LL) * (__int128)v19) >> 64) >> 3;
        MiArePageContentsZero((v34 >> 63) + v34);
        v21 = 0xFFFFFFFFFLL;
        v22 = 0xFFFFFFFE00000000uLL;
        v19 = 0x2AAAAAAAAAAAAAABLL;
      }
      if ( dword_14043B82C == 1 )
        break;
LABEL_16:
      *(_BYTE *)(v18 + 34) = *(_BYTE *)(v18 + 34) & 0xF8 | 5;
      if ( (*(_BYTE *)(v18 + 34) & 8) != 0 )
      {
        MiPageListCollision(v18, 1LL);
        v21 = 0xFFFFFFFFFLL;
        v22 = 0xFFFFFFFE00000000uLL;
        v19 = 0x2AAAAAAAAAAAAAABLL;
      }
      *(_QWORD *)(v18 + 24) &= 0xFFFFFFF000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v16 && (LOBYTE(v37) = MiIsFreeZeroPfnCold(v18), v37) )
      {
        v23 = v49;
        if ( v49 < 0x10 )
        {
          v51[v49] = v17 << 12;
          v23 = ++v49;
        }
      }
      else
      {
        v23 = v49;
      }
      v17 = v21 & *(_QWORD *)v18;
      if ( v17 == v21 )
        v18 = 0LL;
      else
        v18 = 48 * v17 - 0x58000000000LL;
      v24 = (*(_DWORD *)(v20 + 16) ^ ((_DWORD)v4 << 12)) & 0xF000;
      v25 = v24 == *(_QWORD *)(v20 + 16);
      *(_QWORD *)(v20 + 16) ^= v24;
      v26 = *(_QWORD *)(v20 + 16);
      if ( v25 )
      {
        LODWORD(v26) = 0;
      }
      else if ( qword_14043B180 )
      {
        if ( (v26 & 0x10) != 0 )
          LODWORD(v26) = v26 & 0xFFFFFFEF;
        else
          LODWORD(v26) = ~(_DWORD)qword_14043B180 & v26;
      }
      v27 = v22 | (unsigned int)v26;
      if ( qword_14043B180 )
      {
        if ( (qword_14043B180 & v27) != 0 )
          v27 |= 0x10uLL;
        else
          v27 |= qword_14043B180;
      }
      ++v15;
      *(_QWORD *)(v20 + 16) = v27;
      *(_QWORD *)v20 = v18;
      if ( !--v13 )
        goto LABEL_30;
    }
    LOBYTE(v29) = 1;
    v30 = ((unsigned __int64)((unsigned __int128)((v18 + 0x58000000000LL) * (__int128)v19) >> 64) >> 63)
        + ((__int64)((unsigned __int128)((v18 + 0x58000000000LL) * (__int128)v19) >> 64) >> 3);
    v31 = (((((unsigned __int128)((v18 + 0x58000000000LL) * (__int128)v19) >> 64) & 0x8000000000000000uLL) != 0LL)
         + (unsigned __int8)((__int64)((unsigned __int128)((v18 + 0x58000000000LL) * (__int128)v19) >> 64) >> 3)) & 0x1F;
    v32 = (volatile signed __int32 *)(qword_14043B888 + 4 * (v30 >> 5));
    if ( (unsigned __int64)(v31 + 1) > 0x20 )
    {
      if ( v31 )
      {
        v35 = v30 & 0x1F;
        _InterlockedOr(v32++, ((1 << (32 - v35)) - 1) << v31);
        v29 = 1LL - (unsigned int)(32 - v35);
        if ( v29 >= 0x20 )
        {
          v36 = v29 >> 5;
          v29 += -32LL * (v29 >> 5);
          do
          {
            *v32++ = -1;
            --v36;
          }
          while ( v36 );
        }
        if ( !v29 )
          goto LABEL_47;
      }
      v33 = (1 << v29) - 1;
    }
    else
    {
      v33 = 1 << v31;
    }
    _InterlockedOr(v32, v33);
LABEL_47:
    v21 = 0xFFFFFFFFFLL;
    v22 = 0xFFFFFFFE00000000uLL;
    v19 = 0x2AAAAAAAAAAAAAABLL;
    goto LABEL_16;
  }
}
