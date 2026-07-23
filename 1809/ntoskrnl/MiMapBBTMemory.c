/*
 * XREFs of MiMapBBTMemory @ 0x1409BB008
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiObtainSystemVa @ 0x1400F69E4 (MiObtainSystemVa.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeZeroPages @ 0x1401C0A90 (KeZeroPages.c)
 */

unsigned __int64 __fastcall MiMapBBTMemory(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 *v7; // r12
  __int64 *v8; // r14
  unsigned __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // r9
  char v14; // r11
  bool v15; // zf
  unsigned __int64 v16; // rbx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  if ( !BBTPagesToReserve )
    return result;
  v3 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2784LL);
  if ( v4 )
    goto LABEL_27;
  result = MiObtainSystemVa(v3 >> 9, 9u);
  v4 = result;
  if ( !result )
  {
    BBTPagesToReserve = 0LL;
    goto LABEL_28;
  }
  v5 = (__int64 *)(((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = (__int64)&v5[v3 - 1];
  if ( !(unsigned int)MiMakeZeroedPageTablesEx((__int64)v5, v6, 0, 9) )
  {
    result = MiReturnSystemVa(v4, ((v6 << 25) + 0x10000000) >> 16, 9);
    v4 = 0LL;
    BBTPagesToReserve = 0LL;
    goto LABEL_28;
  }
  MiMakeValidPte(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL, -1610612732);
  v7 = (__int64 *)(a1 + 32);
  v3 = 0LL;
  v8 = *(__int64 **)(a1 + 32);
  if ( v8 == (__int64 *)(a1 + 32) )
  {
LABEL_25:
    if ( v3 < BBTPagesToReserve )
      BBTPagesToReserve = v3;
    goto LABEL_27;
  }
  while ( 2 )
  {
    if ( *((_DWORD *)v8 + 4) != 23 )
      goto LABEL_24;
    v9 = v8[4];
    v10 = v8[3];
    if ( v9 + v3 > BBTPagesToReserve )
      v9 = BBTPagesToReserve - v3;
    v3 += v9;
    do
    {
      if ( !MiPteInShadowRange((unsigned __int64)v5) )
        goto LABEL_20;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v12 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_20;
        v15 = (v14 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_20;
        v15 = (v14 & 1) == 0;
      }
      if ( !v15 )
        v11 |= v13;
LABEL_20:
      *v5 = v11;
      if ( v12 )
        MiWritePteShadow((__int64)v5, v11);
      ++v5;
      ++v10;
      --v9;
    }
    while ( v9 );
    if ( v3 != BBTPagesToReserve )
    {
LABEL_24:
      v8 = (__int64 *)*v8;
      if ( v8 == v7 )
        goto LABEL_25;
      continue;
    }
    break;
  }
LABEL_27:
  v16 = v3 << 12;
  result = KeZeroPages((__m128i *)v4, v16);
  *(_QWORD *)v4 = v16;
LABEL_28:
  BBTBuffer = v4;
  return result;
}
