/*
 * XREFs of CmpConstructNameFromKeyNodes @ 0x1405D85E0
 * Callers:
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpCopyCompressedName @ 0x1405B0298 (CmpCopyCompressedName.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D6E8C (CmpSetKcbAtLayerHeight.c)
 *     CmpKeyFullNameLength @ 0x1405D8860 (CmpKeyFullNameLength.c)
 */

__int64 __fastcall CmpConstructNameFromKeyNodes(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int16 v5; // di
  unsigned int v6; // r12d
  struct _PRIVILEGE_SET *v7; // r13
  unsigned int v8; // eax
  __int64 v9; // rbp
  _WORD *v10; // rax
  _WORD *v11; // r15
  unsigned __int16 v12; // bp
  int *v13; // rax
  unsigned __int16 v14; // dx
  int v15; // ecx
  __int16 v16; // ax
  unsigned __int16 v17; // si
  unsigned __int16 v18; // bp
  __int64 i; // rdi
  const void *v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // r8
  _WORD *v24; // r9
  unsigned __int8 *v25; // rax
  __int64 v26; // rdx
  __int16 v27; // cx
  SIZE_T v29; // rsi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v31; // r10
  __int16 v32; // dx
  __int64 v33; // r10
  __int16 v34; // dx
  __int64 v35; // rdx
  _WORD *v36; // rcx
  _QWORD v37[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v38; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v39; // [rsp+88h] [rbp+10h]

  v39 = a2;
  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v3 = *(__int16 *)(a1 + 2);
  WORD1(v37[0]) = -1;
  LODWORD(v38) = -1;
  _mm_lfence();
  if ( (int)v3 >= 2 )
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v3 - 16);
  else
    v4 = *(_QWORD *)(a1 + 8 * v3 + 8);
  v5 = *(_WORD *)(v4 + 58);
  v6 = 0;
  v7 = 0LL;
  if ( v5 >= 2 && v5 != 1 )
  {
    v29 = 8LL * (unsigned int)(v5 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v29, 0x35364D43u);
    v7 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v7 = (struct _PRIVILEGE_SET *)v37[3];
      v6 = -1073741670;
      goto LABEL_27;
    }
    memset(TransientPoolWithTag, 0, v29);
  }
  WORD1(v37[0]) = -1;
  LOWORD(v37[0]) = v5;
  v37[3] = v7;
  v8 = CmpKeyFullNameLength(v4);
  v9 = v8;
  if ( v8 > 0xFFFF )
  {
    v6 = -1073741811;
  }
  else
  {
    v10 = CmpAllocateTransientPoolWithTag(PagedPool, v8 + 16LL, 0x624E4D43u);
    v11 = v10;
    if ( v10 )
    {
      memset(v10, 0, v9 + 16);
      *v11 = v9;
      v11[1] = v9;
      *((_QWORD *)v11 + 1) = v11 + 8;
      v12 = (unsigned __int16)v9 >> 1;
      do
      {
        if ( (*(_DWORD *)(v4 + 176) & 0x40000) != 0 && *(_QWORD *)(v4 + 64) )
        {
          v4 = *(_QWORD *)(v4 + 64);
        }
        else
        {
          v13 = *(int **)(v4 + 72);
          v14 = *((_WORD *)v13 + 12);
          v15 = *v13;
          v16 = *(_WORD *)(v4 + 58);
          v17 = v14 >> 1;
          WORD1(v37[0]) = v16;
          if ( (v15 & 1) != 0 )
            v17 = v14;
          v18 = v12 - v17;
          if ( v16 )
          {
            v31 = *(_QWORD *)(v4 + 184);
            v32 = v16;
            if ( v31 )
            {
              do
              {
                CmpSetKcbAtLayerHeight((__int64)v37, v32, *(_QWORD *)(v31 + 16));
                v31 = *(_QWORD *)(v33 + 24);
                v32 = v34 - 1;
              }
              while ( v31 );
              v16 = *(_WORD *)(v4 + 58);
              v7 = (struct _PRIVILEGE_SET *)v37[3];
            }
          }
          else
          {
            v37[1] = v4;
          }
          for ( i = 0LL; v16 >= 0; --v16 )
          {
            if ( v16 >= 2 )
              i = *((_QWORD *)v7 + v16 - 2);
            else
              i = v37[v16 + 1];
            if ( *(_QWORD *)(i + 192) )
              break;
            if ( *(_DWORD *)(i + 32) != -1 )
              break;
          }
          v20 = *(const void **)(i + 192);
          if ( (unsigned __int64)v20 >= 2 )
          {
            memmove((void *)(*((_QWORD *)v11 + 1) + 2LL * v18), v20, 2LL * v17);
          }
          else
          {
            v21 = 2LL * v18;
            if ( v20 == (const void *)1 )
            {
              v35 = *(_QWORD *)(i + 72);
              v36 = (_WORD *)(v21 + *((_QWORD *)v11 + 1));
              if ( (*(_DWORD *)v35 & 1) != 0 )
                CmpCopyCompressedName(v36, 2 * v17, (unsigned __int8 *)(v35 + 26), v17);
              else
                memmove(v36, (const void *)(v35 + 26), 2LL * v17);
            }
            else
            {
              v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(i + 24) + 8LL))(
                      *(_QWORD *)(i + 24),
                      *(unsigned int *)(i + 32),
                      &v38);
              v24 = (_WORD *)(v21 + *((_QWORD *)v11 + 1));
              if ( (*(_BYTE *)(v22 + 2) & 0x20) != 0 )
              {
                if ( v17 )
                {
                  v25 = (unsigned __int8 *)(v22 + 76);
                  v26 = v17;
                  do
                  {
                    v27 = *v25++;
                    *v24++ = v27;
                    --v26;
                  }
                  while ( v26 );
                }
              }
              else
              {
                memmove((void *)(v21 + *((_QWORD *)v11 + 1)), (const void *)(v22 + 76), 2LL * v17);
              }
              (*(void (__fastcall **)(_QWORD, __int64 *, __int64, _WORD *))(*(_QWORD *)(i + 24) + 16LL))(
                *(_QWORD *)(i + 24),
                &v38,
                v23,
                v24);
            }
          }
          v12 = v18 - 1;
          *(_WORD *)(*((_QWORD *)v11 + 1) + 2LL * v12) = 92;
          v4 = *(_QWORD *)(v4 + 64);
        }
      }
      while ( v4 );
      *v39 = v11;
    }
    else
    {
      v6 = -1073741670;
    }
  }
LABEL_27:
  if ( v7 )
    CmSiFreeMemory(v7);
  return v6;
}
