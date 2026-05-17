/*
 * XREFs of RtlSubtreePredecessor @ 0x18006CA10
 * Callers:
 *     RtlDeleteNoSplay @ 0x18006C260 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x18006C830 (RtlDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSubtreePredecessor(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rcx

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    for ( i = *(_QWORD *)(result + 16); i; i = *(_QWORD *)(i + 16) )
      result = i;
  }
  return result;
}
