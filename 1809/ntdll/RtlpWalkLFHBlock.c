/*
 * XREFs of RtlpWalkLFHBlock @ 0x18010A858
 * Callers:
 *     RtlpWalkHeap @ 0x1800F41F0 (RtlpWalkHeap.c)
 * Callees:
 *     RtlpGetFirstBlockAddress @ 0x18010A2D8 (RtlpGetFirstBlockAddress.c)
 *     RtlpGetReservedBlockSize @ 0x18010A39C (RtlpGetReservedBlockSize.c)
 *     RtlpIsLFHZoneAllocation @ 0x18010A4A4 (RtlpIsLFHZoneAllocation.c)
 */

char __fastcall RtlpWalkLFHBlock(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int16 ReservedBlockSize; // ax
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r8
  char v17; // al
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  char v20; // cl
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int16 v23; // ax
  int v24; // eax
  bool v25; // zf
  char v26; // cl
  unsigned __int64 v27; // rcx
  unsigned __int16 v28; // ax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  unsigned __int16 v33; // ax
  unsigned __int64 *v34; // rax
  __int64 v35; // r13
  char v36; // al
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 FirstBlockAddress; // rdx
  unsigned __int8 v41; // r11
  char v42; // al
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  char v45; // cl
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int16 v48; // ax
  int v49; // eax
  char v50; // cl
  unsigned __int64 v51; // rcx
  unsigned __int16 v52; // ax
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int8 v56; // r8
  char v57; // dl
  __int64 v58; // rcx
  int v59; // eax
  unsigned __int16 v60; // ax
  int v61; // [rsp+28h] [rbp-20h]
  int v62; // [rsp+28h] [rbp-20h]
  int v63; // [rsp+28h] [rbp-20h]
  int v64; // [rsp+28h] [rbp-20h]
  int v65; // [rsp+28h] [rbp-20h]
  int v66; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  if ( *(_BYTE *)(a1 + 418) == 2 )
    v7 = *(_QWORD *)(a1 + 408);
  else
    v7 = 0LL;
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)a2;
  if ( *(_WORD *)(a2 + 18) )
  {
    v8 -= 16LL;
    _m_prefetchw((const void *)v8);
    if ( *(_BYTE *)(v8 + 15) != 5 )
      goto LABEL_10;
    v9 = 16LL * *(unsigned __int8 *)(v8 + 14);
  }
  else
  {
    v9 = *(unsigned __int8 *)(a2 + 16);
  }
  v8 -= v9;
LABEL_10:
  if ( *(char *)(v8 + 15) < 0 )
  {
    if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4)) )
      return 0;
    v10 = (unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12;
    v11 = *(_QWORD *)(v8 - v10);
    if ( !v11 )
      return 0;
    RtlpGetReservedBlockSize(*(_QWORD *)(v8 - v10));
    RtlpGetFirstBlockAddress(v12, *(_QWORD *)(v11 + 8));
    ReservedBlockSize = RtlpGetReservedBlockSize(v11);
    if ( (v15 >> 4) / ReservedBlockSize >= *(unsigned __int16 *)(v11 + 40) )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v11 + 8);
      *(_WORD *)(a2 + 18) = 8193;
      return 0;
    }
    v17 = *(_BYTE *)(v14 + 15);
    if ( (v17 & 0x3F) == 0 )
    {
      *(_WORD *)(a2 + 18) = 0;
      *(_QWORD *)a2 = v14 + 16;
      *(_BYTE *)(a2 + 16) = 16;
      *(_QWORD *)(a2 + 36) = 16LL;
      v30 = 16LL * *(unsigned __int16 *)(v11 + 36) - 16;
LABEL_60:
      *(_QWORD *)(a2 + 8) = v30;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v14 + 14);
LABEL_61:
      *(_WORD *)(a2 + 18) |= 0x8000u;
      return 1;
    }
    if ( (v17 & 0x40) != 0 )
    {
      v18 = v17 & 0x3F;
    }
    else
    {
      if ( v17 != 4 )
      {
        v19 = v14;
        goto LABEL_23;
      }
      v18 = *(unsigned __int8 *)(v14 + 14);
    }
    v19 = v14 + 16 * v18;
