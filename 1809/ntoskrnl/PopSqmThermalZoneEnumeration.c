/*
 * XREFs of PopSqmThermalZoneEnumeration @ 0x14087DC30
 * Callers:
 *     PopDiagTraceThermalZoneEnumeration @ 0x14018C0C4 (PopDiagTraceThermalZoneEnumeration.c)
 * Callees:
 *     _TlgCreateWsz @ 0x140012934 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopSqmThermalZoneEnumeration(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  __int64 v12; // rax
  int v14; // r9d
  int v15; // r11d
  const WCHAR *v16; // rdx
  LPCWSTR v17; // r10
  int v18; // r11d
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+4Ch] [rbp-B4h] BYREF
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+54h] [rbp-ACh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  int *v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  int *v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A8h] [rbp-58h]
  int v37; // [rsp+ACh] [rbp-54h]
  int *v38; // [rsp+B0h] [rbp-50h]
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]
  int *v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C8h] [rbp-38h]
  int v43; // [rsp+CCh] [rbp-34h]
  int *v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+DCh] [rbp-24h]
  int *v47; // [rsp+E0h] [rbp-20h]
  int v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+ECh] [rbp-14h]
  int *v50; // [rsp+F0h] [rbp-10h]
  int v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+FCh] [rbp-4h]
  int *v53; // [rsp+100h] [rbp+0h]
  int v54; // [rsp+108h] [rbp+8h]
  int v55; // [rsp+10Ch] [rbp+Ch]
  int *v56; // [rsp+110h] [rbp+10h]
  int v57; // [rsp+118h] [rbp+18h]
  int v58; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+120h] [rbp+20h] BYREF
  int *v60; // [rsp+130h] [rbp+30h]
  int v61; // [rsp+138h] [rbp+38h]
  int v62; // [rsp+13Ch] [rbp+3Ch]

  v12 = *(_QWORD *)(a2 + 8);
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    LOBYTE(v12) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( (_BYTE)v12 )
    {
      v16 = *(const WCHAR **)(a1 + 8);
      v20 = a7;
      v21 = a8;
      v22 = a9;
      v24 = a11;
      v25 = a10;
      v26 = a6;
      v28 = a5;
      v29 = a12;
      v23 = v15;
      v27 = v14;
      TlgCreateWsz(&pDesc, v16);
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v49 = 0;
      v52 = 0;
      v55 = 0;
      v58 = 0;
      v35 = &v21;
      v38 = &v22;
      v41 = &v23;
      v44 = &v24;
      v47 = &v25;
      v50 = &v26;
      v53 = &v27;
      v32 = &v20;
      v56 = &v28;
      v33 = 4;
      v36 = 4;
      v39 = 4;
      v42 = 4;
      v45 = 4;
      v48 = 4;
      v51 = 4;
      v54 = 4;
      v57 = 4;
      TlgCreateWsz(&v59, v17);
      v62 = 0;
      v60 = &v29;
      v61 = v18;
      LOBYTE(v12) = TlgWrite(&pCallbackContext, &unk_140372301, 0LL, 0LL, 0xEu, &pData);
    }
  }
  return v12;
}
