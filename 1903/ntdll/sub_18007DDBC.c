/*
 * XREFs of sub_18007DDBC @ 0x18007DDBC
 * Callers:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_1800558E4 @ 0x1800558E4 (sub_1800558E4.c)
 * Callees:
 *     sub_180025164 @ 0x180025164 (sub_180025164.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18007DDBC(void *a1, _QWORD *a2)
{
  _UNKNOWN **v4; // rax
  _UNKNOWN **v5; // rbx
  _UNKNOWN ***v6; // rax
  _QWORD *v7; // rcx

  if ( !a2 )
    RtlAcquireSRWLockExclusive(&stru_1801661B8);
  v4 = sub_180025164(a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = (_UNKNOWN ***)*v4;
    if ( v6[1] != v5 || (v7 = v5[1], (_UNKNOWN **)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = (_UNKNOWN **)v7;
    _bittestandreset((signed __int32 *)BitMapHeader.Buffer, *((_DWORD *)v5 + 16));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&stru_1801661B8);
  if ( !v5 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v5;
  else
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0LL;
}
