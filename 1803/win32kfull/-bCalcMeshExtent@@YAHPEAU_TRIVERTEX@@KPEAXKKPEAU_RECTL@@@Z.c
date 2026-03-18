/*
 * XREFs of ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C00C9B50
 * Callers:
 *     GreGradientFill @ 0x1C00C9504 (GreGradientFill.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall bCalcMeshExtent(
        struct _TRIVERTEX *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        struct _RECTL *a6)
{
  LONG v6; // ebx
  LONG v7; // edi
  LONG v12; // ebp
  LONG v13; // r14d
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rax
  LONG v17; // r10d
  LONG v18; // r8d
  __int64 v19; // rax
  LONG v20; // ecx
  LONG v21; // edx
  LONG v22; // r9d
  LONG v23; // eax
  int v24; // ecx
  __int64 result; // rax
  int v26; // r8d
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  LONG v30; // ecx
  LONG y; // edx
  LONG x; // eax
  LONG v33; // eax
  int v34; // [rsp+0h] [rbp-48h]
  _DWORD v35[4]; // [rsp+8h] [rbp-40h]

  v6 = 0x7FFFFFFF;
  v7 = 0x80000000;
  v12 = 0x7FFFFFFF;
  v13 = 0x80000000;
  if ( a5 >= 2 )
  {
    if ( a5 == 2 )
    {
      v26 = 0;
      if ( a4 )
      {
        while ( 2 )
        {
          v27 = 0LL;
          v35[0] = *a3;
          v35[1] = a3[1];
          v35[2] = a3[2];
          do
          {
            v28 = (unsigned int)v35[v27];
            if ( (unsigned int)v28 >= a2 )
            {
              *(_QWORD *)&a6->left = 0LL;
              *(_QWORD *)&a6->right = 0LL;
              return 0LL;
            }
            v29 = v28;
            ++v27;
            y = a1[v29].y;
            x = a1[v29].x;
            v30 = x;
            if ( x >= v6 )
              x = v6;
            v6 = x;
            v33 = y;
            if ( v30 <= v7 )
              v30 = v7;
            v7 = v30;
            if ( y >= v12 )
              v33 = v12;
            v12 = v33;
            if ( y <= v13 )
              y = v13;
            v13 = y;
          }
          while ( v27 < 3 );
          a3 += 3;
          if ( ++v26 < a4 )
            continue;
          break;
        }
LABEL_22:
        if ( (unsigned int)(v6 + 0x8000000) <= 0x10000000
          && (unsigned int)(v7 + 0x8000000) <= 0x10000000
          && (unsigned int)(v12 + 0x8000000) <= 0x10000000
          && (unsigned int)(v13 + 0x8000000) <= 0x10000000 )
        {
          a6->left = v6;
          result = 1LL;
          a6->right = v7;
          a6->top = v12;
          a6->bottom = v13;
          return result;
        }
      }
    }
  }
  else
  {
    v34 = 0;
    if ( a4 )
    {
      while ( 1 )
      {
        v14 = (unsigned int)*a3;
        if ( (unsigned int)v14 > a2 )
          break;
        v15 = a3[1];
        if ( v15 > a2 )
          break;
        v16 = v14;
        v17 = a1[v16].y;
        v18 = a1[v16].x;
        v19 = v15;
        v20 = v17;
        v21 = a1[v19].x;
        v22 = a1[v19].y;
        v23 = v18;
        if ( v18 >= v6 )
          v23 = v6;
        v6 = v21;
        if ( v18 <= v7 )
          v18 = v7;
        v7 = v21;
        if ( v17 >= v12 )
          v20 = v12;
        v12 = v22;
        if ( v17 <= v13 )
          v17 = v13;
        v13 = v22;
        if ( v21 >= v23 )
          v6 = v23;
        if ( v21 <= v18 )
          v7 = v18;
        if ( v22 >= v20 )
          v12 = v20;
        v24 = v34;
        if ( v22 <= v17 )
          v13 = v17;
        a3 += 2;
        ++v34;
        if ( v24 + 1 >= a4 )
          goto LABEL_22;
      }
      result = 0LL;
      *(_QWORD *)&a6->left = 0LL;
      *(_QWORD *)&a6->right = 0LL;
      return result;
    }
  }
  *(_QWORD *)&a6->left = 0LL;
  *(_QWORD *)&a6->right = 0LL;
  return 0LL;
}
