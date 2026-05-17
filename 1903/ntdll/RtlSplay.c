/*
 * XREFs of RtlSplay @ 0x180064960
 * Callers:
 *     RtlEnumerateGenericTable @ 0x180064610 (RtlEnumerateGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x180064780 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x180064880 (RtlLookupElementGenericTable.c)
 *     RtlDelete @ 0x180064B60 (RtlDelete.c)
 *     sub_180088EB0 @ 0x180088EB0 (sub_180088EB0.c)
 *     PfxFindPrefix @ 0x1800E46A0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800E47A0 (PfxInsertPrefix.c)
 *     RtlLookupElementGenericTableFull @ 0x1800F3D40 (RtlLookupElementGenericTableFull.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlSplay(_QWORD *a1)
{
  _QWORD *i; // r8
  _QWORD *v2; // rax
  _QWORD *v3; // r9
  _QWORD *v4; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax

  for ( i = (_QWORD *)*a1; (_QWORD *)*a1 != a1; i = (_QWORD *)*a1 )
  {
    v2 = (_QWORD *)i[1];
    v3 = (_QWORD *)*i;
    if ( v2 == a1 )
    {
      if ( v3 != i )
      {
        if ( (_QWORD *)v3[1] != i )
        {
          v12 = (_QWORD *)a1[1];
          v3[2] = v12;
          if ( v12 )
            *v12 = v3;
          v13 = (_QWORD *)a1[2];
          i[1] = v13;
          if ( v13 )
            *v13 = i;
          if ( (_QWORD *)*v3 == v3 )
          {
            *a1 = a1;
          }
          else
          {
            *a1 = *v3;
            v14 = 8LL;
            if ( *(_QWORD **)(*v3 + 8LL) != v3 )
              v14 = 16LL;
            *(_QWORD *)(v14 + *v3) = a1;
          }
          a1[1] = v3;
          *v3 = a1;
          a1[2] = i;
          *i = a1;
          continue;
        }
        v6 = (_QWORD *)a1[2];
        i[1] = v6;
        if ( v6 )
          *v6 = i;
        v7 = (_QWORD *)i[2];
        v3[1] = v7;
        if ( v7 )
          *v7 = v3;
        if ( (_QWORD *)*v3 == v3 )
        {
          *a1 = a1;
        }
        else
        {
          *a1 = *v3;
          v8 = 8LL;
          if ( *(_QWORD **)(*v3 + 8LL) != v3 )
            v8 = 16LL;
          *(_QWORD *)(v8 + *v3) = a1;
        }
        a1[2] = i;
        i[2] = v3;
LABEL_21:
        *i = a1;
        *v3 = i;
        continue;
      }
      v11 = (_QWORD *)a1[2];
      i[1] = v11;
      if ( v11 )
        *v11 = i;
      a1[2] = i;
    }
    else
    {
      if ( v3 != i )
      {
        if ( (_QWORD *)v3[2] != i )
        {
          v15 = (_QWORD *)a1[1];
          i[2] = v15;
          if ( v15 )
            *v15 = i;
          v16 = (_QWORD *)a1[2];
          v3[1] = v16;
          if ( v16 )
            *v16 = v3;
          if ( (_QWORD *)*v3 == v3 )
          {
            *a1 = a1;
          }
          else
          {
            *a1 = *v3;
            v17 = 8LL;
            if ( *(_QWORD **)(*v3 + 8LL) != v3 )
              v17 = 16LL;
            *(_QWORD *)(v17 + *v3) = a1;
          }
          a1[1] = i;
          *i = a1;
          a1[2] = v3;
          *v3 = a1;
          continue;
        }
        v3[2] = v2;
        if ( v2 )
          *v2 = v3;
        v9 = (_QWORD *)a1[1];
        i[2] = v9;
        if ( v9 )
          *v9 = i;
        if ( (_QWORD *)*v3 == v3 )
        {
          *a1 = a1;
        }
        else
        {
          *a1 = *v3;
          v10 = 8LL;
          if ( *(_QWORD **)(*v3 + 8LL) != v3 )
            v10 = 16LL;
          *(_QWORD *)(v10 + *v3) = a1;
        }
        a1[1] = i;
        i[1] = v3;
        goto LABEL_21;
      }
      v4 = (_QWORD *)a1[1];
      i[2] = v4;
      if ( v4 )
        *v4 = i;
      a1[1] = i;
    }
    *i = a1;
    *a1 = a1;
  }
  return a1;
}
