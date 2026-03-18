/*
 * XREFs of ?SetQueueCursor@Cursor@InputTraceLogging@@SAXPEAUtagQ@@PEAUtagCURSOR@@@Z @ 0x1C00D87EC
 * Callers:
 *     LockQCursor @ 0x1C00D8780 (LockQCursor.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01B8428 (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 */

void __fastcall InputTraceLogging::Cursor::SetQueueCursor(struct tagQ *a1, struct tagCURSOR *a2)
{
  struct tagCURSOR *v4; // rdi
  const CHAR *v5; // rax
  int v6; // [rsp+38h] [rbp-D0h] BYREF
  int v7; // [rsp+3Ch] [rbp-CCh] BYREF
  int v8; // [rsp+40h] [rbp-C8h] BYREF
  int v9; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  struct tagQ *v11; // [rsp+50h] [rbp-B8h] BYREF
  struct tagCURSOR *v12; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v16[160]; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+138h] [rbp+30h] BYREF
  struct tagQ **v19; // [rsp+148h] [rbp+40h]
  __int64 v20; // [rsp+150h] [rbp+48h]
  struct tagCURSOR **v21; // [rsp+158h] [rbp+50h]
  __int64 v22; // [rsp+160h] [rbp+58h]
  int *v23; // [rsp+168h] [rbp+60h]
  __int64 v24; // [rsp+170h] [rbp+68h]
  int *v25; // [rsp+178h] [rbp+70h]
  __int64 v26; // [rsp+180h] [rbp+78h]
  char *v27; // [rsp+188h] [rbp+80h]
  __int64 v28; // [rsp+190h] [rbp+88h]
  int *v29; // [rsp+198h] [rbp+90h]
  __int64 v30; // [rsp+1A0h] [rbp+98h]
  int *v31; // [rsp+1A8h] [rbp+A0h]
  __int64 v32; // [rsp+1B0h] [rbp+A8h]
  __int64 *v33; // [rsp+1B8h] [rbp+B0h]
  __int64 v34; // [rsp+1C0h] [rbp+B8h]
  char *v35; // [rsp+1C8h] [rbp+C0h]
  __int64 v36; // [rsp+1D0h] [rbp+C8h]
  char *v37; // [rsp+1D8h] [rbp+D0h]
  __int64 v38; // [rsp+1E0h] [rbp+D8h]
  char *v39; // [rsp+1E8h] [rbp+E0h]
  __int64 v40; // [rsp+1F0h] [rbp+E8h]
  char *v41; // [rsp+1F8h] [rbp+F0h]
  __int64 v42; // [rsp+200h] [rbp+F8h]
  __int64 *v43; // [rsp+208h] [rbp+100h]
  __int64 v44; // [rsp+210h] [rbp+108h]
  __int64 *v45; // [rsp+218h] [rbp+110h]
  __int64 v46; // [rsp+220h] [rbp+118h]
  __int64 *v47; // [rsp+228h] [rbp+120h]
  __int64 v48; // [rsp+230h] [rbp+128h]

  memset(v16, 0, 0x98uLL);
  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 20) & 8) != 0 )
      v4 = (struct tagCURSOR *)**((_QWORD **)a2 + 12);
    else
      v4 = a2;
  }
  else
  {
    v4 = (struct tagCURSOR *)v16;
  }
  if ( dword_1C030D340 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 8uLL) )
    {
      v5 = InputTraceLogging::CursorToString(a2);
      TlgCreateSz(&pDesc, v5);
      v11 = a1;
      v19 = &v11;
      v21 = &v12;
      v6 = *((_DWORD *)v4 + 35);
      v23 = &v6;
      v7 = *((_DWORD *)v4 + 36) >> 1;
      v25 = &v7;
      v27 = (char *)v4 + 76;
      v8 = *((__int16 *)v4 + 42);
      v29 = &v8;
      v9 = *((__int16 *)v4 + 43);
      v31 = &v9;
      LODWORD(v10) = *((_DWORD *)v4 + 20);
      v33 = &v10;
      v35 = (char *)v4 + 112;
      v37 = (char *)v4 + 116;
      v39 = (char *)v4 + 120;
      v41 = (char *)v4 + 124;
      v13 = *((_QWORD *)v4 + 11);
      v43 = &v13;
      v14 = *((_QWORD *)v4 + 12);
      v45 = &v14;
      v15 = *((_QWORD *)v4 + 13);
      v47 = &v15;
      v20 = 8LL;
      v12 = v4;
      v22 = 8LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 8LL;
      v46 = 8LL;
      v48 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D3357, 0LL, 0LL, 0x12u, &pData);
    }
  }
}
