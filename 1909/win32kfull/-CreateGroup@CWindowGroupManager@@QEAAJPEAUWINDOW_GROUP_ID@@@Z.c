/*
 * XREFs of ?CreateGroup@CWindowGroupManager@@QEAAJPEAUWINDOW_GROUP_ID@@@Z @ 0x1C023D208
 * Callers:
 *     NtUserCreateWindowGroup @ 0x1C022A1E0 (NtUserCreateWindowGroup.c)
 * Callees:
 *     _anonymous_namespace_::HashTableAllocator @ 0x1C023D6F0 (_anonymous_namespace_--HashTableAllocator.c)
 *     _anonymous_namespace_::HashTableDeallocator @ 0x1C023D710 (_anonymous_namespace_--HashTableDeallocator.c)
 */

__int64 __fastcall CWindowGroupManager::CreateGroup(CWindowGroupManager *this, struct WINDOW_GROUP_ID *a2)
{
  struct CWindowGroupManager *v2; // r15
  unsigned int v3; // edi
  struct WINDOW_GROUP_ID *v4; // r14
  unsigned int v5; // r13d
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  char *v8; // r8
  char v9; // cl
  unsigned __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // r14
  _QWORD *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v24; // [rsp+60h] [rbp+40h]
  __int64 v25; // [rsp+60h] [rbp+40h]

  v2 = `anonymous namespace'::g_windowGroupManager;
  v3 = 0;
  v4 = a2;
  v5 = -1073741801;
  v6 = (unsigned __int64)`anonymous namespace'::g_windowGroupManager + 16;
  v7 = (unsigned int)(2 * (*((_DWORD *)`anonymous namespace'::g_windowGroupManager + 5) >> 5));
  if ( *((_DWORD *)`anonymous namespace'::g_windowGroupManager + 4) >= (unsigned int)v7 )
  {
    if ( (unsigned int)v7 < 4 )
      v7 = 4LL;
    v8 = (char *)anonymous_namespace_::HashTableAllocator(8LL * (unsigned int)v7, 0LL);
    if ( v8 )
    {
      if ( (((_DWORD)v7 - 1) & (unsigned int)v7) != 0 )
      {
        v9 = -1;
        do
        {
          ++v9;
          LODWORD(v7) = (unsigned int)v7 >> 1;
        }
        while ( (_DWORD)v7 );
        v7 = (unsigned int)(1 << v9);
      }
      if ( (unsigned int)v7 > 0x4000000 )
        v7 = 0x4000000LL;
      v10 = (unsigned int)v7;
      if ( v8 > &v8[8 * v7] )
        v10 = 0LL;
      if ( v10 )
      {
        memset64(v8, v6 | 1, v10);
        v3 = 0;
      }
      v11 = -1LL << (*(_BYTE *)(v6 + 4) & 0x1F);
      if ( (*(_DWORD *)(v6 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v12 = *(_QWORD *)(v6 + 8);
          while ( 1 )
          {
            v13 = *(_QWORD **)(v12 + 8LL * v3);
            if ( ((unsigned __int8)v13 & 1) != 0 )
              break;
            *(_QWORD *)(v12 + 8LL * v3) = *v13;
            v24 = v11 & v13[1];
            v14 = (37
                 * (BYTE6(v24)
                  + 37
                  * (BYTE5(v24)
                   + 37
                   * (BYTE4(v24)
                    + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
                 + HIBYTE(v24)) & (unsigned int)(v7 - 1);
            *v13 = *(_QWORD *)&v8[8 * v14];
            *(_QWORD *)&v8[8 * v14] = v13;
          }
          ++v3;
        }
        while ( v3 < *(_DWORD *)(v6 + 4) >> 5 );
        v4 = a2;
      }
      v15 = *(_QWORD *)(v6 + 8);
      v16 = (32 * v7) | *(_DWORD *)(v6 + 4) & 0x1F;
      *(_QWORD *)(v6 + 8) = v8;
      *(_DWORD *)(v6 + 4) = v16;
      if ( v15 )
        anonymous_namespace_::HashTableDeallocator(v15, 0LL);
    }
    else if ( *(_DWORD *)(v6 + 4) < 0x20u )
    {
      return v5;
    }
  }
  v17 = *((unsigned int *)v2 + 2);
  v18 = Win32AllocPool(56LL, 1836541781LL);
  if ( v18 )
  {
    *(_QWORD *)v18 = 0LL;
    *(_QWORD *)(v18 + 8) = 0LL;
    *(_DWORD *)(v18 + 20) = 0;
    *(_DWORD *)(v18 + 16) = v17;
    *(_QWORD *)(v18 + 24) = 0LL;
    *(_QWORD *)(v18 + 32) = 0LL;
    *(_QWORD *)(v18 + 40) = 0LL;
    *(_QWORD *)(v18 + 48) = 0LL;
    *(_DWORD *)(v18 + 24) = 0;
    *(_QWORD *)(v18 + 32) = 0LL;
    *(_DWORD *)(v18 + 28) = 0;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v18 )
  {
    v19 = v17;
    v5 = 0;
    *(_QWORD *)(v18 + 8) = v17;
    v20 = *(_DWORD *)(v6 + 4);
    v25 = v19 & (-1LL << (v20 & 0x1F));
    v21 = *(_QWORD *)(v6 + 8);
    v22 = (37
         * (BYTE6(v25)
          + 37
          * (BYTE5(v25)
           + 37
           * (BYTE4(v25)
            + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
         + HIBYTE(v25)) & ((v20 >> 5) - 1);
    *(_QWORD *)v18 = *(_QWORD *)(v21 + 8 * v22);
    *(_QWORD *)(v21 + 8 * v22) = v18;
    ++*(_DWORD *)v6;
    *(_DWORD *)v4 = *(_DWORD *)(v18 + 16);
    ++*((_DWORD *)v2 + 2);
  }
  return v5;
}
