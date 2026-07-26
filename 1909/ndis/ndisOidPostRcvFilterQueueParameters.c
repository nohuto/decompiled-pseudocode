/*
 * XREFs of ndisOidPostRcvFilterQueueParameters @ 0x1C005F990
 * Callers:
 *     <none>
 * Callees:
 *     ndisUpdateRcvFilterQueueParameters @ 0x1C0061628 (ndisUpdateRcvFilterQueueParameters.c)
 */

__int64 __fastcall ndisOidPostRcvFilterQueueParameters(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = a1[4];
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    result = *a1;
    if ( *a1 )
    {
      if ( !*((_DWORD *)a1 + 10) )
        return ndisUpdateRcvFilterQueueParameters(*a1, *(_QWORD *)(v3 + 40), a3);
    }
  }
  return result;
}
