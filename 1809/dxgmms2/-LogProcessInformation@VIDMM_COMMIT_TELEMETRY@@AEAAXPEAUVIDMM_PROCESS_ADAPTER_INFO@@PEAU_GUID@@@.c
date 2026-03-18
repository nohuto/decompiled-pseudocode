/*
 * XREFs of ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00C2088
 * Callers:
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00C1504 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00C17C0 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00C1944 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C1EEC (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C2330 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00290D8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0029110 (_TlgWrite.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C006AB3C (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_PROCESS_ADAPTER_INFO *a2,
        struct _GUID *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rax
  VIDMM_PROCESS_BUDGET_STATE *v10; // rdi
  char v11; // dl
  unsigned __int16 *v12; // rax
  int v13; // ecx
  _QWORD *v14; // rax
  const CHAR *ProcessImageFileName; // rax
  __int64 *v16; // rcx
  const CHAR *v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  bool v21; // zf
  LPCGUID v22; // r9
  BOOL v23; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h]
  _DWORD v30[2]; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+B0h] [rbp-50h] BYREF
  char *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  char *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  char *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  char *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  BOOL *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  char *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  char *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  char *v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  char *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]

  if ( *((_BYTE *)this + 24) )
  {
    if ( a2 )
    {
      v6 = *(_QWORD *)this;
      v7 = 0;
      if ( *(_DWORD *)(v6 + 6992) )
      {
        v8 = qword_1C004D060;
        do
        {
          v9 = v6;
          v10 = (VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)a2 + 6) + 296LL * v7);
          if ( (unsigned int)hProvider > 5 )
          {
            if ( (qword_1C004D058 & 0x400000000008LL) == 0 || (v11 = 1, (v8 & 0x400000000008LL) != v8) )
              v11 = 0;
            v9 = v6;
            if ( v11 )
            {
              v12 = *(unsigned __int16 **)(*(_QWORD *)(v6 + 24) + 1392LL);
              v27 = v30;
              v28 = 2LL;
              v13 = *v12;
              v29 = *((_QWORD *)v12 + 1);
              v14 = (_QWORD *)*((_QWORD *)a2 + 5);
              v30[0] = v13;
              v30[1] = 0;
              ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*v14);
              TlgCreateSz(&pDesc, ProcessImageFileName);
              v16 = (__int64 *)*((_QWORD *)a2 + 5);
              v24 = *v16;
              v32 = &v24;
              v33 = 8LL;
              if ( *((_BYTE *)this + 24) )
              {
                LOBYTE(v18) = 0;
                if ( v16 )
                {
                  v19 = v16[4];
                  if ( v19 )
                    v18 = *(_DWORD *)(v19 + 328);
                }
                if ( (v18 & 1) != 0 )
                {
                  v17 = "Focus";
                }
                else
                {
                  v17 = "Visible";
                  if ( (v18 & 2) == 0 )
                    v17 = "Occluded";
                }
              }
              else
              {
                v17 = 0LL;
              }
              TlgCreateSz(&v34, v17);
              v36 = 8LL;
              v37 = (char *)v10 + 72;
              v35 = (char *)v10 + 200;
              v39 = (char *)v10 + 136;
              v38 = 8LL;
              v41 = (char *)v10 + 24;
              v40 = 8LL;
              v42 = 8LL;
              v20 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v10);
              v21 = *(_QWORD *)v10 == 0LL;
              v25 = v20;
              v43 = &v25;
              v44 = 8LL;
              v23 = !v21;
              v45 = &v23;
              v47 = (char *)v10 + 208;
              v49 = (char *)v10 + 80;
              v51 = (char *)v10 + 144;
              v53 = (char *)v10 + 32;
              v46 = 4LL;
              v48 = 8LL;
              v50 = 8LL;
              v52 = 8LL;
              v54 = 8LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040BF8, a3, v22, 0x11u, &pData);
              v9 = *(_QWORD *)this;
              v8 = qword_1C004D060;
            }
          }
          ++v7;
          v6 = v9;
        }
        while ( v7 < *(_DWORD *)(v9 + 6992) );
      }
    }
  }
}
