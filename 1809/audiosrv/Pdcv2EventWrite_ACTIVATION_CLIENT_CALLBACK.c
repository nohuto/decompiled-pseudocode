/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x180134658
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x180133AD0 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     McTemplateU0qqzr1qzr3qqqxqpqqqzr13q @ 0x180134214 (McTemplateU0qqzr1qzr3qqqxqpqqqzr13q.c)
 */

void __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK(__int64 a1, _DWORD *a2, unsigned int a3, int a4)
{
  int v4; // r14d
  __int64 v5; // rdi
  const WCHAR *v6; // rsi
  char v7; // r11
  __int64 v9; // r15
  int v10; // r10d
  char v11; // r8
  const WCHAR *v12; // r12
  const WCHAR *v13; // r13
  ULONGLONG TickCount64; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r9d
  int v18; // edi
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  int v21; // [rsp+70h] [rbp-A0h]
  int v22; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v23; // [rsp+94h] [rbp-7Ch] BYREF
  int v24; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+9Ch] [rbp-74h] BYREF
  int v26; // [rsp+A0h] [rbp-70h] BYREF
  int v27; // [rsp+A4h] [rbp-6Ch] BYREF
  int v28; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-50h] BYREF
  unsigned int *v32; // [rsp+E0h] [rbp-30h]
  __int64 v33; // [rsp+E8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+100h] [rbp-10h] BYREF
  unsigned int *v36; // [rsp+110h] [rbp+0h]
  __int64 v37; // [rsp+118h] [rbp+8h]
  int *v38; // [rsp+120h] [rbp+10h]
  __int64 v39; // [rsp+128h] [rbp+18h]
  int *v40; // [rsp+130h] [rbp+20h]
  __int64 v41; // [rsp+138h] [rbp+28h]
  int *v42; // [rsp+140h] [rbp+30h]
  __int64 v43; // [rsp+148h] [rbp+38h]
  __int64 *v44; // [rsp+150h] [rbp+40h]
  __int64 v45; // [rsp+158h] [rbp+48h]
  __int64 *v46; // [rsp+160h] [rbp+50h]
  __int64 v47; // [rsp+168h] [rbp+58h]
  int *v48; // [rsp+170h] [rbp+60h]
  __int64 v49; // [rsp+178h] [rbp+68h]
  int *v50; // [rsp+180h] [rbp+70h]
  __int64 v51; // [rsp+188h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+190h] [rbp+80h] BYREF

  v4 = -1;
  v26 = a4;
  v5 = -1LL;
  v25 = a3;
  v6 = &word_18015F720;
  v22 = -1;
  v7 = a4;
  v23 = -1;
  v24 = -1;
  v9 = -1LL;
  LOBYTE(v10) = 0;
  v11 = -1;
  v12 = &word_18015F720;
  v13 = &word_18015F720;
  if ( a2 )
  {
    v6 = (const WCHAR *)(a2 + 23);
    v4 = a2[56];
    v23 = a2[6];
    v22 = a2[55];
  }
  if ( a1 )
  {
    v13 = (const WCHAR *)(a1 + 72);
    v24 = *(_DWORD *)(a1 + 64);
    v12 = (const WCHAR *)(a1 + 328);
    TickCount64 = GetTickCount64();
    v10 = *(_DWORD *)(a1 + 584);
    v9 = TickCount64 - *(_QWORD *)(a1 + 40);
    v11 = v24;
    v7 = v26;
  }
  if ( (byte_1801B30DA & 0x20) != 0 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v6[v15] );
    v16 = -1LL;
    do
      ++v16;
    while ( v12[v16] );
    do
      ++v5;
    while ( v13[v5] );
    v17 = v5;
    v18 = v22;
    McTemplateU0qqzr1qzr3qqqxqpqqqzr13q(
      v25,
      (__int64)a2,
      v23,
      v17,
      (__int64)v13,
      v16,
      (__int64)v12,
      v25,
      v4,
      v22,
      v9,
      v7,
      a1,
      v11,
      v21,
      v15,
      (__int64)v6,
      v10);
  }
  else
  {
    v18 = v22;
  }
  if ( (unsigned int)dword_1801B14F8 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1801B14F8, 0x400000000000uLL) )
    {
      v32 = &v23;
      v22 = v4;
      v27 = v18;
      v29 = v9;
      v30 = a1;
      v28 = 2;
      v33 = 4LL;
      TlgCreateWsz(&pDesc, v13);
      TlgCreateWsz(&v35, v12);
      v37 = 4LL;
      v38 = &v22;
      v36 = &v25;
      v40 = &v27;
      v39 = 4LL;
      v42 = &v24;
      v41 = 4LL;
      v44 = &v29;
      v46 = &v30;
      v48 = &v26;
      v50 = &v28;
      v43 = 4LL;
      v45 = 8LL;
      v47 = 8LL;
      v49 = 4LL;
      v51 = 4LL;
      TlgCreateWsz(&v52, v6);
      TlgWrite((TraceLoggingHProvider)&dword_1801B14F8, &unk_180177CDB, v19, v20, 0xEu, &pData);
    }
  }
}
