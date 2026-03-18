/*
 * XREFs of ?CreateGroup@CWindowGroupManager@@QEAAJPEAUWINDOW_GROUP_ID@@@Z @ 0x1C02253AC
 * Callers:
 *     NtUserCreateWindowGroup @ 0x1C0212A80 (NtUserCreateWindowGroup.c)
 * Callees:
 *     _anonymous_namespace_::HashTableAllocator @ 0x1C022586C (_anonymous_namespace_--HashTableAllocator.c)
 *     _anonymous_namespace_::HashTableDeallocator @ 0x1C022588C (_anonymous_namespace_--HashTableDeallocator.c)
 */

__int64 __fastcall CWindowGroupManager::CreateGroup(CWindowGroupManager *this, struct WINDOW_GROUP_ID *a2)
{
  struct CWindowGroupManager *v2; // r14
  struct WINDOW_GROUP_ID *v3; // r15
  unsigned int v4; // r13d
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  char *v7; // r8
  char v8; // cl
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r12
  _QWORD *v13; // r11
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rdx

  v2 = `anonymous namespace'::g_windowGroupManager;
  v3 = a2;
  v4 = -1073741801;
  v5 = (unsigned __int64)`anonymous namespace'::g_windowGroupManager + 16;
  v6 = (unsigned int)(2 * (*((_DWORD *)`anonymous namespace'::g_windowGroupManager + 5) >> 5));
  if ( *((_DWORD *)`anonymous namespace'::g_windowGroupManager + 4) >= (unsigned int)v6 )
  {
    if ( (unsigned int)v6 < 4 )
      v6 = 4LL;
    v7 = (char *)anonymous_namespace_::HashTableAllocator(8LL * (unsigned int)v6, 0LL);
    if ( v7 )
    {
      if ( (((_DWORD)v6 - 1) & (unsigned int)v6) != 0 )
      {
        v8 = -1;
        do
        {
          ++v8;
          LODWORD(v6) = (unsigned int)v6 >> 1;
        }
        while ( (_DWORD)v6 );
        v6 = (unsigned int)(1 << v8);
      }
      if ( (unsigned int)v6 > 0x4000000 )
        v6 = 0x4000000LL;
      v9 = (unsigned int)v6;
      if ( v7 > &v7[8 * v6] )
        v9 = 0LL;
      if ( v9 )
        memset64(v7, v5 | 1, v9);
      v10 = 0LL;
      v11 = -1LL << (*(_BYTE *)(v5 + 4) & 0x1F);
      if ( (*(_DWORD *)(v5 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v12 = *(_QWORD *)(v5 + 8);
          while ( 1 )
          {
            v13 = *(_QWORD **)(v12 + 8LL * (unsigned int)v10);
            if ( ((unsigned __int8)v13 & 1) != 0 )
              break;
            *(_QWORD *)(v12 + 8LL * (unsigned int)v10) = *v13;
            v14 = ((((unsigned __int64)v11 & v13[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v11 & v13[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v11 & v13[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v11 & v13[1]) >> 32)
                    + 37
                    * ((((unsigned int)v11 & (_DWORD)v13[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v11 & (_DWORD)v13[1]) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v11 & v13[1]) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v11 & v13[1]) >> 8)))))))) & (unsigned int)(v6 - 1);
            *v13 = *(_QWORD *)&v7[8 * v14];
            *(_QWORD *)&v7[8 * v14] = v13;
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < *(_DWORD *)(v5 + 4) >> 5 );
        v3 = a2;
      }
      v15 = *(_QWORD *)(v5 + 8);
      v16 = (32 * v6) | *(_DWORD *)(v5 + 4) & 0x1F;
      *(_QWORD *)(v5 + 8) = v7;
      *(_DWORD *)(v5 + 4) = v16;
      if ( v15 )
        anonymous_namespace_::HashTableDeallocator(v15, 0LL, v7, v10);
    }
    else if ( *(_DWORD *)(v5 + 4) < 0x20u )
    {
      return v4;
    }
  }
  v17 = *((unsigned int *)v2 + 2);
  v18 = Win32AllocPool(56LL, 1836541781LL);
  if ( v18 )
  {
    *(_QWORD *)v18 = 0LL;
    *(_QWORD *)(v18 + 8) = 0LL;
    *(_DWORD *)(v18 + 16) = v17;
    *(_DWORD *)(v18 + 20) = 0;
    *(_QWORD *)(v18 + 40) = 0LL;
    *(_QWORD *)(v18 + 48) = 0LL;
    *(_QWORD *)(v18 + 24) = 0LL;
    *(_QWORD *)(v18 + 32) = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v18 )
  {
    v19 = v17;
    v4 = 0;
    *(_QWORD *)(v18 + 8) = v17;
    v20 = *(_DWORD *)(v5 + 4);
    v21 = *(_QWORD *)(v5 + 8);
    v22 = (1874161
         * ((unsigned int)((v19 & (unsigned __int64)(-1LL << (v20 & 0x1F))) >> 24)
          + 37
          * ((unsigned __int8)(((unsigned int)v19 & (-1 << (v20 & 0x1F))) >> 16)
           + 37
           * ((unsigned __int8)((unsigned __int16)(v19 & (-1 << (v20 & 0x1F))) >> 8)
            + 37 * ((unsigned __int8)(v19 & (-1 << (v20 & 0x1F))) + 11623883))))) & ((v20 >> 5) - 1);
    *(_QWORD *)v18 = *(_QWORD *)(v21 + 8 * v22);
    *(_QWORD *)(v21 + 8 * v22) = v18;
    ++*(_DWORD *)v5;
    *(_DWORD *)v3 = *(_DWORD *)(v18 + 16);
    ++*((_DWORD *)v2 + 2);
  }
  return v4;
}
