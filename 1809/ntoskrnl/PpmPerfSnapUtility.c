/*
 * XREFs of PpmPerfSnapUtility @ 0x140104800
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x140104750 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmPerfSnapUtility(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 v3; // r11
  __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  int v9; // esi
  unsigned int v10; // r10d
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax

  v1 = *(_QWORD *)(a1 + 24168);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 168) - *(_QWORD *)(v1 + 80);
    v4 = *(_QWORD *)(v1 + 120) - *(_QWORD *)(v1 + 32);
    v5 = *(_QWORD *)(v1 + 128) - *(_QWORD *)(v1 + 40);
    v6 = v5;
    if ( !v5 )
      v6 = 1LL;
    v7 = (*(_QWORD *)(v1 + 152) - *(_QWORD *)(v1 + 64)) / v6;
    v8 = *(_QWORD *)(v1 + 168) - *(_QWORD *)(v1 + 80);
    v9 = v7;
    if ( !v3 )
      v8 = 1LL;
    v10 = (unsigned __int8)(100LL * (*(_QWORD *)(v1 + 176) - *(_QWORD *)(v1 + 88)) / v8);
    if ( v10 > 0x64 )
      LOWORD(v10) = 100;
    if ( !(_DWORD)v7 )
      v9 = *(_DWORD *)(a1 + 24232);
    v11 = *(_QWORD *)(v1 + 168) - *(_QWORD *)(v1 + 80);
    if ( !v3 )
      v11 = 1LL;
    v12 = 100LL * (*(_QWORD *)(v1 + 184) - *(_QWORD *)(v1 + 96)) / v11;
    if ( (unsigned __int8)v12 > 0x64u )
      LOBYTE(v12) = 100;
    *(_BYTE *)(v1 + 304) = v12;
    if ( !v3 )
      v3 = 1LL;
    v13 = 100LL * (*(_QWORD *)(v1 + 192) - *(_QWORD *)(v1 + 104)) / v3;
    if ( (unsigned __int8)v13 > 0x64u )
      LOBYTE(v13) = 100;
    *(_BYTE *)(v1 + 305) = v13;
    v14 = *(_QWORD *)(a1 + 24184);
    *(_DWORD *)(a1 + 24232) = v9;
    *(_WORD *)(a1 + 24230) = v10;
    if ( v14 )
    {
      v15 = v5;
      if ( !v5 )
        v15 = 1LL;
      v16 = (*(_QWORD *)(v1 + 144) - *(_QWORD *)(v1 + 56)) / v15;
      if ( !(_DWORD)v16 )
        LODWORD(v16) = *(_DWORD *)(v14 + 116);
      *(_DWORD *)(v14 + 116) = v16;
    }
    *(_OWORD *)(v1 + 32) = *(_OWORD *)(v1 + 120);
    *(_OWORD *)(v1 + 48) = *(_OWORD *)(v1 + 136);
    *(_OWORD *)(v1 + 64) = *(_OWORD *)(v1 + 152);
    *(_OWORD *)(v1 + 80) = *(_OWORD *)(v1 + 168);
    *(_OWORD *)(v1 + 96) = *(_OWORD *)(v1 + 184);
    *(_QWORD *)(v1 + 112) = *(_QWORD *)(v1 + 200);
    *(_QWORD *)(a1 + 24264) += v5;
    *(_QWORD *)(a1 + 24272) += v4;
  }
}
