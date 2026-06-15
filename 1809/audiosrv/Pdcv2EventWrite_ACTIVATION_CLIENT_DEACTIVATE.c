/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x180041234
 * Callers:
 *     Pdcv2ActivationClientDeactivate @ 0x180040FB0 (Pdcv2ActivationClientDeactivate.c)
 * Callees:
 *     McTemplateU0qqzr1qzr3qqxqpqqzr11q @ 0x180003124 (McTemplateU0qqzr1qzr3qqxqpqqzr11q.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 */

void __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(__int64 a1, _DWORD *a2, int a3)
{
  int v3; // r15d
  __int64 v4; // rbx
  const WCHAR *v5; // r14
  unsigned __int64 v7; // rsi
  int v8; // r10d
  const WCHAR *v9; // r12
  const WCHAR *v10; // r13
  ULONGLONG TickCount64; // rax
  int v12; // ebx
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r9d
  int v18; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+80h] [rbp-80h] BYREF
  int v20; // [rsp+84h] [rbp-7Ch] BYREF
  int v21; // [rsp+88h] [rbp-78h] BYREF
  int v22; // [rsp+8Ch] [rbp-74h] BYREF
  int v23; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v24; // [rsp+98h] [rbp-68h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+F0h] [rbp-10h] BYREF
  int *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  int *v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  __int64 *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  int *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  int *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+160h] [rbp+60h] BYREF

  v3 = -1;
  v21 = a3;
  v4 = -1LL;
  v19 = -1;
  v20 = -1;
  v5 = &word_18015F720;
  v7 = -1LL;
  LOBYTE(v8) = 0;
  v9 = &word_18015F720;
  v10 = &word_18015F720;
  if ( a2 )
  {
    v5 = (const WCHAR *)(a2 + 23);
    v3 = a2[56];
    v20 = a2[6];
    v19 = a2[55];
  }
  if ( a1 )
  {
    v10 = (const WCHAR *)(a1 + 72);
    v9 = (const WCHAR *)(a1 + 328);
    TickCount64 = GetTickCount64();
    v8 = *(_DWORD *)(a1 + 584);
    v7 = TickCount64 - *(_QWORD *)(a1 + 40);
    LOBYTE(a3) = v21;
  }
  if ( (byte_1801B30DA & 0x20) != 0 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v5[v15] );
    v16 = -1LL;
    do
      ++v16;
    while ( v9[v16] );
    do
      ++v4;
    while ( v10[v4] );
    v17 = v4;
    v12 = v19;
    McTemplateU0qqzr1qzr3qqxqpqqzr11q(
      v15,
      (__int64)a2,
      v20,
      v17,
      (__int64)v10,
      v16,
      (__int64)v9,
      v3,
      v19,
      v7,
      a3,
      a1,
      v18,
      v15,
      (__int64)v5,
      v8);
  }
  else
  {
    v12 = v19;
  }
  if ( v7 >= 0x3E8 && dword_1801B14F8 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1801B14F8, 0x400000000000uLL) )
    {
      v27 = &v20;
      v19 = v3;
      v22 = v12;
      v24 = v7;
      v25 = a1;
      v23 = 2;
      v28 = 4LL;
      TlgCreateWsz(&pDesc, v10);
      TlgCreateWsz(&v30, v9);
      v32 = 4LL;
      v33 = &v22;
      v31 = &v19;
      v35 = &v24;
      v34 = 4LL;
      v37 = &v25;
      v36 = 8LL;
      v39 = &v21;
      v41 = &v23;
      v38 = 8LL;
      v40 = 4LL;
      v42 = 4LL;
      TlgCreateWsz(&v43, v5);
      TlgWrite((TraceLoggingHProvider)&dword_1801B14F8, &unk_180177C34, v13, v14, 0xCu, &pData);
    }
  }
}
