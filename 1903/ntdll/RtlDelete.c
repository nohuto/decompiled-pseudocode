/*
 * XREFs of RtlDelete @ 0x180064B60
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x180064680 (RtlDeleteElementGenericTable.c)
 *     sub_180088B88 @ 0x180088B88 (sub_180088B88.c)
 *     PfxRemovePrefix @ 0x1800E48C0 (PfxRemovePrefix.c)
 * Callees:
 *     sub_180064CAC @ 0x180064CAC (sub_180064CAC.c)
 *     RtlSubtreePredecessor @ 0x180064DF0 (RtlSubtreePredecessor.c)
 */

_QWORD *__fastcall RtlDelete(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rdx

  result = (_QWORD *)a1[1];
  if ( result )
  {
    if ( a1[2] )
    {
      v3 = RtlSubtreePredecessor();
      sub_180064CAC(v3, a1);
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
      v5 = 1LL;
      if ( (_QWORD *)v4[1] != a1 )
        v5 = 2LL;
      v4[v5] = result;
      v6 = (_QWORD *)*a1;
      *result = *a1;
      return RtlSplay(v6);
    }
  }
  else
  {
    v7 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
    {
      return 0LL;
    }
    else
    {
      v8 = 1LL;
      if ( (_QWORD *)v7[1] != a1 )
        v8 = 2LL;
      v7[v8] = 0LL;
      return RtlSplay(v7);
    }
  }
  return result;
}
