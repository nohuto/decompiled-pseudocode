/*
 * XREFs of CmpGetNameControlBlock @ 0x1405D7490
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpHashUnicodeComponent @ 0x1405B02C4 (CmpHashUnicodeComponent.c)
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareCompressedName @ 0x1405D6D90 (CmpCompareCompressedName.c)
 *     CmpLockNameHashEntryExclusive @ 0x1405D76DC (CmpLockNameHashEntryExclusive.c)
 *     CmpUnlockNameHashEntry @ 0x1405D771C (CmpUnlockNameHashEntry.c)
 */

char *__fastcall CmpGetNameControlBlock(__m128i *a1, unsigned int *a2)
{
  __m128i *v2; // r13
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  char v5; // r12
  WCHAR *v6; // rdi
  __int64 v7; // rsi
  WCHAR v8; // ax
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rdi
  char *v12; // r14
  __int64 v13; // rbp
  char *TransientPoolWithTag; // rax
  int v15; // eax
  _BYTE *v16; // rdi
  WCHAR v17; // ax
  char *v18; // rcx
  int v19; // eax
  unsigned __int16 v21; // ax
  int v22; // ebp
  WCHAR *v23; // r12
  int v24; // r13d
  unsigned int v25; // edx
  __int64 v26; // r15
  WCHAR v27; // ax
  int v28; // ecx
  WCHAR v29; // ax
  unsigned int v30; // ebp
  __int64 v31; // rdi
  WCHAR v32; // ax
  __int64 v33; // [rsp+20h] [rbp-58h]
  unsigned __int16 v35; // [rsp+88h] [rbp+10h]
  char v36; // [rsp+90h] [rbp+18h]
  unsigned int v37; // [rsp+98h] [rbp+20h]

  v2 = a1;
  if ( a2 )
    v3 = *a2;
  else
    v3 = CmpHashUnicodeComponent(a1);
  v4 = v2->m128i_u16[0];
  v5 = 1;
  v36 = 1;
  v35 = (unsigned __int16)v2->m128i_i16[0] >> 1;
  if ( v4 >> 1 )
  {
    v6 = (WCHAR *)v2->m128i_i64[1];
    v7 = v4 >> 1;
    do
    {
      v8 = *v6;
      if ( *v6 >= 0x61u )
      {
        if ( v8 > 0x7Au )
          v8 = RtlUpcaseUnicodeChar(v8);
        else
          v8 -= 32;
      }
      if ( v8 > 0xFFu )
      {
        v35 = v4;
        v5 = 0;
      }
      ++v6;
      --v7;
    }
    while ( v7 );
    v36 = v5;
  }
  CmpLockNameHashEntryExclusive(v3);
  v9 = 0LL;
  v10 = 16LL
      * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v3 ^ (v3 >> 9))) >> 9)) & 0x7FF);
  v33 = v10;
  v11 = *(_QWORD *)((char *)CmpNameCacheTable + v10 + 8);
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = (char *)(v11 - 8);
      if ( v3 == *(_DWORD *)v11 )
      {
        v21 = *((_WORD *)v12 + 12);
        if ( v35 == v21 )
        {
          v22 = *(_DWORD *)v12;
          if ( (*(_DWORD *)v12 & 1) != 0 )
          {
            if ( !(unsigned int)CmpCompareCompressedName((__int64)v2, (unsigned __int8 *)v12 + 26, v35, 2) )
              goto LABEL_29;
          }
          else
          {
            v23 = (WCHAR *)v2->m128i_i64[1];
            v24 = 0;
            v25 = v21 >> 1;
            v37 = v25;
            if ( !v25 )
            {
LABEL_29:
              if ( (v22 & 0xFFFFFFFE) == 0xFFFFFFFE )
                v12 = 0LL;
              else
                *(_DWORD *)v12 = v22 + 2;
              goto LABEL_21;
            }
            v26 = v12 + 26 - (char *)v23;
            while ( 1 )
            {
              v27 = *v23;
              if ( *v23 >= 0x61u )
              {
                if ( v27 <= 0x7Au )
                {
                  v28 = v27 - 32;
                }
                else
                {
                  v29 = RtlUpcaseUnicodeChar(v27);
                  v25 = v37;
                  v28 = v29;
                }
              }
              else
              {
                v28 = v27;
              }
              if ( v28 != *(WCHAR *)((char *)v23 + v26) )
                break;
              ++v23;
              if ( ++v24 >= v25 )
                goto LABEL_29;
            }
            v2 = a1;
          }
        }
      }
      v11 = *(_QWORD *)(v11 + 8);
      if ( !v11 )
      {
        v10 = v33;
        v5 = v36;
        break;
      }
    }
  }
  v13 = v35;
  TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, (unsigned int)v35 + 26, 0x624E4D43u);
  v12 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, (unsigned int)v35 + 26);
    v15 = *(_DWORD *)v12;
    if ( v5 )
    {
      *(_DWORD *)v12 = v15 | 1;
      if ( v35 )
      {
        v16 = v12 + 26;
        do
        {
          v17 = *(_WORD *)(v9 + v2->m128i_i64[1]);
          if ( v17 >= 0x61u )
          {
            if ( v17 > 0x7Au )
              LOBYTE(v17) = RtlUpcaseUnicodeChar(v17);
            else
              LOBYTE(v17) = v17 - 32;
          }
          *v16 = v17;
          v9 += 2LL;
          ++v16;
          --v13;
        }
        while ( v13 );
      }
    }
    else
    {
      v30 = v35 >> 1;
      *(_DWORD *)v12 = v15 & 0xFFFFFFFE;
      if ( v30 )
      {
        v31 = v30;
        do
        {
          v32 = *(_WORD *)(v9 + v2->m128i_i64[1]);
          if ( v32 >= 0x61u )
          {
            if ( v32 <= 0x7Au )
              v32 -= 32;
            else
              v32 = RtlUpcaseUnicodeChar(v32);
          }
          *(_WORD *)&v12[v9 + 26] = v32;
          v9 += 2LL;
          --v31;
        }
        while ( v31 );
      }
    }
    v18 = (char *)CmpNameCacheTable;
    v19 = *(_DWORD *)v12 & 1 | 2;
    *((_DWORD *)v12 + 2) = v3;
    *(_DWORD *)v12 = v19;
    *((_WORD *)v12 + 12) = v35;
    *((_QWORD *)v12 + 2) = *(_QWORD *)&v18[v10 + 8];
    *(_QWORD *)&v18[v10 + 8] = v12 + 8;
LABEL_21:
    CmpUnlockNameHashEntry(v3);
    return v12;
  }
  else
  {
    CmpUnlockNameHashEntry(v3);
    return 0LL;
  }
}
