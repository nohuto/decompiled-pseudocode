/*
 * XREFs of RtlEmptyAtomTable @ 0x180088600
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005B7E8 @ 0x18005B7E8 (sub_18005B7E8.c)
 *     sub_18005BFD4 @ 0x18005BFD4 (sub_18005BFD4.c)
 */

__int64 __fastcall RtlEmptyAtomTable(__int64 a1, char a2)
{
  unsigned int v4; // ebp
  __int64 *i; // r14
  __int64 *v6; // rsi
  __int64 v7; // rbx
  __int64 v9; // rdx

  if ( !sub_18005B7E8(a1) )
    return 3221225485LL;
  v4 = 0;
  for ( i = (__int64 *)(a1 + 72); v4 < *(_DWORD *)(a1 + 64); ++v4 )
  {
    v6 = i++;
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 )
        break;
      if ( a2 || (*(_BYTE *)(v7 + 14) & 1) == 0 )
      {
        v9 = *v6;
        *v6 = *(_QWORD *)v7;
        *(_QWORD *)v7 = 0LL;
        sub_18005BFD4(a1, v9);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
      }
      else
      {
        v6 = (__int64 *)*v6;
      }
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  return 0LL;
}
