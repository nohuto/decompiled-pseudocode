/*
 * XREFs of MiUnlinkNodeLargePageHelper @ 0x1400646F0
 * Callers:
 *     MiUnlinkNodeLargePage @ 0x140064280 (MiUnlinkNodeLargePage.c)
 *     MiCoalesceFreeLargePages @ 0x140090750 (MiCoalesceFreeLargePages.c)
 *     MiTryUnlinkNodeLargePage @ 0x14012BC80 (MiTryUnlinkNodeLargePage.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiIncreaseAvailablePages @ 0x14009CE20 (MiIncreaseAvailablePages.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiPageListCollision @ 0x140121394 (MiPageListCollision.c)
 *     MiUpdateAvailableEvents @ 0x14017F964 (MiUpdateAvailableEvents.c)
 *     MiObtainFreePages @ 0x1402B3484 (MiObtainFreePages.c)
 *     MiArePageContentsZero @ 0x1402BF958 (MiArePageContentsZero.c)
 *     MiWakeLargePageRebuild @ 0x1402CEB90 (MiWakeLargePageRebuild.c)
 */

__int64 __fastcall MiUnlinkNodeLargePageHelper(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 v6; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  int v15; // eax
  char v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // r10
  __int64 v19; // rdi
  __int64 v20; // r9
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r11
  unsigned __int64 v30; // rdx
  volatile signed __int32 *v31; // r8
  unsigned int v32; // esi
  __int64 v33; // rax
  int v34; // ecx
  unsigned __int64 v35; // rcx

  v6 = a3;
  v8 = a4;
  v9 = MiLargePageSizes[a3];
  v10 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL));
  if ( v9 == 1 )
  {
    v13 = _InterlockedDecrement64((volatile signed __int64 *)(v10 + 7296));
    if ( v13 == *(_QWORD *)(v10 + 6120) || v13 == *(_QWORD *)(v10 + 6128) )
      MiUpdateAvailableEvents(v10);
    v11 = v13 + 1;
  }
  else
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 7296), -v9);
    v12 = *(_QWORD *)(v10 + 6128);
    v13 = v11 - v9;
    if ( v11 - v9 <= v12 && v11 > v12 || (v14 = *(_QWORD *)(v10 + 6120), v13 <= v14) && v11 > v14 )
      MiUpdateAvailableEvents(v10);
  }
  if ( v13 <= 0x420 )
  {
    v33 = *(_QWORD *)(v10 + 7024);
    if ( !v33 || !*(_BYTE *)(v33 + 52) )
      MiObtainFreePages(v10);
    if ( v13 < 0xA0 && v11 >= 0xA0 && *(_DWORD *)(v10 + 1144) )
      KeSetEvent((PRKEVENT)(v10 + 992), 0, 0);
  }
  if ( v13 < 0x9F )
  {
    v34 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
    if ( (v34 & 0xC) == 8 )
    {
      v15 = 1;
    }
    else if ( v13 < 0x20 && (ULONG_PTR *)v10 == &MiSystemPartition )
    {
      v15 = 0;
    }
    else if ( (v34 & 2) != 0 && v13 >= 0x21 )
    {
      v15 = 1;
    }
    else
    {
      v15 = (*(unsigned __int8 *)(v10 + 4) >> 4) & 1;
    }
  }
  else
  {
    v15 = 1;
  }
  if ( (a5 & 8) == 0 && !v15 )
  {
    MiIncreaseAvailablePages(v10, v9);
    return 0LL;
  }
  v16 = *(_BYTE *)(a2 + 34);
  if ( (v16 & 8) != 0 )
  {
    MiPageListCollision(a2, 1LL);
    MiSetOriginalPtePfnFromFreeList(a2 + 16, v26, v27, v28);
    v16 = *(_BYTE *)(a2 + 34);
  }
  v17 = (__int64)a1 - *(_QWORD *)(v10 + 16);
  *(_QWORD *)(a2 + 8) = 0LL;
  v18 = (a2 + 0x58000000000LL) / 48;
  v19 = v17 / 1984;
  v20 = v16 & 7;
  --a1[34 * v6 + v20];
  v21 = 34 * v6 + v8 + 4 * (v20 + (v18 < 0x100000 ? 2 : 0));
  if ( MiLargePageSizes[v6] == 16 )
    v22 = v18 >> 4;
  else
    v22 = v18 / MiLargePageSizes[v6];
  v23 = (unsigned int)dword_14043B1C0[v6];
  if ( v23 == 16 )
    LODWORD(v22) = v22 & 0xF;
  else
    v22 %= v23;
  --*(_QWORD *)(a1[v21 + 18] + 24LL * (unsigned int)v22 + 16);
  --a1[v21 + 2];
  v24 = 2176LL;
  if ( (_DWORD)v20 )
    v24 = 2240LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + v10), -v9);
  if ( dword_14043B82C == 1 )
  {
    v29 = ((a2 + 0x58000000000LL) / 48) & 0x1F;
    v30 = v9;
    v31 = (volatile signed __int32 *)(qword_14043B888 + 4 * (v18 >> 5));
    if ( (unsigned __int64)(v29 + v9) > 0x20 )
    {
      if ( (v18 & 0x1F) != 0 )
      {
        _InterlockedOr(v31, ((1 << (32 - (v18 & 0x1F))) - 1) << v29);
        v30 = v9 - (32 - (unsigned int)(v18 & 0x1F));
        ++v31;
      }
      if ( v30 >= 0x20 )
      {
        v35 = v30 >> 5;
        v30 += -32LL * (v30 >> 5);
        do
        {
          *v31++ = -1;
          --v35;
        }
        while ( v35 );
      }
      if ( !v30 )
        goto LABEL_17;
      v32 = (1 << v30) - 1;
    }
    else
    {
      if ( v9 == 32 )
      {
        *v31 = -1;
        goto LABEL_17;
      }
      v32 = ((1 << v9) - 1) << v29;
    }
    _InterlockedOr(v31, v32);
  }
LABEL_17:
  if ( *(_BYTE *)(v10 + 4765) == 1 )
  {
    *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 1;
  }
  else if ( !(_DWORD)v20 && (MiFlags & 0x80u) != 0 && (++dword_14043B92C & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero((a2 + 0x58000000000LL) / 48);
  }
  if ( v9 == 16
    && (unsigned __int64)(16 * (a1[68] + a1[69] + 32LL * (a1[34] + a1[35] + ((*a1 + a1[1]) << 9)))) <= 0x200
    && (MiFlags & 0x30) != 0 )
  {
    MiWakeLargePageRebuild(v10, (unsigned int)v19, 0LL);
  }
  return a2;
}
