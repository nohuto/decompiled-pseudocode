/*
 * XREFs of MiRescanPageFileBitmapPortion @ 0x1401209DC
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x14002A820 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPagefileBitmaps @ 0x1401881AC (MiRescanPagefileBitmaps.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400BDD30 (RtlRbRemoveNode.c)
 *     RtlFindNextClearRunUlong @ 0x140120C38 (RtlFindNextClearRunUlong.c)
 */

__int64 __fastcall MiRescanPageFileBitmapPortion(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 v5; // rax
  __int64 *v6; // r13
  int v7; // r11d
  int v9; // r15d
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // ebp
  int v15; // r12d
  __int64 v16; // rax
  _QWORD *v17; // rcx
  unsigned int v18; // ecx
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  BOOLEAN v22; // r8
  int v23; // ecx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  BOOLEAN v27; // r8
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // eax
  __int64 result; // rax
  unsigned int v33; // edi
  int v34; // [rsp+30h] [rbp-38h] BYREF
  __int64 v35; // [rsp+38h] [rbp-30h]
  int v36; // [rsp+80h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v6 = a5;
  v7 = a3 & 0x1F;
  v9 = a3 - v7;
  v10 = v7;
  v11 = *a5;
  v12 = v5 + 4 * ((unsigned __int64)(unsigned int)(a3 - v7) >> 5);
  v35 = v12;
  v34 = v7 + a4;
  while ( 1 )
  {
    result = RtlFindNextClearRunUlong((unsigned int)&v34, v10, v12, -1, (__int64)&v36);
    v33 = result;
    if ( !(_DWORD)result )
      break;
    v13 = *(_DWORD *)(v11 + 52);
    v14 = v36 + v9;
    v15 = v36 + v33;
    if ( v33 <= v13 )
    {
      v31 = *(_DWORD *)(a1 + 140);
      if ( v31 <= v33 )
        v31 = v33;
      *(_DWORD *)(a1 + 140) = v31;
    }
    else
    {
      if ( v13 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)v11);
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)(v11 + 24));
        v18 = *(_DWORD *)(a1 + 140);
        if ( v18 <= *(_DWORD *)(v11 + 52) )
          v18 = *(_DWORD *)(v11 + 52);
        *(_DWORD *)(a1 + 140) = v18;
      }
      else
      {
        v16 = *(_QWORD *)v11;
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || (v17 = *(_QWORD **)(v11 + 8), *v17 != v11) )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
      }
      v19 = a1 + 144;
      *(_DWORD *)(v11 + 52) = v33;
      *(_DWORD *)(v11 + 48) = v14;
      v20 = *(_QWORD *)(a1 + 152);
      v21 = *(_QWORD *)(a1 + 144);
      if ( (v20 & 1) != 0 && v21 )
        v21 ^= v19;
      v22 = 0;
      v23 = v20 & 1;
      if ( v21 )
      {
        while ( 1 )
        {
          if ( __PAIR64__(v33, v14) < *(_QWORD *)(v21 + 48) )
          {
            v24 = *(_QWORD *)v21;
            if ( v23 )
            {
              if ( !v24 )
                goto LABEL_26;
              v24 ^= v21;
            }
            if ( !v24 )
            {
LABEL_26:
              v22 = 0;
              break;
            }
          }
          else
          {
            v24 = *(_QWORD *)(v21 + 8);
            if ( v23 )
            {
              if ( !v24 )
                goto LABEL_20;
              v24 ^= v21;
            }
            if ( !v24 )
            {
LABEL_20:
              v22 = 1;
              break;
            }
          }
          v21 = v24;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)v21, v22, (PRTL_BALANCED_NODE)v11);
      v25 = *(_QWORD *)(a1 + 168);
      v26 = *(_QWORD *)(a1 + 160);
      if ( (v25 & 1) != 0 && v26 )
        v26 ^= a1 + 160;
      v27 = 0;
      v28 = v25 & 1;
      if ( v26 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v11 + 48) < *(_DWORD *)(v26 + 24) )
          {
            v29 = *(_QWORD *)v26;
            if ( v28 )
            {
              if ( !v29 )
                goto LABEL_42;
              v29 ^= v26;
            }
            if ( !v29 )
            {
LABEL_42:
              v27 = 0;
              break;
            }
          }
          else
          {
            v29 = *(_QWORD *)(v26 + 8);
            if ( v28 )
            {
              if ( !v29 )
                goto LABEL_36;
              v29 ^= v26;
            }
            if ( !v29 )
            {
LABEL_36:
              v27 = 1;
              break;
            }
          }
          v26 = v29;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)v26, v27, (PRTL_BALANCED_NODE)(v11 + 24));
      ++*(_DWORD *)(a1 + 128);
      v11 = *(_QWORD *)(a1 + 176);
      if ( v11 == a1 + 176 )
      {
        v30 = *(_QWORD *)(a1 + 152);
        if ( (v30 & 1) != 0 )
        {
          if ( v30 == 1 )
            v11 = 0LL;
          else
            v11 = v30 ^ (v19 | 1);
        }
        else
        {
          v11 = *(_QWORD *)(a1 + 152);
        }
      }
    }
    v10 = v15;
  }
  *v6 = v11;
  return result;
}
