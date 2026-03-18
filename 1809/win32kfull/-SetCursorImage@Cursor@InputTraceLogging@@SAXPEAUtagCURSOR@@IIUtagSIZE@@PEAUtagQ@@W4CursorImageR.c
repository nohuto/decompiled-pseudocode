/*
 * XREFs of ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@IIUtagSIZE@@PEAUtagQ@@W4CursorImageReason@12@KK@Z @ 0x1C00D86D8
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C0017DF0 (zzzUpdateCursorImage.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01B8428 (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 */

char __fastcall InputTraceLogging::Cursor::SetCursorImage(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7,
        char a8)
{
  int v8; // ebx
  _QWORD *v10; // rax
  _BYTE *v11; // rsi
  const CHAR *v12; // rax
  const CHAR *v13; // rdx
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE *v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v28[160]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+150h] [rbp+50h] BYREF
  int *v32; // [rsp+160h] [rbp+60h]
  __int64 v33; // [rsp+168h] [rbp+68h]
  int *v34; // [rsp+170h] [rbp+70h]
  __int64 v35; // [rsp+178h] [rbp+78h]
  int *v36; // [rsp+180h] [rbp+80h]
  __int64 v37; // [rsp+188h] [rbp+88h]
  int *v38; // [rsp+190h] [rbp+90h]
  __int64 v39; // [rsp+198h] [rbp+98h]
  __int64 *v40; // [rsp+1A0h] [rbp+A0h]
  __int64 v41; // [rsp+1A8h] [rbp+A8h]
  char *v42; // [rsp+1B0h] [rbp+B0h]
  __int64 v43; // [rsp+1B8h] [rbp+B8h]
  char *v44; // [rsp+1C0h] [rbp+C0h]
  __int64 v45; // [rsp+1C8h] [rbp+C8h]
  _QWORD *v46; // [rsp+1D0h] [rbp+D0h]
  __int64 v47; // [rsp+1D8h] [rbp+D8h]
  int *v48; // [rsp+1E0h] [rbp+E0h]
  __int64 v49; // [rsp+1E8h] [rbp+E8h]
  int *v50; // [rsp+1F0h] [rbp+F0h]
  __int64 v51; // [rsp+1F8h] [rbp+F8h]
  _BYTE *v52; // [rsp+200h] [rbp+100h]
  __int64 v53; // [rsp+208h] [rbp+108h]
  int *v54; // [rsp+210h] [rbp+110h]
  __int64 v55; // [rsp+218h] [rbp+118h]
  int *v56; // [rsp+220h] [rbp+120h]
  __int64 v57; // [rsp+228h] [rbp+128h]
  int *v58; // [rsp+230h] [rbp+130h]
  __int64 v59; // [rsp+238h] [rbp+138h]
  _BYTE *v60; // [rsp+240h] [rbp+140h]
  __int64 v61; // [rsp+248h] [rbp+148h]
  _BYTE *v62; // [rsp+250h] [rbp+150h]
  __int64 v63; // [rsp+258h] [rbp+158h]
  _BYTE *v64; // [rsp+260h] [rbp+160h]
  __int64 v65; // [rsp+268h] [rbp+168h]
  _BYTE *v66; // [rsp+270h] [rbp+170h]
  __int64 v67; // [rsp+278h] [rbp+178h]
  __int64 *v68; // [rsp+280h] [rbp+180h]
  __int64 v69; // [rsp+288h] [rbp+188h]
  __int64 *v70; // [rsp+290h] [rbp+190h]
  __int64 v71; // [rsp+298h] [rbp+198h]
  __int64 *v72; // [rsp+2A0h] [rbp+1A0h]
  __int64 v73; // [rsp+2A8h] [rbp+1A8h]
  int v74; // [rsp+308h] [rbp+208h] BYREF
  int v75; // [rsp+310h] [rbp+210h] BYREF

  v75 = a3;
  v74 = a2;
  v8 = a4;
  v22 = a4;
  LOBYTE(v10) = (unsigned __int8)memset(v28, 0, 0x98uLL);
  if ( a1 )
  {
    LODWORD(v10) = *(_DWORD *)(a1 + 80);
    if ( ((unsigned __int8)v10 & 8) != 0 )
    {
      v10 = *(_QWORD **)(a1 + 96);
      v11 = (_BYTE *)*v10;
    }
    else
    {
      v11 = (_BYTE *)a1;
    }
  }
  else
  {
    v11 = v28;
  }
  if ( dword_1C030D340 > 5u )
  {
    LOBYTE(v10) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 8uLL);
    if ( (_BYTE)v10 )
    {
      v12 = InputTraceLogging::CursorToString((struct tagCURSOR *)a1);
      TlgCreateSz(&pDesc, v12);
      if ( a6 )
      {
        switch ( a6 )
        {
          case 1:
            v13 = "ForceAutoRun";
            break;
          case 2:
            v13 = "ForceAppStarting";
            break;
          case 3:
            v13 = "SetFromQueue";
            break;
          case 4:
            v13 = "HiddenByQueue";
            break;
          case 5:
            v13 = "SizeChange";
            break;
          default:
            v13 = "UNKNOWN";
            break;
        }
      }
      else
      {
        v13 = "HiddenByForeground";
      }
      TlgCreateSz(&v31, v13);
      v33 = 4LL;
      v34 = &v75;
      v32 = &v74;
      v36 = &v15;
      v16 = HIDWORD(v22);
      v38 = &v16;
      v23 = a5;
      v40 = &v23;
      v42 = &a7;
      v44 = &a8;
      v46 = &v24;
      v17 = *((_DWORD *)v11 + 35);
      v48 = &v17;
      v18 = *((_DWORD *)v11 + 36) >> 1;
      v50 = &v18;
      v52 = v11 + 76;
      v19 = *((__int16 *)v11 + 42);
      v54 = &v19;
      v20 = *((__int16 *)v11 + 43);
      v56 = &v20;
      v21 = *((_DWORD *)v11 + 20);
      v58 = &v21;
      v60 = v11 + 112;
      v62 = v11 + 116;
      v64 = v11 + 120;
      v66 = v11 + 124;
      v25 = *((_QWORD *)v11 + 11);
      v68 = &v25;
      v26 = *((_QWORD *)v11 + 12);
      v35 = 4LL;
      v15 = v8;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 8LL;
      v43 = 4LL;
      v45 = 4LL;
      v24 = v11;
      v47 = 8LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 8LL;
      v70 = &v26;
      v27 = *((_QWORD *)v11 + 13);
      v72 = &v27;
      v71 = 8LL;
      v73 = 8LL;
      LOBYTE(v10) = TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D3238, 0LL, 0LL, 0x19u, &pData);
    }
  }
  return (char)v10;
}
