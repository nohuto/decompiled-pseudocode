/*
 * XREFs of MiReplenishPageSlist @ 0x1400DB080
 * Callers:
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiGetPerfectColorHeadPage @ 0x1400E27F8 (MiGetPerfectColorHeadPage.c)
 * Callees:
 *     MiIncreaseAvailablePages @ 0x14002F250 (MiIncreaseAvailablePages.c)
 *     MiIsFreeZeroPfnCold @ 0x1400A185C (MiIsFreeZeroPfnCold.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400DAFC8 (MiNodeLargeFreeZeroPages.c)
 *     MiDecreaseAvailablePages @ 0x1400DB4B8 (MiDecreaseAvailablePages.c)
 *     MiSetPfnBlink @ 0x1400DB5A0 (MiSetPfnBlink.c)
 *     MiNodeFreeZeroPages @ 0x1400F3834 (MiNodeFreeZeroPages.c)
 *     MiPageListCollision @ 0x1401194A4 (MiPageListCollision.c)
 *     MiUpdateZeroFreeBitmap @ 0x14012964C (MiUpdateZeroFreeBitmap.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     InterlockedPushListSList @ 0x1401CBAA0 (InterlockedPushListSList.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiArePageContentsZero @ 0x1402D905C (MiArePageContentsZero.c)
 *     MiNotifyPageHeat @ 0x1402EBFB4 (MiNotifyPageHeat.c)
 */

