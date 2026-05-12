/*
 * XREFs of RaidXrbSetDataBufferAddress @ 0x1C0005030
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0003360 (RaidpAdapterContinueScatterGather.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C003B510 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C080 (memmove.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0044BA8 (RaidSrbExGetBidirectionalData.c)
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
  bool v13; // cc
  int v14; // eax
  char v15; // si
  __int64 result; // rax
  int v17; // ecx
  PMDL v18; // rcx
  PVOID v19; // rdi
  unsigned int v20; // r9d
  __int64 v21; // r11
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // ecx
  char v26; // al
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
    goto LABEL_5;
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
    v13 = v12 <= 0x17;
    if ( v12 != 23 )
    {
LABEL_6:
      if ( !v13 )
        goto LABEL_27;
      v14 = 8389124;
      if ( !_bittest(&v14, v12) )
        goto LABEL_27;
      goto LABEL_8;
    }
  }
  v20 = *(_DWORD *)(v3 + 56);
  v21 = 0LL;
  if ( !v20 )
  {
LABEL_5:
    v13 = v12 <= 0x17;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v22 = *(unsigned int *)(v3 + 4 * v21 + 120);
    if ( (unsigned int)v22 < 0x80 )
      goto LABEL_41;
    v23 = *(unsigned int *)(v3 + 16);
    if ( (unsigned int)v22 > (unsigned int)v23 )
      goto LABEL_41;
    v24 = (unsigned int)v22;
    v25 = *(_DWORD *)(v22 + v3);
    if ( v25 == 64 )
    {
      if ( !v12 && v24 + 40 <= v23 )
        goto LABEL_25;
      goto LABEL_41;
    }
    v27 = v25 - 65;
    if ( v27 )
      break;
    if ( !v12 && v24 + 56 <= v23 )
    {
LABEL_25:
      if ( *(_BYTE *)(v24 + v3 + 10) )
        v4 = *(_BYTE *)(v24 + v3 + 24);
      goto LABEL_27;
    }
LABEL_41:
    v21 = (unsigned int)(v21 + 1);
    if ( (unsigned int)v21 >= v20 )
      goto LABEL_5;
  }
  v28 = v27 - 1;
  if ( v28 )
  {
    if ( v28 == 30 && v12 == 23 && v24 + 24 <= v23 )
    {
      v15 = *(_BYTE *)(v24 + v3 + 8);
      goto LABEL_9;
    }
    goto LABEL_41;
  }
  if ( v12 || v24 + 40 > v23 )
    goto LABEL_41;
  if ( *(_DWORD *)(v24 + v3 + 12) )
    v4 = *(_BYTE *)(v24 + v3 + 32);
LABEL_27:
  v26 = *(_BYTE *)(a2 + 409);
  if ( v26 != 3 && ((unsigned __int8)(v26 - 1) > 1u || !v12 && ((v4 - 8) & 0x5D) == 0) )
    return 0LL;
LABEL_8:
  v15 = v34;
LABEL_9:
  if ( !v9 )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _MDL *, PMDL *))(*(_QWORD *)(*(_QWORD *)(a2 + 720) + 8LL)
                                                                             + 120LL))(
             *(_QWORD *)(a2 + 720),
             v9,
             v10,
             MemoryDescriptorList);
  v17 = result;
  if ( (int)result < 0 )
  {
    v19 = 0LL;
  }
  else
  {
    v18 = MemoryDescriptorList[0];
    a1[18] = MemoryDescriptorList[0];
    if ( v10 == v18 )
    {
      v19 = 0LL;
      v17 = -2147483622;
    }
    else
    {
      v19 = (v18->MdlFlags & 5) != 0
          ? v18->MappedSystemVa
          : MmMapLockedPagesSpecifyCache(v18, 0, MmCached, 0LL, 0, 0x40000020u);
      v17 = 0;
    }
    result = (unsigned int)v17;
  }
  if ( v17 == -2147483622 )
    return 0LL;
  if ( v17 >= 0 )
  {
    if ( v19 )
    {
      if ( (v35 & 0x80u) == 0 || a3 )
      {
        v30 = Size;
        if ( v12 == 23 && v15 == 9 && *Src )
          v30 = *Src;
        memmove(v19, Src, v30);
      }
      if ( *(_BYTE *)(v3 + 2) == 40 )
      {
        if ( a3 )
          *(_QWORD *)(v5 + 16) = v19;
        else
          *(_QWORD *)(v3 + 64) = v19;
      }
      else
      {
        *(_QWORD *)(v3 + 24) = v19;
      }
      return 0LL;
    }
    return 3221225626LL;
  }
  return result;
}
