/*
 * XREFs of ?InjectKeyEvent@KeyboardOverriderDispatcher@@UEAAJGG@Z @ 0x1800C06F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardOverriderDispatcher::InjectKeyEvent(
        KeyboardOverriderDispatcher *this,
        unsigned __int16 a2,
        __int16 a3)
{
  char v3; // bl
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int16 v8; // r8
  _OWORD *v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v26; // [rsp+180h] [rbp+80h]
  _WORD v27[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int16 v28; // [rsp+1A4h] [rbp+A4h]
  __int128 v29; // [rsp+1A6h] [rbp+A6h]
  __int16 v30; // [rsp+1B6h] [rbp+B6h]
  __int128 v31; // [rsp+1B8h] [rbp+B8h]

  v3 = a2;
  if ( a2 != 1 && (a2 <= 3u || a2 > 5u) )
    return 2147942487LL;
  v27[1] = a3;
  v6 = 0LL;
  v27[0] = -2;
  v7 = (__int64 *)*((_QWORD *)this + 3);
  v30 = 0;
  v8 = 128;
  v28 = 128;
  v29 = 0LL;
  if ( v7 )
    v6 = *v7;
  v9 = *(_OWORD **)(*(_QWORD *)(v6 + 8) + 8 * (*((_QWORD *)this + 6) & (*(_QWORD *)(v6 + 16) - 1LL)));
  v10 = &v25;
  v11 = 2LL;
  do
  {
    v12 = v9[1];
    *(_OWORD *)v10 = *v9;
    v13 = v9[2];
    *((_OWORD *)v10 + 1) = v12;
    v14 = v9[3];
    *((_OWORD *)v10 + 2) = v13;
    v15 = v9[4];
    *((_OWORD *)v10 + 3) = v14;
    v16 = v9[5];
    *((_OWORD *)v10 + 4) = v15;
    v17 = v9[6];
    *((_OWORD *)v10 + 5) = v16;
    v18 = v9[7];
    v9 += 8;
    *((_OWORD *)v10 + 6) = v17;
    v10 += 16;
    *((_OWORD *)v10 - 1) = v18;
    --v11;
  }
  while ( v11 );
  v19 = v9[1];
  *(_OWORD *)v10 = *v9;
  v20 = v9[2];
  *((_OWORD *)v10 + 1) = v19;
  v21 = v9[3];
  *((_OWORD *)v10 + 2) = v20;
  v22 = v9[4];
  *((_OWORD *)v10 + 3) = v21;
  v23 = v9[5];
  *((_OWORD *)v10 + 4) = v22;
  v24 = v9[6];
  *((_OWORD *)v10 + 5) = v23;
  *((_OWORD *)v10 + 6) = v24;
  v31 = v26;
  if ( (v3 & 1) != 0 )
  {
    NtMITSynthesizeKeyboardInput(8LL, v27, v25);
    v8 = v28;
  }
  if ( (v3 & 4) != 0 )
  {
    v28 = v8 | 1;
    NtMITSynthesizeKeyboardInput(8LL, v27, v25);
  }
  return 0LL;
}
