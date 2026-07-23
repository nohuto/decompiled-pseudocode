/*
 * XREFs of PopDiagTraceRtcWakeInfo @ 0x140143028
 * Callers:
 *     PopValidateRTCWake @ 0x140567700 (PopValidateRTCWake.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopDiagInterruptTimeToSystemTime @ 0x140567808 (PopDiagInterruptTimeToSystemTime.c)
 */

char __fastcall PopDiagTraceRtcWakeInfo(__int64 a1, int a2, int a3, int a4, int a5, int a6, __int64 a7)
{
  char result; // al
  int v8; // r9d
  __int64 v9; // r10
  REGHANDLE v10; // rbx
  int v11; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v13; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v14; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v15; // [rsp+60h] [rbp-A8h] BYREF
  int v16; // [rsp+64h] [rbp-A4h] BYREF
  int v17; // [rsp+68h] [rbp-A0h] BYREF
  int v18; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v19; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v20; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v21; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v22; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v23; // [rsp+80h] [rbp-88h] BYREF
  int v24; // [rsp+84h] [rbp-84h] BYREF
  BOOL v25; // [rsp+88h] [rbp-80h] BYREF
  char v26[8]; // [rsp+90h] [rbp-78h] BYREF
  char v27[8]; // [rsp+98h] [rbp-70h] BYREF
  char v28[8]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v29[16]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  int *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  int *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  int *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  int *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  unsigned int *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]
  unsigned int *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  unsigned int *v43; // [rsp+128h] [rbp+20h]
  __int64 v44; // [rsp+130h] [rbp+28h]
  char *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  char *v47; // [rsp+148h] [rbp+40h]
  __int64 v48; // [rsp+150h] [rbp+48h]
  int *v49; // [rsp+158h] [rbp+50h]
  __int64 v50; // [rsp+160h] [rbp+58h]
  char *v51; // [rsp+168h] [rbp+60h]
  __int64 v52; // [rsp+170h] [rbp+68h]
  _BYTE *v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  BOOL *v55; // [rsp+188h] [rbp+80h]
  __int64 v56; // [rsp+190h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+198h] [rbp+90h] BYREF
  int *v58; // [rsp+1B8h] [rbp+B0h]
  __int64 v59; // [rsp+1C0h] [rbp+B8h]
  int *v60; // [rsp+1C8h] [rbp+C0h]
  __int64 v61; // [rsp+1D0h] [rbp+C8h]
  int *v62; // [rsp+1D8h] [rbp+D0h]
  __int64 v63; // [rsp+1E0h] [rbp+D8h]
  int *v64; // [rsp+1E8h] [rbp+E0h]
  __int64 v65; // [rsp+1F0h] [rbp+E8h]
  int *v66; // [rsp+1F8h] [rbp+F0h]
  __int64 v67; // [rsp+200h] [rbp+F8h]
  unsigned int *v68; // [rsp+208h] [rbp+100h]
  __int64 v69; // [rsp+210h] [rbp+108h]
  unsigned int *v70; // [rsp+218h] [rbp+110h]
  __int64 v71; // [rsp+220h] [rbp+118h]
  unsigned int *v72; // [rsp+228h] [rbp+120h]
  __int64 v73; // [rsp+230h] [rbp+128h]
  char *v74; // [rsp+238h] [rbp+130h]
  __int64 v75; // [rsp+240h] [rbp+138h]
  char *v76; // [rsp+248h] [rbp+140h]
  __int64 v77; // [rsp+250h] [rbp+148h]
  int *v78; // [rsp+258h] [rbp+150h]
  __int64 v79; // [rsp+260h] [rbp+158h]
  char *v80; // [rsp+268h] [rbp+160h]
  __int64 v81; // [rsp+270h] [rbp+168h]
  _BYTE *v82; // [rsp+278h] [rbp+170h]
  __int64 v83; // [rsp+280h] [rbp+178h]
  int *v84; // [rsp+288h] [rbp+180h]
  __int64 v85; // [rsp+290h] [rbp+188h]
  int v86; // [rsp+2E0h] [rbp+1D8h] BYREF
  int v87; // [rsp+2E8h] [rbp+1E0h] BYREF
  int v88; // [rsp+2F0h] [rbp+1E8h] BYREF

  v88 = a4;
  v87 = a3;
  v86 = a2;
  v12 = PopFixedWakeSourceMask;
  v13 = ((unsigned int)PopFixedWakeSourceMask >> 3) & 1;
  v15 = ((unsigned int)PopFixedWakeSourceMask >> 2) & 1;
  v14 = ((unsigned int)PopFixedWakeSourceMask >> 4) & 1;
  PopDiagInterruptTimeToSystemTime(qword_140418810, v26);
  PopDiagInterruptTimeToSystemTime(qword_140418828, v27);
  PopDiagInterruptTimeToSystemTime(qword_1404187E8, v28);
  result = PopDiagInterruptTimeToSystemTime(a7, v29);
  v25 = PopPendingUserPresenceDuringSystemSleep != 0;
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( result )
    {
      v16 = v86;
      LOBYTE(v11) = v87;
      v17 = v88;
      v18 = a5;
      v19 = v12;
      v20 = v13;
      v21 = v14;
      v22 = v15;
      v23 = a6;
      v58 = &v16;
      v60 = &v11;
      v62 = &v17;
      v64 = &v18;
      v66 = &v19;
      v68 = &v20;
      v70 = &v21;
      v72 = &v22;
      v74 = v26;
      v76 = v27;
      v78 = &v23;
      v80 = v28;
      v82 = v29;
      v84 = &v24;
      v24 = v8;
      v59 = 4LL;
      v61 = v9;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 4LL;
      v71 = 4LL;
      v73 = 4LL;
      v75 = 8LL;
      v77 = 8LL;
      v79 = 4LL;
      v81 = 8LL;
      v83 = 8LL;
      v85 = 4LL;
      result = TlgWrite(&pCallbackContext, &unk_140370BC5, 0LL, 0LL, 0x10u, &pData);
    }
  }
  if ( PopDiagHandleRegistered )
  {
    v10 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_RTC_WAKE_INFO);
    if ( result )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v86;
      v32 = 4LL;
      v31 = &v87;
      v34 = 4LL;
      v33 = &v88;
      v36 = 4LL;
      v35 = &a5;
      v38 = 4LL;
      v37 = &v12;
      v39 = &v13;
      v41 = &v14;
      v43 = &v15;
      v45 = v26;
      v47 = v27;
      v49 = &a6;
      v51 = v28;
      v53 = v29;
      v55 = &v25;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 8LL;
      v48 = 8LL;
      v50 = 4LL;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 4LL;
      return EtwWriteEx(v10, &POP_ETW_EVENT_RTC_WAKE_INFO, 0LL, 0, 0LL, 0LL, 0xEu, &UserData);
    }
  }
  return result;
}
