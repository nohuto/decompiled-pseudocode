/*
 * XREFs of ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00C48CC
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0087740 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _TlgWrite @ 0x1C0029C60 (_TlgWrite.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00C4B04 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00C5078 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int16 *v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  GUID ActivityId; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v22; // [rsp+90h] [rbp-70h]
  int v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+9Ch] [rbp-64h]
  _DWORD *v25; // [rsp+A0h] [rbp-60h]
  int v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+ACh] [rbp-54h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  _DWORD v29[2]; // [rsp+B8h] [rbp-48h] BYREF
  char *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]
  __int64 *v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+DCh] [rbp-24h]
  __int64 *v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E8h] [rbp-18h]
  int v38; // [rsp+ECh] [rbp-14h]
  __int64 *v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+FCh] [rbp-4h]
  __int64 *v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+10Ch] [rbp+Ch]
  char *v45; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+118h] [rbp+18h]
  int v47; // [rsp+11Ch] [rbp+1Ch]

  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 252LL)) <= 5 )
  {
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    v15 = 0LL;
    v4 = *((_QWORD *)a2 + 8);
    if ( v4 )
      v15 = *(_QWORD *)(**(_QWORD **)v4 + 16LL);
    if ( (unsigned int)hProvider > 5
      && (qword_1C004E058 & 0x400000000008LL) != 0
      && (qword_1C004E060 & 0x400000000008LL) == qword_1C004E060 )
    {
      v24 = 0;
      v5 = *((_QWORD *)a2 + 18);
      v6 = *((_QWORD *)a2 + 17);
      v22 = &v15;
      v7 = *(_QWORD *)this;
      v23 = 8;
      v8 = *(unsigned __int16 **)(*(_QWORD *)(v7 + 24) + 1408LL);
      v27 = 0;
      v25 = v29;
      v26 = 2;
      v9 = *v8;
      v10 = *((_QWORD *)v8 + 1);
      v29[1] = 0;
      v32 = 0;
      v28 = v10;
      v30 = (char *)a2 + 32;
      v11 = *((_QWORD *)this + 1);
      v29[0] = v9;
      v31 = 8;
      v12 = **(_QWORD **)(v11 + 8);
      v13 = *((_QWORD *)a2 + 19);
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v44 = 0;
      v16 = v12;
      v33 = &v16;
      v34 = 8;
      v17 = v5 - v6;
      v36 = &v17;
      v37 = 8;
      v18 = v13 - v5;
      v47 = 0;
      v39 = &v18;
      v42 = &v19;
      v45 = &v14;
      v40 = 8;
      v19 = v13 - v6;
      v43 = 8;
      v14 = 2;
      v46 = 1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040811, &ActivityId, (LPCGUID)8, 0xBu, &pData);
    }
    VIDMM_COMMIT_TELEMETRY::LogMemoryState(this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      this,
      *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
      &ActivityId);
  }
}
