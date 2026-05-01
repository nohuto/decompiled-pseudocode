/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x18007265C
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x1800718A0 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     McTemplateU0qqzr1qzr3qqqxqpqqqzr13q @ 0x180072314 (McTemplateU0qqzr1qzr3qqqxqpqqqzr13q.c)
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
  int v19; // [rsp+70h] [rbp-A0h]
  int v20; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v21; // [rsp+94h] [rbp-7Ch] BYREF
  int v22; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+9Ch] [rbp-74h] BYREF
  int v24; // [rsp+A0h] [rbp-70h] BYREF
  int v25; // [rsp+A4h] [rbp-6Ch] BYREF
  int v26; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-50h] BYREF
  unsigned int *v30; // [rsp+E0h] [rbp-30h]
  __int64 v31; // [rsp+E8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+100h] [rbp-10h] BYREF
  unsigned int *v34; // [rsp+110h] [rbp+0h]
  __int64 v35; // [rsp+118h] [rbp+8h]
  int *v36; // [rsp+120h] [rbp+10h]
  __int64 v37; // [rsp+128h] [rbp+18h]
  int *v38; // [rsp+130h] [rbp+20h]
  __int64 v39; // [rsp+138h] [rbp+28h]
  int *v40; // [rsp+140h] [rbp+30h]
  __int64 v41; // [rsp+148h] [rbp+38h]
  __int64 *v42; // [rsp+150h] [rbp+40h]
  __int64 v43; // [rsp+158h] [rbp+48h]
  __int64 *v44; // [rsp+160h] [rbp+50h]
  __int64 v45; // [rsp+168h] [rbp+58h]
  int *v46; // [rsp+170h] [rbp+60h]
  __int64 v47; // [rsp+178h] [rbp+68h]
  int *v48; // [rsp+180h] [rbp+70h]
  __int64 v49; // [rsp+188h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+190h] [rbp+80h] BYREF

  v4 = -1;
  v24 = a4;
  v5 = -1LL;
  v23 = a3;
  v6 = &pwsz;
  v20 = -1;
  v7 = a4;
  v21 = -1;
  v22 = -1;
  v9 = -1LL;
  LOBYTE(v10) = 0;
  v11 = -1;
  v12 = &pwsz;
  v13 = &pwsz;
  if ( a2 )
  {
    v6 = (const WCHAR *)(a2 + 23);
    v4 = a2[56];
    v21 = a2[6];
    v20 = a2[55];
  }
  if ( a1 )
  {
    v13 = (const WCHAR *)(a1 + 72);
    v22 = *(_DWORD *)(a1 + 64);
    v12 = (const WCHAR *)(a1 + 328);
    TickCount64 = GetTickCount64();
    v10 = *(_DWORD *)(a1 + 584);
    v9 = TickCount64 - *(_QWORD *)(a1 + 40);
    v11 = v22;
    v7 = v24;
  }
  if ( (byte_18009BB42 & 0x20) != 0 )
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
    v18 = v20;
    McTemplateU0qqzr1qzr3qqqxqpqqqzr13q(
      v23,
      (__int64)a2,
      v21,
      v17,
      (__int64)v13,
      v16,
      (__int64)v12,
      v23,
      v4,
      v20,
      v9,
      v7,
      a1,
      v11,
      v19,
      v15,
      (__int64)v6,
      v10);
  }
  else
  {
    v18 = v20;
  }
  if ( (unsigned int)dword_18009B160 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B160, 0x400000000000uLL) )
    {
      v30 = &v21;
      v20 = v4;
      v25 = v18;
      v27 = v9;
      v28 = a1;
      v26 = 2;
      v31 = 4LL;
      TlgCreateWsz(&pDesc, v13);
      TlgCreateWsz(&v33, v12);
      v35 = 4LL;
      v36 = &v20;
      v34 = &v23;
      v38 = &v25;
      v37 = 4LL;
      v40 = &v22;
      v39 = 4LL;
      v42 = &v27;
      v44 = &v28;
      v46 = &v24;
      v48 = &v26;
      v41 = 4LL;
      v43 = 8LL;
      v45 = 8LL;
      v47 = 4LL;
      v49 = 4LL;
      TlgCreateWsz(&v50, v6);
      TlgWrite((TraceLoggingHProvider)&dword_18009B160, &unk_18008D6FC, 0LL, 0LL, 0xEu, &pData);
    }
  }
}
