/*
 * XREFs of NextOwnedWindow @ 0x1C008BA50
 * Callers:
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C008883C (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0089FA8 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C008B54C (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
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
  a1 = *(_QWORD **)(a3 + 112);
  if ( !a1 )
    return 0LL;
  do
  {
    v4 = (_QWORD *)a1[15];
    v5 = a1;
    if ( a1 != v4 )
    {
      v5 = (_QWORD *)a1[15];
      if ( v4 )
      {
        do
        {
          v7 = v5[13];
          if ( v7 == a1[13] )
            break;
          v5 = (_QWORD *)v5[13];
        }
        while ( v7 );
      }
    }
    if ( a2 == v5 )
      break;
LABEL_6:
    a1 = (_QWORD *)a1[11];
  }
  while ( a1 );
  return a1;
}
