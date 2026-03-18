/*
 * XREFs of ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00C1B0C
 * Callers:
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00C17C0 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00C1944 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C1EEC (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C2330 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001E20 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00290D8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0029110 (_TlgWrite.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C0077360 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogMemoryState(VIDMM_COMMIT_TELEMETRY *this, struct _GUID *a2)
{
  const CHAR *v3; // rdx
  unsigned __int16 *v4; // rax
  int v5; // ecx
  __int64 v6; // rax
  LPCGUID v7; // r9
  LPCGUID v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rdi
  unsigned int v12; // r14d
  __int64 v13; // rsi
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rbx
  struct VIDMM_PARTITION *v15; // r9
  struct VIDMM_SEGMENT_GROUP_STATE *v16; // rax
  unsigned __int64 v17; // r8
  struct VIDMM_SEGMENT_GROUP_STATE *v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  char v22; // al
  unsigned __int16 *v23; // rax
  int v24; // ecx
  const GUID *v25; // rbx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  char v28; // al
  unsigned __int16 *v29; // rax
  int v30; // ecx
  unsigned __int64 v32; // [rsp+38h] [rbp-91h] BYREF
  __int64 v33; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-81h] BYREF
  struct VIDMM_SEGMENT_GROUP_STATE *v35; // [rsp+50h] [rbp-79h]
  unsigned __int64 v36; // [rsp+58h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-69h] BYREF
  int *v38; // [rsp+80h] [rbp-49h]
  __int64 v39; // [rsp+88h] [rbp-41h]
  __int64 v40; // [rsp+90h] [rbp-39h]
  int v41; // [rsp+98h] [rbp-31h] BYREF
  int v42; // [rsp+9Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-29h] BYREF
  unsigned __int64 *v44; // [rsp+B0h] [rbp-19h]
  __int64 v45; // [rsp+B8h] [rbp-11h]
  __int64 *v46; // [rsp+C0h] [rbp-9h]
  __int64 v47; // [rsp+C8h] [rbp-1h]
  unsigned __int64 *v48; // [rsp+D0h] [rbp+7h]
  __int64 v49; // [rsp+D8h] [rbp+Fh]

  if ( *((_BYTE *)this + 24) )
  {
    v3 = "Discrete";
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)this + 40184LL) + 536LL) & 2) == 0 )
      v3 = "Integrated";
    if ( (unsigned int)hProvider > 5
      && (qword_1C004D058 & 0x400000000008LL) != 0
      && (qword_1C004D060 & 0x400000000008LL) == qword_1C004D060 )
    {
      v4 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 1392LL);
      v38 = &v41;
      v39 = 2LL;
      v5 = *v4;
      v6 = *((_QWORD *)v4 + 1);
      v41 = v5;
      v40 = v6;
      v42 = 0;
      TlgCreateSz(&pDesc, v3);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040BB2, v8, v7, 5u, &pData);
    }
    if ( DXGPROCESS::GetCurrent() && (v9 = *((_QWORD *)DXGPROCESS::GetCurrent() + 9)) != 0 )
      v10 = *(_QWORD *)(v9 + 8);
    else
      v10 = 0LL;
    v11 = *(_QWORD *)this;
    v12 = 0;
    if ( *(_DWORD *)(*(_QWORD *)this + 6992LL) )
    {
      v13 = qword_1C004D060;
      do
      {
        SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                              (VIDMM_GLOBAL *)v11,
                              v12,
                              D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL,
                              *(struct VIDMM_PARTITION **)(v10 + 264));
        v16 = VIDMM_GLOBAL::GetSegmentGroupState((VIDMM_GLOBAL *)v11, v12, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL, v15);
        v17 = *((_QWORD *)SegmentGroupState + 1);
        v18 = v16;
        v35 = v16;
        v32 = v17;
        v19 = 100LL * *((_QWORD *)SegmentGroupState + 14);
        v33 = *((_QWORD *)SegmentGroupState + 14);
        v20 = v19 / v17;
        v21 = 0LL;
        if ( (__int64)(100 - v20) > 0 )
          v21 = 100 - v20;
        if ( (unsigned int)hProvider <= 5 )
          goto LABEL_22;
        if ( (qword_1C004D058 & 0x400000000008LL) == 0 || (v22 = 1, (v13 & 0x400000000008LL) != v13) )
          v22 = 0;
        if ( v22 )
        {
          v23 = *(unsigned __int16 **)(*(_QWORD *)(v11 + 24) + 1392LL);
          v38 = &v41;
          v39 = 2LL;
          v24 = *v23;
          v40 = *((_QWORD *)v23 + 1);
          pDesc.Ptr = (ULONGLONG)"Local";
          v44 = &v32;
          v46 = &v33;
          v48 = &v34;
          v41 = v24;
          v42 = 0;
          *(_QWORD *)&pDesc.Size = 6LL;
          v45 = 8LL;
          v47 = 8LL;
          v34 = v21;
          v49 = 8LL;
          v25 = a2;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040B33, a2, (LPCGUID)v18, 8u, &pData);
          v18 = v35;
          v11 = *(_QWORD *)this;
          v13 = qword_1C004D060;
        }
        else
        {
LABEL_22:
          v25 = a2;
        }
        if ( (*(_BYTE *)(1560LL * v12 + *(_QWORD *)(v11 + 40184) + 536) & 2) != 0 )
        {
          v32 = *((_QWORD *)v18 + 1);
          v33 = *((_QWORD *)v18 + 14);
          v26 = 100 * v33 / v32;
          v27 = 0LL;
          if ( (__int64)(100 - v26) > 0 )
            v27 = 100 - v26;
          if ( (unsigned int)hProvider > 5 )
          {
            if ( (qword_1C004D058 & 0x400000000008LL) == 0 || (v28 = 1, (v13 & 0x400000000008LL) != v13) )
              v28 = 0;
            if ( v28 )
            {
              v29 = *(unsigned __int16 **)(*(_QWORD *)(v11 + 24) + 1392LL);
              v38 = &v41;
              v39 = 2LL;
              v30 = *v29;
              v40 = *((_QWORD *)v29 + 1);
              pDesc.Ptr = (ULONGLONG)"NonLocal";
              v44 = &v32;
              v46 = &v33;
              v48 = &v36;
              v41 = v30;
              v42 = 0;
              *(_QWORD *)&pDesc.Size = 9LL;
              v45 = 8LL;
              v47 = 8LL;
              v36 = v27;
              v49 = 8LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040B33, v25, (LPCGUID)v18, 8u, &pData);
              v11 = *(_QWORD *)this;
              v13 = qword_1C004D060;
            }
          }
        }
        ++v12;
      }
      while ( v12 < *(_DWORD *)(v11 + 6992) );
    }
  }
}
