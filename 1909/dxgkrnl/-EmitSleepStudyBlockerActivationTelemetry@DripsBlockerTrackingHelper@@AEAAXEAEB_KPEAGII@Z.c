/*
 * XREFs of ?EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@AEAAXEAEB_KPEAGII@Z @ 0x1C0242800
 * Callers:
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAXE@Z @ 0x1C02429F4 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAXE@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000EA70 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerActivationTelemetry(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        const unsigned __int64 *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v7; // r9
  char v8; // r10
  __int64 v9; // r11
  __int64 v10; // rcx
  LPCGUID v11; // r9
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  char *v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+BCh] [rbp-44h]
  __int64 v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v33; // [rsp+E0h] [rbp-20h]
  int v34; // [rsp+E8h] [rbp-18h]
  int v35; // [rsp+ECh] [rbp-14h]
  __int64 *v36; // [rsp+F0h] [rbp-10h]
  int v37; // [rsp+F8h] [rbp-8h]
  int v38; // [rsp+FCh] [rbp-4h]
  __int64 *v39; // [rsp+100h] [rbp+0h]
  int v40; // [rsp+108h] [rbp+8h]
  int v41; // [rsp+10Ch] [rbp+Ch]
  __int64 *v42; // [rsp+110h] [rbp+10h]
  int v43; // [rsp+118h] [rbp+18h]
  int v44; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v45; // [rsp+120h] [rbp+20h]
  int v46; // [rsp+128h] [rbp+28h]
  int v47; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v48; // [rsp+130h] [rbp+30h]
  int v49; // [rsp+138h] [rbp+38h]
  int v50; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v51; // [rsp+140h] [rbp+40h]
  int v52; // [rsp+148h] [rbp+48h]
  int v53; // [rsp+14Ch] [rbp+4Ch]
  __int64 *v54; // [rsp+150h] [rbp+50h]
  int v55; // [rsp+158h] [rbp+58h]
  int v56; // [rsp+15Ch] [rbp+5Ch]

  if ( dword_1C00A1888 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000002000uLL) )
    {
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v23 = &v13;
      v13 = 8LL;
      v26 = &v12;
      v24 = 8;
      v12 = v8;
      v27 = 1;
      v29 = v7;
      v30 = 8;
      TlgCreateWsz(&pDesc, a4);
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v44 = 0;
      v47 = 0;
      v50 = 0;
      v53 = 0;
      v34 = 8;
      v10 = v9 + 4720LL * a5;
      v37 = 8;
      v56 = 0;
      v40 = 8;
      v43 = 8;
      v14 = *(_QWORD *)(v10 + 72LL * a6 + 128);
      v33 = &v14;
      v15 = *(_QWORD *)(v10 + 72LL * a6 + 136);
      v36 = &v15;
      v16 = *(unsigned int *)(v10 + 72LL * a6 + 148);
      v39 = &v16;
      v17 = *(_QWORD *)(v10 + 72LL * a6 + 152);
      v42 = &v17;
      v18 = *(_QWORD *)(v10 + 72LL * a6 + 160);
      v45 = &v18;
      v19 = *(unsigned int *)(v10 + 72LL * a6 + 168);
      v48 = &v19;
      v20 = *(unsigned int *)(v10 + 72LL * a6 + 176);
      v51 = &v20;
      v54 = &v21;
      v46 = 8;
      v49 = 8;
      v52 = 8;
      v21 = 50331648LL;
      v55 = 8;
      TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C007359D, 0LL, v11, 0xEu, &pData);
    }
  }
}
