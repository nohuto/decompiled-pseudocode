/*
 * XREFs of RtlpWalkLFHBlock @ 0x18010A858
 * Callers:
 *     RtlpWalkHeap @ 0x1800F41F0 (RtlpWalkHeap.c)
 * Callees:
 *     RtlpGetFirstBlockAddress @ 0x18010A2D8 (RtlpGetFirstBlockAddress.c)
 *     RtlpGetReservedBlockSize @ 0x18010A39C (RtlpGetReservedBlockSize.c)
 *     RtlpIsLFHZoneAllocation @ 0x18010A4A4 (RtlpIsLFHZoneAllocation.c)
 */

char __fastcall RtlpWalkLFHBlock(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _RTL_SRWLOCK *v5; // r14
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int16 ReservedBlockSize; // ax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r8
  char v15; // al
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  char v18; // cl
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  int v22; // eax
  bool v23; // zf
  char v24; // cl
  unsigned __int64 v25; // rcx
  unsigned __int16 v26; // ax
  int v27; // eax
  __int64 v28; // rax
  unsigned __int64 Value; // rcx
  int v30; // eax
  unsigned __int16 v31; // ax
  unsigned __int64 *v32; // rax
  __int64 v33; // r13
  char v34; // al
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 FirstBlockAddress; // rdx
  unsigned __int8 v39; // r11
  char v40; // al
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  char v43; // cl
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int16 v46; // ax
  int v47; // eax
  char v48; // cl
  unsigned __int64 v49; // rcx
  unsigned __int16 v50; // ax
  int v51; // eax
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int8 v54; // r8
  char v55; // dl
  unsigned __int64 v56; // rcx
  int v57; // eax
  unsigned __int16 v58; // ax
  int v59; // [rsp+28h] [rbp-20h]
  int v60; // [rsp+28h] [rbp-20h]
  int v61; // [rsp+28h] [rbp-20h]
  int v62; // [rsp+28h] [rbp-20h]
  int v63; // [rsp+28h] [rbp-20h]
  int v64; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  if ( *(_BYTE *)(a1 + 418) == 2 )
    v5 = *(_RTL_SRWLOCK **)(a1 + 408);
  else
    v5 = 0LL;
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)a2;
  if ( *(_WORD *)(a2 + 18) )
  {
    v6 -= 16LL;
    _m_prefetchw((const void *)v6);
    if ( *(_BYTE *)(v6 + 15) != 5 )
      goto LABEL_10;
    v7 = 16LL * *(unsigned __int8 *)(v6 + 14);
  }
  else
  {
    v7 = *(unsigned __int8 *)(a2 + 16);
  }
  v6 -= v7;
LABEL_10:
  if ( *(char *)(v6 + 15) < 0 )
  {
    if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v6 + 8) ^ (v6 >> 4)) )
      return 0;
    v8 = (unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)(v6 >> 4)) >> 12;
    v9 = *(_QWORD *)(v6 - v8);
    if ( !v9 )
      return 0;
    RtlpGetReservedBlockSize(*(_QWORD *)(v6 - v8));
    RtlpGetFirstBlockAddress(v10, *(_QWORD *)(v9 + 8));
    ReservedBlockSize = RtlpGetReservedBlockSize(v9);
    if ( (v13 >> 4) / ReservedBlockSize >= *(unsigned __int16 *)(v9 + 40) )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v9 + 8);
      *(_WORD *)(a2 + 18) = 8193;
      return 0;
    }
    v15 = *(_BYTE *)(v12 + 15);
    if ( (v15 & 0x3F) == 0 )
    {
      *(_WORD *)(a2 + 18) = 0;
      *(_QWORD *)a2 = v12 + 16;
      *(_BYTE *)(a2 + 16) = 16;
      *(_QWORD *)(a2 + 36) = 16LL;
      v28 = 16LL * *(unsigned __int16 *)(v9 + 36) - 16;
LABEL_60:
      *(_QWORD *)(a2 + 8) = v28;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v12 + 14);
LABEL_61:
      *(_WORD *)(a2 + 18) |= 0x8000u;
      return 1;
    }
    if ( (v15 & 0x40) != 0 )
    {
      v16 = v15 & 0x3F;
    }
    else
    {
      if ( v15 != 4 )
      {
        v17 = v12;
        goto LABEL_23;
      }
      v16 = *(unsigned __int8 *)(v12 + 14);
    }
    v17 = v12 + 16 * v16;
