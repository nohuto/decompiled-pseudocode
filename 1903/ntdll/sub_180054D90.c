/*
 * XREFs of sub_180054D90 @ 0x180054D90
 * Callers:
 *     LdrFindEntryForAddress @ 0x180054D40 (LdrFindEntryForAddress.c)
 *     sub_1800D89D0 @ 0x1800D89D0 (sub_1800D89D0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_180054D90(unsigned __int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax

  RtlAcquireSRWLockExclusive(&qword_1801660B0);
  v6 = qword_1801662C8;
  if ( (qword_1801662D0 & 1) != 0 && qword_1801662C8 )
    v6 = (unsigned __int64)&qword_1801662C8 ^ qword_1801662C8;
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 - 152);
    if ( a1 >= v7 )
    {
      if ( a1 < v7 + *(unsigned int *)(v6 - 136) )
      {
        v10 = v6 - 200;
        v11 = *(_QWORD *)(v6 - 200 + 152);
        if ( *(_DWORD *)(v11 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v11 - 56LL) & 0x20) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 276));
        *a2 = v10;
        if ( a3 )
          *a3 = *(_DWORD *)(*(_QWORD *)(v10 + 152) + 56LL);
        break;
      }
      v8 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v6;
    }
    if ( (qword_1801662D0 & 1) != 0 && v8 )
      v6 ^= v8;
    else
      v6 = v8;
  }
  RtlReleaseSRWLockExclusive(&qword_1801660B0);
  return v6 == 0 ? 0xC0000135 : 0;
}
