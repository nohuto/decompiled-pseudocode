/*
 * XREFs of MiZeroPageWorkMapping @ 0x1401213F4
 * Callers:
 *     MiPageListCollision @ 0x140121394 (MiPageListCollision.c)
 *     MiReleaseLargeZeroingVa @ 0x1402C1E50 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiVaIsUltra @ 0x1400EA674 (MiVaIsUltra.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiZeroPageWorkMapping(unsigned int a1, __int64 a2, char a3)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r8
  int v8; // r13d
  __int64 v9; // r9
  __int64 v10; // r14
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r11
  unsigned __int64 i; // rcx
  __int64 v14; // rbx
  __int64 v15; // r15
  unsigned __int64 v16; // [rsp+28h] [rbp-B1h]
  int v17; // [rsp+30h] [rbp-A9h] BYREF
  __int16 v18; // [rsp+34h] [rbp-A5h]
  __int64 v19; // [rsp+38h] [rbp-A1h]
  __int64 v20; // [rsp+40h] [rbp-99h]
  __int64 v21; // [rsp+48h] [rbp-91h]

  v16 = a2;
  v4 = a1;
  v5 = a2;
  v19 = 20LL;
  v6 = 0LL;
  v17 = 0;
  v7 = 1LL;
  v18 = 0;
  v20 = 0LL;
  v8 = 1;
  v21 = 0LL;
  if ( a1 <= 1 )
  {
    MiInsertLargeTbFlushEntry(&v17, 2 - a1, a2);
    v7 = 1LL;
    v6 = 1LL;
  }
  v9 = 0xFFFFF68000000000uLL;
  if ( (a3 & 2) != 0 )
  {
    for ( i = v5; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    if ( MiVaIsUltra(i) )
    {
      v8 = 0;
    }
    else if ( (unsigned int)v4 > (unsigned int)v7 )
    {
      v8 = 0;
    }
  }
  if ( !v6 )
  {
    v10 = v9 << 25;
    v11 = (__int64)((v5 << 25) - (v9 << 25)) >> 16;
    if ( (_DWORD)v4 == 3 )
    {
      v6 = v7;
LABEL_7:
      MiInsertTbFlushEntry((__int64)&v17, v11, v7, 0);
      goto LABEL_8;
    }
    if ( (_DWORD)v4 == 2 )
    {
      v6 = MiLargePageSizes[v4];
      v7 = v6;
      goto LABEL_7;
    }
    a2 = MiLargePageSizes[v4];
    if ( (unsigned int)v4 <= (unsigned int)v7 )
    {
      v14 = MiLargePageSizes[v4];
      v15 = (unsigned int)(2 - v4);
      do
      {
        MiInsertTbFlushEntry((__int64)&v17, v11, v14, 0);
        v14 <<= 9;
        v11 = (__int64)((v11 << 25) - v10) >> 16;
        --v15;
      }
      while ( v15 );
      v5 = v16;
    }
    v6 = 512LL;
  }
LABEL_8:
  if ( v5 < v5 + 8 * v6 )
  {
    do
    {
      if ( MiPteInShadowRange(v5) && (unsigned int)MiPteHasShadow() )
        a2 = 1LL;
      *(_QWORD *)v5 = 0LL;
      if ( (_DWORD)a2 )
        MiWritePteShadow(v5, 0LL);
      v5 += 8LL;
    }
    while ( v5 < v12 );
  }
  if ( v8 )
    MiFlushTbList(&v17, a2, v7, v9);
}
