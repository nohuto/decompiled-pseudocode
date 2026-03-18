/*
 * XREFs of MiMapBBTMemory @ 0x140A22F74
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiMakeZeroedPageTablesEx @ 0x14008D5B8 (MiMakeZeroedPageTablesEx.c)
 *     MiObtainSystemVa @ 0x1400AAF7C (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400AB840 (MiReturnSystemVa.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KeZeroPages @ 0x1401C7A10 (KeZeroPages.c)
 */

unsigned __int64 __fastcall MiMapBBTMemory(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // r15
  __int64 v8; // rbx
  __int64 *v9; // r12
  __int64 *v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rdx
  int v14; // r8d
  __int64 v15; // r9
  char v16; // r11
  bool v17; // zf
  unsigned __int64 v18; // rbx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  if ( !BBTPagesToReserve )
    return result;
  v5 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2808LL);
  if ( v6 )
    goto LABEL_27;
  result = MiObtainSystemVa(v5 >> 9, 9LL, a3);
  v6 = result;
  if ( !result )
  {
    BBTPagesToReserve = 0LL;
    goto LABEL_28;
  }
  v7 = (_QWORD *)(((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = (__int64)&v7[v5 - 1];
  if ( !(unsigned int)MiMakeZeroedPageTablesEx((__int64)v7, v8, 0, 9, 0) )
  {
    result = MiReturnSystemVa(v6, ((v8 << 25) + 0x10000000) >> 16, 9);
    v6 = 0LL;
    BBTPagesToReserve = 0LL;
    goto LABEL_28;
  }
  MiMakeValidPte(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL, -1610612732);
  v9 = (__int64 *)(a1 + 32);
  v5 = 0LL;
  v10 = *(__int64 **)(a1 + 32);
  if ( v10 == v9 )
  {
LABEL_25:
    if ( v5 < BBTPagesToReserve )
      BBTPagesToReserve = v5;
    goto LABEL_27;
  }
  while ( 2 )
  {
    if ( *((_DWORD *)v10 + 4) != 23 )
      goto LABEL_24;
    v11 = v10[4];
    v12 = v10[3];
    if ( v11 + v5 > BBTPagesToReserve )
      v11 = BBTPagesToReserve - v5;
    v5 += v11;
    do
    {
      if ( !MiPteInShadowRange((unsigned __int64)v7) )
        goto LABEL_20;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v14 = 1;
        if ( HIBYTE(word_140465BEC) )
          goto LABEL_20;
        v17 = (v16 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_20;
        v17 = (v16 & 1) == 0;
      }
      if ( !v17 )
        v13 |= v15;
LABEL_20:
      *v7 = v13;
      if ( v14 )
        MiWritePteShadow((__int64)v7);
      ++v7;
      ++v12;
      --v11;
    }
    while ( v11 );
    if ( v5 != BBTPagesToReserve )
    {
LABEL_24:
      v10 = (__int64 *)*v10;
      if ( v10 == v9 )
        goto LABEL_25;
      continue;
    }
    break;
  }
LABEL_27:
  v18 = v5 << 12;
  result = KeZeroPages((__m128i *)v6, v18);
  *(_QWORD *)v6 = v18;
LABEL_28:
  BBTBuffer = v6;
  return result;
}
