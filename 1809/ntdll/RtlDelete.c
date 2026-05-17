/*
 * XREFs of RtlDelete @ 0x18006C830
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x18006C310 (RtlDeleteElementGenericTable.c)
 *     RtlpTpIoDllLoaded @ 0x18008BAA8 (RtlpTpIoDllLoaded.c)
 *     PfxRemovePrefix @ 0x1800E7590 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x18006C8CC (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x18006CA10 (RtlSubtreePredecessor.c)
 */

_QWORD *__fastcall RtlDelete(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  result = (_QWORD *)a1[1];
  if ( result )
  {
    if ( a1[2] )
    {
      v3 = RtlSubtreePredecessor();
      SwapSplayLinks(v3, a1);
      result = (_QWORD *)a1[1];
    }
    if ( result )
      goto LABEL_5;
  }
  result = (_QWORD *)a1[2];
  if ( result )
  {
LABEL_5:
    v4 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
    {
      *result = result;
    }
    else
    {
      v7 = 1LL;
      if ( (_QWORD *)v4[1] != a1 )
        v7 = 2LL;
      v4[v7] = result;
      v8 = (_QWORD *)*a1;
      *result = *a1;
      return RtlSplay(v8);
    }
  }
  else
  {
    v5 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
    {
      return 0LL;
    }
    else
    {
      v6 = 1LL;
      if ( (_QWORD *)v5[1] != a1 )
        v6 = 2LL;
      v5[v6] = 0LL;
      return RtlSplay(v5);
    }
  }
  return result;
}
