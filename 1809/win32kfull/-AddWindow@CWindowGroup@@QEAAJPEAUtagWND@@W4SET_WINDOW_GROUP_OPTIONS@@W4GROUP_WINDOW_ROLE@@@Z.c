/*
 * XREFs of ?AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0224FA0
 * Callers:
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0225B1C (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 * Callees:
 *     _anonymous_namespace_::HashTableAllocator @ 0x1C022586C (_anonymous_namespace_--HashTableAllocator.c)
 *     _anonymous_namespace_::HashTableDeallocator @ 0x1C022588C (_anonymous_namespace_--HashTableDeallocator.c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C0226078 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 */

__int64 __fastcall CWindowGroup::AddWindow(_DWORD *a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // r12d
  __int64 v6; // rbx
  __int64 *v7; // r15
  unsigned int v9; // r14d
  char *v10; // r8
  char v11; // cl
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r12
  _QWORD *v16; // r11
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi

  v4 = (unsigned __int64)(a1 + 6);
  v5 = a4;
  v6 = (unsigned int)(2 * (a1[7] >> 5));
  v7 = a2;
  v9 = -1073741801;
  if ( a1[6] >= (unsigned int)v6 )
  {
    if ( (unsigned int)v6 < 4 )
      v6 = 4LL;
    v10 = (char *)anonymous_namespace_::HashTableAllocator(8LL * (unsigned int)v6, 0LL);
    if ( v10 )
    {
      if ( (((_DWORD)v6 - 1) & (unsigned int)v6) != 0 )
      {
        v11 = -1;
        do
        {
          ++v11;
          LODWORD(v6) = (unsigned int)v6 >> 1;
        }
        while ( (_DWORD)v6 );
        v6 = (unsigned int)(1 << v11);
      }
      if ( (unsigned int)v6 > 0x4000000 )
        v6 = 0x4000000LL;
      v12 = (unsigned int)v6;
      if ( v10 > &v10[8 * v6] )
        v12 = 0LL;
      if ( v12 )
        memset64(v10, v4 | 1, v12);
      v13 = 0LL;
      v14 = -1LL << (*(_BYTE *)(v4 + 4) & 0x1F);
      if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v15 = *(_QWORD *)(v4 + 8);
          while ( 1 )
          {
            v16 = *(_QWORD **)(v15 + 8LL * (unsigned int)v13);
            if ( ((unsigned __int8)v16 & 1) != 0 )
              break;
            *(_QWORD *)(v15 + 8LL * (unsigned int)v13) = *v16;
            v17 = ((((unsigned __int64)v14 & v16[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v14 & v16[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v14 & v16[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v14 & v16[1]) >> 32)
                    + 37
                    * ((((unsigned int)v14 & (_DWORD)v16[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v14 & (_DWORD)v16[1]) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v14 & v16[1]) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v14 & v16[1]) >> 8)))))))) & (unsigned int)(v6 - 1);
            *v16 = *(_QWORD *)&v10[8 * v17];
            *(_QWORD *)&v10[8 * v17] = v16;
          }
          v13 = (unsigned int)(v13 + 1);
        }
        while ( (unsigned int)v13 < *(_DWORD *)(v4 + 4) >> 5 );
        v7 = a2;
        v5 = a4;
      }
      v18 = *(_QWORD *)(v4 + 8);
      v19 = (32 * v6) | *(_DWORD *)(v4 + 4) & 0x1F;
      *(_QWORD *)(v4 + 8) = v10;
      *(_DWORD *)(v4 + 4) = v19;
      if ( v18 )
        anonymous_namespace_::HashTableDeallocator(v18, 0LL, v10, v13);
    }
    else if ( *(_DWORD *)(v4 + 4) < 0x20u )
    {
      return v9;
    }
  }
  v20 = Win32AllocPool(32LL, 1836541781LL);
  if ( v20 )
  {
    v21 = *v7;
    *(_QWORD *)v20 = 0LL;
    *(_QWORD *)(v20 + 8) = 0LL;
    *(_QWORD *)(v20 + 16) = v21;
    *(_DWORD *)(v20 + 24) = 0;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v20 )
  {
    v22 = (unsigned __int16)*(_DWORD *)(v20 + 16);
    *(_QWORD *)(v20 + 8) = v22;
    v23 = *(_QWORD *)(v4 + 8);
    v24 = (-1729240887
         * ((unsigned __int8)((unsigned __int16)(v22 & (-1 << (*(_DWORD *)(v4 + 4) & 0x1F))) >> 8)
          + 37 * ((unsigned __int8)(v22 & (-1 << (*(_DWORD *)(v4 + 4) & 0x1F))) + 11623883))) & (unsigned int)((*(_DWORD *)(v4 + 4) >> 5) - 1);
    *(_QWORD *)v20 = *(_QWORD *)(v23 + 8 * v24);
    *(_QWORD *)(v23 + 8 * v24) = v20;
    ++*(_DWORD *)v4;
    *((_DWORD *)v7 + 73) = a1[4];
    return (unsigned __int8)CWindowGroup::_UpdateWindowInternal(a1, v20, v5, a3) == 0 ? 0xC0000001 : 0;
  }
  return v9;
}
