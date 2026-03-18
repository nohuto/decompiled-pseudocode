/*
 * XREFs of ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00C1504
 * Callers:
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007C1C0 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B0010 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00290D8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0029110 (_TlgWrite.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00C2088 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_DEVICE *a2,
        char a3)
{
  unsigned __int16 *v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  _QWORD *v9; // rax
  const CHAR *ProcessImageFileName; // rax
  const CHAR *v11; // rdx
  __int64 v12; // rax
  LPCGUID v13; // r9
  unsigned __int16 *v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  const CHAR *v18; // rax
  __int64 v19; // rcx
  LPCGUID v20; // r9
  GUID v21; // xmm0
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v26; // [rsp+70h] [rbp-90h]
  int v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+7Ch] [rbp-84h]
  __int64 v29; // [rsp+80h] [rbp-80h]
  _DWORD v30[2]; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  int v34; // [rsp+ACh] [rbp-54h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DCh] [rbp-24h]
  __int64 v39; // [rsp+E0h] [rbp-20h]
  _DWORD v40[2]; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+110h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 260LL)) <= 6 )
  {
    if ( a3 )
      EtwActivityIdControl(3u, &ActivityId);
    else
      ActivityId = *(GUID *)((char *)a2 + 268);
    if ( (unsigned int)hProvider > 5
      && (qword_1C004D058 & 0x400000000008LL) != 0
      && (qword_1C004D060 & 0x400000000008LL) == qword_1C004D060 )
    {
      v6 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 1392LL);
      v38 = 0;
      v36 = v40;
      v37 = 2;
      v7 = *v6;
      v8 = *((_QWORD *)v6 + 1);
      v40[1] = 0;
      v39 = v8;
      v9 = (_QWORD *)*((_QWORD *)a2 + 1);
      v40[0] = v7;
      ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*v9);
      TlgCreateSz(&pDesc, ProcessImageFileName);
      v11 = "AddedToPenaltyBox";
      v12 = **((_QWORD **)a2 + 1);
      v44 = 0;
      v22 = v12;
      v43 = 8;
      v42 = &v22;
      if ( !a3 )
        v11 = "RemovedFromPenaltyBox";
      TlgCreateSz(&v45, v11);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040986, &ActivityId, v13, 7u, &pData);
    }
    if ( a3 )
    {
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(this, *((struct VIDMM_PROCESS_ADAPTER_INFO **)a2 + 2), &ActivityId);
      if ( (unsigned int)hProvider > 5
        && (qword_1C004D058 & 0x400000000008LL) != 0
        && (qword_1C004D060 & 0x400000000008LL) == qword_1C004D060 )
      {
        v14 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 1392LL);
        v28 = 0;
        v26 = v30;
        v27 = 2;
        v15 = *v14;
        v16 = *((_QWORD *)v14 + 1);
        v30[1] = 0;
        v29 = v16;
        v17 = *((_QWORD *)this + 1);
        v30[0] = v15;
        v18 = (const CHAR *)PsGetProcessImageFileName(**(_QWORD **)(v17 + 8));
        TlgCreateSz(&v31, v18);
        v19 = **(_QWORD **)(*((_QWORD *)this + 1) + 8LL);
        v34 = 0;
        v32 = &v23;
        v23 = v19;
        v33 = 8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004092D, &ActivityId, v20, 6u, &v25);
      }
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
        this,
        *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
        &ActivityId);
      v21 = ActivityId;
    }
    else
    {
      v21 = GUID_NULL;
    }
    *(GUID *)((char *)a2 + 268) = v21;
  }
}
