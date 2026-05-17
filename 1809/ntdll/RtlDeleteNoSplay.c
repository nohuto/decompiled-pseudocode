/*
 * XREFs of RtlDeleteNoSplay @ 0x18006C260
 * Callers:
 *     <none>
 * Callees:
 *     SwapSplayLinks @ 0x18006C8CC (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x18006CA10 (RtlSubtreePredecessor.c)
 */

void __fastcall RtlDeleteNoSplay(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  if ( a1[1] && a1[2] )
  {
    v7 = RtlSubtreePredecessor();
    if ( (_QWORD *)*a1 == a1 )
      *a2 = v7;
    SwapSplayLinks(v7, a1);
  }
  v4 = (_QWORD *)a1[1];
  if ( v4 || (v4 = (_QWORD *)a1[2]) != 0LL )
  {
    v5 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
    {
      *v4 = v4;
      *a2 = (__int64)v4;
    }
    else
    {
      v8 = 1LL;
      if ( (_QWORD *)v5[1] != a1 )
        v8 = 2LL;
      v5[v8] = v4;
      *v4 = *a1;
    }
  }
  else
  {
    v6 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
    {
      *a2 = 0LL;
    }
    else
    {
      v9 = 1LL;
      if ( (_QWORD *)v6[1] != a1 )
        v9 = 2LL;
      v6[v9] = 0LL;
    }
  }
}
