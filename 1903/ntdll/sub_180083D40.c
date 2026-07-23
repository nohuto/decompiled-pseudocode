/*
 * XREFs of sub_180083D40 @ 0x180083D40
 * Callers:
 *     sub_180040320 @ 0x180040320 (sub_180040320.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180044B94 @ 0x180044B94 (sub_180044B94.c)
 *     sub_180046C60 @ 0x180046C60 (sub_180046C60.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_180083E00 @ 0x180083E00 (sub_180083E00.c)
 */

__int64 __fastcall sub_180083D40(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  int v7; // esi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rbx

  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
  v8 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v8 )
    v8 ^= a1 + 72;
  while ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v9 )
    {
      if ( a2 <= v9 )
        break;
      v10 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      v10 = *(_QWORD *)v8;
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v10 )
      v8 ^= v10;
    else
      v8 = v10;
  }
  if ( v8 )
    v11 = sub_180083E00(*(_BYTE *)(a1 + 80) & 1, v8, a4);
  else
    v11 = -1LL;
  if ( !v7 )
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
  return v11;
}
