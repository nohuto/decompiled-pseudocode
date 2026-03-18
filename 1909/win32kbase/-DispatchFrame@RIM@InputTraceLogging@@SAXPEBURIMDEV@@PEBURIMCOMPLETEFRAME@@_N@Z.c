/*
 * XREFs of ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@_N@Z @ 0x1C014FD24
 * Callers:
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0150818 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimProcessCompleteFrame @ 0x1C01512DC (rimProcessCompleteFrame.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::DispatchFrame(
        const struct RIMDEV *a1,
        const struct RIMCOMPLETEFRAME *a2,
        char a3)
{
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  const struct RIMDEV *v11; // [rsp+38h] [rbp-C8h] BYREF
  const struct RIMDEV *v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v15; // [rsp+60h] [rbp-A0h] BYREF
  const struct RIMDEV **v16; // [rsp+80h] [rbp-80h]
  int v17; // [rsp+88h] [rbp-78h]
  int v18; // [rsp+8Ch] [rbp-74h]
  __int64 *v19; // [rsp+90h] [rbp-70h]
  int v20; // [rsp+98h] [rbp-68h]
  int v21; // [rsp+9Ch] [rbp-64h]
  __int64 *v22; // [rsp+A0h] [rbp-60h]
  int v23; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+ACh] [rbp-54h]
  __int64 v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+BCh] [rbp-44h]
  char *v28; // [rsp+C0h] [rbp-40h]
  int v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+CCh] [rbp-34h]
  int *v31; // [rsp+D0h] [rbp-30h]
  int v32; // [rsp+D8h] [rbp-28h]
  int v33; // [rsp+DCh] [rbp-24h]
  const struct RIMDEV **v34; // [rsp+E0h] [rbp-20h]
  int v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  const struct RIMDEV **v38; // [rsp+110h] [rbp+10h]
  int v39; // [rsp+118h] [rbp+18h]
  int v40; // [rsp+11Ch] [rbp+1Ch]

  if ( a3 && dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x100uLL) )
  {
    v40 = 0;
    v38 = &v11;
    v11 = a1;
    v39 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E375D, 0LL, 0LL, 3u, &pData);
  }
  if ( dword_1C020CB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x100uLL) )
    {
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v7 = *((_QWORD *)a1 + 59);
      v16 = &v12;
      v19 = &v13;
      v14 = *((_QWORD *)a2 + 5);
      v22 = &v14;
      v28 = (char *)a2 + 76;
      v12 = a1;
      v17 = 8;
      v13 = v5;
      v20 = 8;
      v23 = 8;
      v25 = v6;
      v26 = 4;
      v29 = 4;
      v8 = *(unsigned __int16 *)(v7 + 16);
      v33 = 0;
      v10 = v8;
      v31 = &v10;
      v32 = 4;
      v9 = *(unsigned __int16 *)(v7 + 18);
      v36 = 0;
      LODWORD(v11) = v9;
      v34 = &v11;
      v35 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E3789, 0LL, 0LL, 9u, &v15);
    }
  }
}