void __fastcall MiReplenishPageSlist(__int64 a1, int a2, unsigned int a3)
{
  __int64 v5; // r15
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  _QWORD *v10; // r9
  unsigned int v11; // ecx
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned __int64 *v14; // rdi
  unsigned __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rbp
  BOOL v18; // r12d
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // r10
  _SLIST_ENTRY *v22; // rsi
  __int64 v23; // r9
  unsigned __int64 v24; // r8
  int v25; // edx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r11
  __int64 v32; // r10
  volatile signed __int32 *v33; // r8
  unsigned int v34; // eax
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
  _QWORD *v47; // [rsp+60h] [rbp-E8h]
  _QWORD v48[18]; // [rsp+70h] [rbp-D8h] BYREF

  v5 = a2;
  memset(v48, 0, sizeof(v48));
  v6 = a3;
  v44 = 16LL * a3;
  v45 = *(_QWORD *)(a1 + 8 * v5 + 4136);
  v7 = *(unsigned __int16 *)(v44 + v45);
  v8 = *(unsigned int *)(a1 + 7324);
  if ( v7 >= v8 )
    return;
  v9 = (int)v8 - v7;
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 1984 * ((unsigned __int64)a3 >> byte_140465A4D));
  v11 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_140465A4E));
  v47 = v10;
  v40 = v11;
  if ( (_DWORD)v5 )
  {
    v12 = *(_QWORD *)(a1 + 2120);
    v41 = (volatile signed __int64 *)(a1 + 2240);
    if ( MiNodeFreeZeroPages(v10, v11, 4096LL) < v9 + 64 )
      return;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 2112);
    v41 = (volatile signed __int64 *)(a1 + 2176);
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v13 = v10[2 * v11 + 231];
    else
      v13 = v10[220];
    if ( v13 + MiNodeLargeFreeZeroPages(v10, v11, 0) < v9 + 64 || *(_BYTE *)(a1 + 4765) == 1 )
      return;
  }
  v14 = (unsigned __int64 *)(v12 + 40 * v6);
  v15 = *v14;
  v43 = v14;
  if ( v9 <= *v14 )
    v15 = v9;
  v42 = v15;
  if ( *(_QWORD *)(a1 + 8064) - v15 >= 0x420 )
  {
    v16 = a1;
    LODWORD(v48[1]) = 16;
    v17 = 0LL;
    v18 = (HvlEnlightenments & 0x200000) != 0;
    if ( !(unsigned int)MiDecreaseAvailablePages(a1, v15, 1056LL) )
      goto LABEL_37;
    v19 = v14[2];
    v20 = 48 * v19 - 0x58000000000LL;
    v21 = 0x2AAAAAAAAAAAAAABLL;
    v22 = 0LL;
    List = (_SLIST_ENTRY *)v20;
    v23 = 0xFFFFFFFFFLL;
    v24 = 0xFFFFFFFE00000000uLL;
    while ( 1 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        v25 = HIDWORD(v48[0]);
LABEL_30:
        v15 = v42 - v17;
        if ( v17 )
        {
          if ( v25 )
          {
            LODWORD(v48[0]) = 1;
            MiNotifyPageHeat(v48);
            v23 = 0xFFFFFFFFFLL;
          }
          v43[2] = v19;
          if ( v19 == v23 )
          {
            v16 = a1;
            MiUpdateZeroFreeBitmap(a1, (unsigned int)v5, a3, 0LL);
            v43[3] = 0xFFFFFFFFFLL;
          }
          else
          {
            MiSetPfnBlink(v20, v23, 0LL, v23);
            v16 = a1;
          }
          InterlockedPushListSList((PSLIST_HEADER)(v44 + v45), List, v22, v17);
          *v43 -= v17;
          v28 = -v17;
          _InterlockedExchangeAdd64(v41, v28);
          _InterlockedExchangeAdd64(&v47[v5 + 220], v28);
          if ( (unsigned int)MmNumberOfChannels > 1 )
            _InterlockedExchangeAdd64(&v47[2 * v40 + 231 + v5], v28);
        }
        else
        {
          v16 = a1;
        }
LABEL_37:
        if ( v15 )
          MiIncreaseAvailablePages(v16, v15);
        return;
      }
      v22 = (_SLIST_ENTRY *)v20;
      if ( !(_DWORD)v5 && (MiFlags & 0x80u) != 0 && (++dword_14046630C & MmPageValidationFrequency) == 0 )
      {
        v29 = (__int64)((unsigned __int128)((v20 + 0x58000000000LL) * (__int128)v21) >> 64) >> 3;
        MiArePageContentsZero((v29 >> 63) + v29);
        v23 = 0xFFFFFFFFFLL;
        v24 = 0xFFFFFFFE00000000uLL;
        v21 = 0x2AAAAAAAAAAAAAABLL;
      }
      if ( dword_14046620C == 1 )
        break;
LABEL_16:
      *(_BYTE *)(v20 + 34) = *(_BYTE *)(v20 + 34) & 0xF8 | 5;
      if ( (*(_BYTE *)(v20 + 34) & 8) != 0 )
      {
        MiPageListCollision(v20, 1LL);
        v23 = 0xFFFFFFFFFLL;
        v24 = 0xFFFFFFFE00000000uLL;
        v21 = 0x2AAAAAAAAAAAAAABLL;
      }
      *(_QWORD *)(v20 + 24) &= 0xFFFFFFF000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v18 && (LOBYTE(v37) = MiIsFreeZeroPfnCold(v20), v37) )
      {
        v25 = HIDWORD(v48[0]);
        if ( HIDWORD(v48[0]) < 0x10 )
        {
          v48[HIDWORD(v48[0]) + 2] = v19 << 12;
          v25 = ++HIDWORD(v48[0]);
        }
      }
      else
      {
        v25 = HIDWORD(v48[0]);
      }
      v19 = v23 & *(_QWORD *)v20;
      if ( v19 == v23 )
        v20 = 0LL;
      else
        v20 = 48 * v19 - 0x58000000000LL;
      v26 = (__int64)v22[1].Next ^ (LODWORD(v22[1].Next) ^ ((_DWORD)v5 << 12)) & 0xF000;
      if ( v26 )
      {
        if ( qword_140465B00 )
        {
          if ( (v26 & 0x10) != 0 )
            LODWORD(v26) = v26 & 0xFFFFFFEF;
          else
            LODWORD(v26) = ~(_DWORD)qword_140465B00 & v26;
        }
      }
      else
      {
        LODWORD(v26) = 0;
      }
      v27 = v24 | (unsigned int)v26;
      if ( qword_140465B00 )
      {
        if ( (qword_140465B00 & v27) != 0 )
          v27 |= 0x10uLL;
        else
          v27 |= qword_140465B00;
      }
      ++v17;
      v22[1].Next = (_SLIST_ENTRY *)v27;
      v22->Next = (_SLIST_ENTRY *)v20;
      if ( !--v15 )
        goto LABEL_30;
    }
    LOBYTE(v30) = 1;
    v31 = ((unsigned __int64)((unsigned __int128)((v20 + 0x58000000000LL) * (__int128)v21) >> 64) >> 63)
        + ((__int64)((unsigned __int128)((v20 + 0x58000000000LL) * (__int128)v21) >> 64) >> 3);
    v32 = (((((unsigned __int128)((v20 + 0x58000000000LL) * (__int128)v21) >> 64) & 0x8000000000000000uLL) != 0LL)
         + (unsigned __int8)((__int64)((unsigned __int128)((v20 + 0x58000000000LL) * (__int128)v21) >> 64) >> 3)) & 0x1F;
    v33 = (volatile signed __int32 *)(qword_140466268 + 4 * (v31 >> 5));
    if ( (unsigned __int64)(v32 + 1) > 0x20 )
    {
      if ( v32 )
      {
        v35 = v31 & 0x1F;
        _InterlockedOr(v33++, ((1 << (32 - v35)) - 1) << v32);
        v30 = 1LL - (unsigned int)(32 - v35);
        if ( v30 >= 0x20 )
        {
          v36 = v30 >> 5;
          v30 += -32LL * (v30 >> 5);
          do
          {
            *v33++ = -1;
            --v36;
          }
          while ( v36 );
        }
        if ( !v30 )
          goto LABEL_58;
      }
      v34 = (1 << v30) - 1;
    }
    else
    {
      v34 = 1 << v32;
    }
    _InterlockedOr(v33, v34);
LABEL_58:
    v23 = 0xFFFFFFFFFLL;
    v24 = 0xFFFFFFFE00000000uLL;
    v21 = 0x2AAAAAAAAAAAAAABLL;
    goto LABEL_16;
  }
}
