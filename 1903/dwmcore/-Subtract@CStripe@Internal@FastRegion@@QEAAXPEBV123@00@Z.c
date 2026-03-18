/*
 * XREFs of ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x180091208
 * Callers:
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180090E3C (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Subtract(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3,
        const struct FastRegion::Internal::CStripe *a4)
{
  char *v5; // r9
  char *v6; // r10
  char *v7; // rdx
  char *v8; // rcx
  char *v9; // r8
  int v10; // eax
  int v11; // r11d
  _DWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  signed __int64 v16; // r9
  int v17; // r11d
  int v18; // eax
  int v19; // r11d
  bool v20; // zf

  *(_DWORD *)this = *(_DWORD *)a4;
  v5 = (char *)a2 + *((int *)a2 + 1);
  v6 = (char *)a2 + *((int *)a2 + 3) + 8;
  v7 = (char *)a3 + *((int *)a3 + 1);
  v8 = (char *)this + *((int *)this + 1);
  v9 = (char *)a3 + *((int *)a3 + 3) + 8;
  if ( v5 != v6 && v7 != v9 )
  {
    do
    {
      v10 = *(_DWORD *)v5;
      v11 = *(_DWORD *)v7;
      if ( *(_DWORD *)v5 >= *(_DWORD *)v7 )
      {
        v12 = v7 + 4;
        if ( v11 < v10 )
          goto LABEL_17;
        v13 = *v12;
LABEL_6:
        v5 += 4;
        goto LABEL_7;
      }
      v5 += 4;
      *(_DWORD *)v8 = v10;
      v8 += 4;
      while ( 1 )
      {
        v18 = *(_DWORD *)v5;
        v19 = *(_DWORD *)v7;
        if ( *(_DWORD *)v5 < *(_DWORD *)v7 )
        {
          *(_DWORD *)v8 = v18;
          v5 += 4;
          v8 += 4;
          v20 = v5 == v6;
          goto LABEL_31;
        }
        v12 = v7 + 4;
        if ( v19 < v18 )
          break;
        *(_DWORD *)v8 = v18;
        v8 += 4;
LABEL_24:
        v5 += 4;
        if ( v5 == v6 )
          goto LABEL_10;
LABEL_17:
        v17 = *(_DWORD *)v5;
        v13 = *v12;
        if ( *(_DWORD *)v5 < *v12 )
          goto LABEL_6;
        v7 = (char *)(v12 + 1);
        if ( v13 < v17 )
          goto LABEL_30;
        v5 += 4;
        *(_DWORD *)v8 = v17;
LABEL_21:
        v8 += 4;
        if ( v7 == v9 )
          goto LABEL_10;
      }
      *(_DWORD *)v8 = v19;
      v8 += 4;
      v13 = *v12;
LABEL_7:
      if ( *(_DWORD *)v5 < v13 )
        goto LABEL_24;
      v7 = (char *)(v12 + 1);
      if ( v13 < *(_DWORD *)v5 )
      {
        *(_DWORD *)v8 = v13;
        goto LABEL_21;
      }
      v5 += 4;
      if ( v5 == v6 )
        break;
LABEL_30:
      v20 = v7 == v9;
LABEL_31:
      ;
    }
    while ( !v20 );
  }
LABEL_10:
  v14 = 0LL;
  v15 = (unsigned __int64)(v6 - v5 + 3) >> 2;
  if ( v5 > v6 )
    v15 = 0LL;
  if ( v15 )
  {
    v16 = v5 - v8;
    do
    {
      ++v14;
      *(_DWORD *)v8 = *(_DWORD *)&v8[v16];
      v8 += 4;
    }
    while ( v14 != v15 );
  }
  *((_DWORD *)this + 3) = (_DWORD)v8 - ((_DWORD)this + 8);
}
