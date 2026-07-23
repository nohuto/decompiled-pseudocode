/*
 * XREFs of KiInitializeContextThread @ 0x140081CC8
 * Callers:
 *     KeInitThread @ 0x1405952E0 (KeInitThread.c)
 * Callees:
 *     KiSetSwitchingNpxState @ 0x140081F84 (KiSetSwitchingNpxState.c)
 *     KxContextToKframes @ 0x140082480 (KxContextToKframes.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlLocateSupervisorFeature @ 0x140312DF0 (RtlLocateSupervisorFeature.c)
 */

unsigned __int64 __fastcall KiInitializeContextThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rbx
  unsigned __int64 v7; // rsi
  _QWORD *v8; // r14
  __int64 v9; // rdx
  char *v10; // rdi
  __int64 v11; // rdx
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  unsigned __int64 v21; // r12
  __int128 v22; // xmm1
  _QWORD *v23; // rbx
  unsigned __int64 v24; // r15
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  unsigned __int64 result; // rax
  unsigned int v29; // r9d
  _DWORD *v30; // r10
  __int64 v31; // r8
  char *v32; // rdx
  __int64 v33; // r11
  __int64 v34; // rax
  _DWORD *v35; // r10
  _BYTE v39[48]; // [rsp+50h] [rbp-508h] BYREF
  int v40; // [rsp+80h] [rbp-4D8h]
  __int16 v41; // [rsp+88h] [rbp-4D0h]
  __int16 v42; // [rsp+92h] [rbp-4C6h]

  v5 = *(_QWORD *)(a1 + 40);
  v7 = (v5 - (unsigned int)KiXSaveAreaLength) & 0xFFFFFFFFFFFFFFC0uLL;
  v8 = (_QWORD *)(v7 - 48);
  memset((void *)(v7 - 48), 0, v5 - (v7 - 48));
  *v8 = v5;
  v10 = 0LL;
  v8[1] = v5 - (unsigned int)KeKernelStackSize;
  *(_DWORD *)(v7 + 24) = 8064;
  if ( a5 )
  {
    v11 = 9LL;
    v12 = a5;
    v13 = v39;
    do
    {
      v14 = v12[1];
      *v13 = *v12;
      v15 = v12[2];
      v13[1] = v14;
      v16 = v12[3];
      v13[2] = v15;
      v17 = v12[4];
      v13[3] = v16;
      v18 = v12[5];
      v13[4] = v17;
      v19 = v12[6];
      v13[5] = v18;
      v20 = v12[7];
      v12 += 8;
      v13[6] = v19;
      v13 += 8;
      *(v13 - 1) = v20;
      --v11;
    }
    while ( v11 );
    v21 = v7 - 448;
    v22 = v12[1];
    v23 = (_QWORD *)(v7 - 768);
    *v13 = *v12;
    v24 = v7 - 832;
    v25 = v12[2];
    v13[1] = v22;
    v26 = v12[3];
    v13[2] = v25;
    v27 = v12[4];
    v13[3] = v26;
    v13[4] = v27;
    v40 = v40 & 6 | 0x100001;
    v41 = 51;
    v42 = 43;
    memset((void *)(v7 - 768), 0, 0x140uLL);
    memset((void *)(v7 - 448), 0, 0x190uLL);
    *(_BYTE *)(v21 + 43) = 1;
    KxContextToKframes(v7 - 448, v7 - 768, (unsigned int)v39, v40, 1);
    *v23 = a4;
    v23[1] = a3;
    v23[2] = a2;
    v23[39] = &KiStartUserThreadReturn;
    *(_QWORD *)(v7 - 832 + 56) = &KiStartUserThread;
    *(_WORD *)v7 = 639;
    *(_DWORD *)(v21 + 44) = 8064;
    if ( (KeFeatureBits & 0x800000) != 0 )
      *(_QWORD *)(v7 + 512) = 1LL;
    LOBYTE(v9) = 0;
  }
  else
  {
    v24 = v7 - 160;
    *(_QWORD *)(v7 - 96) = a4;
    v21 = 0LL;
    LOBYTE(v9) = 1;
    *(_QWORD *)(v7 - 88) = a3;
    *(_QWORD *)(v7 - 80) = a2;
    *(_QWORD *)(v7 - 56) = 0LL;
    *(_QWORD *)(v7 - 160 + 56) = KxStartSystemThread;
  }
  *(_BYTE *)(a1 + 562) = KiSetSwitchingNpxState(a1, v9);
  result = v21 + 128;
  *(_BYTE *)(v24 + 40) = 1;
  *(_QWORD *)(v24 + 48) = v21 + 128;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    result = MEMORY[0xFFFFF780000003EC];
    v29 = 2;
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      result = 0x8000000000000003uLL;
      *(_QWORD *)(v7 + 520) = 0x8000000000000003uLL;
      if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
      {
        if ( (a5[12] & 0x100040) == 0x100040 )
        {
          v30 = a5 + 308;
          if ( (MEMORY[0xFFFFF780000003EC] & 0xFFFFFFFC) == 0
            && ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800LL) != 0 )
          {
            v31 = (int)a5[312];
            if ( *v30 > (int)v31 || (v32 = (char *)v30 + v31, a5[309] + *v30 < (int)v31 + a5[313]) )
              v32 = 0LL;
            if ( v32 )
            {
              if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
              {
                v33 = *((_QWORD *)v32 + 1);
                if ( (v33 & 0x800) != 0 )
                {
                  v34 = 576LL;
                  v35 = (_DWORD *)0xFFFFF7800000060CLL;
                  do
                  {
                    if ( ((1LL << v29) & v33) != 0 )
                    {
                      if ( ((1LL << v29) & MEMORY[0xFFFFF780000005F8]) != 0 )
                        LODWORD(v34) = (v34 + 63) & 0xFFFFFFC0;
                      v34 = (unsigned int)(*v35 + v34);
                    }
                    ++v29;
                    ++v35;
                  }
                  while ( v29 < 0xB );
                  if ( (MEMORY[0xFFFFF780000005F8] & 0x800) != 0 )
                    v34 = ((_DWORD)v34 + 63) & 0xFFFFFFC0;
                  v10 = &v32[v34 - 512];
                }
              }
              else
              {
                v10 = &v32[MEMORY[0xFFFFF78000000448] - 512];
              }
            }
          }
        }
        *(_QWORD *)(v7 + 512) |= 0x800uLL;
        *(_QWORD *)(v7 + 520) = 0x8000000000000803uLL;
        result = (unsigned __int64)RtlLocateSupervisorFeature((PXSAVE_AREA_HEADER)(v7 + 512), 0xBu, 0LL);
        *(_OWORD *)result = *(_OWORD *)v10;
      }
    }
  }
  *(_QWORD *)(a1 + 40) = v8;
  *(_QWORD *)(a1 + 88) = v24;
  *(_QWORD *)(a1 + 96) = v7;
  return result;
}
