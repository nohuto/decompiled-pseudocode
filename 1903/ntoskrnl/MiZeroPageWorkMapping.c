/*
 * XREFs of MiZeroPageWorkMapping @ 0x140119504
 * Callers:
 *     MiPageListCollision @ 0x1401194A4 (MiPageListCollision.c)
 *     MiReleaseLargeZeroingVa @ 0x1402DB3F4 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiVaIsUltra @ 0x1400F5580 (MiVaIsUltra.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall MiZeroPageWorkMapping(unsigned int a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // r14
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rbp
  __int64 v9; // r8
  int v10; // r12d
  __int64 v11; // r9
  __int64 v12; // r13
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // r11
  unsigned __int64 i; // rcx
  __int64 v17; // r14
  _QWORD v18[24]; // [rsp+20h] [rbp-108h] BYREF

  v4 = a1;
  memset(v18, 0, 0xB8uLL);
  LODWORD(v18[1]) = 20;
  v8 = 0LL;
  v18[3] = 0LL;
  v9 = 1LL;
  v10 = 1;
  if ( (unsigned int)v4 <= 1 )
  {
    MiInsertLargeTbFlushEntry(v18, (unsigned int)(2 - v4), a2, v7);
    v9 = 1LL;
    v8 = 1LL;
  }
  v11 = 0xFFFFF68000000000uLL;
  if ( (a3 & 2) != 0 )
  {
    for ( i = a2; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    if ( MiVaIsUltra(i) )
    {
      v10 = 0;
    }
    else if ( (unsigned int)v4 > (unsigned int)v9 )
    {
      v10 = 0;
    }
  }
  if ( !v8 )
  {
    v12 = v11 << 25;
    v13 = (__int64)((a2 << 25) - (v11 << 25)) >> 16;
    if ( (_DWORD)v4 == 3 )
    {
      v8 = v9;
LABEL_7:
      MiInsertTbFlushEntry((__int64)v18, v13, v9, 0);
      goto LABEL_8;
    }
    v8 = MiLargePageSizes[v4];
    if ( (_DWORD)v4 == 2 )
    {
      v9 = MiLargePageSizes[v4];
      goto LABEL_7;
    }
    if ( (unsigned int)v4 <= (unsigned int)v9 )
    {
      v17 = (unsigned int)(2 - v4);
      do
      {
        MiInsertTbFlushEntry((__int64)v18, v13, v8, 0);
        v8 <<= 9;
        v13 = (__int64)((v13 << 25) - v12) >> 16;
        --v17;
      }
      while ( v17 );
    }
    v8 = 512LL;
  }
LABEL_8:
  if ( a2 < a2 + 8 * v8 )
  {
    do
    {
      if ( MiPteInShadowRange(a2) && (unsigned int)MiPteHasShadow(v14) )
        v6 = 1LL;
      *(_QWORD *)a2 = 0LL;
      if ( (_DWORD)v6 )
        MiWritePteShadow(a2, 0LL);
      a2 += 8LL;
    }
    while ( a2 < v15 );
  }
  if ( v10 )
    MiFlushTbList((int *)v18, v6, v9, v11);
}
