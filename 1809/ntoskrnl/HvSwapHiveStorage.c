/*
 * XREFs of HvSwapHiveStorage @ 0x1407F8624
 * Callers:
 *     CmpSwapHiveStorage @ 0x1407F7B00 (CmpSwapHiveStorage.c)
 * Callees:
 *     HvpSwapDual @ 0x1407F94C4 (HvpSwapDual.c)
 */

__int64 __fastcall HvSwapHiveStorage(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // r11
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edx
  __int128 v15; // xmm3
  __int128 v16; // xmm4
  __int128 v17; // xmm5
  __int64 v18; // xmm2_8
  __int64 v19; // rsi
  __int64 v20; // rbp
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 16) = v9;
  v10 = 2LL;
  *(_QWORD *)(a2 + 8) = v2;
  *(_QWORD *)(a2 + 24) = v4;
  *(_QWORD *)(a2 + 32) = v6;
  *(_QWORD *)(a2 + 40) = v7;
  *(_QWORD *)(a2 + 48) = v8;
  v11 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 64) = v11;
  LODWORD(v11) = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(a2 + 108) = v11;
  v12 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 96) = v12;
  LODWORD(v12) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a2 + 88) = v12;
  LODWORD(v12) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(a2 + 104) = v12;
  v13 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a2 + 120) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(a2 + 112) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a2 + 128) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(a2 + 132) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(a2 + 136) = v13;
  LOBYTE(v13) = *(_BYTE *)(a1 + 140);
  *(_BYTE *)(a1 + 140) = v13 ^ (v13 ^ *(_BYTE *)(a2 + 140)) & 1;
  *(_BYTE *)(a2 + 140) ^= (v13 ^ *(_BYTE *)(a2 + 140)) & 1;
  LOBYTE(v13) = *(_BYTE *)(a1 + 140);
  *(_BYTE *)(a1 + 140) = v13 ^ (v13 ^ *(_BYTE *)(a2 + 140)) & 2;
  *(_BYTE *)(a2 + 140) ^= (v13 ^ *(_BYTE *)(a2 + 140)) & 2;
  LOBYTE(v13) = *(_BYTE *)(a1 + 141);
  *(_BYTE *)(a1 + 141) = *(_BYTE *)(a2 + 141);
  *(_BYTE *)(a2 + 141) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(a2 + 144) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 148);
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(a2 + 148) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(a2 + 152) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 156);
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(a2 + 156) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 160) = v13 & 0xFFE07FEC;
  v14 = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(a2 + 160) = v14 ^ (v13 ^ v14) & 0x1F8013;
  *(_DWORD *)(a1 + 160) |= v14 & 0x1F8013;
  v15 = *(_OWORD *)(a1 + 216);
  v16 = *(_OWORD *)(a1 + 232);
  v17 = *(_OWORD *)(a1 + 248);
  v18 = *(_QWORD *)(a1 + 264);
  *(_OWORD *)(a1 + 216) = *(_OWORD *)(a2 + 216);
  *(_OWORD *)(a1 + 232) = *(_OWORD *)(a2 + 232);
  *(_OWORD *)(a1 + 248) = *(_OWORD *)(a2 + 248);
  *(_QWORD *)(a1 + 264) = *(_QWORD *)(a2 + 264);
  v19 = a1 + 272;
  *(_OWORD *)(a2 + 216) = v15;
  *(_OWORD *)(a2 + 232) = v16;
  *(_OWORD *)(a2 + 248) = v17;
  *(_QWORD *)(a2 + 264) = v18;
  v20 = a2 - v19;
  do
  {
    result = HvpSwapDual(v19, v19 + v20 + 272);
    v19 += 632LL;
    --v10;
  }
  while ( v10 );
  return result;
}
