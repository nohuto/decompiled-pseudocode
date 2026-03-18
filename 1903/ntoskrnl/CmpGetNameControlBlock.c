/*
 * XREFs of CmpGetNameControlBlock @ 0x140654A50
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1406545D0 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     NLS_UPCASE @ 0x140092980 (NLS_UPCASE.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpHashUnicodeComponent @ 0x140632D10 (CmpHashUnicodeComponent.c)
 *     CmpUnlockNameHashEntry @ 0x140654C88 (CmpUnlockNameHashEntry.c)
 *     CmpLockNameHashEntryExclusive @ 0x140654D94 (CmpLockNameHashEntryExclusive.c)
 *     CmpCompareCompressedName @ 0x140657160 (CmpCompareCompressedName.c)
 */

char *__fastcall CmpGetNameControlBlock(__m128i *a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // r11d
  char v5; // r15
  unsigned __int16 v6; // bp
  unsigned __int16 *v7; // r9
  __int64 v8; // r10
  unsigned __int16 v9; // ax
  struct _LOOKASIDE_LIST_EX *v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rsi
  char *v13; // r14
  unsigned int v14; // esi
  unsigned int v15; // ebp
  char *TransientPoolWithTag; // rax
  int v17; // eax
  _BYTE *v18; // r9
  __int64 v19; // r10
  unsigned __int16 v20; // ax
  _QWORD *v21; // rcx
  int v22; // eax
  unsigned __int16 v24; // ax
  int v25; // ebp
  int v26; // r11d
  unsigned int v27; // r15d
  __int64 v28; // r10
  unsigned __int16 Alignment; // ax
  int v30; // ecx
  unsigned int v31; // esi
  __int64 v32; // r9
  unsigned __int16 v33; // ax
  unsigned __int16 v34; // [rsp+60h] [rbp+8h]
  char v35; // [rsp+70h] [rbp+18h]

  if ( a2 )
    v3 = *a2;
  else
    v3 = CmpHashUnicodeComponent(a1);
  v4 = a1->m128i_u16[0];
  v5 = 1;
  v35 = 1;
  v6 = (unsigned __int16)v4 >> 1;
  v34 = (unsigned __int16)v4 >> 1;
  if ( v4 >> 1 )
  {
    v7 = (unsigned __int16 *)a1->m128i_i64[1];
    v8 = v4 >> 1;
    do
    {
      v9 = *v7;
      if ( *v7 >= 0x61u )
      {
        if ( v9 > 0x7Au )
          v9 = NLS_UPCASE(v9);
        else
          v9 -= 32;
      }
      if ( v9 > 0xFFu )
      {
        v6 = v4;
        v5 = 0;
      }
      ++v7;
      --v8;
    }
    while ( v8 );
    v34 = v6;
    v35 = v5;
  }
  CmpLockNameHashEntryExclusive(v3);
  v11 = 0LL;
  v12 = *((_QWORD *)CmpNameCacheTable
        + 2
        * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027
                                                                                                * (v3 ^ (v3 >> 9))) >> 9)) & 0x7FF)
        + 1);
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = (char *)(v12 - 8);
      if ( v3 == *(_DWORD *)v12 )
      {
        v24 = *((_WORD *)v13 + 12);
        if ( v6 == v24 )
        {
          v25 = *(_DWORD *)v13;
          if ( (*(_DWORD *)v13 & 1) != 0 )
          {
            if ( !(unsigned int)CmpCompareCompressedName(a1, v13 + 26, v34, 2LL) )
              goto LABEL_31;
          }
          else
          {
            v10 = (struct _LOOKASIDE_LIST_EX *)a1->m128i_i64[1];
            v26 = 0;
            v27 = v24 >> 1;
            if ( !v27 )
            {
LABEL_31:
              if ( (v25 & 0xFFFFFFFE) == 0xFFFFFFFE )
                v13 = 0LL;
              else
                *(_DWORD *)v13 = v25 + 2;
              goto LABEL_21;
            }
            v28 = v13 + 26 - (char *)v10;
            while ( 1 )
            {
              Alignment = v10->L.ListHead.Alignment;
              if ( LOWORD(v10->L.ListHead.Alignment) >= 0x61u )
                v30 = Alignment <= 0x7Au ? Alignment - 32 : NLS_UPCASE(Alignment);
              else
                v30 = Alignment;
              if ( v30 != *(unsigned __int16 *)((char *)&v10->L.ListHead.Alignment + v28) )
                break;
              v10 = (struct _LOOKASIDE_LIST_EX *)((char *)v10 + 2);
              if ( ++v26 >= v27 )
                goto LABEL_31;
            }
          }
          v6 = v34;
        }
      }
      v12 = *(_QWORD *)(v12 + 8);
      if ( !v12 )
      {
        v5 = v35;
        break;
      }
    }
  }
  v14 = v6;
  v15 = v6 + 26;
  TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, v15, 0x624E4D43u, v10);
  v13 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, v15);
    v17 = *(_DWORD *)v13;
    if ( v5 )
    {
      *(_DWORD *)v13 = v17 | 1;
      if ( v14 )
      {
        v18 = v13 + 26;
        v19 = v14;
        do
        {
          v20 = *(_WORD *)(v11 + a1->m128i_i64[1]);
          if ( v20 >= 0x61u )
          {
            if ( v20 > 0x7Au )
              LOBYTE(v20) = NLS_UPCASE(v20);
            else
              LOBYTE(v20) = v20 - 32;
          }
          *v18 = v20;
          v11 += 2LL;
          ++v18;
          --v19;
        }
        while ( v19 );
      }
    }
    else
    {
      v31 = v14 >> 1;
      *(_DWORD *)v13 = v17 & 0xFFFFFFFE;
      if ( v31 )
      {
        v32 = v31;
        do
        {
          v33 = *(_WORD *)(v11 + a1->m128i_i64[1]);
          if ( v33 >= 0x61u )
          {
            if ( v33 <= 0x7Au )
              v33 -= 32;
            else
              v33 = NLS_UPCASE(v33);
          }
          *(_WORD *)&v13[v11 + 26] = v33;
          v11 += 2LL;
          --v32;
        }
        while ( v32 );
      }
    }
    v21 = CmpNameCacheTable;
    v22 = *(_DWORD *)v13 & 1 | 2;
    *((_DWORD *)v13 + 2) = v3;
    *(_DWORD *)v13 = v22;
    *((_WORD *)v13 + 12) = v34;
    *((_QWORD *)v13 + 2) = v21[2
                             * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v3 ^ (v3 >> 9))) >> 9)) & 0x7FF)
                             + 1];
    v21[2
      * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v3 ^ (v3 >> 9))) >> 9)) & 0x7FF)
      + 1] = v13 + 8;
LABEL_21:
    CmpUnlockNameHashEntry(v3);
    return v13;
  }
  else
  {
    CmpUnlockNameHashEntry(v3);
    return 0LL;
  }
}
