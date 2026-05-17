/*
 * XREFs of RtlResetRtlTranslations @ 0x1800E3890
 * Callers:
 *     sub_1800D24F8 @ 0x1800D24F8 (sub_1800D24F8.c)
 * Callees:
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall RtlResetRtlTranslations(__int64 a1)
{
  __int64 v2; // rsi
  _OWORD *v3; // rcx
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm1
  __int16 *v7; // rcx
  bool v8; // zf
  __int64 v9; // rax
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  bool v15; // di
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 64) == 0xFDE9 || *(_WORD *)a1 == 0xFDE9 )
  {
    v15 = 0;
    NlsAnsiCodePage = -535;
    NlsMbCodePageTag = 0;
    v12 = 0LL;
    qword_180166540 = 0LL;
    v13 = 0LL;
    qword_180166530 = 0LL;
    v14 = 0LL;
    qword_180166528 = 0LL;
    qword_180166950 = 0LL;
    byte_180162797 = 1;
    byte_180162796 = 1;
  }
  else
  {
    v2 = 4LL;
    NlsAnsiCodePage = *(_WORD *)(a1 + 64);
    v3 = word_180163EE0;
    if ( *(_WORD *)(a1 + 76) )
    {
      v4 = *(_OWORD **)(a1 + 120);
      v5 = 4LL;
      do
      {
        *v3 = *v4;
        v3[1] = v4[1];
        v3[2] = v4[2];
        v3[3] = v4[3];
        v3[4] = v4[4];
        v3[5] = v4[5];
        v3[6] = v4[6];
        v3 += 8;
        v6 = v4[7];
        v4 += 8;
        *(v3 - 1) = v6;
        --v5;
      }
      while ( v5 );
    }
    else
    {
      memset(word_180163EE0, 0, sizeof(word_180163EE0));
    }
    v7 = word_1801640E0;
    v8 = *(_WORD *)(a1 + 76) == 0;
    qword_180166540 = *(_QWORD *)(a1 + 120);
    qword_180166530 = *(_QWORD *)(a1 + 96);
    v9 = *(_QWORD *)(a1 + 104);
    NlsMbCodePageTag = !v8;
    qword_180166528 = v9;
    qword_180166950 = v9;
    byte_180162797 = 0;
    if ( *(_WORD *)(a1 + 12) )
    {
      v10 = *(_OWORD **)(a1 + 56);
      do
      {
        *(_OWORD *)v7 = *v10;
        *((_OWORD *)v7 + 1) = v10[1];
        *((_OWORD *)v7 + 2) = v10[2];
        *((_OWORD *)v7 + 3) = v10[3];
        *((_OWORD *)v7 + 4) = v10[4];
        *((_OWORD *)v7 + 5) = v10[5];
        *((_OWORD *)v7 + 6) = v10[6];
        v7 += 64;
        v11 = v10[7];
        v10 += 8;
        *((_OWORD *)v7 - 1) = v11;
        --v2;
      }
      while ( v2 );
    }
    else
    {
      memset(word_1801640E0, 0, sizeof(word_1801640E0));
    }
    v8 = *(_WORD *)(a1 + 12) == 0;
    v12 = *(_QWORD *)(a1 + 40);
    v13 = *(_QWORD *)(a1 + 32);
    v14 = *(_QWORD *)(a1 + 56);
    byte_180162796 = 0;
    v15 = !v8;
  }
  NlsMbOemCodePageTag = v15;
  qword_180166548 = v12;
  qword_180166948 = v12;
  word_180162794 = *(_WORD *)(a1 + 4);
  word_1801627D0 = *(_WORD *)(a1 + 8);
  qword_180166510 = *(_QWORD *)(a1 + 128);
  result = *(_QWORD *)(a1 + 136);
  qword_180166520 = result;
  qword_180166940 = v14;
  qword_180166538 = v13;
  return result;
}
