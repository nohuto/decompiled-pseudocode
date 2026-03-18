/*
 * XREFs of ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18006DDEC
 * Callers:
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18006D570 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Union(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3)
{
  char *v4; // r9
  char *v5; // rbx
  char *v6; // rdx
  char *v7; // r11
  char *v8; // rcx
  int v9; // eax
  int v10; // r8d
  int v11; // r8d
  int v12; // eax
  __int64 v13; // r10
  __int64 v14; // rdi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  signed __int64 v17; // rdx
  int v18; // r8d
  bool v19; // zf
  signed __int64 v20; // r9

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (char *)a2 + *((int *)a2 + 1);
  v5 = (char *)a2 + *((int *)a2 + 3) + 8;
  v6 = (char *)a3 + *((int *)a3 + 1);
  v7 = (char *)a3 + *((int *)a3 + 3) + 8;
  v8 = (char *)this + *((int *)this + 1);
  if ( v6 != v7 && v4 != v5 )
  {
LABEL_3:
    v9 = *(_DWORD *)v4;
    v10 = *(_DWORD *)v6;
    if ( *(_DWORD *)v4 >= *(_DWORD *)v6 )
    {
      v6 += 4;
      if ( v10 < v9 )
      {
        *(_DWORD *)v8 = v10;
        v8 += 4;
        goto LABEL_6;
      }
      *(_DWORD *)v8 = v9;
      v4 += 4;
      v11 = *(_DWORD *)v6;
      v8 += 4;
LABEL_8:
      v12 = *(_DWORD *)v4;
      goto LABEL_9;
    }
    v4 += 4;
    *(_DWORD *)v8 = v9;
    v8 += 4;
    do
    {
      v12 = *(_DWORD *)v4;
      while ( 1 )
      {
        v18 = *(_DWORD *)v6;
        if ( v12 < *(_DWORD *)v6 )
        {
          *(_DWORD *)v8 = v12;
          v4 += 4;
          v8 += 4;
          v19 = v4 == v5;
          goto LABEL_28;
        }
        v6 += 4;
        if ( v18 >= v12 )
          break;
        v11 = *(_DWORD *)v6;
LABEL_9:
        if ( v12 < v11 )
          break;
        v6 += 4;
        if ( v11 >= v12 )
        {
          *(_DWORD *)v8 = v12;
          v4 += 4;
          v8 += 4;
          if ( v4 == v5 )
            goto LABEL_11;
LABEL_39:
          v19 = v6 == v7;
LABEL_28:
          if ( v19 )
            goto LABEL_11;
          goto LABEL_3;
        }
        if ( v6 == v7 )
          goto LABEL_11;
      }
      v4 += 4;
      if ( v4 == v5 )
        break;
LABEL_6:
      v11 = *(_DWORD *)v6;
      if ( *(_DWORD *)v4 < *(_DWORD *)v6 )
      {
        v4 += 4;
        goto LABEL_8;
      }
      v6 += 4;
      if ( v11 < *(_DWORD *)v4 )
      {
        *(_DWORD *)v8 = v11;
        v8 += 4;
        goto LABEL_39;
      }
      v4 += 4;
    }
    while ( v6 != v7 );
  }
LABEL_11:
  v13 = 0LL;
  v14 = 0LL;
  v15 = (unsigned __int64)(v5 - v4 + 3) >> 2;
  if ( v4 > v5 )
    v15 = 0LL;
  if ( v15 )
  {
    v20 = v4 - v8;
    do
    {
      ++v14;
      *(_DWORD *)v8 = *(_DWORD *)&v8[v20];
      v8 += 4;
    }
    while ( v14 != v15 );
  }
  v16 = (unsigned __int64)(v7 - v6 + 3) >> 2;
  if ( v6 > v7 )
    v16 = 0LL;
  if ( v16 )
  {
    v17 = v6 - v8;
    do
    {
      ++v13;
      *(_DWORD *)v8 = *(_DWORD *)&v8[v17];
      v8 += 4;
    }
    while ( v13 != v16 );
  }
  *((_DWORD *)this + 3) = (_DWORD)v8 - ((_DWORD)this + 8);
}
