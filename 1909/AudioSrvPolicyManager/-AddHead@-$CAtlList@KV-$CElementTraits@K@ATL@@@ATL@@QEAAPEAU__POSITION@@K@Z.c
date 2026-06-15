/*
 * XREFs of ?AddHead@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z @ 0x18002785C
 * Callers:
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x1800263AC (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D64C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::AddHead(__int64 *a1, int a2)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 *result; // rax

  v3 = *a1;
  if ( a1[4] )
    goto LABEL_12;
  v5 = *((unsigned int *)a1 + 10);
  if ( v5 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 0x18 )
    {
      v7 = 0LL;
      goto LABEL_8;
    }
    v5 *= 24LL;
  }
  v6 = malloc(v5 + 8);
  v7 = v6;
  if ( !v6 )
    goto LABEL_16;
  *v6 = a1[3];
  a1[3] = (__int64)v6;
LABEL_8:
  if ( !v7 )
LABEL_16:
    ATL::AtlThrowImpl(-2147024882);
  v8 = *((_DWORD *)a1 + 10);
  for ( i = &v7[2 * (v8 - 1) + 1 + (unsigned int)(v8 - 1)]; --v8 >= 0; i -= 3 )
  {
    *i = a1[4];
    a1[4] = (__int64)i;
  }
LABEL_12:
  v10 = (__int64 *)a1[4];
  v11 = *v10;
  *((_DWORD *)v10 + 4) = a2;
  a1[4] = v11;
  v10[1] = 0LL;
  *v10 = v3;
  ++a1[2];
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = v10;
  else
    a1[1] = (__int64)v10;
  result = v10;
  *a1 = (__int64)v10;
  return result;
}
