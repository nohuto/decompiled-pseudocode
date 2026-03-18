/*
 * XREFs of NextOwnedWindow @ 0x1C006FE0C
 * Callers:
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C006E23C (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C006F598 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C006F958 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NextOwnedWindow(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rdx
  bool i; // zf
  _QWORD *v7; // rax

  if ( a1 )
    goto LABEL_8;
  a1 = *(_QWORD **)(a3 + 88);
  if ( !a1 )
    return 0LL;
  do
  {
    v5 = (_QWORD *)a1[12];
    v7 = a1;
    for ( i = a1 == v5; !i; i = v5 == (_QWORD *)a1[10] )
    {
      v7 = v5;
      if ( !v5 )
        break;
      v5 = (_QWORD *)v5[10];
    }
    if ( a2 == v7 )
      break;
LABEL_8:
    a1 = (_QWORD *)a1[8];
  }
  while ( a1 );
  return a1;
}
