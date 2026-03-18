/*
 * XREFs of ?EmitSleepStudyBlockerTelemetry@DripsBlockerTrackingHelper@@AEAAXEAEB_KPEAU_UNICODE_STRING@@I@Z @ 0x1C0242974
 * Callers:
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAXE@Z @ 0x1C0242374 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAXE@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerTelemetry(
        DripsBlockerTrackingHelper *this,
        char a2,
        const unsigned __int64 *a3,
        struct _UNICODE_STRING *a4,
        unsigned int a5)
{
  const GUID *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rcx
  char v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  char *v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  _DWORD *v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  __int64 v23; // [rsp+B0h] [rbp-50h]
  _DWORD v24[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  __int64 v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  __int64 *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  __int64 v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  __int64 v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  __int64 v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  __int64 *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  __int64 *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  __int64 *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]

  if ( dword_1C00A1888 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000002000uLL) )
    {
      v10 = a2;
      v11 = 8LL;
      v17 = &v11;
      v19 = &v10;
      v21 = v24;
      v23 = *(_QWORD *)v6->Data4;
      v24[0] = LOWORD(v6->Data1);
      v9 = 4720LL * a5;
      v18 = 8LL;
      v20 = 1LL;
      v27 = v9 + v7 + 56;
      v22 = 2LL;
      v29 = v9 + v7 + 64;
      v12 = *(unsigned int *)(v9 + v7 + 92);
      v31 = &v12;
      v24[1] = 0;
      v33 = v9 + v7 + 48;
      v25 = v8;
      v35 = v9 + v7 + 72;
      v26 = 8LL;
      v37 = v9 + v7 + 80;
      v13 = *(unsigned int *)(v9 + v7 + 88);
      v39 = &v13;
      v14 = *(unsigned int *)(v9 + v7 + 96);
      v41 = &v14;
      v43 = &v15;
      v28 = 8LL;
      v30 = 8LL;
      v32 = 8LL;
      v34 = 8LL;
      v36 = 8LL;
      v38 = 8LL;
      v40 = 8LL;
      v42 = 8LL;
      v15 = 50331648LL;
      v44 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C007361D, 0LL, v6, 0x10u, &pData);
    }
  }
}
