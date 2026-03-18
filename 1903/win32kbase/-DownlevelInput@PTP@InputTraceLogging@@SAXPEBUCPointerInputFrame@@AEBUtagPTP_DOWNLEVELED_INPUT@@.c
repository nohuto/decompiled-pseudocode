/*
 * XREFs of ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x1C017A500
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C017C3CC (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?PTPDownlevelActionToString@InputTraceLogging@@CAPEBDW4tagPTP_DOWNLEVEL_ACTION@@@Z @ 0x1C017B6F4 (-PTPDownlevelActionToString@InputTraceLogging@@CAPEBDW4tagPTP_DOWNLEVEL_ACTION@@@Z.c)
 */

void __fastcall InputTraceLogging::PTP::DownlevelInput(
        const struct CPointerInputFrame *a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2,
        __int64 a3)
{
  int v3; // ebx
  __int64 v6; // r9
  int v7; // r11d
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  const CHAR *v11; // rax
  int v12; // r11d
  UINT32 cData; // r10d
  __int64 v14; // r9
  int v15; // r11d
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  const CHAR *v19; // rax
  int v20; // r11d
  UINT32 v21; // r10d
  int v22; // [rsp+38h] [rbp-59h] BYREF
  __int64 v23; // [rsp+40h] [rbp-51h] BYREF
  __int64 v24; // [rsp+48h] [rbp-49h] BYREF
  __int64 v25; // [rsp+50h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v27; // [rsp+78h] [rbp-19h]
  int v28; // [rsp+80h] [rbp-11h]
  int v29; // [rsp+84h] [rbp-Dh]
  __int64 *v30; // [rsp+88h] [rbp-9h]
  int v31; // [rsp+90h] [rbp-1h]
  int v32; // [rsp+94h] [rbp+3h]
  int *v33; // [rsp+98h] [rbp+7h]
  int v34; // [rsp+A0h] [rbp+Fh]
  int v35; // [rsp+A4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp+17h] BYREF
  char *v37; // [rsp+B8h] [rbp+27h]
  int v38; // [rsp+C0h] [rbp+2Fh]
  int v39; // [rsp+C4h] [rbp+33h]
  __int64 *v40; // [rsp+C8h] [rbp+37h]
  UINT32 v41; // [rsp+D0h] [rbp+3Fh]
  int v42; // [rsp+D4h] [rbp+43h]

  v3 = *(_DWORD *)a2;
  if ( *(int *)a2 >= 0 )
  {
    if ( v3 <= 1 )
    {
      if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x80uLL) )
      {
        if ( v14 )
          v16 = *(_QWORD *)(v14 + 104);
        else
          v16 = 0LL;
        v29 = 0;
        v25 = v16;
        v27 = &v25;
        v28 = 8;
        if ( v14 )
          v17 = *(_QWORD *)(v14 + 72);
        else
          v17 = 0LL;
        v32 = 0;
        v24 = v17;
        v30 = &v24;
        v31 = 8;
        if ( v14 )
          v18 = *(_DWORD *)(v14 + 40);
        else
          v18 = 0;
        v35 = 0;
        v22 = v18;
        v33 = &v22;
        v34 = v15;
        v19 = (const CHAR *)InputTraceLogging::PTPDownlevelActionToString((unsigned int)v3);
        TlgCreateSz(&pDesc, v19);
        v39 = 0;
        v42 = 0;
        v40 = &v23;
        v37 = (char *)a2 + 4;
        v38 = v20;
        v23 = a3;
        v41 = v21;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E724C, 0LL, 0LL, v21, &pData);
      }
    }
    else if ( v3 == 2 && dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x80uLL) )
    {
      if ( v6 )
        v8 = *(_QWORD *)(v6 + 104);
      else
        v8 = 0LL;
      v29 = 0;
      v23 = v8;
      v27 = &v23;
      v28 = 8;
      if ( v6 )
        v9 = *(_QWORD *)(v6 + 72);
      else
        v9 = 0LL;
      v32 = 0;
      v24 = v9;
      v30 = &v24;
      v31 = 8;
      if ( v6 )
        v10 = *(_DWORD *)(v6 + 40);
      else
        v10 = 0;
      v35 = 0;
      v22 = v10;
      v33 = &v22;
      v34 = v7;
      v11 = (const CHAR *)InputTraceLogging::PTPDownlevelActionToString(2LL);
      TlgCreateSz(&pDesc, v11);
      v39 = 0;
      v42 = 0;
      v40 = &v25;
      v37 = (char *)a2 + 4;
      v38 = v12;
      v25 = a3;
      v41 = cData;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E72B4, 0LL, 0LL, cData, &pData);
    }
  }
}