LABEL_23:
    *(_WORD *)(a2 + 18) = 1;
    *(_QWORD *)a2 = v19 + 16;
    v20 = *(_BYTE *)(v14 + 15);
    if ( v20 == 5 )
    {
      v21 = *(unsigned __int16 *)(v14 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v20 & 0x40) != 0 )
    {
      v21 = *(unsigned __int16 *)(16LL * (v20 & 0x3F) + v14 + 12);
    }
    else if ( (v20 & 0x3F) == 0x3F )
    {
      if ( v20 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v24 = *(_DWORD *)(v14 + 8);
          LOWORD(v61) = v24;
          if ( (v24 & *(_DWORD *)(a1 + 124)) != 0 )
            v61 = *(_DWORD *)(a1 + 136) ^ v24;
          v23 = v61;
        }
        else
        {
          v23 = *(_WORD *)(v14 + 8);
        }
      }
      else
      {
        if ( *(_WORD *)(v14 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (v14 >> 4)) )
          v22 = 0LL;
        else
          v22 = *(_QWORD *)(v14
                          - ((unsigned __int64)(*(_DWORD *)(v14 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(v14 >> 4)) >> 12));
        v23 = *(_WORD *)(v22 + 36);
      }
      v21 = *(_QWORD *)(16LL * v23 + v14);
    }
    else
    {
      v21 = v20 & 0x3F;
    }
    v25 = (*(_BYTE *)(a2 + 18) & 2) == 0;
    *(_BYTE *)(a2 + 16) = v21;
    if ( v25 )
      *(_QWORD *)(a2 + 36) = v21;
    v26 = *(_BYTE *)(v14 + 15);
    if ( v26 == 5 )
    {
      v27 = *(unsigned __int16 *)(v14 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v26 & 0x40) != 0 )
    {
      v27 = *(unsigned __int16 *)(v14 + 16LL * (v26 & 0x3F) + 12);
    }
    else if ( (v26 & 0x3F) == 0x3F )
    {
      if ( v26 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v29 = *(_DWORD *)(v14 + 8);
          LOWORD(v62) = v29;
          if ( (v29 & *(_DWORD *)(a1 + 124)) != 0 )
            v62 = *(_DWORD *)(a1 + 136) ^ v29;
          v28 = v62;
        }
        else
        {
          v28 = *(_WORD *)(v14 + 8);
        }
      }
      else
      {
        if ( !(*(_WORD *)(v14 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (v14 >> 4))) )
          v4 = *(_QWORD *)(v14
                         - ((unsigned __int64)(*(_DWORD *)(v14 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(v14 >> 4)) >> 12));
        v28 = *(_WORD *)(v4 + 36);
      }
      v27 = *(_QWORD *)(v14 + 16LL * v28);
    }
    else
    {
      v27 = v26 & 0x3F;
    }
    v30 = 16LL * *(unsigned __int16 *)(v11 + 36) - v27;
    goto LABEL_60;
  }
  v31 = *(_QWORD *)(v7 + 24);
  if ( ((*(_BYTE *)(v8 + 10) ^ (unsigned __int8)(*(_BYTE *)(v31 + 138) & (*(_DWORD *)(v31 + 124) >> 20))) & 1) == 0 )
    goto LABEL_124;
  if ( *(_DWORD *)(v31 + 124) )
  {
    v32 = *(_DWORD *)(v8 + 8);
    LOWORD(v63) = v32;
    if ( (v32 & *(_DWORD *)(v31 + 124)) != 0 )
      v63 = *(_DWORD *)(v31 + 136) ^ v32;
    v33 = v63;
  }
  else
  {
    v33 = *(_WORD *)(v8 + 8);
  }
  if ( v33 <= 4u )
    goto LABEL_124;
  v34 = *(unsigned __int64 **)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 20LL) != -253701952 )
    goto LABEL_124;
  v35 = *v34;
  if ( !RtlpIsLFHZoneAllocation(v7, *v34, a3, a4) )
    goto LABEL_124;
  v36 = *(_BYTE *)(v8 + 15);
  if ( (v36 & 0x40) != 0 )
  {
    v37 = v36 & 0x3F;
LABEL_74:
    v38 = v8 + 16 * v37;
    goto LABEL_78;
  }
  if ( v36 == 4 )
  {
    v37 = *(unsigned __int8 *)(v8 + 14);
    goto LABEL_74;
  }
  v38 = v8;
