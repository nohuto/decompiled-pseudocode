/*
 * XREFs of RaidXrbSetDataBufferAddress @ 0x1C0004C70
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0004630 (RaidpAdapterContinueScatterGather.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C0038910 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024A80 (memmove.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004298C (RaidSrbExGetBidirectionalData.c)
 */

__int64 __fastcall RaidXrbSetDataBufferAddress(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  char v4; // si
  __int64 v5; // r13
  __int64 v9; // r10
  struct _MDL *v10; // r12
  unsigned __int8 v11; // al
  unsigned int v12; // ebp
  unsigned int v13; // r9d
  __int64 v14; // r11
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // ecx
  char v19; // al
  __int64 result; // rax
  bool v21; // cc
  int v22; // eax
  char v23; // si
  int v24; // ecx
  PMDL v25; // rcx
  PVOID v26; // rdi
  int v27; // ecx
  int v28; // ecx
  __int64 BidirectionalData; // rax
  unsigned int v30; // ecx
  unsigned int *Src; // [rsp+30h] [rbp-58h]
  PMDL MemoryDescriptorList[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int Size; // [rsp+90h] [rbp+8h]
  char v34; // [rsp+A0h] [rbp+18h]
  int v35; // [rsp+A8h] [rbp+20h]

  v3 = a1[21];
  v4 = 0;
  v5 = 0LL;
  v34 = 0;
  if ( a3 )
  {
    BidirectionalData = RaidSrbExGetBidirectionalData(v3);
    v9 = a1[19];
    v5 = BidirectionalData;
    v10 = (struct _MDL *)a1[17];
  }
  else
  {
    v9 = a1[14];
    v10 = (struct _MDL *)a1[13];
  }
  v11 = *(_BYTE *)(v3 + 2);
  if ( v11 != 40 )
  {
    v4 = *(_BYTE *)(v3 + 72);
    v12 = v11;
    v35 = *(_DWORD *)(v3 + 12);
    v34 = *(_BYTE *)(v3 + 4);
    Src = *(unsigned int **)(v3 + 24);
    Size = *(_DWORD *)(v3 + 16);
    goto LABEL_22;
  }
  v12 = *(_DWORD *)(v3 + 20);
  v35 = *(_DWORD *)(v3 + 24);
  if ( v5 && a3 )
  {
    Src = *(unsigned int **)(v5 + 16);
    Size = *(_DWORD *)(v5 + 8);
  }
  else
  {
    Src = *(unsigned int **)(v3 + 64);
    Size = *(_DWORD *)(v3 + 60);
  }
  if ( v12 )
  {
    v21 = v12 <= 0x17;
    if ( v12 != 23 )
    {
LABEL_23:
      if ( !v21 )
        goto LABEL_15;
      v22 = 8389124;
      if ( !_bittest(&v22, v12) )
        goto LABEL_15;
      goto LABEL_25;
    }
  }
  v13 = *(_DWORD *)(v3 + 56);
  v14 = 0LL;
  if ( !v13 )
  {
LABEL_22:
    v21 = v12 <= 0x17;
    goto LABEL_23;
  }
  while ( 1 )
  {
    v15 = *(unsigned int *)(v3 + 4 * v14 + 120);
    if ( (unsigned int)v15 < 0x80 )
      goto LABEL_41;
    v16 = *(unsigned int *)(v3 + 16);
    if ( (unsigned int)v15 > (unsigned int)v16 )
      goto LABEL_41;
    v17 = (unsigned int)v15;
    v18 = *(_DWORD *)(v15 + v3);
    if ( v18 == 64 )
    {
      if ( !v12 && v17 + 40 <= v16 )
        goto LABEL_13;
      goto LABEL_41;
    }
    v27 = v18 - 65;
    if ( v27 )
      break;
    if ( !v12 && v17 + 56 <= v16 )
    {
LABEL_13:
      if ( *(_BYTE *)(v17 + v3 + 10) )
        v4 = *(_BYTE *)(v17 + v3 + 24);
      goto LABEL_15;
    }
LABEL_41:
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= v13 )
      goto LABEL_22;
  }
  v28 = v27 - 1;
  if ( v28 )
  {
    if ( v28 == 30 && v12 == 23 && v17 + 24 <= v16 )
    {
      v23 = *(_BYTE *)(v17 + v3 + 8);
      goto LABEL_26;
    }
    goto LABEL_41;
  }
  if ( v12 || v17 + 40 > v16 )
    goto LABEL_41;
  if ( *(_DWORD *)(v17 + v3 + 12) )
    v4 = *(_BYTE *)(v17 + v3 + 32);
LABEL_15:
  v19 = *(_BYTE *)(a2 + 393);
  if ( v19 != 3 && ((unsigned __int8)(v19 - 1) > 1u || !v12 && ((v4 - 8) & 0x5D) == 0) )
    return 0LL;
LABEL_25:
  v23 = v34;
LABEL_26:
  if ( !v9 )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _MDL *, PMDL *))(*(_QWORD *)(*(_QWORD *)(a2 + 696) + 8LL)
                                                                             + 120LL))(
             *(_QWORD *)(a2 + 696),
             v9,
             v10,
             MemoryDescriptorList);
  v24 = result;
  if ( (int)result < 0 )
  {
    v26 = 0LL;
  }
  else
  {
    v25 = MemoryDescriptorList[0];
    a1[18] = MemoryDescriptorList[0];
    if ( v10 == v25 )
    {
      v26 = 0LL;
      v24 = -2147483622;
    }
    else
    {
      v26 = (v25->MdlFlags & 5) != 0
          ? v25->MappedSystemVa
          : MmMapLockedPagesSpecifyCache(v25, 0, MmCached, 0LL, 0, 0x40000020u);
      v24 = 0;
    }
    result = (unsigned int)v24;
  }
  if ( v24 == -2147483622 )
    return 0LL;
  if ( v24 >= 0 )
  {
    if ( v26 )
    {
      if ( (v35 & 0x80u) == 0 || a3 )
      {
        v30 = Size;
        if ( v12 == 23 && v23 == 9 && *Src )
          v30 = *Src;
        memmove(v26, Src, v30);
      }
      if ( *(_BYTE *)(v3 + 2) == 40 )
      {
        if ( a3 )
          *(_QWORD *)(v5 + 16) = v26;
        else
          *(_QWORD *)(v3 + 64) = v26;
      }
      else
      {
        *(_QWORD *)(v3 + 24) = v26;
      }
      return 0LL;
    }
    return 3221225626LL;
  }
  return result;
}
