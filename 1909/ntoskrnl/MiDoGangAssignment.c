/*
 * XREFs of MiDoGangAssignment @ 0x1402E81BC
 * Callers:
 *     MiDpcGangTarget @ 0x1402E8320 (MiDpcGangTarget.c)
 *     MiStartDpcGang @ 0x1402E86DC (MiStartDpcGang.c)
 * Callees:
 *     MiInitializeUnusablePfns @ 0x140188FE4 (MiInitializeUnusablePfns.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1401C8590 (KeZeroPages.c)
 *     RtlCompareMemoryUlong @ 0x1401CCDF0 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiFreeLargePages @ 0x1402DF674 (MiFreeLargePages.c)
 *     MiInitializeLargeLeafPfns @ 0x1402DFB50 (MiInitializeLargeLeafPfns.c)
 */

void __fastcall MiDoGangAssignment(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 *v4; // rcx
  __m128i *v5; // rsi
  ULONG_PTR v6; // r14
  unsigned __int64 v7; // rbp
  int i; // r15d
  int v9; // eax
  SIZE_T v10; // rax
  unsigned __int64 v11; // rcx

  v2 = *(_DWORD *)(a1 + 108);
  if ( (v2 & 1) != 0 )
  {
    v5 = *(__m128i **)(a2 + 16);
    v6 = *(_QWORD *)a2;
    v7 = *(_QWORD *)(a2 + 8);
    for ( i = *(_DWORD *)(a2 + 24); v7; i = 0 )
    {
      if ( v5 )
      {
        v9 = *(_DWORD *)(a1 + 108);
        if ( (v9 & 8) != 0 )
        {
          KeZeroPages(v5, v7 << 12);
        }
        else if ( (v9 & 0x10) != 0 )
        {
          memset(v5, -1, v7 << 12);
        }
        else if ( (v9 & 0x20) != 0 )
        {
          v10 = RtlCompareMemoryUlong(v5, v7 << 12, 0);
          if ( v10 != v7 << 12 )
            KeBugCheckEx(0x127u, (ULONG_PTR)v5, v6, v10, v7 << 12);
        }
      }
      if ( (*(_DWORD *)(a1 + 108) & 4) != 0 )
        MiInitializeUnusablePfns(
          (_OWORD *)(48 * v6 - 0x58000000000LL),
          v7,
          *(_WORD *)(a1 + 96),
          *(_DWORD *)(a1 + 104),
          0LL,
          0LL,
          0);
      if ( !i )
        break;
      v7 = *(_QWORD *)(a1 + 24);
      v11 = *(_QWORD *)(a1 + 8) - v7;
      v6 = v11 + *(_QWORD *)a1;
      if ( v5 )
        v5 = (__m128i *)(*(_QWORD *)(a1 + 88) + (v11 << 12));
    }
  }
  else
  {
    v4 = *(__int64 **)a2;
    if ( *(_QWORD *)a2 )
    {
      if ( (v2 & 0x40) != 0 )
        MiInitializeLargeLeafPfns((_QWORD *)*v4, *(_QWORD *)(a1 + 8));
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)a1, MiFreeLargePages(v4));
    }
  }
}
