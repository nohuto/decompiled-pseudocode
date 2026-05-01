/*
 * XREFs of CrmLogSrvActivityStopStop @ 0x180032084
 * Callers:
 *     CrmSrvActivityStop @ 0x180031D50 (CrmSrvActivityStop.c)
 * Callees:
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall CrmLogSrvActivityStopStop(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  const SID *v6; // r11
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  LPCWSTR v11; // r10
  LPCWSTR v12; // r9
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  UUID *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  int *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  __int64 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  __int64 *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  __int64 *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  __int64 *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  int *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  int *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  int *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+170h] [rbp+70h] BYREF
  int *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  __int64 *v53; // [rsp+190h] [rbp+90h]
  __int64 v54; // [rsp+198h] [rbp+98h]

  if ( dword_1800AB2F8 > 5u
    && (qword_1800AB308 & 0x400000000001LL) != 0
    && (qword_1800AB310 & 0x400000000001LL) == qword_1800AB310 )
  {
    v6 = (const SID *)(a1 + 72);
    v14 = *(_DWORD *)(a1 + 24);
    if ( a3 )
      v7 = *(_DWORD *)(a3 + 56);
    else
      v7 = 701;
    v15 = v7;
    v8 = -1LL;
    v19 = a2;
    if ( a3 )
      v9 = *(_QWORD *)(a3 + 176);
    else
      v9 = -1LL;
    v20 = v9;
    if ( a3 )
      v8 = *(_QWORD *)(a3 + 184);
    v21 = v8;
    v22 = a5;
    v23 = MEMORY[0x7FFE0008];
    if ( a3 )
      v10 = *(_DWORD *)(a3 + 136);
    else
      v10 = 0;
    v16 = v10;
    v17 = a4;
    if ( a3 )
      v13 = *(_DWORD *)(a3 + 64);
    else
      v13 = 0;
    v18 = a6;
    v24 = 0x2000000LL;
    v26 = &Uuid;
    v28 = &v14;
    v27 = 16LL;
    v29 = 4LL;
    TlgCreateSid(&pDesc, v6);
    v32 = 4LL;
    v33 = &v19;
    v31 = &v15;
    v35 = &v20;
    v34 = 8LL;
    v37 = &v21;
    v36 = 8LL;
    v39 = &v22;
    v41 = &v23;
    v43 = &v16;
    v45 = &v17;
    v47 = &v13;
    v38 = 8LL;
    v40 = 8LL;
    v42 = 8LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    TlgCreateWsz(&v49, v11);
    TlgCreateWsz(&v50, v12);
    v52 = 4LL;
    v53 = &v24;
    v51 = &v18;
    v54 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009A447, 0LL, 0LL, 0x12u, &pData);
  }
}
