/*
 * XREFs of ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C006177C
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0061330 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     ?CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007D738 (-CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007DFEC (-CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RTL_BALANCED_NODE *__fastcall CVirtualAddressAllocator::FindNodeInFreeList(
        CVirtualAddressAllocator *this,
        unsigned __int64 *a2)
{
  struct _RTL_BALANCED_NODE *i; // rbx
  int v5; // eax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  struct _RTL_BALANCED_NODE *v8; // rcx
  unsigned __int64 v9; // rax
  struct _RTL_BALANCED_NODE *result; // rax
  struct _RTL_BALANCED_NODE *k; // rdi
  int v12; // eax
  struct _RTL_BALANCED_NODE *j; // rax
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
    while ( i )
    {
      v5 = CompareVadSizeGreaterOrEqualAvl(a2 + 4, i);
      if ( v5 < 0 )
      {
        i = i->Children[0];
      }
      else
      {
        if ( v5 <= 0 )
          break;
        i = i->Children[1];
      }
    }
    if ( i )
    {
      v6 = a2[5];
      v7 = a2[6];
      do
      {
        v8 = i[1].Children[1];
        v9 = v7 & ((unsigned __int64)i[1].Children[0] + v6);
        if ( v9 < (unsigned __int64)v8 && (unsigned __int64)v8 - v9 >= a2[4] )
          break;
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
          while ( 1 )
          {
            i = (struct _RTL_BALANCED_NODE *)(i->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || i->Children[0] == v25 )
              break;
            v25 = i;
          }
        }
      }
      while ( i );
      if ( i )
      {
        if ( (*((_DWORD *)this + 34) & 2) != 0 )
          a2[7] = v7 & ((unsigned __int64)i[1].Children[1] - a2[4]);
        else
          a2[7] = v7 & ((unsigned __int64)i[1].Children[0] + v6);
      }
    }
    goto LABEL_16;
  }
  k = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  while ( k )
  {
    v12 = CompareVadSizeLessOrEqualAvl(a2 + 4, k);
    if ( v12 >= 0 )
    {
      if ( v12 <= 0 )
        break;
      k = k->Children[1];
    }
    else
    {
      k = k->Children[0];
    }
  }
  if ( !k )
  {
    for ( j = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5); j; j = j->Children[0] )
      k = j;
    if ( !k )
      goto LABEL_16;
  }
  v14 = *a2;
  while ( 1 )
  {
    v15 = k[1].Children[0];
    if ( v14 )
      break;
    v16 = (struct _RTL_BALANCED_NODE *)a2[3];
    if ( v15 < v16 )
    {
      v17 = k[1].Children[1];
      v18 = (struct _RTL_BALANCED_NODE *)a2[2];
      if ( v17 > v18 )
      {
        if ( v15 > v18 )
          v18 = k[1].Children[0];
        if ( v17 < v16 )
          v16 = k[1].Children[1];
        v19 = (*((_DWORD *)this + 34) & 2) != 0
            ? (struct _RTL_BALANCED_NODE *)((char *)v16 - a2[4])
            : (struct _RTL_BALANCED_NODE *)((char *)v18 + a2[5]);
        v20 = (unsigned __int64)v19 & a2[6];
        if ( v20 >= (unsigned __int64)v18 && v20 < (unsigned __int64)v16 && (unsigned __int64)v16 - v20 >= a2[4] )
        {
          a2[7] = v20;
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    v21 = k->Children[1];
    v22 = k;
    if ( v21 )
    {
      v23 = v21->Children[0];
      for ( k = k->Children[1]; v23; v23 = v23->Children[0] )
        k = v23;
    }
    else
    {
      while ( 1 )
      {
        k = (struct _RTL_BALANCED_NODE *)(k->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !k || k->Children[0] == v22 )
          break;
        v22 = k;
      }
    }
    if ( !k )
      goto LABEL_16;
  }
  if ( v14 < (unsigned __int64)v15 || (struct _RTL_BALANCED_NODE *)a2[1] > k[1].Children[1] )
    goto LABEL_42;
  a2[7] = v14;
LABEL_41:
  i = k;
LABEL_16:
  result = i;
  *((_DWORD *)this + 34) ^= 2 * (*((_DWORD *)this + 34) & 1);
  return result;
}
