/*
 * XREFs of RaspTestIntersection @ 0x14017B1B0
 * Callers:
 *     RaspScanConvert @ 0x14017AD50 (RaspScanConvert.c)
 * Callees:
 *     BgpFmSqrt @ 0x14017B4E0 (BgpFmSqrt.c)
 */

__int64 __fastcall RaspTestIntersection(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r10
  _DWORD *v6; // rsi
  _DWORD *v7; // rcx
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rbx
  __int64 result; // rax
  char v18; // dl
  bool v19; // cc
  _DWORD *v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r14
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rbx
  __int128 v29; // rax
  __int64 v30; // r11
  bool v31; // cc
  __int128 v32; // rax
  __int128 v33; // rax
  __int64 v34; // [rsp+60h] [rbp+8h]

  v4 = *(_DWORD **)a1;
  v6 = *(_DWORD **)(a1 + 8);
  v7 = *(_DWORD **)(a1 + 16);
  v8 = a2;
  v9 = *v4 + v4[2];
  v10 = v4[1] + v4[3];
  v11 = v6[1] + v6[3];
  v34 = *v7 + v7[2];
  v12 = v9 << 16;
  v13 = (__int64)(v7[1] + v7[3]) << 16;
  v14 = v10 << 16;
  v15 = v11 << 16;
  v16 = v34 << 16;
  result = (__int64)a2 << 16;
  if ( v10 << 16 == v13 )
  {
    if ( v14 == result )
      goto LABEL_11;
  }
  else if ( v14 == result )
  {
LABEL_37:
    v18 = *(_BYTE *)(a1 + 24);
    ++result;
    goto LABEL_7;
  }
  if ( v13 == result )
    goto LABEL_37;
  v18 = *(_BYTE *)(a1 + 24);
  if ( v18 != 1 && v15 == result )
  {
    v18 = *(_BYTE *)(a1 + 24);
    ++result;
  }
LABEL_7:
  if ( v18 == 1 )
  {
    *a4 = 0x7FFFFFFF;
    v31 = v14 < result;
    if ( v14 > result )
    {
      if ( v13 > result )
        goto LABEL_28;
      v31 = v14 < result;
    }
    if ( !v31 || v13 >= result )
    {
      v32 = v12 + (v16 - v12) * (result - v14) / (v13 - v14);
      result = (__int64)(WORD4(v32) + (_QWORD)v32) >> 16;
      *a3 = result;
      return result;
    }
LABEL_28:
    *a3 = 0x7FFFFFFF;
    return result;
  }
  v19 = v14 < result;
  if ( v14 > result )
  {
    if ( v13 > result && v15 > result )
      goto LABEL_11;
    v19 = v14 < result;
  }
  if ( v19 && v15 < result && v13 < result )
    goto LABEL_11;
  if ( !(v14 + v13 - ((__int64)(v6[1] + v6[3]) << 17)) )
  {
    v20 = a4;
    v33 = v12 + (v16 - v12) * (result - v14) / (v13 - v14);
    result = (__int64)(WORD4(v33) + (_QWORD)v33) >> 16;
    *a3 = result;
    goto LABEL_12;
  }
  v21 = *v6 + v6[2];
  result = 2 * v11;
  v22 = v10 + v7[1] + v7[3] - 2 * v11;
  v23 = 2 * (v11 - v10);
  v24 = v23 * v23 - 4 * v22 * (v10 - v8);
  if ( v24 < 0 )
  {
LABEL_11:
    v20 = a4;
    *a3 = 0x7FFFFFFF;
LABEL_12:
    *v20 = 0x7FFFFFFF;
    return result;
  }
  v25 = BgpFmSqrt(v24);
  v26 = -65536 * v23;
  v27 = (v26 + v25) / (2 * v22);
  v28 = (v26 - v25) / (2 * v22);
  v29 = (__int64)(v34 * v27 * v27 + (0x10000 - v27) * (v9 * (0x10000 - v27) + 2 * v21 * v27));
  *(_QWORD *)&v29 = DWORD2(v29) + (_QWORD)v29;
  v30 = (__int64)v29 >> 32;
  *a3 = DWORD1(v29);
  v20 = a4;
  result = (__int64)(v34 * v28 * v28 + (0x10000 - v28) * (v9 * (0x10000 - v28) + 2 * v21 * v28)) / 0x100000000LL;
  *a4 = result;
  if ( v27 > 0x10000 )
  {
    *a3 = 0x7FFFFFFF;
    LODWORD(v30) = 0x7FFFFFFF;
  }
  if ( v28 > 0x10000 )
  {
    *a4 = 0x7FFFFFFF;
    result = 0x7FFFFFFFLL;
  }
  if ( (int)v30 > (int)result )
  {
    *a3 = result;
    *a4 = v30;
    return result;
  }
  if ( (_DWORD)v30 == (_DWORD)result )
    goto LABEL_12;
  return result;
}