LABEL_78:
  v39 = *(_QWORD *)(v35 + 8);
  if ( v39 == v38 + 16 )
  {
    FirstBlockAddress = RtlpGetFirstBlockAddress(v35, v39);
    v42 = *(_BYTE *)(FirstBlockAddress + 15);
    if ( (v42 & 0x40) != 0 )
    {
      v43 = (unsigned __int8)(v41 & v42);
    }
    else
    {
      if ( v42 != 4 )
      {
        v44 = FirstBlockAddress;
        goto LABEL_85;
      }
      v43 = *(unsigned __int8 *)(FirstBlockAddress + 14);
    }
    v44 = FirstBlockAddress + 16 * v43;
LABEL_85:
    *(_QWORD *)a2 = v44 + 16;
    if ( (v41 & *(_BYTE *)(FirstBlockAddress + 15)) != 0 )
    {
      *(_WORD *)(a2 + 18) = 1;
      v45 = *(_BYTE *)(FirstBlockAddress + 15);
      if ( v45 == 5 )
      {
        v46 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v45 & 0x40) != 0 )
      {
        v46 = *(unsigned __int16 *)(16LL * (unsigned __int8)(v41 & v45) + FirstBlockAddress + 12);
      }
      else if ( (v41 & (unsigned __int8)v45) == v41 )
      {
        if ( v45 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v49 = *(_DWORD *)(FirstBlockAddress + 8);
            LOWORD(v64) = v49;
            if ( (v49 & *(_DWORD *)(a1 + 124)) != 0 )
              v64 = *(_DWORD *)(a1 + 136) ^ v49;
            v48 = v64;
          }
          else
          {
            v48 = *(_WORD *)(FirstBlockAddress + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(FirstBlockAddress + 8) ^ a1 ^ (FirstBlockAddress >> 4)) )
            v47 = 0LL;
          else
            v47 = *(_QWORD *)(FirstBlockAddress
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)a1 ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
          v48 = *(_WORD *)(v47 + 36);
        }
        v46 = *(_QWORD *)(16LL * v48 + FirstBlockAddress);
      }
      else
      {
        v46 = (unsigned __int8)(v41 & v45);
      }
      v25 = (*(_BYTE *)(a2 + 18) & 2) == 0;
      *(_BYTE *)(a2 + 16) = v46;
      if ( v25 )
        *(_QWORD *)(a2 + 36) = v46;
      v50 = *(_BYTE *)(FirstBlockAddress + 15);
      if ( v50 == 5 )
      {
        v51 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v50 & 0x40) != 0 )
      {
        v51 = *(unsigned __int16 *)(FirstBlockAddress + 16LL * (unsigned __int8)(v41 & v50) + 12);
      }
      else if ( (v41 & (unsigned __int8)v50) == v41 )
      {
        if ( v50 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v53 = *(_DWORD *)(FirstBlockAddress + 8);
            LOWORD(v65) = v53;
            if ( (v53 & *(_DWORD *)(a1 + 124)) != 0 )
              v65 = *(_DWORD *)(a1 + 136) ^ v53;
            v52 = v65;
          }
          else
          {
            v52 = *(_WORD *)(FirstBlockAddress + 8);
          }
        }
        else
        {
          if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(FirstBlockAddress + 8) ^ a1 ^ (FirstBlockAddress >> 4))) )
            v4 = *(_QWORD *)(FirstBlockAddress
                           - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)a1 ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
          v52 = *(_WORD *)(v4 + 36);
        }
        v51 = *(_QWORD *)(FirstBlockAddress + 16LL * v52);
      }
      else
      {
        v51 = (unsigned __int8)(v41 & v50);
      }
      v54 = 16LL * *(unsigned __int16 *)(v35 + 36) - v51;
    }
    else
    {
      *(_WORD *)(a2 + 18) = 0;
      *(_BYTE *)(a2 + 16) = 16;
      *(_QWORD *)(a2 + 36) = 16LL;
      v54 = 16LL * *(unsigned __int16 *)(v35 + 36) - 16;
    }
    *(_QWORD *)(a2 + 8) = v54;
    *(_BYTE *)(a2 + 17) = *(_BYTE *)(FirstBlockAddress + 14);
    goto LABEL_61;
  }
LABEL_124:
  if ( !RtlpIsLFHZoneAllocation(v7, v8, a3, a4) && v7 != *(_QWORD *)a2 )
  {
    v55 = *(_QWORD *)(v7 + 24);
    v56 = *(_BYTE *)(v8 + 10);
    v57 = *(_BYTE *)(v55 + 138);
    if ( ((v56 ^ (unsigned __int8)(v57 & (*(_DWORD *)(v55 + 124) >> 20))) & 1) == 0
      || ((v56 ^ (unsigned __int8)(v57 & (*(_DWORD *)(v55 + 124) >> 17))) & 8) == 0 )
    {
      return 0;
    }
  }
  *(_BYTE *)(a2 + 16) = 16;
  *(_WORD *)(a2 + 18) = 8193;
  *(_QWORD *)(a2 + 36) = 16LL;
  v58 = *(_QWORD *)(v7 + 24);
  if ( *(_DWORD *)(v58 + 124) )
  {
    v59 = *(_DWORD *)(v8 + 8);
    LOWORD(v66) = v59;
    if ( (v59 & *(_DWORD *)(v58 + 124)) != 0 )
      v66 = *(_DWORD *)(v58 + 136) ^ v59;
    v60 = v66;
  }
  else
  {
    v60 = *(_WORD *)(v8 + 8);
  }
  *(_QWORD *)(a2 + 8) = 16LL * v60 - 16;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v8 + 14);
  return 1;
}
