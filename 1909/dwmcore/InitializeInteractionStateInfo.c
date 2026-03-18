/*
 * XREFs of InitializeInteractionStateInfo @ 0x1800AC344
 * Callers:
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800AC188 (--0CInteractionProcessor@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

_OWORD *__fastcall InitializeInteractionStateInfo(__int64 a1)
{
  _OWORD *v2; // rdx
  _OWORD *result; // rax
  __int64 v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  _BYTE v14[120]; // [rsp+20h] [rbp-1D8h] BYREF
  int v15; // [rsp+98h] [rbp-160h]
  int v16; // [rsp+DCh] [rbp-11Ch]
  int v17; // [rsp+120h] [rbp-D8h]
  int v18; // [rsp+164h] [rbp-94h]
  int v19; // [rsp+1A8h] [rbp-50h]
  int v20; // [rsp+1ECh] [rbp-Ch]

  memset_0(v14, 0, 0x38uLL);
  v2 = v14;
  v15 = 0;
  result = (_OWORD *)a1;
  v16 = 0;
  v17 = 0;
  v4 = 3LL;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  do
  {
    v5 = v2[1];
    *result = *v2;
    v6 = v2[2];
    result[1] = v5;
    v7 = v2[3];
    result[2] = v6;
    v8 = v2[4];
    result[3] = v7;
    v9 = v2[5];
    result[4] = v8;
    v10 = v2[6];
    result[5] = v9;
    v11 = v2[7];
    v2 += 8;
    result[6] = v10;
    result += 8;
    *(result - 1) = v11;
    --v4;
  }
  while ( v4 );
  v12 = v2[1];
  *result = *v2;
  result[1] = v12;
  v13 = v2[3];
  result[2] = v2[2];
  result[3] = v13;
  result[4] = v2[4];
  *(_BYTE *)(a1 + 24) &= 0xC0u;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 56) = _xmm;
  *(_WORD *)(a1 + 120) = 32085;
  *(_OWORD *)(a1 + 72) = _xmm;
  *(_OWORD *)(a1 + 88) = _xmm;
  *(_OWORD *)(a1 + 104) = _xmm;
  *(_WORD *)(a1 + 188) = 32085;
  *(_OWORD *)(a1 + 124) = _xmm;
  *(_OWORD *)(a1 + 140) = _xmm;
  *(_OWORD *)(a1 + 156) = _xmm;
  *(_OWORD *)(a1 + 172) = _xmm;
  *(_WORD *)(a1 + 256) = 32085;
  *(_OWORD *)(a1 + 192) = _xmm;
  *(_OWORD *)(a1 + 208) = _xmm;
  *(_OWORD *)(a1 + 224) = _xmm;
  *(_OWORD *)(a1 + 240) = _xmm;
  *(_WORD *)(a1 + 324) = 32085;
  *(_OWORD *)(a1 + 260) = _xmm;
  *(_OWORD *)(a1 + 276) = _xmm;
  *(_OWORD *)(a1 + 292) = _xmm;
  *(_OWORD *)(a1 + 308) = _xmm;
  *(_WORD *)(a1 + 392) = 32085;
  *(_OWORD *)(a1 + 328) = _xmm;
  *(_OWORD *)(a1 + 344) = _xmm;
  *(_OWORD *)(a1 + 360) = _xmm;
  *(_OWORD *)(a1 + 376) = _xmm;
  *(_WORD *)(a1 + 460) = 32085;
  *(_OWORD *)(a1 + 396) = _xmm;
  *(_OWORD *)(a1 + 412) = _xmm;
  *(_OWORD *)(a1 + 428) = _xmm;
  *(_OWORD *)(a1 + 444) = _xmm;
  return result;
}
