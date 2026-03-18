/*
 * XREFs of GetLayeredOrRedirectedParent @ 0x1C0077930
 * Callers:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0077888 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetLayeredOrRedirectedParent(_QWORD *a1)
{
  _QWORD *v1; // rdx
  int v2; // r8d
  __int64 v4; // rax
  _QWORD *v5; // r8
  __int64 v6; // rcx

  v1 = a1;
  if ( a1 )
  {
    do
    {
      v2 = *(_DWORD *)(v1[5] + 24LL);
      if ( (v2 & 0x80000) != 0 )
        break;
      if ( (v2 & 0x20000000) != 0 )
        break;
      v1 = (_QWORD *)v1[10];
    }
    while ( v1 );
    if ( v1 && v1 != a1 )
    {
      v4 = v1[3];
      v5 = 0LL;
      if ( v4 )
      {
        v6 = *(_QWORD *)(v4 + 8);
        if ( v6 )
          v5 = *(_QWORD **)(v6 + 24);
      }
      if ( v1 == v5 )
        return 0LL;
    }
  }
  return v1;
}
