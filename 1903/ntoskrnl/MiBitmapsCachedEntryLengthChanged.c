/*
 * XREFs of MiBitmapsCachedEntryLengthChanged @ 0x14008975C
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x140089150 (MiCoalescePageFileBitmapsCache.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400F11C8 (MiInvalidatePageFileBitmapsCache.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140063870 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140064590 (RtlRbInsertNodeEx.c)
 */

void __fastcall MiBitmapsCachedEntryLengthChanged(__int64 a1, unsigned __int64 *a2, int a3)
{
  BOOLEAN v3; // bl
  unsigned __int64 *v4; // rdi
  unsigned __int64 v6; // r9
  unsigned __int64 i; // r9
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 j; // r9

  v3 = 0;
  v4 = a2;
  if ( a3 )
  {
    v6 = a2[1];
    if ( v6 )
    {
      v8 = *(_QWORD **)v6;
      if ( *(_QWORD *)v6 )
      {
        do
        {
          v6 = (unsigned __int64)v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
    }
    else
    {
      for ( i = a2[2]; ; i = *(_QWORD *)(v6 + 16) )
      {
        v6 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(unsigned __int64 **)v6 == a2 )
          break;
        a2 = (unsigned __int64 *)v6;
      }
    }
  }
  else
  {
    v6 = *a2;
    v14 = (unsigned __int64)a2;
    if ( *a2 )
    {
      for ( ; *(_QWORD *)(v6 + 8); v6 = *(_QWORD *)(v6 + 8) )
        ;
    }
    else
    {
      for ( j = a2[2]; ; j = *(_QWORD *)(v6 + 16) )
      {
        v6 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)(v6 + 8) == v14 )
          break;
        v14 = v6;
      }
    }
    if ( !v6 )
      return;
  }
  v9 = *(_DWORD *)(v6 + 52);
  v10 = *((_DWORD *)v4 + 13);
  if ( a3 )
  {
    if ( v9 > v10 )
      return;
  }
  else if ( v9 < v10 )
  {
    return;
  }
  v11 = a1 + 144;
  RtlRbRemoveNode((PRTL_RB_TREE)v11, (PRTL_BALANCED_NODE)v4);
  v12 = *(_QWORD *)v11;
  if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
  {
    if ( v12 )
      v12 ^= v11;
    else
      v12 = 0LL;
  }
  if ( v12 )
  {
    while ( 1 )
    {
      if ( v4[6] < *(_QWORD *)(v12 + 48) )
      {
        v13 = *(_QWORD *)v12;
        if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
        {
          if ( !v13 )
            break;
          v13 ^= v12;
        }
        if ( !v13 )
          break;
      }
      else
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_27;
          v13 ^= v12;
        }
        if ( !v13 )
        {
LABEL_27:
          v3 = 1;
          break;
        }
      }
      v12 = v13;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)v11, (PRTL_BALANCED_NODE)v12, v3, (PRTL_BALANCED_NODE)v4);
}
