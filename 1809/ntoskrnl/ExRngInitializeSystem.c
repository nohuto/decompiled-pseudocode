/*
 * XREFs of ExRngInitializeSystem @ 0x1409DA0AC
 * Callers:
 *     KiInitializeBootStructures @ 0x140570E10 (KiInitializeBootStructures.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 ExRngInitializeSystem()
{
  _OWORD *v0; // r8
  unsigned int v1; // r9d
  __int64 v2; // rdi
  __int64 v3; // r10
  __int64 v4; // rax
  __int128 *v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int64 result; // rax
  _OWORD v32[14]; // [rsp+20h] [rbp-F8h] BYREF

  v0 = &ExpLFGRngState;
  v1 = 220;
  ExpLFGRngLock = 0LL;
  v2 = *(_QWORD *)(KeLoaderBlock_0 + 240);
  v3 = 2LL;
  do
  {
    v4 = v1;
    v1 += 220;
    v5 = (__int128 *)(v4 + v2 + 1400);
    v6 = v5[1];
    v32[0] = *v5;
    v7 = v5[2];
    v32[1] = v6;
    v8 = v5[3];
    v32[2] = v7;
    v9 = v5[4];
    v32[3] = v8;
    v10 = v5[5];
    v32[4] = v9;
    v11 = v5[6];
    v32[5] = v10;
    v12 = v5[7];
    v5 += 8;
    v32[6] = v11;
    v13 = *((_QWORD *)v5 + 10);
    v14 = *v5;
    v32[7] = v12;
    v15 = v5[1];
    v32[8] = v14;
    v16 = v5[2];
    v32[9] = v15;
    v17 = v5[3];
    v32[10] = v16;
    v18 = v5[4];
    v32[11] = v17;
    v32[12] = v18;
    *(_QWORD *)&v32[13] = v13;
    DWORD2(v32[13]) = *((_DWORD *)v5 + 22);
    v19 = v32[1];
    *v0 = v32[0];
    v20 = v32[2];
    v0[1] = v19;
    v21 = v32[3];
    v0[2] = v20;
    v22 = v32[4];
    v0[3] = v21;
    v23 = v32[5];
    v0[4] = v22;
    v24 = v32[6];
    v0[5] = v23;
    v25 = v32[7];
    v0[6] = v24;
    v0[7] = v25;
    v26 = *(_QWORD *)&v32[13];
    v27 = v32[9];
    v0[8] = v32[8];
    v28 = v32[10];
    v0[9] = v27;
    v29 = v32[11];
    v0[10] = v28;
    v30 = v32[12];
    v0[11] = v29;
    v0[12] = v30;
    *((_QWORD *)v0 + 26) = v26;
    *((_DWORD *)v0 + 54) = DWORD2(v32[13]);
    *(_DWORD *)v0 |= 1u;
    *((_DWORD *)v0 + 55) = 1;
    *((_DWORD *)v0 + 56) = 32;
    v0 = (_OWORD *)((char *)v0 + 228);
    --v3;
  }
  while ( v3 );
  ExpRemainingLeftoverBootRngData = (1024 - v1) >> 2;
  memmove(ExpLeftoverBootRngData, (const void *)(v1 + v2 + 1400), 4LL * ((1024 - v1) >> 2));
  memset((void *)(v2 + 1400), 0, 0x400uLL);
  memset(v32, 0, 0xDCuLL);
  ExpSecurityCookieRandomData = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  result = (unsigned int)ExGenRandom(0);
  ExpSecurityCookieRandomData = (unsigned int)result | (unsigned __int64)ExpSecurityCookieRandomData;
  HIWORD(ExpSecurityCookieRandomData) = 0;
  if ( !ExpSecurityCookieRandomData )
    ExpSecurityCookieRandomData = 1LL;
  return result;
}
