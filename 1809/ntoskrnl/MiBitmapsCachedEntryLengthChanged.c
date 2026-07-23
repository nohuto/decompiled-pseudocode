/*
 * XREFs of MiBitmapsCachedEntryLengthChanged @ 0x140028C34
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x14002A820 (MiCoalescePageFileBitmapsCache.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140124644 (MiInvalidatePageFileBitmapsCache.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400BDD30 (RtlRbRemoveNode.c)
 */

char __fastcall MiBitmapsCachedEntryLengthChanged(_RTL_RB_TREE *a1, unsigned __int64 a2, int a3)
{
  BOOLEAN v3; // bl
  unsigned __int64 j; // rax
  unsigned __int64 v7; // r9
  _QWORD *v8; // rdx
  __int64 i; // r9
  __int64 k; // r9
  unsigned int v11; // ecx
  _RTL_RB_TREE *v12; // rsi
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rdx
  int v15; // ecx
  unsigned __int64 v16; // rax

  v3 = 0;
  j = a2;
  if ( a3 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    if ( v7 )
    {
      v8 = *(_QWORD **)v7;
      if ( *(_QWORD *)v7 )
      {
        do
        {
          v7 = (unsigned __int64)v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(a2 + 16); ; i = *(_QWORD *)(v7 + 16) )
      {
        v7 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 || *(_QWORD *)v7 == j )
          break;
        j = v7;
      }
    }
  }
  else
  {
    v7 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      for ( j = *(_QWORD *)(v7 + 8); j; j = *(_QWORD *)(j + 8) )
        v7 = j;
    }
    else
    {
      for ( k = *(_QWORD *)(a2 + 16); ; k = *(_QWORD *)(v7 + 16) )
      {
        v7 = k & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 || *(_QWORD *)(v7 + 8) == j )
          break;
        j = v7;
      }
    }
    if ( !v7 )
      return j;
  }
  LODWORD(j) = *(_DWORD *)(v7 + 52);
  v11 = *(_DWORD *)(a2 + 52);
  if ( a3 )
  {
    if ( (unsigned int)j > v11 )
      return j;
  }
  else if ( (unsigned int)j < v11 )
  {
    return j;
  }
  v12 = a1 + 9;
  RtlRbRemoveNode(v12, (PRTL_BALANCED_NODE)a2);
  Min = v12->Min;
  Root = (unsigned __int64)v12->Root;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( Root )
      Root ^= (unsigned __int64)v12;
    else
      Root = 0LL;
  }
  v15 = (unsigned __int8)Min & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a2 + 48) < *(_QWORD *)(Root + 48) )
      {
        v16 = *(_QWORD *)Root;
        if ( v15 )
        {
          if ( !v16 )
            break;
          v16 ^= Root;
        }
        if ( !v16 )
          break;
      }
      else
      {
        v16 = *(_QWORD *)(Root + 8);
        if ( v15 )
        {
          if ( !v16 )
            goto LABEL_35;
          v16 ^= Root;
        }
        if ( !v16 )
        {
LABEL_35:
          v3 = 1;
          break;
        }
      }
      Root = v16;
    }
  }
  LOBYTE(j) = RtlRbInsertNodeEx(v12, (PRTL_BALANCED_NODE)Root, v3, (PRTL_BALANCED_NODE)a2);
  return j;
}
