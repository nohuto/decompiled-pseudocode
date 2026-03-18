/*
 * XREFs of RIMLogDeviceHealthTelemetry @ 0x1C00B0CA0
 * Callers:
 *     RIMEnumerateDevicesForTelemetry @ 0x1C00B09B8 (RIMEnumerateDevicesForTelemetry.c)
 *     RIMFillDeviceHealthInfo @ 0x1C0135F40 (RIMFillDeviceHealthInfo.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C013835C (RimDeviceTypeToRimInputTypeString.c)
 */

void __fastcall RIMLogDeviceHealthTelemetry(__int64 a1, __int64 a2, __int64 a3)
{
  const WCHAR *v3; // r9
  __int64 v4; // r10
  __int64 v5; // r10
  const WCHAR *v6; // rax
  __int64 v7; // r10
  int v8; // r11d
  int v9; // eax
  char v10; // al
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rax
  unsigned int v17; // ecx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v19; // [rsp+34h] [rbp-CCh] BYREF
  BOOL v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+B0h] [rbp-50h] BYREF
  int *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  BOOL *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  BOOL *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  int *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  int *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  __int64 v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  __int64 v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  __int64 v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  unsigned int *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  int *v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  __int64 *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]
  __int64 *v54; // [rsp+170h] [rbp+70h]
  __int64 v55; // [rsp+178h] [rbp+78h]
  __int64 *v56; // [rsp+180h] [rbp+80h]
  __int64 v57; // [rsp+188h] [rbp+88h]
  __int64 *v58; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+198h] [rbp+98h]
  __int64 v60; // [rsp+1D0h] [rbp+D0h] BYREF

  v60 = a3;
  if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
  {
    TlgCreateWsz(&pDesc, v3);
    TlgCreateWsz(&v30, *(LPCWSTR *)(v4 + 216));
    v6 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(v5, *(unsigned __int8 *)(v5 + 48));
    TlgCreateWsz(&v31, v6);
    v8 = *(_DWORD *)(v7 + 184);
    v33 = 4LL;
    v18 = (unsigned __int16)(v8 & 0x2000) >> 13;
    v32 = &v18;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 4LL;
    v19 = __CFSHR__(v8, 12);
    v34 = &v19;
    v20 = __CFSHR__(v8, 13);
    v36 = &v20;
    v21 = (unsigned __int8)(v8 & 0x80) >> 7;
    v38 = &v21;
    if ( __CFSHR__(v8, 13) || __CFSHR__(v8, 12) || (v9 = 1, (v8 & 0x100) != 0) )
      v9 = 0;
    v22 = v9;
    v40 = &v22;
    v42 = v7 + 288;
    v44 = v7 + 272;
    v46 = v7 + 152;
    v48 = &v23;
    v10 = *(_BYTE *)(v7 + 200);
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 4LL;
    v23 = (v8 & 0x2000000u) >> 25;
    v49 = 4LL;
    if ( v10 < 0 && (v11 = *(_QWORD *)(v7 + 480)) != 0 )
      v12 = -__CFSHR__(*(_DWORD *)(v11 + 312), 13);
    else
      v12 = 0;
    v24 = v12;
    v51 = 4LL;
    v50 = &v24;
    v53 = 8LL;
    v13 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
        - *(_QWORD *)(v7 + 64);
    v52 = &v25;
    v25 = v13;
    v55 = 8LL;
    v14 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
        - *(_QWORD *)(v7 + 72);
    v54 = &v26;
    v15 = *(_BYTE *)(v7 + 200);
    v26 = v14;
    if ( v15 < 0 && (v16 = *(_QWORD *)(v7 + 480)) != 0 )
      v17 = *(_DWORD *)(v16 + 720);
    else
      v17 = -1;
    v27 = v17;
    v56 = &v27;
    v58 = &v60;
    v57 = 8LL;
    v59 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E28A1, 0LL, 0LL, 0x13u, &pData);
  }
}
