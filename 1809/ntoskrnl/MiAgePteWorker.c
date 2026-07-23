/*
 * XREFs of MiAgePteWorker @ 0x14006B2B0
 * Callers:
 *     MiAgePte @ 0x14006ADC0 (MiAgePte.c)
 *     MiAgeWorkingSetEPTCallback @ 0x1402B2C10 (MiAgeWorkingSetEPTCallback.c)
 *     MiSimpleAgePte @ 0x1402B3B20 (MiSimpleAgePte.c)
 *     MiSimpleAgeWorkingSetEPTCallback @ 0x1402B3C70 (MiSimpleAgeWorkingSetEPTCallback.c)
 * Callees:
 *     MiSetVaAgeList @ 0x14003E2D0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiClearPteAccessed @ 0x14006B770 (MiClearPteAccessed.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 *     MiCompressTbFlushList @ 0x140113B10 (MiCompressTbFlushList.c)
 *     MiLockSetPfnPriority @ 0x140121FE8 (MiLockSetPfnPriority.c)
 *     qsort @ 0x140196420 (qsort.c)
 */

unsigned __int64 __fastcall MiAgePteWorker(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int *a5,
        char a6)
{
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rbx
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // cl
  char v15; // al
  unsigned int v16; // r14d
  __int64 v17; // r12
  unsigned __int64 v18; // rcx
  unsigned __int8 v19; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v21; // rcx
  unsigned __int8 v22; // cl
  char v23; // al
  __int64 v24; // rbx
  BOOL v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  unsigned __int8 v29; // cl
  unsigned __int64 v30; // rax
  __int64 v31; // r9
  unsigned int *v32; // rdi
  unsigned int v33; // r8d
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  size_t v36; // rcx
  char v37; // cl
  unsigned __int64 v38; // r8
  __int64 v39; // rax
  char v40; // r8^7
  unsigned int *v41; // r10
  __int64 v42; // rax
  unsigned __int64 v43; // r9
  unsigned int *v44; // r9
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  __int64 v47; // rax

  v7 = 0xFFFFF68000000000uLL;
  v8 = a3;
  v11 = 0xFFFFF6FB7DBED000uLL;
  if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v12 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = *(_QWORD *)v12;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL
      && v12 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      v38 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 8 * ((v12 >> 3) & 0x1FF));
        HIBYTE(v38) = HIBYTE(*(_QWORD *)v12);
        if ( (v39 & 0x20) == 0 )
          v38 = *(_QWORD *)v12;
        HIBYTE(v13) = HIBYTE(v38);
        if ( (v39 & 0x42) != 0 )
          HIBYTE(v13) = HIBYTE(v38);
      }
    }
    v14 = HIBYTE(v13) & 0xF;
  }
  else
  {
    v12 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v30 = MI_READ_PTE_LOCK_FREE(v12);
    v14 = (*(_BYTE *)(v31 + 48 * ((v30 >> 12) & 0xFFFFFFFFFLL)) >> 1) & 7;
  }
  if ( (a6 & 1) == 0 )
  {
    v15 = *(_BYTE *)(a4 + 35);
    if ( (v15 & 8) != 0 )
      v16 = 5;
    else
      v16 = v15 & 7;
    v17 = 1LL;
    if ( v14 < 6u )
    {
      if ( v16 < 5 )
      {
        v29 = 6;
      }
      else
      {
        if ( (*a5 & 1) == 0 )
          goto LABEL_10;
        v29 = v14 + 1;
      }
      MiSetVaAgeList(a1, v8, 1u, v29);
      ++*((_QWORD *)a5 + 2);
      v7 = 0xFFFFF68000000000uLL;
      v11 = 0xFFFFF6FB7DBED000uLL;
    }
LABEL_10:
    v18 = *(_QWORD *)(a4 + 40);
    if ( (v18 & 0x200000000000000LL) != 0 )
      v19 = *((_BYTE *)a5 + 5);
    else
      v19 = *((_BYTE *)a5 + 4);
    if ( !v19 )
      v19 = 7;
    if ( (*(_BYTE *)(a1 + 184) & 7) != 3
      || ((v18 >> 54) & 7) != 4
      || (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
      || *(_WORD *)(a4 + 32) != 1 )
    {
      result = *a5;
      if ( (result & 3) == 0 )
        return result;
      if ( v8 < v7 || v8 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v21 = *(_QWORD *)v12;
        result = v11;
        if ( v12 >= v11 )
        {
          result = 0xFFFFF6FB7DBED7F8uLL;
          if ( v12 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
          {
            result = (unsigned __int64)KeGetCurrentThread();
            if ( *(_BYTE *)(*(_QWORD *)(result + 184) + 640LL) != 1
              && (v21 & 1) != 0
              && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
            {
              result = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( result )
              {
                v40 = HIBYTE(*(_QWORD *)v12);
                result = *(_QWORD *)(result + 8 * ((v12 >> 3) & 0x1FF));
                if ( (result & 0x20) == 0 )
                  v40 = HIBYTE(*(_QWORD *)v12);
                HIBYTE(v21) = v40;
                if ( (result & 0x42) != 0 )
                  HIBYTE(v21) = v40;
              }
            }
          }
        }
        v22 = HIBYTE(v21) & 0xF;
      }
      else
      {
        result = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v12) >> 12) & 0xFFFFFFFFFLL);
        v22 = (*(_BYTE *)(8 * result - 0x58000000000LL) >> 1) & 7;
      }
      if ( v22 < v19 && v16 >= a5[2] )
        return result;
    }
    ++*((_QWORD *)a5 + 4);
    v32 = a5 + 16;
    if ( a5[16] != 1 )
    {
      v37 = *((_BYTE *)a5 + 68);
      if ( (v37 & 8) == 0 && v8 >= v7 && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
        *((_BYTE *)a5 + 68) = v37 | 8;
    }
    v33 = a5[19];
    if ( v33 )
    {
      if ( (a5[17] & 4) == 0 )
      {
        v41 = &v32[2 * v33 - 2];
        v42 = *((_QWORD *)v41 + 3);
        if ( (v42 & 0xC00) == 0 )
        {
          v43 = *((_QWORD *)v41 + 3) & 0x3FFLL;
          if ( (v42 & 0xFFFFFFFFFFFFF000uLL) + ((v43 + 1) << 12) == v8 && v43 + 1 >= v43 && v43 + 1 <= 0x3FF )
          {
            ++*((_QWORD *)a5 + 10);
            *((_QWORD *)v41 + 3) = v42 ^ ((unsigned __int16)v42 ^ (unsigned __int16)(v42 + 1)) & 0x3FF;
            goto LABEL_62;
          }
        }
      }
      if ( (a5[17] & 4) == 0 )
      {
        v44 = &v32[2 * v33 - 2];
        v45 = *((_QWORD *)v44 + 3);
        if ( (v45 & 0xC00) == 0 && (v45 & 0xFFFFFFFFFFFFF000uLL) == v8 + 4096 )
        {
          v46 = *((_QWORD *)v44 + 3) & 0x3FFLL;
          if ( v46 + 1 >= v46 && v46 + 1 <= 0x3FF )
          {
            ++*((_QWORD *)a5 + 10);
            *((_QWORD *)v44 + 3) = (v45 - 4096) ^ ((unsigned __int16)(v45 - 4096) ^ (unsigned __int16)(v45 - 4096 + 1)) & 0x3FF;
LABEL_62:
            result = a5[18];
            if ( a5[19] == (_DWORD)result )
              return MiFreeWsleList(a1, v32, 0LL);
            return result;
          }
        }
      }
    }
    if ( v33 >= a5[18] )
    {
      *((_BYTE *)a5 + 69) = 1;
    }
    else
    {
      while ( 1 )
      {
        v34 = (unsigned __int64)(v17 - 1) > 0x3FF ? 1024LL : v17;
        v35 = v8 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v34 - 1) & 0x3FF;
        v17 -= v34;
        v8 += v34 << 12;
        *(_QWORD *)&a5[2 * a5[19]++ + 22] = v35;
        v36 = a5[19];
        *((_QWORD *)a5 + 10) += v34;
        if ( (_DWORD)v36 == a5[18] && (a5[17] & 4) == 0 )
        {
          qsort(a5 + 22, v36, 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(v32);
          v47 = a5[19];
          if ( (_DWORD)v47 == a5[18] )
            break;
        }
        if ( !v17 )
          goto LABEL_62;
      }
      if ( v17 )
      {
        *((_BYTE *)a5 + 69) = 1;
        *((_QWORD *)a5 + 10) = v47;
      }
    }
    goto LABEL_62;
  }
  if ( (unsigned __int8)(v14 - 1) <= 5u )
  {
    MiSetVaAgeList(a1, v8, 1u, 0);
LABEL_24:
    v23 = *(_BYTE *)(a4 + 35);
    if ( (v23 & 8) == 0 && (v23 & 7u) < 5 )
      MiLockSetPfnPriority(a4, 5LL);
    goto LABEL_27;
  }
  if ( v14 != 7 )
    goto LABEL_24;
LABEL_27:
  v24 = 0LL;
  v25 = 0;
  if ( (a6 & 2) != 0 )
    v24 = *((_QWORD *)a5 + 7);
  else
    v25 = (a6 & 4) != 0;
  result = MiClearPteAccessed(a1, a4, a2, v24, dword_14043B9A8, v25);
  if ( (_DWORD)result )
    ++*((_QWORD *)a5 + 3);
  if ( v24 )
  {
    v28 = qword_14043B1D0;
    if ( (*(_BYTE *)(v24 + 4) & 2) == 0
      && *(_DWORD *)v24 == 1
      && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[15] )
    {
      v28 = -1LL;
    }
    result = *(unsigned int *)(v24 + 8);
    if ( (*(_DWORD *)(v24 + 12) >= (unsigned int)result || *(_BYTE *)(v24 + 5) || *(_QWORD *)(v24 + 16) > v28)
      && v28 >= 0x400
      && !*(_BYTE *)(v24 + 5) )
    {
      return MiFlushTbList(v24, v28, v26, v27);
    }
  }
  return result;
}
