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

void __fastcall sub_18004F6D0(__int64 a1, PVOID *a2, ULONG_PTR *a3)
{
  ULONG_PTR v6; // rdi
  char *v7; // rax
  __int64 v8; // rbx
  char v9; // dl
  __int64 v10; // rsi
  char v11; // dl
  __int64 v12; // rax
  ULONG_PTR v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx

  v6 = *a3 >> 20;
  v7 = (char *)sub_18004F808(a1 + 16, ((unsigned __int64)*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = (__int64)v7;
  if ( !v7 )
  {
    v15 = sub_18010BBB0(
            a1 + 16,
            ((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
            ~(((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, 0x8000u);
    *(_QWORD *)(v15 + 24) -= *a3 >> 20;
    return;
  }
  v9 = *v7;
  v10 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    *v7 = v9 & 0xFE;
LABEL_20:
    sub_18004FAA8(v10, v8);
    return;
  }
  if ( (*(_BYTE *)(v10 + 46) & 6u) < 4 )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, 0x4000u);
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
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v10);
  if ( v14 )
    sub_18004E264(v10, v8, (v14 - v8) >> 5);
  v8 = sub_18004E0E4(v10);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v10);
  if ( v8 )
    goto LABEL_20;
}
