/*
 * XREFs of MiReservePageFileSpace @ 0x14002F390
 * Callers:
 *     MiWsleFlush @ 0x140024E30 (MiWsleFlush.c)
 *     MiFillNoReservationCluster @ 0x14014D9A4 (MiFillNoReservationCluster.c)
 * Callees:
 *     MiReservePageFileSpaceForPage @ 0x14002CE60 (MiReservePageFileSpaceForPage.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14005B0C0 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     MiFindFreePageFileSpace @ 0x1400F0E24 (MiFindFreePageFileSpace.c)
 *     MiReleasePageFileSectionInfo @ 0x140163980 (MiReleasePageFileSectionInfo.c)
 *     MiGetPageFileSectionForReservation @ 0x1401639BC (MiGetPageFileSectionForReservation.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

char __fastcall MiReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 Address; // rax
  unsigned int v8; // r15d
  signed __int32 v9; // esi
  __int64 v10; // rbx
  __int64 v11; // r10
  int v12; // edx
  unsigned __int64 v13; // rbp
  __int64 v14; // rcx
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  int v18; // edi
  unsigned int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r15
  unsigned int v22; // r13d
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r15
  __int64 v25; // r12
  unsigned int v26; // r15d
  __int64 v27; // rdx
  int v28; // r9d
  unsigned __int64 v29; // rsi
  char v30; // di
  unsigned __int64 i; // r14
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rbp
  __int64 v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // rbp
  int v44; // eax
  unsigned int v45; // r15d
  int v46; // r15d
  int v48; // [rsp+20h] [rbp-88h]
  __int64 updated; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v50; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v51; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v52[6]; // [rsp+40h] [rbp-68h] BYREF
  signed __int32 v55; // [rsp+C8h] [rbp+20h]

  memset(v52, 0, 0x28uLL);
  LODWORD(Address) = *(_DWORD *)(a1 + 864);
  v8 = Address & 0x3FF;
  v55 = Address;
  v9 = Address;
  if ( v8 < 0x10 )
    return Address;
  v10 = 0LL;
  v48 = 0;
  if ( a3 )
  {
    if ( (*(_BYTE *)(a3 + 184) & 7) != 0 )
    {
      v15 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v17 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    }
    else
    {
      Address = MiLocateAddress(a2 << 25 >> 16);
      v10 = Address;
      if ( !Address )
        return Address;
      v12 = *(_DWORD *)(Address + 48);
      LOBYTE(Address) = (v12 & 0x100004) == 0x100000;
      if ( (((v12 & 0x70) == 0) & (unsigned __int8)Address) == 0
        || (v12 & 0x100000) != 0 && ((v12 & 0x400000) != 0 || (v12 & 0xC0000u) >= 0x80000) )
      {
        return Address;
      }
      v13 = (a2 << 25 >> 16) & 0xFFFFFFFFFFE00000uLL;
      v6 = 0x7FFFFFFFF8LL;
      if ( v13 >= (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12 )
        v14 = (v13 >> 9) & 0x7FFFFFFFF8LL;
      else
        v14 = 8
            * ((*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) & 0xFFFFFFFFFLL);
      v15 = v14 + v11;
      v16 = v13 + 2093056;
      if ( v16 <= (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) << 12 )
        v17 = v11 + ((v16 >> 9) & 0x7FFFFFFFF8LL);
      else
        v17 = v11
            + 8
            * ((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) & 0xFFFFFFFFFLL);
    }
    v18 = 1;
  }
  else
  {
    v18 = 1;
    LODWORD(Address) = MiGetPageFileSectionForReservation(a2, v52, 1LL);
    if ( !(_DWORD)Address )
      return Address;
    v15 = v52[2];
    v17 = v52[3];
    v48 = 1;
  }
  v19 = ((__int64)(v17 - v15) >> 3) + 1;
  if ( v19 > v8 )
  {
    v40 = (__int64)(v17 - a2) >> 3;
    v41 = (__int64)(a2 - v15) >> 3;
    v42 = v19 - v8;
    if ( (unsigned int)v40 < v42 )
    {
      v44 = v42 - v40;
      v43 = 0LL;
      LODWORD(v41) = v41 - v44;
    }
    else
    {
      v43 = (unsigned int)v40 - v42;
    }
    v17 = a2 + 8 * v43;
    v15 = a2 - 8LL * (unsigned int)v41;
  }
  if ( a3 )
    v18 = 129;
  if ( v10 && *(int *)(v10 + 52) < 0 )
    v18 |= (*(_DWORD *)(v10 + 48) & 0xF80 | 0x40u) >> 5;
  v20 = 0LL;
  v21 = a2 - 8;
  v22 = 0;
  v50 = 0LL;
  if ( a2 - 8 >= v15 )
  {
    do
    {
      if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v21, v18, &v50) )
        break;
      ++v22;
      v21 -= 8LL;
    }
    while ( v21 >= v15 );
    v20 = v50;
  }
  v23 = 0LL;
  v24 = a2 + 8;
  v25 = 0LL;
  v51 = 0LL;
  if ( a2 + 8 <= v17 )
  {
    do
    {
      if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v24, v18, &v51) )
        break;
      v25 = (unsigned int)(v25 + 1);
      v24 += 8LL;
    }
    while ( v24 <= v17 );
    v23 = v51;
    v9 = v55;
  }
  v26 = v25 + v22 + 1;
  if ( v20 )
  {
    v37 = v20;
    if ( qword_140465B00 && (v20 & 0x10) == 0 )
      v37 = v20 & ~qword_140465B00;
    updated = MiUpdatePageFileHighInPte(v20, HIDWORD(v37) + 1, v6);
  }
  else
  {
    if ( !v23 )
      goto LABEL_30;
    v38 = v23;
    if ( qword_140465B00 && (v23 & 0x10) == 0 )
      v38 = v23 & ~qword_140465B00;
    if ( v26 < HIDWORD(v38) )
    {
      v39 = v23;
      if ( qword_140465B00 && (v23 & 0x10) == 0 )
        v39 = v23 & ~qword_140465B00;
      updated = MiUpdatePageFileHighInPte(v23, HIDWORD(v39) - v26, v6);
    }
    else
    {
LABEL_30:
      updated = 0LL;
    }
  }
  LODWORD(Address) = MI_IS_PTE_IN_WS_SWAP_SET(a1, &updated);
  if ( (_DWORD)Address )
  {
    updated = 0LL;
    v28 = 16;
  }
  if ( v26 == 1 )
  {
    if ( v28 )
      goto LABEL_46;
    v28 = 64;
  }
  LODWORD(Address) = MiFindFreePageFileSpace(a1, &updated, v26, v28 | 1u);
  v27 = (unsigned int)Address;
  if ( (_DWORD)Address == v26 )
    goto LABEL_35;
  LOBYTE(Address) = _InterlockedCompareExchange(
                      (volatile signed __int32 *)(a1 + 864),
                      v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)Address) & 0x3FF,
                      v9);
  if ( (_DWORD)v27 )
  {
    v45 = v26 - v27;
    if ( (unsigned int)v25 < v45 )
    {
      v46 = v45 - v25;
      v25 = 0LL;
      v22 -= v46;
    }
    else
    {
      v25 = (unsigned int)v25 - v45;
    }
LABEL_35:
    v29 = a2 + 8 * v25;
    Address = 8LL * v22;
    v30 = v18 & 0xFE;
    for ( i = a2 - Address; i <= v29; updated = Address )
    {
      v32 = MiReservePageFileSpaceForPage(a1, i, v30, &updated);
      v35 = updated;
      if ( !v32 )
        MiReleasePageFileInfo(a1, updated, a3 != 0);
      v36 = v35;
      if ( qword_140465B00 && (v35 & 0x10) == 0 )
        v36 = v35 & ~qword_140465B00;
      if ( v35 )
      {
        if ( qword_140465B00 )
        {
          if ( (v35 & 0x10) != 0 )
            LODWORD(v35) = v35 & 0xFFFFFFEF;
          else
            LODWORD(v35) = v35 & ~(_DWORD)qword_140465B00;
        }
      }
      else
      {
        LODWORD(v35) = 0;
      }
      Address = MiSwizzleInvalidPte(
                  (v36 + 0x100000000LL) ^ (unsigned int)v36 ^ (unsigned int)v35,
                  v36 + 0x100000000LL,
                  v33,
                  v34);
      i += 8LL;
    }
  }
LABEL_46:
  if ( v48 )
    LOBYTE(Address) = MiReleasePageFileSectionInfo(v52, v27);
  return Address;
}