LABEL_23:
    *(_WORD *)(a2 + 18) = 1;
    *(_QWORD *)a2 = v17 + 16;
    v18 = *(_BYTE *)(v12 + 15);
    if ( v18 == 5 )
    {
      v19 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v18 & 0x40) != 0 )
    {
      v19 = *(unsigned __int16 *)(16LL * (v18 & 0x3F) + v12 + 12);
    }
    else if ( (v18 & 0x3F) == 0x3F )
    {
      if ( v18 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v22 = *(_DWORD *)(v12 + 8);
          LOWORD(v59) = v22;
          if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
            v59 = *(_DWORD *)(a1 + 136) ^ v22;
          v21 = v59;
        }
        else
        {
          v21 = *(_WORD *)(v12 + 8);
        }
      }
      else
      {
        if ( *(_WORD *)(v12 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (v12 >> 4)) )
          v20 = 0LL;
        else
          v20 = *(_QWORD *)(v12
                          - ((unsigned __int64)(*(_DWORD *)(v12 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(v12 >> 4)) >> 12));
        v21 = *(_WORD *)(v20 + 36);
      }
      v19 = *(_QWORD *)(16LL * v21 + v12);
    }
    else
    {
      v19 = v18 & 0x3F;
    }
    v23 = (*(_BYTE *)(a2 + 18) & 2) == 0;
    *(_BYTE *)(a2 + 16) = v19;
    if ( v23 )
      *(_QWORD *)(a2 + 36) = v19;
    v24 = *(_BYTE *)(v12 + 15);
    if ( v24 == 5 )
    {
      v25 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v24 & 0x40) != 0 )
    {
      v25 = *(unsigned __int16 *)(v12 + 16LL * (v24 & 0x3F) + 12);
    }
    else if ( (v24 & 0x3F) == 0x3F )
    {
      if ( v24 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v27 = *(_DWORD *)(v12 + 8);
          LOWORD(v60) = v27;
          if ( (v27 & *(_DWORD *)(a1 + 124)) != 0 )
            v60 = *(_DWORD *)(a1 + 136) ^ v27;
          v26 = v60;
        }
        else
        {
          v26 = *(_WORD *)(v12 + 8);
        }
      }
      else
      {
        if ( !(*(_WORD *)(v12 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (v12 >> 4))) )
          v2 = *(_QWORD *)(v12
                         - ((unsigned __int64)(*(_DWORD *)(v12 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(v12 >> 4)) >> 12));
        v26 = *(_WORD *)(v2 + 36);
      }
      v25 = *(_QWORD *)(v12 + 16LL * v26);
    }
    else
    {
      v25 = v24 & 0x3F;
    }
    v28 = 16LL * *(unsigned __int16 *)(v9 + 36) - v25;
    goto LABEL_60;
  }
  Value = v5[3].Value;
  if ( ((*(_BYTE *)(v6 + 10) ^ (unsigned __int8)(*(_BYTE *)(Value + 138) & (*(_DWORD *)(Value + 124) >> 20))) & 1) == 0 )
    goto LABEL_124;
  if ( *(_DWORD *)(Value + 124) )
  {
    v30 = *(_DWORD *)(v6 + 8);
    LOWORD(v61) = v30;
    if ( (v30 & *(_DWORD *)(Value + 124)) != 0 )
      v61 = *(_DWORD *)(Value + 136) ^ v30;
    v31 = v61;
  }
  else
  {
    v31 = *(_WORD *)(v6 + 8);
  }
  if ( v31 <= 4u )
    goto LABEL_124;
  v32 = *(unsigned __int64 **)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 20LL) != -253701952 )
    goto LABEL_124;
  v33 = *v32;
  if ( !RtlpIsLFHZoneAllocation(v5, *v32) )
    goto LABEL_124;
  v34 = *(_BYTE *)(v6 + 15);
  if ( (v34 & 0x40) != 0 )
  {
    v35 = v34 & 0x3F;
LABEL_74:
    v36 = v6 + 16 * v35;
    goto LABEL_78;
  }
  if ( v34 == 4 )
  {
    v35 = *(unsigned __int8 *)(v6 + 14);
    goto LABEL_74;
  }
  v36 = v6;
