/*
 * XREFs of NextOwnedWindow @ 0x1C0073170
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C000F6D0 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C000FF34 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0072C98 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NextOwnedWindow(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v7; // rdx

  if ( a1 )
    goto LABEL_6;
  a1 = *(_QWORD **)(a3 + 88);
  if ( !a1 )
    return 0LL;
  do
  {
    v4 = (_QWORD *)a1[12];
    v5 = a1;
    if ( a1 != v4 )
    {
      v5 = (_QWORD *)a1[12];
      if ( v4 )
      {
        do
        {
          v7 = v5[10];
          if ( v7 == a1[10] )
            break;
          v5 = (_QWORD *)v5[10];
        }
        while ( v7 );
      }
    }
    if ( a2 == v5 )
      break;
LABEL_6:
    a1 = (_QWORD *)a1[8];
  }
  while ( a1 );
  return a1;
}
