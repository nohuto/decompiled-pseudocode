/*
 * XREFs of PopDiagTraceSleepStudyStop @ 0x140875518
 * Callers:
 *     PopWdiTimerWorkerThread @ 0x1402E3000 (PopWdiTimerWorkerThread.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void PopDiagTraceSleepStudyStop()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  int v4; // [rsp+3Ch] [rbp-C4h] BYREF
  int v5; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+44h] [rbp-BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  void *v8; // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h]
  int *v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  void *v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  void *v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  void *v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  void *v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  void *v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  void *v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  void *v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  void *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  void *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  void *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  int *v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  int *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  void *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  int *v38; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+158h] [rbp+58h]
  void *v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h]
  void *v42; // [rsp+170h] [rbp+70h]
  __int64 v43; // [rsp+178h] [rbp+78h]
  void *v44; // [rsp+180h] [rbp+80h]
  __int64 v45; // [rsp+188h] [rbp+88h]
  void *v46; // [rsp+190h] [rbp+90h]
  __int64 v47; // [rsp+198h] [rbp+98h]
  void *v48; // [rsp+1A0h] [rbp+A0h]
  __int64 v49; // [rsp+1A8h] [rbp+A8h]
  void *v50; // [rsp+1B0h] [rbp+B0h]
  __int64 v51; // [rsp+1B8h] [rbp+B8h]
  void *v52; // [rsp+1C0h] [rbp+C0h]
  __int64 v53; // [rsp+1C8h] [rbp+C8h]
  void *v54; // [rsp+1D0h] [rbp+D0h]
  __int64 v55; // [rsp+1D8h] [rbp+D8h]
  int *v56; // [rsp+1E0h] [rbp+E0h]
  __int64 v57; // [rsp+1E8h] [rbp+E8h]
  void *v58; // [rsp+1F0h] [rbp+F0h]
  __int64 v59; // [rsp+1F8h] [rbp+F8h]
  void *v60; // [rsp+200h] [rbp+100h]
  __int64 v61; // [rsp+208h] [rbp+108h]
  int *v62; // [rsp+210h] [rbp+110h]
  __int64 v63; // [rsp+218h] [rbp+118h]

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SPM_SCENARIO_STOP) )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      v1 = byte_14041763C & 1;
      v9 = 8LL;
      v3 = byte_14041763D & 1;
      v2 = ((unsigned __int8)byte_14041763D >> 1) & 1;
      v5 = (unsigned __int8)byte_14041768C;
      v6 = (unsigned __int8)byte_14041766C;
      UserData.Ptr = (ULONGLONG)&PopWdiScenarioStopEventData;
      v8 = &unk_1404175E8;
      v10 = &v1;
      v12 = &unk_140417640;
      v14 = &unk_140417648;
      v16 = &unk_140417650;
      v18 = &unk_1404175E0;
      v20 = &unk_1404175DC;
      v22 = &unk_140417620;
      v24 = &unk_140417660;
      v26 = &unk_1404175D8;
      v28 = &unk_140417618;
      v30 = &unk_140417638;
      v32 = &v2;
      v34 = &v3;
      v36 = &unk_140417628;
      v38 = &v4;
      v40 = &unk_140417664;
      v42 = &unk_140417668;
      v44 = &unk_140417670;
      v46 = &unk_140417674;
      v4 = ((unsigned __int8)byte_14041763D >> 2) & 1;
      v11 = 4LL;
      v13 = 8LL;
      v15 = 8LL;
      v17 = 8LL;
      v19 = 8LL;
      v21 = 4LL;
      v23 = 8LL;
      v25 = 1LL;
      v27 = 4LL;
      v29 = 8LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 8LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v48 = &unk_140417678;
      v49 = 4LL;
      v50 = &unk_1404175C8;
      v51 = 4LL;
      v52 = &unk_1404175D0;
      v53 = 8LL;
      v54 = &unk_140417688;
      v55 = 4LL;
      v56 = &v5;
      v58 = &unk_140417690;
      v60 = &unk_140417694;
      v62 = &v6;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 4LL;
      EtwWrite(v0, &POP_ETW_EVENT_SPM_SCENARIO_STOP, &PopDiagActivityId, 0x1Du, &UserData);
    }
  }
}