LABEL_78:
  v37 = *(_QWORD *)(v33 + 8);
  if ( v37 == v36 + 16 )
  {
    FirstBlockAddress = RtlpGetFirstBlockAddress(v33, v37);
    v40 = *(_BYTE *)(FirstBlockAddress + 15);
    if ( (v40 & 0x40) != 0 )
    {
      v41 = (unsigned __int8)(v39 & v40);
    }
    else
    {
      if ( v40 != 4 )
      {
        v42 = FirstBlockAddress;
        goto LABEL_85;
      }
      v41 = *(unsigned __int8 *)(FirstBlockAddress + 14);
    }
    v42 = FirstBlockAddress + 16 * v41;
LABEL_85:
    *(_QWORD *)a2 = v42 + 16;
    if ( (v39 & *(_BYTE *)(FirstBlockAddress + 15)) != 0 )
    {
      *(_WORD *)(a2 + 18) = 1;
      v43 = *(_BYTE *)(FirstBlockAddress + 15);
      if ( v43 == 5 )
      {
        v44 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v43 & 0x40) != 0 )
      {
        v44 = *(unsigned __int16 *)(16LL * (unsigned __int8)(v39 & v43) + FirstBlockAddress + 12);
      }
      else if ( (v39 & (unsigned __int8)v43) == v39 )
      {
        if ( v43 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v47 = *(_DWORD *)(FirstBlockAddress + 8);
            LOWORD(v62) = v47;
            if ( (v47 & *(_DWORD *)(a1 + 124)) != 0 )
              v62 = *(_DWORD *)(a1 + 136) ^ v47;
            v46 = v62;
          }
          else
          {
            v46 = *(_WORD *)(FirstBlockAddress + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(FirstBlockAddress + 8) ^ a1 ^ (FirstBlockAddress >> 4)) )
            v45 = 0LL;
          else
            v45 = *(_QWORD *)(FirstBlockAddress
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)a1 ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
          v46 = *(_WORD *)(v45 + 36);
        }
        v44 = *(_QWORD *)(16LL * v46 + FirstBlockAddress);
      }
      else
      {
        v44 = (unsigned __int8)(v39 & v43);
      }
      v23 = (*(_BYTE *)(a2 + 18) & 2) == 0;
      *(_BYTE *)(a2 + 16) = v44;
      if ( v23 )
        *(_QWORD *)(a2 + 36) = v44;
      v48 = *(_BYTE *)(FirstBlockAddress + 15);
      if ( v48 == 5 )
      {
        v49 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v48 & 0x40) != 0 )
      {
        v49 = *(unsigned __int16 *)(FirstBlockAddress + 16LL * (unsigned __int8)(v39 & v48) + 12);
      }
      else if ( (v39 & (unsigned __int8)v48) == v39 )
      {
        if ( v48 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v51 = *(_DWORD *)(FirstBlockAddress + 8);
            LOWORD(v63) = v51;
            if ( (v51 & *(_DWORD *)(a1 + 124)) != 0 )
              v63 = *(_DWORD *)(a1 + 136) ^ v51;
            v50 = v63;
          }
          else
          {
            v50 = *(_WORD *)(FirstBlockAddress + 8);
          }
        }
        else
        {
          if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(FirstBlockAddress + 8) ^ a1 ^ (FirstBlockAddress >> 4))) )
            v2 = *(_QWORD *)(FirstBlockAddress
                           - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)a1 ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
          v50 = *(_WORD *)(v2 + 36);
        }
        v49 = *(_QWORD *)(FirstBlockAddress + 16LL * v50);
      }
      else
      {
        v49 = (unsigned __int8)(v39 & v48);
      }
      v52 = 16LL * *(unsigned __int16 *)(v33 + 36) - v49;
    }
    else
    {
      *(_WORD *)(a2 + 18) = 0;
      *(_BYTE *)(a2 + 16) = 16;
      *(_QWORD *)(a2 + 36) = 16LL;
      v52 = 16LL * *(unsigned __int16 *)(v33 + 36) - 16;
    }
    *(_QWORD *)(a2 + 8) = v52;
    *(_BYTE *)(a2 + 17) = *(_BYTE *)(FirstBlockAddress + 14);
    goto LABEL_61;
  }
LABEL_124:
  if ( !RtlpIsLFHZoneAllocation(v5, v6) && v5 != *(_RTL_SRWLOCK **)a2 )
  {
    v53 = v5[3].Value;
    v54 = *(_BYTE *)(v6 + 10);
    v55 = *(_BYTE *)(v53 + 138);
    if ( ((v54 ^ (unsigned __int8)(v55 & (*(_DWORD *)(v53 + 124) >> 20))) & 1) == 0
      || ((v54 ^ (unsigned __int8)(v55 & (*(_DWORD *)(v53 + 124) >> 17))) & 8) == 0 )
    {
      return 0;
    }
  }
  *(_BYTE *)(a2 + 16) = 16;
  *(_WORD *)(a2 + 18) = 8193;
  *(_QWORD *)(a2 + 36) = 16LL;
  v56 = v5[3].Value;
  if ( *(_DWORD *)(v56 + 124) )
  {
    v57 = *(_DWORD *)(v6 + 8);
    LOWORD(v64) = v57;
    if ( (v57 & *(_DWORD *)(v56 + 124)) != 0 )
      v64 = *(_DWORD *)(v56 + 136) ^ v57;
    v58 = v64;
  }
  else
  {
    v58 = *(_WORD *)(v6 + 8);
  }
  *(_QWORD *)(a2 + 8) = 16LL * v58 - 16;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v6 + 14);
  return 1;
}
