/*
 * XREFs of PopDiagTraceDirtyTransition @ 0x1409F8FC8
 * Callers:
 *     PopCheckShutdownMarker @ 0x1409DE374 (PopCheckShutdownMarker.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     PopReadRegKeyValue @ 0x140190DE8 (PopReadRegKeyValue.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

BOOLEAN __fastcall PopDiagTraceDirtyTransition(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        char a5,
        char a6,
        int a7,
        char a8,
        char a9)
{
  BOOLEAN result; // al
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  char *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  char v25; // [rsp+48h] [rbp-C0h] BYREF
  char v26; // [rsp+49h] [rbp-BFh] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+54h] [rbp-B4h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  BOOL v31; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v32[6]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v33[4]; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  char v35; // [rsp+D4h] [rbp-34h] BYREF
  int *v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  char *v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  int *v40; // [rsp+128h] [rbp+20h]
  __int64 v41; // [rsp+130h] [rbp+28h]
  char *v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  BOOL *v44; // [rsp+148h] [rbp+40h]
  __int64 v45; // [rsp+150h] [rbp+48h]
  int *v46; // [rsp+158h] [rbp+50h]
  __int64 v47; // [rsp+160h] [rbp+58h]
  char *v48; // [rsp+168h] [rbp+60h]
  __int64 v49; // [rsp+170h] [rbp+68h]
  int *v50; // [rsp+178h] [rbp+70h]
  __int64 v51; // [rsp+180h] [rbp+78h]
  char *v52; // [rsp+188h] [rbp+80h]
  __int64 v53; // [rsp+190h] [rbp+88h]
  _OWORD SourceString[9]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v55; // [rsp+228h] [rbp+120h]
  int v56; // [rsp+230h] [rbp+128h]
  int v57; // [rsp+278h] [rbp+170h] BYREF

  v57 = a3;
  result = ExBootAppFailureStatus;
  v30 = ExBootAppFailureStatus;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRTY_TRANSITION);
    if ( result )
    {
      v27 = 0;
      v28 = 0;
      memset(v33, 0, sizeof(v33));
      v13 = *(_QWORD *)(a1 + 240);
      v31 = a4 != 0;
      v25 = a8;
      v26 = a9;
      if ( !v13
        || (v14 = *(_QWORD *)(v13 + 240)) == 0
        || (v27 = *(_DWORD *)(v14 + 56),
            v33[0] = *(_QWORD *)(v14 + 64),
            v33[1] = *(_QWORD *)(v14 + 72),
            v33[2] = *(_QWORD *)(v14 + 80),
            v33[3] = *(_QWORD *)(v14 + 88),
            !v27) )
      {
        memset(v32, 0, sizeof(v32));
        v15 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
        SourceString[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
        v16 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
        SourceString[1] = v15;
        v17 = *(_OWORD *)L"\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
        SourceString[2] = v16;
        v18 = *(_OWORD *)L"ControlSet\\Control\\CrashControl\\LastCrashdump";
        SourceString[3] = v17;
        v19 = *(_OWORD *)L"et\\Control\\CrashControl\\LastCrashdump";
        SourceString[4] = v18;
        v20 = *(_OWORD *)L"ol\\CrashControl\\LastCrashdump";
        SourceString[5] = v19;
        SourceString[6] = v20;
        SourceString[7] = *(_OWORD *)L"Control\\LastCrashdump";
        v21 = *(_QWORD *)L"hdump";
        SourceString[8] = *(_OWORD *)L"LastCrashdump";
        v55 = v21;
        v56 = *(_DWORD *)L"p";
        if ( (int)PopReadRegKeyValue((PCWSTR)SourceString, L"Info", 0x30uLL, 0, v32) >= 0 )
        {
          v27 = v32[1];
          v33[0] = v32[2];
          v28 = 1;
        }
      }
      v29 = a2;
      UserData.Ptr = (ULONGLONG)&v27;
      v22 = &v35;
      *(_QWORD *)&UserData.Size = 4LL;
      v23 = v33;
      v24 = 4LL;
      do
      {
        *(_QWORD *)(v22 - 12) = v23++;
        *(_QWORD *)(v22 - 4) = 8LL;
        v22 += 16;
        --v24;
      }
      while ( v24 );
      v36 = &v29;
      v37 = 4LL;
      v38 = &a6;
      v41 = 4LL;
      v40 = &v30;
      v42 = &v25;
      v44 = &v31;
      v46 = &v57;
      v48 = &a5;
      v50 = &v28;
      v52 = &v26;
      v45 = 4LL;
      v47 = 4LL;
      v51 = 4LL;
      v39 = 8LL;
      v43 = 1LL;
      v49 = 1LL;
      v53 = 1LL;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DIRTY_TRANSITION, 0LL, 0, 0LL, 0LL, 0xEu, &UserData);
    }
  }
  return result;
}
