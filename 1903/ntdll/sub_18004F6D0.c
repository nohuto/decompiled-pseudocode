/*
 * XREFs of sub_18004F6D0 @ 0x18004F6D0
 * Callers:
 *     sub_180048170 @ 0x180048170 (sub_180048170.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_18004E0E4 @ 0x18004E0E4 (sub_18004E0E4.c)
 *     sub_18004E264 @ 0x18004E264 (sub_18004E264.c)
 *     sub_18004F808 @ 0x18004F808 (sub_18004F808.c)
 *     sub_18004FAA8 @ 0x18004FAA8 (sub_18004FAA8.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     sub_18010BBB0 @ 0x18010BBB0 (sub_18010BBB0.c)
 */

signed __int64 __fastcall sub_18004F6D0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rdi
  char *v7; // rax
  unsigned __int64 v8; // rbx
  char v9; // dl
  __int64 v10; // rsi
  char v11; // dl
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  signed __int64 result; // rax
  __int64 v16; // rbx

  v6 = *a3 >> 20;
  v7 = (char *)sub_18004F808(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = (unsigned __int64)v7;
  if ( !v7 )
  {
    v16 = sub_18010BBB0(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL, ~((*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL));
    result = ZwFreeVirtualMemory(-1LL, a2, a3, 0x8000LL);
    *(_QWORD *)(v16 + 24) -= *a3 >> 20;
    return result;
  }
  v9 = *v7;
  v10 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    *v7 = v9 & 0xFE;
    return sub_18004FAA8(v10, v8);
  }
  if ( (*(_BYTE *)(v10 + 46) & 6u) < 4 )
  {
    ZwFreeVirtualMemory(-1LL, a2, a3, 0x4000LL);
    v9 = *(_BYTE *)v8;
  }
  if ( (v9 & 2) != 0 )
  {
    v14 = v8;
    do
      v8 -= 32LL;
    while ( (*(_BYTE *)v8 & 2) != 0 );
  }
  else
  {
    v11 = v9 & 4;
    if ( ((*(_BYTE *)(v10 + 46) >> 4) & (v11 == 0)) == 0 )
    {
      v12 = v11 ? *(_QWORD *)(v8 + 24) : *(unsigned __int16 *)(v8 + 24);
      if ( v6 != v12 )
        __int2c();
    }
    if ( v11 )
      v13 = *(_QWORD *)(v8 + 24);
    else
      v13 = *(unsigned __int16 *)(v8 + 24);
    if ( v6 < v13 )
      v14 = v8 + 32 * v6;
    else
      v14 = 0LL;
  }
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)v10);
  if ( v14 )
    sub_18004E264(v10, v8, (__int64)(v14 - v8) >> 5);
  v8 = sub_18004E0E4(v10);
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)v10);
  if ( v8 )
    return sub_18004FAA8(v10, v8);
  return result;
}
