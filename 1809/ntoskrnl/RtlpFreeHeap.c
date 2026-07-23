/*
 * XREFs of RtlpFreeHeap @ 0x1402F20B8
 * Callers:
 *     RtlpFreeHeapInternal @ 0x14011EF60 (RtlpFreeHeapInternal.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ZwFreeVirtualMemory @ 0x1401B86B0 (ZwFreeVirtualMemory.c)
 *     RtlpCoalesceFreeBlocks @ 0x1402F0964 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x1402F15D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1402F28D4 (RtlpInsertFreeBlock.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402FBA7C (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x1402FC158 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x1402FC27C (RtlpHeapAddListEntry.c)
 */

__int64 RtlpFreeHeap(__int64 a1, int a2, __int64 a3, ...)
{
  char v5; // r15
  int v7; // edx
  int v8; // r14d
  int v9; // edx
  __int64 **v10; // rcx
  int v11; // edx
  char v12; // al
  __int64 v13; // rsi
  char v14; // r9
  unsigned __int16 v15; // r8
  bool v16; // zf
  unsigned __int64 v17; // r14
  _QWORD *v18; // rdi
  _QWORD *Entry; // r8
  int v20; // ecx
  int v21; // eax
  _QWORD *v22; // rdi
  __int64 *v23; // rax
  __int64 **v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  int v27; // eax
  _DWORD *v28; // r8
  unsigned __int64 v29; // rdx
  _QWORD *v30; // rdi
  _QWORD *v31; // r8
  int v32; // ecx
  int v33; // eax
  __int64 *v34; // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r9
  char v41; // [rsp+30h] [rbp-78h]
  PVOID BaseAddress; // [rsp+40h] [rbp-68h] BYREF
  __int64 v43; // [rsp+48h] [rbp-60h]
  __int64 v44; // [rsp+50h] [rbp-58h]
  __int64 v45; // [rsp+58h] [rbp-50h]
  int v46; // [rsp+68h] [rbp-40h]
  int v47; // [rsp+78h] [rbp-30h]
  __int64 v48; // [rsp+C0h] [rbp+18h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp+20h] BYREF
  va_list RegionSizea; // [rsp+C8h] [rbp+20h]
  va_list va1; // [rsp+D0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(RegionSizea, a3);
  RegionSize = va_arg(va1, _QWORD);
  v5 = 0;
  v41 = 0;
  BaseAddress = 0LL;
  if ( a1 == a3 )
  {
    RtlpLogHeapFailure(9, a1, a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v7 = *(_DWORD *)(a1 + 116) | a2;
  v8 = v7 & 0x3C010F60;
  if ( (v7 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v11 = *(_DWORD *)(a3 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(a3 + 8) = v11;
      if ( HIBYTE(v11) != ((unsigned __int8)v11 ^ (unsigned __int8)(BYTE1(v11) ^ BYTE2(v11))) )
        RtlpAnalyzeHeapFailure(a1, a3);
    }
  }
  else
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    v5 = 1;
    v41 = 1;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v9 = *(_DWORD *)(a3 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(a3 + 8) = v9;
      if ( HIBYTE(v9) != ((unsigned __int8)v9 ^ (unsigned __int8)(BYTE1(v9) ^ BYTE2(v9))) )
        RtlpAnalyzeHeapFailure(a1, a3);
    }
    v10 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *(unsigned __int16 *)(a3 + 8) < (unsigned __int64)*((unsigned int *)v10 + 2) )
        break;
      v10 = (__int64 **)*v10;
    }
    while ( v10 );
  }
  v12 = *(_BYTE *)(a3 + 10);
  if ( (v12 & 8) != 0 )
    *(_BYTE *)(a3 + 10) = v12 & 0xF7;
  if ( *(_BYTE *)(a3 + 15) == 4 )
  {
    v35 = a3 - 48;
    v36 = *(_QWORD *)(a3 - 48 + 32);
    BaseAddress = (PVOID)((a3 - 48) & 0xFFFFFFFFFFFF0000uLL);
    *(_QWORD *)(a1 + 592) -= v36;
    v37 = *(_QWORD *)(a3 - 48);
    v38 = *(__int64 **)(a3 - 48 + 8);
    v39 = *v38;
    v40 = *(_QWORD *)(v37 + 8);
    if ( *v38 == v40 && v39 == v35 )
    {
      *v38 = v37;
      *(_QWORD *)(v37 + 8) = v38;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, v35, v40, v39, 0LL);
    }
    if ( v5 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
      v5 = 0;
    }
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, (PSIZE_T)RegionSizea, 0x8000u);
    goto LABEL_86;
  }
  RegionSize = *(unsigned __int16 *)(a3 + 8);
  v13 = RtlpCoalesceFreeBlocks(a1, a3, (ULONG_PTR *)RegionSizea);
  v48 = v13;
  v15 = RegionSize;
  if ( RegionSize < *(_QWORD *)(a1 + 176) || RegionSize + *(_QWORD *)(a1 + 192) < *(_QWORD *)(a1 + 184) )
  {
    if ( RegionSize > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v13, RegionSize);
      goto LABEL_86;
    }
    v16 = v8 == 0;
    v17 = (unsigned __int16)RegionSize;
    if ( v16 )
    {
      *(_BYTE *)(v13 + 10) = 0;
      *(_BYTE *)(v13 + 15) = 0;
      v18 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, v15);
      else
        Entry = (_QWORD *)*v18;
      while ( v18 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v20 = *((_DWORD *)Entry - 2);
          v46 = v20;
          if ( (v20 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v21 = v20 ^ *(_DWORD *)(a1 + 136);
            v46 = v21;
          }
          else
          {
            LOWORD(v21) = v20;
          }
          v13 = v48;
          v5 = v41;
        }
        else
        {
          LOWORD(v21) = *((_WORD *)Entry - 4);
        }
        if ( v17 <= (unsigned __int16)v21 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v22 = (_QWORD *)(v13 + 16);
      v23 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v23 == Entry )
      {
        *v22 = Entry;
        *(_QWORD *)(v13 + 24) = v23;
        *v23 = (__int64)v22;
        Entry[1] = v22;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v23, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v13 + 8);
      v24 = *(__int64 ***)(a1 + 312);
      if ( !v24 )
        goto LABEL_74;
      v25 = *(unsigned __int16 *)(v13 + 8);
      while ( 1 )
      {
        v26 = *((unsigned int *)v24 + 2);
        if ( v25 < v26 )
        {
          v27 = *(unsigned __int16 *)(v13 + 8);
          v43 = *(unsigned __int16 *)(v13 + 8);
          goto LABEL_73;
        }
        if ( !*v24 )
          break;
        v24 = (__int64 **)*v24;
      }
      v27 = v26 - 1;
      v43 = (unsigned int)(v26 - 1);
LABEL_73:
      RtlpHeapAddListEntry(a1, (_DWORD)v24, v26, (_DWORD)v22, v27, v25);
LABEL_74:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
        *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_86;
    }
    *(_BYTE *)(v13 + 10) &= 0xF0u;
    *(_BYTE *)(v13 + 15) = 0;
    if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_52:
      v30 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v31 = (_QWORD *)RtlpFindEntry(a1, v17);
      else
        v31 = (_QWORD *)*v30;
      while ( v30 != v31 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v32 = *((_DWORD *)v31 - 2);
          v47 = v32;
          if ( (v32 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v33 = v32 ^ *(_DWORD *)(a1 + 136);
            v47 = v33;
          }
          else
          {
            LOWORD(v33) = v32;
          }
          v13 = v48;
          v5 = v41;
        }
        else
        {
          LOWORD(v33) = *((_WORD *)v31 - 4);
        }
        if ( v17 <= (unsigned __int16)v33 )
          break;
        v31 = (_QWORD *)*v31;
      }
      v22 = (_QWORD *)(v13 + 16);
      v34 = (__int64 *)v31[1];
      if ( (_QWORD *)*v34 == v31 )
      {
        *v22 = v31;
        *(_QWORD *)(v13 + 24) = v34;
        *v34 = (__int64)v22;
        v31[1] = v22;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v31, 0, *v34, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v13 + 8);
      v24 = *(__int64 ***)(a1 + 312);
      if ( !v24 )
        goto LABEL_74;
      v25 = *(unsigned __int16 *)(v13 + 8);
      while ( 1 )
      {
        v26 = *((unsigned int *)v24 + 2);
        if ( v25 < v26 )
        {
          v27 = *(unsigned __int16 *)(v13 + 8);
          v45 = *(unsigned __int16 *)(v13 + 8);
          goto LABEL_73;
        }
        if ( !*v24 )
          break;
        v24 = (__int64 **)*v24;
      }
      v27 = v26 - 1;
      v45 = (unsigned int)(v26 - 1);
      goto LABEL_73;
    }
    v28 = (_DWORD *)(v13 + 32);
    v44 = v13 + 32;
    v29 = (16 * v17 - 32) >> 2;
    if ( v29 )
    {
      if ( ((unsigned __int8)v28 & 4) == 0 )
        goto LABEL_49;
      *v28 = -17891602;
      if ( --v29 )
      {
        v28 = (_DWORD *)(v13 + 36);
        v44 = v13 + 36;
LABEL_49:
        memset64(v28, 0xFEEEFEEEFEEEFEEEuLL, v29 >> 1);
        if ( (v29 & 1) != 0 )
          v28[v29 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v13 + 10) |= 4u;
    goto LABEL_52;
  }
  RtlpDeCommitFreeBlock(a1, v13, RegionSize, v14);
LABEL_86:
  if ( v5 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return 1LL;
}
