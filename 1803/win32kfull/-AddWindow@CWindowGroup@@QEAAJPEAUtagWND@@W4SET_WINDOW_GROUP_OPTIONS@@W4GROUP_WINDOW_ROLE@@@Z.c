/*
 * XREFs of ?AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C01FC518
 * Callers:
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C01FD0B8 (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 * Callees:
 *     _anonymous_namespace_::HashTableAllocator @ 0x1C01FCE14 (_anonymous_namespace_--HashTableAllocator.c)
 *     _anonymous_namespace_::HashTableDeallocator @ 0x1C01FCE30 (_anonymous_namespace_--HashTableDeallocator.c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C01FD5A8 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 */

__int64 __fastcall CWindowGroup::AddWindow(_DWORD *a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // r15d
  unsigned int v6; // r12d
  __int64 *v7; // rbx
  unsigned int v9; // ebp
  char v10; // di
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  char *v13; // rax
  __int64 v14; // r9
  char *v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r12
  _QWORD *v19; // r11
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi

  v4 = (unsigned __int64)(a1 + 6);
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = -1073741801;
  if ( a1[6] >= (unsigned int)(2 * (a1[7] >> 5)) )
  {
    v10 = -1;
    v11 = 2 * ((unsigned __int64)(unsigned int)a1[7] >> 5);
    if ( v11 <= 0xFFFFFFFF )
    {
      v12 = (unsigned int)v11;
      if ( (unsigned int)v11 < 4 )
        v12 = 4LL;
      v13 = (char *)anonymous_namespace_::HashTableAllocator(8LL * (unsigned int)v12, 0LL);
      v14 = 0LL;
      v15 = v13;
      if ( v13 )
      {
        if ( (((_DWORD)v12 - 1) & (unsigned int)v12) != 0 )
        {
          do
          {
            ++v10;
            LODWORD(v12) = (unsigned int)v12 >> 1;
          }
          while ( (_DWORD)v12 );
          v12 = (unsigned int)(1 << v10);
        }
        if ( (unsigned int)v12 > 0x4000000 )
          v12 = 0x4000000LL;
        v16 = (unsigned int)v12;
        if ( v13 > &v13[8 * v12] )
          v16 = 0LL;
        if ( v16 )
          memset64(v13, v4 | 1, v16);
        v17 = -1LL << (*(_BYTE *)(v4 + 4) & 0x1F);
        if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v18 = *(_QWORD *)(v4 + 8);
            while ( 1 )
            {
              v19 = *(_QWORD **)(v18 + 8LL * (unsigned int)v14);
              if ( ((unsigned __int8)v19 & 1) != 0 )
                break;
              *(_QWORD *)(v18 + 8LL * (unsigned int)v14) = *v19;
              v20 = ((((unsigned __int64)v17 & v19[1]) >> 56)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v17 & v19[1]) >> 48)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v17 & v19[1]) >> 32) >> 8)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v17 & v19[1]) >> 32)
                      + 37
                      * ((((unsigned int)v17 & (_DWORD)v19[1]) >> 24)
                       + 37
                       * ((unsigned __int8)(((unsigned int)v17 & (_DWORD)v19[1]) >> 16)
                        + 37
                        * (37 * ((unsigned __int8)(v17 & v19[1]) + 11623883)
                         + (unsigned __int8)((unsigned __int16)(v17 & v19[1]) >> 8)))))))) & (unsigned int)(v12 - 1);
              *v19 = *(_QWORD *)&v13[8 * v20];
              *(_QWORD *)&v13[8 * v20] = v19;
            }
            v14 = (unsigned int)(v14 + 1);
          }
          while ( (unsigned int)v14 < *(_DWORD *)(v4 + 4) >> 5 );
          v5 = a4;
          v6 = a3;
        }
        v21 = *(_QWORD *)(v4 + 8);
        v22 = (32 * v12) | *(_DWORD *)(v4 + 4) & 0x1F;
        *(_QWORD *)(v4 + 8) = v15;
        *(_DWORD *)(v4 + 4) = v22;
        if ( v21 )
          anonymous_namespace_::HashTableDeallocator(v21, 0LL, v15, v14);
      }
      else if ( *(_DWORD *)(v4 + 4) < 0x20u )
      {
        return v9;
      }
    }
    v7 = a2;
  }
  v23 = Win32AllocPool(32LL, 1836541781LL);
  if ( v23 )
  {
    v24 = *v7;
    *(_QWORD *)v23 = 0LL;
    *(_QWORD *)(v23 + 8) = 0LL;
    *(_QWORD *)(v23 + 16) = v24;
    *(_DWORD *)(v23 + 24) = 0;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v23 )
  {
    v25 = (unsigned __int16)*(_DWORD *)(v23 + 16);
    *(_QWORD *)(v23 + 8) = v25;
    v26 = *(_QWORD *)(v4 + 8);
    v27 = (-1729240887
         * (37 * ((unsigned __int8)(v25 & (-1 << (*(_DWORD *)(v4 + 4) & 0x1F))) + 11623883)
          + (unsigned __int8)((unsigned __int16)(v25 & (-1 << (*(_DWORD *)(v4 + 4) & 0x1F))) >> 8))) & (unsigned int)((*(_DWORD *)(v4 + 4) >> 5) - 1);
    *(_QWORD *)v23 = *(_QWORD *)(v26 + 8 * v27);
    *(_QWORD *)(v26 + 8 * v27) = v23;
    ++*(_DWORD *)v4;
    *((_DWORD *)v7 + 70) = a1[4];
    return (unsigned __int8)CWindowGroup::_UpdateWindowInternal(a1, v23, v5, v6) == 0 ? 0xC0000001 : 0;
  }
  return v9;
}
