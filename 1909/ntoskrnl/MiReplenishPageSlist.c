/*
 * XREFs of MiReplenishPageSlist @ 0x1400BAF00
 * Callers:
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiGetPerfectColorHeadPage @ 0x1400C21CC (MiGetPerfectColorHeadPage.c)
 * Callees:
 *     MiIncreaseAvailablePages @ 0x14002F640 (MiIncreaseAvailablePages.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400BAE48 (MiNodeLargeFreeZeroPages.c)
 *     MiDecreaseAvailablePages @ 0x1400BB338 (MiDecreaseAvailablePages.c)
 *     MiSetPfnBlink @ 0x1400BB420 (MiSetPfnBlink.c)
 *     MiIsFreeZeroPfnCold @ 0x1400C4A94 (MiIsFreeZeroPfnCold.c)
 *     MiNodeFreeZeroPages @ 0x1400DBD74 (MiNodeFreeZeroPages.c)
 *     MiPageListCollision @ 0x1400F84FC (MiPageListCollision.c)
 *     MiUpdateZeroFreeBitmap @ 0x14012A06C (MiUpdateZeroFreeBitmap.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     InterlockedPushListSList @ 0x1401CC620 (InterlockedPushListSList.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiArePageContentsZero @ 0x1402D8DBC (MiArePageContentsZero.c)
 *     MiNotifyPageHeat @ 0x1402EBD14 (MiNotifyPageHeat.c)
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
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r10
  _SLIST_ENTRY *v23; // rsi
  __int64 v24; // r9
  unsigned __int64 v25; // r8
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
  unsigned int v38; // [rsp+2Ch] [rbp-11Ch]
  volatile signed __int64 *v39; // [rsp+30h] [rbp-118h]
  unsigned __int64 v40; // [rsp+38h] [rbp-110h]
  unsigned __int64 *v41; // [rsp+40h] [rbp-108h]
  __int64 v42; // [rsp+48h] [rbp-100h]
  __int64 v43; // [rsp+50h] [rbp-F8h]
  _SLIST_ENTRY *List; // [rsp+58h] [rbp-F0h]
  _QWORD *v45; // [rsp+60h] [rbp-E8h]
  _QWORD v46[18]; // [rsp+70h] [rbp-D8h] BYREF

  v5 = a2;
  memset(v46, 0, sizeof(v46));
  v6 = a3;
  v42 = 16LL * a3;
  v43 = *(_QWORD *)(a1 + 8 * v5 + 4136);
  v7 = *(unsigned __int16 *)(v42 + v43);
  v8 = *(unsigned int *)(a1 + 7324);
  if ( v7 >= v8 )
    return;
  v9 = (int)v8 - v7;
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 1984 * ((unsigned __int64)a3 >> byte_14046574D));
  v11 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_14046574E));
  v45 = v10;
  v38 = v11;
  if ( (_DWORD)v5 )
  {
    v12 = *(_QWORD *)(a1 + 2120);
    v39 = (volatile signed __int64 *)(a1 + 2240);
    if ( MiNodeFreeZeroPages(v10, v11, 4096LL) < v9 + 64 )
      return;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 2112);
    v39 = (volatile signed __int64 *)(a1 + 2176);
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v13 = v10[2 * v11 + 231];
    else
      v13 = v10[220];
    if ( v13 + MiNodeLargeFreeZeroPages(v10, v11, 0) < v9 + 64 || *(_BYTE *)(a1 + 4765) == 1 )
      return;
  }
  v14 = (unsigned __int64 *)(v12 + 40 * v6);
  v15 = *v14;
  v41 = v14;
  if ( v9 <= *v14 )
    v15 = v9;
  v40 = v15;
  if ( *(_QWORD *)(a1 + 8064) - v15 >= 0x420 )
  {
    v16 = a1;
    LODWORD(v46[1]) = 16;
    v17 = 0LL;
    v18 = (HvlEnlightenments & 0x200000) != 0;
    if ( !(unsigned int)MiDecreaseAvailablePages(a1, v15, 1056LL, 0LL) )
      goto LABEL_37;
    v20 = v14[2];
    v21 = 48 * v20 - 0x58000000000LL;
    v22 = 0x2AAAAAAAAAAAAAABLL;
    v23 = 0LL;
    List = (_SLIST_ENTRY *)v21;
    v24 = 0xFFFFFFFFFLL;
    v25 = 0xFFFFFFFE00000000uLL;
    while ( 1 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        LODWORD(v19) = HIDWORD(v46[0]);
LABEL_30:
        v15 = v40 - v17;
        if ( v17 )
        {
          if ( (_DWORD)v19 )
          {
            LODWORD(v46[0]) = 1;
            MiNotifyPageHeat(v46);
            v24 = 0xFFFFFFFFFLL;
          }
          v41[2] = v20;
          if ( v20 == v24 )
          {
            v16 = a1;
            MiUpdateZeroFreeBitmap(a1, (unsigned int)v5, a3, 0LL);
            v41[3] = 0xFFFFFFFFFLL;
          }
          else
          {
            MiSetPfnBlink(v21, v24, 0LL, v24);
            v16 = a1;
          }
          InterlockedPushListSList((PSLIST_HEADER)(v42 + v43), List, v23, v17);
          *v41 -= v17;
          v28 = -v17;
          _InterlockedExchangeAdd64(v39, v28);
          _InterlockedExchangeAdd64(&v45[v5 + 220], v28);
          if ( (unsigned int)MmNumberOfChannels > 1 )
            _InterlockedExchangeAdd64(&v45[2 * v38 + 231 + v5], v28);
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
      v23 = (_SLIST_ENTRY *)v21;
      if ( !(_DWORD)v5 && (MiFlags & 0x80u) != 0 && (++dword_14046600C & MmPageValidationFrequency) == 0 )
      {
        v29 = (__int64)((unsigned __int128)((v21 + 0x58000000000LL) * (__int128)v22) >> 64) >> 3;
        MiArePageContentsZero((v29 >> 63) + v29);
        v24 = 0xFFFFFFFFFLL;
        v25 = 0xFFFFFFFE00000000uLL;
        v22 = 0x2AAAAAAAAAAAAAABLL;
      }
      if ( dword_140465F0C == 1 )
        break;
LABEL_16:
      *(_BYTE *)(v21 + 34) = *(_BYTE *)(v21 + 34) & 0xF8 | 5;
      if ( (*(_BYTE *)(v21 + 34) & 8) != 0 )
      {
        MiPageListCollision(v21, 1LL);
        v24 = 0xFFFFFFFFFLL;
        v25 = 0xFFFFFFFE00000000uLL;
        v22 = 0x2AAAAAAAAAAAAAABLL;
      }
      *(_QWORD *)(v21 + 24) &= 0xFFFFFFF000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v18 && (unsigned int)MiIsFreeZeroPfnCold(v21, v19, v25, v24) )
      {
        v19 = HIDWORD(v46[0]);
        if ( HIDWORD(v46[0]) < 0x10 )
        {
          v46[HIDWORD(v46[0]) + 2] = v20 << 12;
          v19 = (unsigned int)++HIDWORD(v46[0]);
        }
      }
      else
      {
        v19 = HIDWORD(v46[0]);
      }
      v20 = v24 & *(_QWORD *)v21;
      if ( v20 == v24 )
        v21 = 0LL;
      else
        v21 = 48 * v20 - 0x58000000000LL;
      v26 = (__int64)v23[1].Next ^ (LODWORD(v23[1].Next) ^ ((_DWORD)v5 << 12)) & 0xF000;
      if ( v26 )
      {
        if ( qword_140465800 )
        {
          if ( (v26 & 0x10) != 0 )
            LODWORD(v26) = v26 & 0xFFFFFFEF;
          else
            LODWORD(v26) = ~(_DWORD)qword_140465800 & v26;
        }
      }
      else
      {
        LODWORD(v26) = 0;
      }
      v27 = v25 | (unsigned int)v26;
      if ( qword_140465800 )
      {
        if ( (qword_140465800 & v27) != 0 )
          v27 |= 0x10uLL;
        else
          v27 |= qword_140465800;
      }
      ++v17;
      v23[1].Next = (_SLIST_ENTRY *)v27;
      v23->Next = (_SLIST_ENTRY *)v21;
      if ( !--v15 )
        goto LABEL_30;
    }
    LOBYTE(v30) = 1;
    v19 = (unsigned __int128)((v21 + 0x58000000000LL) * (__int128)v22) >> 64;
    v31 = ((unsigned __int64)v19 >> 63) + (v19 >> 3);
    v32 = ((v19 < 0) + (unsigned __int8)(v19 >> 3)) & 0x1F;
    v33 = (volatile signed __int32 *)(qword_140465F68 + 4 * (v31 >> 5));
    if ( (unsigned __int64)(v32 + 1) > 0x20 )
    {
      if ( (((v19 < 0) + (unsigned __int8)(v19 >> 3)) & 0x1F) != 0 )
      {
        v35 = v31 & 0x1F;
        v19 = (unsigned int)(32 - v35);
        _InterlockedOr(v33++, ((1 << (32 - v35)) - 1) << v32);
        v30 = 1 - v19;
        if ( (unsigned __int64)(1 - v19) >= 0x20 )
        {
          v19 = v30 >> 5;
          v30 += -32LL * (v30 >> 5);
          do
          {
            *v33++ = -1;
            --v19;
          }
          while ( v19 );
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
    v24 = 0xFFFFFFFFFLL;
    v25 = 0xFFFFFFFE00000000uLL;
    v22 = 0x2AAAAAAAAAAAAAABLL;
    goto LABEL_16;
  }
}
