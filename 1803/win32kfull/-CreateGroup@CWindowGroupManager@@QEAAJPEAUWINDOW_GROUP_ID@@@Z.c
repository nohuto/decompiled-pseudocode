/*
 * XREFs of ?CreateGroup@CWindowGroupManager@@QEAAJPEAUWINDOW_GROUP_ID@@@Z @ 0x1C01FC93C
 * Callers:
 *     NtUserCreateWindowGroup @ 0x1C01EC7D0 (NtUserCreateWindowGroup.c)
 * Callees:
 *     _anonymous_namespace_::HashTableAllocator @ 0x1C01FCE14 (_anonymous_namespace_--HashTableAllocator.c)
 *     _anonymous_namespace_::HashTableDeallocator @ 0x1C01FCE30 (_anonymous_namespace_--HashTableDeallocator.c)
 */

__int64 __fastcall CWindowGroupManager::CreateGroup(CWindowGroupManager *this, struct WINDOW_GROUP_ID *a2)
{
  struct CWindowGroupManager *v2; // r14
  struct WINDOW_GROUP_ID *v3; // rbx
  unsigned int v4; // r13d
  unsigned __int64 v5; // rsi
  char v6; // di
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  char *v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r12
  _QWORD *v14; // r11
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // r8
  int v20; // edx
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rdx

  v2 = `anonymous namespace'::g_windowGroupManager;
  v3 = a2;
  v4 = -1073741801;
  v5 = (unsigned __int64)`anonymous namespace'::g_windowGroupManager + 16;
  if ( *((_DWORD *)`anonymous namespace'::g_windowGroupManager + 4) >= (unsigned int)(2
                                                                                    * (*((_DWORD *)`anonymous namespace'::g_windowGroupManager
                                                                                       + 5) >> 5)) )
  {
    v6 = -1;
    v7 = 2 * ((unsigned __int64)*((unsigned int *)`anonymous namespace'::g_windowGroupManager + 5) >> 5);
    if ( v7 <= 0xFFFFFFFF )
    {
      v8 = (unsigned int)v7;
      if ( (unsigned int)v7 < 4 )
        v8 = 4LL;
      v9 = (char *)anonymous_namespace_::HashTableAllocator(8LL * (unsigned int)v8, 0LL);
      if ( v9 )
      {
        if ( (((_DWORD)v8 - 1) & (unsigned int)v8) != 0 )
        {
          do
          {
            ++v6;
            LODWORD(v8) = (unsigned int)v8 >> 1;
          }
          while ( (_DWORD)v8 );
          v8 = (unsigned int)(1 << v6);
        }
        if ( (unsigned int)v8 > 0x4000000 )
          v8 = 0x4000000LL;
        v10 = (unsigned int)v8;
        if ( v9 > &v9[8 * v8] )
          v10 = 0LL;
        if ( v10 )
          memset64(v9, v5 | 1, v10);
        v11 = 0LL;
        v12 = -1LL << (*(_BYTE *)(v5 + 4) & 0x1F);
        if ( (*(_DWORD *)(v5 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v13 = *(_QWORD *)(v5 + 8);
            while ( 1 )
            {
              v14 = *(_QWORD **)(v13 + 8LL * (unsigned int)v11);
              if ( ((unsigned __int8)v14 & 1) != 0 )
                break;
              *(_QWORD *)(v13 + 8LL * (unsigned int)v11) = *v14;
              v15 = ((((unsigned __int64)v12 & v14[1]) >> 56)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v12 & v14[1]) >> 48)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v12 & v14[1]) >> 32) >> 8)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v12 & v14[1]) >> 32)
                      + 37
                      * ((((unsigned int)v12 & (_DWORD)v14[1]) >> 24)
                       + 37
                       * ((unsigned __int8)(((unsigned int)v12 & (_DWORD)v14[1]) >> 16)
                        + 37
                        * (37 * ((unsigned __int8)(v12 & v14[1]) + 11623883)
                         + (unsigned __int8)((unsigned __int16)(v12 & v14[1]) >> 8)))))))) & (unsigned int)(v8 - 1);
              *v14 = *(_QWORD *)&v9[8 * v15];
              *(_QWORD *)&v9[8 * v15] = v14;
            }
            v11 = (unsigned int)(v11 + 1);
          }
          while ( (unsigned int)v11 < *(_DWORD *)(v5 + 4) >> 5 );
        }
        v16 = *(_QWORD *)(v5 + 8);
        v17 = (32 * v8) | *(_DWORD *)(v5 + 4) & 0x1F;
        *(_QWORD *)(v5 + 8) = v9;
        *(_DWORD *)(v5 + 4) = v17;
        if ( v16 )
          anonymous_namespace_::HashTableDeallocator(v16, 0LL, v9, v11);
      }
      else if ( *(_DWORD *)(v5 + 4) < 0x20u )
      {
        return v4;
      }
    }
    v3 = a2;
  }
  v18 = *((unsigned int *)v2 + 2);
  v19 = Win32AllocPool(56LL, 1836541781LL);
  if ( v19 )
  {
    *(_QWORD *)v19 = 0LL;
    *(_QWORD *)(v19 + 8) = 0LL;
    *(_DWORD *)(v19 + 16) = v18;
    *(_DWORD *)(v19 + 20) = 0;
    *(_QWORD *)(v19 + 40) = 0LL;
    *(_QWORD *)(v19 + 48) = 0LL;
    *(_QWORD *)(v19 + 24) = 0LL;
    *(_QWORD *)(v19 + 32) = 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v19 )
  {
    v20 = v18;
    v4 = 0;
    *(_QWORD *)(v19 + 8) = v18;
    v21 = *(_DWORD *)(v5 + 4);
    v22 = *(_QWORD *)(v5 + 8);
    v23 = (1874161
         * (((v20 & (unsigned int)(-1 << (v21 & 0x1F))) >> 24)
          + 37
          * ((unsigned __int8)((v20 & (unsigned int)(-1 << (v21 & 0x1F))) >> 16)
           + 37
           * ((unsigned __int8)((unsigned __int16)(v20 & (-1 << (v21 & 0x1F))) >> 8)
            + 37 * ((unsigned __int8)(v20 & (-1 << (v21 & 0x1F))) + 11623883))))) & ((v21 >> 5) - 1);
    *(_QWORD *)v19 = *(_QWORD *)(v22 + 8 * v23);
    *(_QWORD *)(v22 + 8 * v23) = v19;
    ++*(_DWORD *)v5;
    *(_DWORD *)v3 = *(_DWORD *)(v19 + 16);
    ++*((_DWORD *)v2 + 2);
  }
  return v4;
}
