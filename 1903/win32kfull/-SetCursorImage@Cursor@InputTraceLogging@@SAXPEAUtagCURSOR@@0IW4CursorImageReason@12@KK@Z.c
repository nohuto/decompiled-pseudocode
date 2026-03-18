/*
 * XREFs of ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C0082FF4
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C0082E00 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00ABDB0 (zzzUpdateCursorImage.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C010F258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01CBFE0 (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 */

void __fastcall InputTraceLogging::Cursor::SetCursorImage(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  struct tagCURSOR *v8; // r9
  const CHAR *v9; // rax
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  const CHAR *v15; // rdx
  __int64 v16; // r9
  int v17; // ecx
  int v18; // edx
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  __int64 *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  __int64 v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  int *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  int *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  int *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  int *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  __int64 *v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  __int64 *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  __int64 *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  int *v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]
  int *v59; // [rsp+180h] [rbp+80h]
  __int64 v60; // [rsp+188h] [rbp+88h]
  char *v61; // [rsp+190h] [rbp+90h]
  __int64 v62; // [rsp+198h] [rbp+98h]
  char *v63; // [rsp+1A0h] [rbp+A0h]
  __int64 v64; // [rsp+1A8h] [rbp+A8h]
  __int64 *v65; // [rsp+1B0h] [rbp+B0h]
  __int64 v66; // [rsp+1B8h] [rbp+B8h]
  int *v67; // [rsp+1C0h] [rbp+C0h]
  __int64 v68; // [rsp+1C8h] [rbp+C8h]
  int v69; // [rsp+220h] [rbp+120h] BYREF

  v69 = a3;
  if ( dword_1C03222C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 8uLL) )
  {
    v9 = InputTraceLogging::CursorToString(v8);
    TlgCreateSz(&pDesc, v9);
    if ( a4 )
    {
      v10 = a4 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                if ( v14 == 1 )
                  v15 = "ExplicitSetPointer";
                else
                  v15 = "UNKNOWN";
              }
              else
              {
                v15 = "SizeChange";
              }
            }
            else
            {
              v15 = "HiddenByQueue";
            }
          }
          else
          {
            v15 = "SetFromQueue";
          }
        }
        else
        {
          v15 = "ForceAppStarting";
        }
      }
      else
      {
        v15 = "ForceAutoRun";
      }
    }
    else
    {
      v15 = "HiddenByForeground";
    }
    TlgCreateSz(&v34, v15);
    v16 = *(_QWORD *)(a1 + 48);
    v36 = 8LL;
    v27 = v16;
    v38 = 8LL;
    v35 = &v26;
    v40 = 4LL;
    v37 = &v27;
    v26 = a1 & -(__int64)(v16 != 0);
    v39 = a1 + 76;
    v19 = *(_DWORD *)(a1 + 80);
    v41 = &v19;
    v20 = *(_DWORD *)(a1 + 140);
    v43 = &v20;
    v21 = *(_DWORD *)(a1 + 144) >> 1;
    v45 = &v21;
    v22 = *(__int16 *)(a1 + 84);
    v47 = &v22;
    v23 = *(__int16 *)(a1 + 86);
    v49 = &v23;
    v28 = *(_QWORD *)(a1 + 88);
    v51 = &v28;
    v29 = *(_QWORD *)(a1 + 96);
    v53 = &v29;
    v30 = *(_QWORD *)(a1 + 104);
    v55 = &v30;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 8LL;
    v54 = 8LL;
    v56 = 8LL;
    v17 = *(_DWORD *)UPDWORDPointer(8232LL);
    v57 = &v24;
    v59 = &v69;
    v61 = &a5;
    v63 = &a6;
    v24 = v17;
    v58 = 4LL;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    v65 = &v31;
    v31 = gpqCursor;
    v66 = 8LL;
    v18 = *(_DWORD *)UPDWORDPointer(8232LL);
    v67 = &v25;
    v25 = v18;
    v68 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E553A, 0LL, 0LL, 0x15u, &pData);
  }
}
