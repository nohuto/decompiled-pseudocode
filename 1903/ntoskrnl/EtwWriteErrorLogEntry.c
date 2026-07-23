/*
 * XREFs of EtwWriteErrorLogEntry @ 0x140737E10
 * Callers:
 *     IopErrorLogThread @ 0x140737B10 (IopErrorLogThread.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x1400C01A0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall EtwWriteErrorLogEntry(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8)
{
  __int64 v8; // rsi
  __int16 v11; // r15
  int v12; // eax
  unsigned __int16 v13; // r11
  unsigned __int16 v14; // r10
  char v15; // al
  __int16 v16; // ax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // edi
  unsigned __int16 v21; // r8
  unsigned int v22; // edx
  __int64 v23; // rax
  unsigned int v24; // r14d
  unsigned int v25; // edi
  unsigned __int16 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // edi
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rsi
  _WORD *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // edi
  __int64 v35; // rax
  __int64 result; // rax
  unsigned __int16 v37; // [rsp+98h] [rbp-80h] BYREF
  __int16 v38; // [rsp+9Ch] [rbp-7Ch] BYREF
  unsigned int v39; // [rsp+A0h] [rbp-78h] BYREF
  int v40; // [rsp+A8h] [rbp-70h] BYREF
  char v41; // [rsp+ACh] [rbp-6Ch]
  char v42; // [rsp+ADh] [rbp-6Bh]
  __int16 v43; // [rsp+AEh] [rbp-6Ah]
  __int64 v44; // [rsp+B0h] [rbp-68h]
  _OWORD v45[27]; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v46; // [rsp+268h] [rbp+150h] BYREF
  _QWORD v47[6]; // [rsp+270h] [rbp+158h]
  int v48; // [rsp+2A0h] [rbp+188h]
  int v49; // [rsp+2A4h] [rbp+18Ch]
  unsigned __int16 *v50; // [rsp+2A8h] [rbp+190h]
  __int64 v51; // [rsp+2B0h] [rbp+198h]
  __int64 v52; // [rsp+2B8h] [rbp+1A0h]
  int v53; // [rsp+2C0h] [rbp+1A8h]
  int v54; // [rsp+2C4h] [rbp+1ACh]

  v8 = a3;
  memset(v45, 0, 0x1A8uLL);
  v11 = IopErrorLogSession;
  v12 = *(_DWORD *)(a2 + 12) >> 30;
  v13 = 0;
  v14 = 0;
  if ( v12 == 1 )
    v15 = 4;
  else
    v15 = (v12 == 2) + 2;
  v41 = v15;
  v16 = *(_WORD *)(a2 + 8);
  v47[1] = a2 + 12;
  v17 = -1LL;
  v43 = v16;
  v18 = -1LL;
  v47[2] = 4LL;
  v40 = 0;
  v42 = 0;
  v44 = 0LL;
  v46 = a4;
  v47[0] = 8LL;
  do
    ++v18;
  while ( *(_WORD *)(a5 + 2 * v18) );
  v47[5] = a5;
  v19 = (unsigned __int16)(v18 + 1);
  v20 = 5;
  v38 = v19;
  v48 = 2 * v19;
  v50 = &a7;
  v47[3] = &v38;
  v47[4] = 2LL;
  v49 = 0;
  v51 = 2LL;
  if ( a7 )
  {
    v20 = 6;
    v52 = a8;
    v53 = a7;
    v54 = 0;
  }
  v21 = *(_WORD *)(a2 + 4);
  v22 = *(unsigned __int16 *)(a2 + 2) + 40;
  if ( v22 > (unsigned int)v8 )
    v22 = v8;
  v39 = v22;
  if ( v21 && *(unsigned __int16 *)(a2 + 6) < v22 )
    *(_WORD *)(a2 + 6) = v22;
  v23 = 2LL * v20;
  v24 = v21;
  v37 = 0;
  v25 = v20 + 1;
  *(_WORD *)(a2 + 4) = v21 + 1;
  v26 = 0;
  v47[v23 - 1] = &v37;
  v47[v23] = 2LL;
  v27 = 2LL * v25;
  v47[2 * v25 - 1] = a6;
  do
    ++v17;
  while ( *(_WORD *)(a6 + 2 * v17) );
  HIDWORD(v47[2 * v25]) = 0;
  v28 = v25 + 1;
  LODWORD(v47[v27]) = 2 * (unsigned __int16)(v17 + 1);
  if ( v24 )
  {
    v29 = (*(unsigned __int16 *)(a2 + 6) + a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    v30 = a2 + v8;
    do
    {
      v31 = (_WORD *)(v29 + 2LL * v14);
      if ( (unsigned __int64)v31 >= v30 )
        break;
      if ( !*v31 )
      {
        ++v26;
        v13 = v14 + 1;
        v37 = v26;
      }
      ++v14;
    }
    while ( v26 < v24 );
    v32 = 2LL * v28++;
    v47[v32 - 1] = v29;
    LODWORD(v47[v32]) = 2 * v13;
    HIDWORD(v47[v32]) = 0;
  }
  v33 = 2LL * v28;
  v37 = v26 + 1;
  v34 = v28 + 1;
  v47[v33 - 1] = &v39;
  v47[v33] = 4LL;
  v35 = 2LL * v34;
  LODWORD(v47[v35]) = v22;
  v47[v35 - 1] = a2;
  HIDWORD(v47[v35]) = 0;
  memset(v45, 0, 0x1A8uLL);
  *((_QWORD *)&v45[24] + 1) = EtwpHostSiloState;
  *(GUID *)((char *)&v45[2] + 8) = LegacyEventLogGuid;
  WORD3(v45[8]) = v11;
  LODWORD(v45[8]) = 1;
  BYTE4(v45[8]) = -1;
  v45[9] = _mm_load_si128((const __m128i *)&_xmm);
  DWORD2(v45[8]) = 64;
  result = EtwpEventWriteFull(
             (__int64)v45,
             1u,
             0,
             0,
             (unsigned __int16 *)&v40,
             0,
             4,
             0LL,
             0LL,
             v34 + 1,
             (__int64)&v46,
             0LL,
             0LL,
             0LL,
             0,
             0LL,
             0LL);
  if ( (int)result < 0 )
    --*(_WORD *)(a2 + 4);
  return result;
}
