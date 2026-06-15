/*
 * XREFs of ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180016678
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180016490 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180016870 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     _TlgCreateSz @ 0x180009C20 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 */

void __fastcall AtmosCheck::TraceResult(AtmosCheck *this, unsigned int a2, char a3)
{
  const CHAR *v3; // r9
  LPCSTR v5; // r11
  int v6; // r10d
  const CHAR *v7; // r9
  int v8; // r10d
  LPCSTR v9; // r11
  int v10; // r10d
  LPCGUID v11; // r8
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD v14[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h]
  void *v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+58h] [rbp-A8h]
  int v18; // [rsp+5Ch] [rbp-A4h]
  void *v19; // [rsp+60h] [rbp-A0h]
  int v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+6Ch] [rbp-94h]
  int *v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  char *v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+A0h] [rbp-60h] BYREF
  GUID *v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  int *v34; // [rsp+E0h] [rbp-20h]
  int v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+ECh] [rbp-14h]
  char *v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+110h] [rbp+10h] BYREF
  GUID *p_pRelatedActivityId; // [rsp+120h] [rbp+20h]
  int v43; // [rsp+128h] [rbp+28h]
  int v44; // [rsp+12Ch] [rbp+2Ch]
  GUID pRelatedActivityId; // [rsp+158h] [rbp+58h] BYREF

  pRelatedActivityId.Data1 = a2;
  v3 = "None";
  switch ( *((_DWORD *)this + 38) )
  {
    case 1:
      v3 = "Initialization";
      break;
    case 2:
      v3 = "AppInstallation";
      break;
    case 3:
      v3 = "AppUninstallation";
      break;
    case 4:
      v3 = "TimerCallback";
      break;
    case 5:
      v3 = "LicenseRefreshTimerCallback";
      break;
    case 6:
      v3 = "ForceLicenseRefresh";
      break;
    case 7:
      v3 = "ClientEventFired";
      break;
  }
  if ( !*((_BYTE *)this + 73) || a3 )
  {
    if ( (unsigned int)dword_1801B1580 > 4 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801B1580, 0x400000000000uLL) )
    {
      v36 = 0;
      v39 = 0;
      v34 = &v13;
      v13 = 3;
      v37 = (char *)this + 136;
      v35 = v8;
      v38 = 16;
      TlgCreateSz(&v40, v7);
      TlgCreateSz(&v41, v9);
      v44 = 0;
      p_pRelatedActivityId = &pRelatedActivityId;
      v43 = v10;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1580, &unk_1801782FB, v11, &pRelatedActivityId, 7u, &pData);
    }
    *((_BYTE *)this + 73) = 1;
  }
  else if ( (unsigned int)dword_1801B1580 > 4 )
  {
    v24 = 0;
    v27 = 0;
    v22 = &v12;
    v12 = 3;
    v25 = (char *)this + 136;
    v23 = 4;
    v26 = 16;
    TlgCreateSz(&pDesc, v3);
    TlgCreateSz(&v29, v5);
    v32 = 0;
    v30 = &pRelatedActivityId;
    v31 = v6;
    v15 = 0LL;
    v14[1] = 4;
    v16 = off_1801B1588;
    v14[0] = ((unsigned int)&unk_1801783E1 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v17 = *(unsigned __int16 *)off_1801B1588;
    v19 = &unk_1801783EC;
    v18 = 2;
    v20 = 86;
    v21 = 1;
    EtwEventWriteTransfer(qword_1801B15A0, v14, 0LL, 0LL, 7, &v16);
  }
}
