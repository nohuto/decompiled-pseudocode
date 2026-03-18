/*
 * XREFs of ValidateParentDepth @ 0x1C0041260
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ValidateNewParent @ 0x1C00410B4 (ValidateNewParent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateParentDepth(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r11
  unsigned int v7; // edx
  _QWORD *v9; // r10
  _QWORD *v10; // rax
  unsigned int v11; // eax

  v2 = 1;
  v3 = 0;
  while ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 0LL;
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 8);
      if ( v6 )
        v5 = *(_QWORD *)(v6 + 24);
    }
    if ( a2 == v5 )
      break;
    a2 = *(_QWORD *)(a2 + 80);
    ++v2;
  }
  v7 = v2;
  if ( a1 && a1[11] )
  {
    v9 = (_QWORD *)a1[10];
    while ( 1 )
    {
      while ( a1[11] )
      {
        a1 = (_QWORD *)a1[11];
        ++v2;
      }
      v10 = (_QWORD *)a1[8];
      if ( !v10 )
        break;
LABEL_20:
      a1 = v10;
    }
    v11 = v2;
    if ( v2 <= v7 )
      v11 = v7;
    v7 = v11;
    while ( 1 )
    {
      a1 = (_QWORD *)a1[10];
      --v2;
      if ( a1 == v9 )
        break;
      v10 = (_QWORD *)a1[8];
      if ( v10 )
        goto LABEL_20;
    }
  }
  LOBYTE(v3) = v7 <= gNestedWindowLimit;
  return v3;
}
