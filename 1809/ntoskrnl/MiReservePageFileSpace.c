/*
 * XREFs of MiReservePageFileSpace @ 0x140081310
 * Callers:
 *     MiWsleFlush @ 0x1400B3250 (MiWsleFlush.c)
 *     MiFillNoReservationCluster @ 0x140150E48 (MiFillNoReservationCluster.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1400817F0 (MiReservePageFileSpaceForPage.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14011BA24 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiFindFreePageFileSpace @ 0x14012420C (MiFindFreePageFileSpace.c)
 *     MiGetPageFileSectionForReservation @ 0x1401577DC (MiGetPageFileSectionForReservation.c)
 *     MiReleasePageFileSectionInfo @ 0x140157D9C (MiReleasePageFileSectionInfo.c)
 */

__int64 __fastcall MiReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // edi
  signed __int32 v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r10
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // edi
  unsigned __int64 v19; // r12
  int v20; // r13d
  unsigned __int64 v21; // r12
  __int64 i; // r13
  unsigned int v23; // r15d
  unsigned int v24; // r12d
  __int64 v25; // rdx
  int v26; // r9d
  unsigned int FreePageFileSpace; // eax
  unsigned __int64 v28; // r12
  unsigned int v29; // edi
  unsigned __int64 j; // r14
  int v31; // eax
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // r15
  int v38; // eax
  unsigned int v39; // r12d
  int v40; // r12d
  int v41; // [rsp+20h] [rbp-78h]
  unsigned __int64 v42; // [rsp+28h] [rbp-70h]
  _BYTE v43[16]; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-50h]
  unsigned __int64 v45; // [rsp+50h] [rbp-48h]
  signed __int32 v46; // [rsp+A0h] [rbp+8h]
  __int64 v47; // [rsp+B0h] [rbp+18h]
  __int64 v48; // [rsp+B8h] [rbp+20h] BYREF

  v47 = a3;
  result = *(unsigned int *)(a1 + 856);
  v46 = *(_DWORD *)(a1 + 856);
  v5 = v46 & 0x3FF;
  v7 = v46;
  if ( v5 >= 0x10 )
  {
    v8 = 0LL;
    v41 = 0;
    if ( !a3 )
    {
      result = MiGetPageFileSectionForReservation(a2, v43, 1LL);
      if ( !(_DWORD)result )
        return result;
      v16 = v44;
      v42 = v44;
      v15 = v45;
      v41 = 1;
      goto LABEL_10;
    }
    if ( (*(_BYTE *)(a3 + 184) & 7) != 0 )
    {
      v42 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v15 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v16 = a2 & 0xFFFFFFFFFFFFF000uLL;
LABEL_11:
      v17 = ((__int64)(v15 - v16) >> 3) + 1;
      if ( v17 > v5 )
      {
        v34 = (__int64)(v15 - a2) >> 3;
        v35 = (__int64)(a2 - v16) >> 3;
        v36 = v17 - v5;
        if ( (unsigned int)v34 < v36 )
        {
          v38 = v36 - v34;
          v37 = 0LL;
          LODWORD(v35) = v35 - v38;
        }
        else
        {
          v37 = (unsigned int)v34 - v36;
        }
        v15 = a2 + 8 * v37;
        v42 = a2 - 8LL * (unsigned int)v35;
        v16 = v42;
      }
      v18 = 1;
      if ( a3 )
        v18 = 129;
      if ( v8 && *(int *)(v8 + 52) < 0 )
        v18 |= (*(_DWORD *)(v8 + 48) & 0xF8 | 4u) >> 1;
      v19 = a2 - 8;
      v20 = 0;
      LODWORD(v48) = 0;
      if ( a2 - 8 >= v16 )
      {
        do
        {
          if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v19, v18) )
            break;
          ++v20;
          v19 -= 8LL;
        }
        while ( v19 >= v42 );
        v7 = v46;
        LODWORD(v48) = v20;
      }
      v21 = a2 + 8;
      for ( i = 0LL; v21 <= v15; v21 += 8LL )
      {
        if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v21, v18) )
          break;
        i = (unsigned int)(i + 1);
      }
      v23 = v48;
      v24 = i + v48 + 1;
      v48 = 0LL;
      result = MI_IS_PTE_IN_WS_SWAP_SET(a1, &v48);
      if ( (_DWORD)result )
      {
        v48 = 0LL;
        v26 = 16;
      }
      if ( v24 == 1 )
      {
        if ( v26 )
          goto LABEL_39;
        v26 = 64;
      }
      FreePageFileSpace = MiFindFreePageFileSpace(a1, &v48, v24, v26 | 1u);
      v25 = FreePageFileSpace;
      if ( FreePageFileSpace == v24 )
        goto LABEL_28;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)(a1 + 856),
                               v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)FreePageFileSpace) & 0x3FF,
                               v7);
      if ( (_DWORD)v25 )
      {
        v39 = v24 - v25;
        if ( (unsigned int)i < v39 )
        {
          v40 = v39 - i;
          i = 0LL;
          v23 -= v40;
        }
        else
        {
          i = (unsigned int)i - v39;
        }
LABEL_28:
        v28 = a2 + 8 * i;
        result = 8LL * v23;
        v29 = v18 & 0xFFFFFFFE;
        for ( j = a2 - result; j <= v28; v48 = result )
        {
          v31 = MiReservePageFileSpaceForPage(a1, j, v29);
          v32 = v48;
          if ( !v31 )
            MiReleasePageFileInfo((struct _KEVENT *)a1, v48, v47 != 0);
          v33 = v32;
          if ( qword_14043B180 && (v32 & 0x10) == 0 )
            v33 = v32 & ~qword_14043B180;
          if ( v32 )
          {
            if ( qword_14043B180 )
            {
              if ( (v32 & 0x10) != 0 )
                LODWORD(v32) = v32 & 0xFFFFFFEF;
              else
                LODWORD(v32) = v32 & ~(_DWORD)qword_14043B180;
            }
          }
          else
          {
            LODWORD(v32) = 0;
          }
          result = MiSwizzleInvalidPte((v33 + 0x100000000LL) ^ (unsigned int)v33 ^ (unsigned int)v32);
          j += 8LL;
        }
      }
LABEL_39:
      if ( v41 )
        return MiReleasePageFileSectionInfo(v43, v25);
      return result;
    }
    v9 = a2 << 25 >> 16;
    result = MiLocateAddress(v9);
    v8 = result;
    if ( result )
    {
      result = *(_DWORD *)(result + 48) & 0x20004007;
      if ( (_DWORD)result == 0x4000 )
      {
        v11 = v9 & 0xFFFFFFFFFFE00000uLL;
        if ( v11 >= (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12 )
          v12 = (v11 >> 9) & 0x7FFFFFFFF8LL;
        else
          v12 = 8
              * ((*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) & 0xFFFFFFFFFLL);
        v13 = v11 + 2093056;
        v42 = v12 + v10;
        v14 = *(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32);
        if ( v13 <= v14 << 12 )
        {
          v16 = v42;
          v15 = v10 + ((v13 >> 9) & 0x7FFFFFFFF8LL);
        }
        else
        {
          v15 = v10 + 8 * (v14 & 0xFFFFFFFFFLL);
          v16 = v42;
        }
LABEL_10:
        a3 = v47;
        goto LABEL_11;
      }
    }
  }
  return result;
}
