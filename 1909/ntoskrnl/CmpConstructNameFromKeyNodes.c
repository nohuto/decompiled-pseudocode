/*
 * XREFs of CmpConstructNameFromKeyNodes @ 0x1406689D0
 * Callers:
 *     CmpConstructNameWithStatus @ 0x140668850 (CmpConstructNameWithStatus.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008D0A0 (CmpAllocateTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpCopyCompressedName @ 0x140660810 (CmpCopyCompressedName.c)
 *     CmpKeyFullNameLength @ 0x140668C50 (CmpKeyFullNameLength.c)
 *     CmpSetKcbAtLayerHeight @ 0x140832E78 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpConstructNameFromKeyNodes(__int64 a1, _QWORD *a2)
{
  struct _LOOKASIDE_LIST_EX *v3; // r9
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rbx
  __int16 v7; // di
  struct _PRIVILEGE_SET *v8; // r13
  unsigned int v9; // eax
  struct _LOOKASIDE_LIST_EX *v10; // r9
  __int64 v11; // rbp
  _WORD *v12; // rax
  _WORD *v13; // r15
  unsigned __int16 v14; // bp
  int *v15; // rax
  unsigned __int16 v16; // dx
  int v17; // ecx
  __int16 v18; // ax
  unsigned __int16 v19; // si
  unsigned __int16 v20; // bp
  __int64 i; // rdi
  const void *v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r8
  _WORD *v26; // r9
  unsigned __int8 *v27; // rax
  __int64 v28; // rdx
  __int16 v29; // cx
  SIZE_T v31; // rsi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v33; // r10
  __int64 v34; // rdx
  __int64 v35; // r10
  _DWORD *v36; // rdx
  void *v37; // rcx
  _QWORD v38[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v39; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v40; // [rsp+88h] [rbp+10h]

  v40 = a2;
  memset(v38, 0, sizeof(v38));
  v4 = 0;
  WORD1(v38[0]) = -1;
  v39 = 0LL;
  v5 = *(__int16 *)(a1 + 2);
  LODWORD(v39) = -1;
  _mm_lfence();
  if ( (int)v5 >= 2 )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v5 - 16);
  else
    v6 = *(_QWORD *)(a1 + 8 * v5 + 8);
  v7 = *(_WORD *)(v6 + 66);
  v8 = 0LL;
  if ( v7 >= 2 && v7 != 1 )
  {
    v31 = 8LL * (unsigned int)(v7 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v31, 0x35364D43u, v3);
    v8 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v8 = (struct _PRIVILEGE_SET *)v38[3];
      v4 = -1073741670;
      goto LABEL_27;
    }
    memset(TransientPoolWithTag, 0, v31);
  }
  LOWORD(v38[0]) = v7;
  v38[3] = v8;
  v9 = CmpKeyFullNameLength(v6);
  v11 = v9;
  if ( v9 > 0xFFFF )
  {
    v4 = -1073741811;
  }
  else
  {
    v12 = CmpAllocateTransientPoolWithTag(PagedPool, v9 + 16LL, 0x624E4D43u, v10);
    v13 = v12;
    if ( v12 )
    {
      memset(v12, 0, v11 + 16);
      *v13 = v11;
      v13[1] = v11;
      *((_QWORD *)v13 + 1) = v13 + 8;
      v14 = (unsigned __int16)v11 >> 1;
      do
      {
        if ( (*(_DWORD *)(v6 + 184) & 0x40000) != 0 && *(_QWORD *)(v6 + 72) )
        {
          v6 = *(_QWORD *)(v6 + 72);
        }
        else
        {
          v15 = *(int **)(v6 + 80);
          v16 = *((_WORD *)v15 + 12);
          v17 = *v15;
          v18 = *(_WORD *)(v6 + 66);
          v19 = v16 >> 1;
          WORD1(v38[0]) = v18;
          if ( (v17 & 1) != 0 )
            v19 = v16;
          v20 = v14 - v19;
          if ( v18 )
          {
            v33 = *(_QWORD *)(v6 + 192);
            v34 = (unsigned __int16)v18;
            if ( v33 )
            {
              do
              {
                CmpSetKcbAtLayerHeight(v38, v34, *(_QWORD *)(v33 + 16));
                v33 = *(_QWORD *)(v35 + 24);
                LOWORD(v34) = v34 - 1;
              }
              while ( v33 );
              v18 = *(_WORD *)(v6 + 66);
              v8 = (struct _PRIVILEGE_SET *)v38[3];
            }
          }
          else
          {
            v38[1] = v6;
          }
          for ( i = 0LL; v18 >= 0; --v18 )
          {
            if ( v18 >= 2 )
              i = *((_QWORD *)v8 + v18 - 2);
            else
              i = v38[v18 + 1];
            if ( *(_QWORD *)(i + 200) )
              break;
            if ( *(_DWORD *)(i + 40) != -1 )
              break;
          }
          v22 = *(const void **)(i + 200);
          if ( (unsigned __int64)v22 >= 2 )
          {
            memmove((void *)(*((_QWORD *)v13 + 1) + 2LL * v20), v22, 2LL * v19);
          }
          else
          {
            v23 = 2LL * v20;
            if ( v22 == (const void *)1 )
            {
              v36 = *(_DWORD **)(i + 80);
              v37 = (void *)(v23 + *((_QWORD *)v13 + 1));
              if ( (*v36 & 1) != 0 )
                CmpCopyCompressedName((unsigned __int64)v37, 2 * v19, (unsigned __int64)v36 + 26, v19);
              else
                memmove(v37, (char *)v36 + 26, 2LL * v19);
            }
            else
            {
              v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(i + 32) + 8LL))(
                      *(_QWORD *)(i + 32),
                      *(unsigned int *)(i + 40),
                      &v39);
              v26 = (_WORD *)(v23 + *((_QWORD *)v13 + 1));
              if ( (*(_BYTE *)(v24 + 2) & 0x20) != 0 )
              {
                if ( v19 )
                {
                  v27 = (unsigned __int8 *)(v24 + 76);
                  v28 = v19;
                  do
                  {
                    v29 = *v27++;
                    *v26++ = v29;
                    --v28;
                  }
                  while ( v28 );
                }
              }
              else
              {
                memmove((void *)(v23 + *((_QWORD *)v13 + 1)), (const void *)(v24 + 76), 2LL * v19);
              }
              (*(void (__fastcall **)(_QWORD, __int64 *, __int64, _WORD *))(*(_QWORD *)(i + 32) + 16LL))(
                *(_QWORD *)(i + 32),
                &v39,
                v25,
                v26);
            }
          }
          v14 = v20 - 1;
          *(_WORD *)(*((_QWORD *)v13 + 1) + 2LL * v14) = 92;
          v6 = *(_QWORD *)(v6 + 72);
        }
      }
      while ( v6 );
      *v40 = v13;
    }
    else
    {
      v4 = -1073741670;
    }
  }
LABEL_27:
  if ( v8 )
    CmSiFreeMemory(v8);
  return v4;
}
