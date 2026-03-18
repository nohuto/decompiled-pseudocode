/*
 * XREFs of ?EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z @ 0x1C01CC034
 * Callers:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0117394 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Cursor::EnsureDpiCursor(unsigned __int64 a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h] BYREF
  __int64 v15; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  __int64 *v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  char *v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  int *v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  int *v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  int *v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  int *v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  int *v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  __int64 *v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  __int64 *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  __int64 *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  int *v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  __int64 *v41; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]

  if ( dword_1C03222C0 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 8uLL) )
    {
      v2 = *(_QWORD *)(a1 + 48);
      v18 = 8LL;
      v11 = v2;
      v20 = 8LL;
      v17 = &v10;
      v22 = 4LL;
      v19 = &v11;
      v10 = a1 & -(__int64)(v2 != 0);
      v21 = (char *)(a1 + 76);
      v4 = *(_DWORD *)(a1 + 80);
      v23 = &v4;
      v5 = *(_DWORD *)(a1 + 140);
      v25 = &v5;
      v6 = *(_DWORD *)(a1 + 144) >> 1;
      v27 = &v6;
      v7 = *(__int16 *)(a1 + 84);
      v29 = &v7;
      v8 = *(__int16 *)(a1 + 86);
      v31 = &v8;
      v12 = *(_QWORD *)(a1 + 88);
      v33 = &v12;
      v13 = *(_QWORD *)(a1 + 96);
      v35 = &v13;
      v14 = *(_QWORD *)(a1 + 104);
      v37 = &v14;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 8LL;
      v36 = 8LL;
      v38 = 8LL;
      v3 = *(_DWORD *)UPDWORDPointer(8232LL);
      v39 = &v9;
      v15 = *(_QWORD *)(a1 + 48);
      v41 = &v15;
      v9 = v3;
      v40 = 4LL;
      v42 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E534D, 0LL, 0LL, 0xFu, &pData);
    }
  }
}
