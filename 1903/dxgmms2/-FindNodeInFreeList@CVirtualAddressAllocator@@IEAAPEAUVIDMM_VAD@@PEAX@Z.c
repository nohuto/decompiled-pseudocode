/*
 * XREFs of ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C00768A0
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C007647C (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     ?CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007FCB0 (-CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00802A0 (-CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RTL_BALANCED_NODE *__fastcall CVirtualAddressAllocator::FindNodeInFreeList(
        CVirtualAddressAllocator *this,
        unsigned __int64 *a2)
{
  struct _RTL_BALANCED_NODE *i; // rdi
  int v5; // eax
  unsigned __int64 v6; // r9
  struct _RTL_BALANCED_NODE *v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r10
  struct _RTL_BALANCED_NODE *result; // rax
  struct _RTL_BALANCED_NODE *j; // rbx
  int v12; // eax
  struct _RTL_BALANCED_NODE *v13; // rax
  unsigned __int64 v14; // r9
  struct _RTL_BALANCED_NODE *v15; // rax
  struct _RTL_BALANCED_NODE *v16; // rcx
  struct _RTL_BALANCED_NODE *v17; // rdx
  struct _RTL_BALANCED_NODE *v18; // r8
  struct _RTL_BALANCED_NODE *v19; // rax
  unsigned __int64 v20; // rdx
  struct _RTL_BALANCED_NODE *v21; // rax
  struct _RTL_BALANCED_NODE *v22; // rcx
  struct _RTL_BALANCED_NODE *v23; // rcx
  struct _RTL_BALANCED_NODE *v24; // rax
  struct _RTL_BALANCED_NODE *v25; // rcx
  struct _RTL_BALANCED_NODE *v26; // rcx

  i = 0LL;
  if ( !*a2 && !a2[2] && a2[3] == *((_QWORD *)this + 2) )
  {
    i = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
    if ( !i )
      goto LABEL_14;
    while ( 1 )
    {
      v5 = CompareVadSizeGreaterOrEqualAvl(a2 + 4, i);
      if ( v5 >= 0 )
      {
        if ( v5 <= 0 )
        {
LABEL_8:
          if ( i )
          {
            v6 = a2[6];
            while ( 1 )
            {
              v7 = i[1].Children[1];
              v8 = v6 & ((unsigned __int64)i[1].Children[0] + a2[5]);
              if ( v8 < (unsigned __int64)v7 )
              {
                v9 = a2[4];
                if ( (unsigned __int64)v7 - v8 >= v9 )
                  break;
              }
              v24 = i->Children[1];
              v25 = i;
              if ( v24 )
              {
                v26 = v24->Children[0];
                for ( i = i->Children[1]; v26; v26 = v26->Children[0] )
                  i = v26;
              }
              else
              {
                for ( i = (struct _RTL_BALANCED_NODE *)(i->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
                      i;
                      i = (struct _RTL_BALANCED_NODE *)(i->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) )
                {
                  if ( i->Children[0] == v25 )
                    break;
                  v25 = i;
                }
              }
              if ( !i )
                goto LABEL_14;
            }
            if ( (*((_DWORD *)this + 34) & 2) == 0 )
            {
              a2[7] = v8;
              goto LABEL_14;
            }
            v20 = v6 & ((unsigned __int64)v7 - v9);
LABEL_50:
            a2[7] = v20;
            goto LABEL_14;
          }
          goto LABEL_14;
        }
        i = i->Children[1];
      }
      else
      {
        i = i->Children[0];
      }
      if ( !i )
        goto LABEL_8;
    }
  }
  j = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  if ( !j )
  {
LABEL_22:
    v13 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
    for ( j = 0LL; v13; v13 = v13->Children[0] )
      j = v13;
    if ( !j )
      goto LABEL_14;
    goto LABEL_25;
  }
  while ( 1 )
  {
    v12 = CompareVadSizeLessOrEqualAvl(a2 + 4, j);
    if ( v12 >= 0 )
      break;
    j = j->Children[0];
LABEL_20:
    if ( !j )
      goto LABEL_21;
  }
  if ( v12 > 0 )
  {
    j = j->Children[1];
    goto LABEL_20;
  }
LABEL_21:
  if ( !j )
    goto LABEL_22;
LABEL_25:
  v14 = *a2;
  do
  {
    v15 = j[1].Children[0];
    if ( v14 )
    {
      if ( v14 >= (unsigned __int64)v15 && (struct _RTL_BALANCED_NODE *)a2[1] <= j[1].Children[1] )
      {
        i = j;
        a2[7] = v14;
        break;
      }
    }
    else
    {
      v16 = (struct _RTL_BALANCED_NODE *)a2[3];
      if ( v15 < v16 )
      {
        v17 = j[1].Children[1];
        v18 = (struct _RTL_BALANCED_NODE *)a2[2];
        if ( v17 > v18 )
        {
          if ( v15 > v18 )
            v18 = j[1].Children[0];
          if ( v17 < v16 )
            v16 = j[1].Children[1];
          v19 = (*((_DWORD *)this + 34) & 2) != 0
              ? (struct _RTL_BALANCED_NODE *)((char *)v16 - a2[4])
              : (struct _RTL_BALANCED_NODE *)((char *)v18 + a2[5]);
          v20 = (unsigned __int64)v19 & a2[6];
          if ( v20 < (unsigned __int64)v16 && v20 >= (unsigned __int64)v18 && (unsigned __int64)v16 - v20 >= a2[4] )
          {
            i = j;
            goto LABEL_50;
          }
        }
      }
    }
    v21 = j->Children[1];
    v22 = j;
    if ( v21 )
    {
      v23 = v21->Children[0];
      for ( j = j->Children[1]; v23; v23 = v23->Children[0] )
        j = v23;
    }
    else
    {
      for ( j = (struct _RTL_BALANCED_NODE *)(j->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
            j;
            j = (struct _RTL_BALANCED_NODE *)(j->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( j->Children[0] == v22 )
          break;
        v22 = j;
      }
    }
  }
  while ( j );
LABEL_14:
  result = i;
  *((_DWORD *)this + 34) ^= 2 * (*((_DWORD *)this + 34) & 1);
  return result;
}
