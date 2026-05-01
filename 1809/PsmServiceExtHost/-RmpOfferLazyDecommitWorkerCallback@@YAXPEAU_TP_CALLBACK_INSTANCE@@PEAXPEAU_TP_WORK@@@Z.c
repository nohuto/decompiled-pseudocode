/*
 * XREFs of ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180062990
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001B000 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800390E4 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18005B37C (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 */

void __fastcall RmpOfferLazyDecommitWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, _QWORD *a2, struct _TP_WORK *a3)
{
  int v4; // r14d
  _QWORD **v5; // r15
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  DWORD v15; // ebx
  unsigned __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  _BYTE v24[144]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 *v26; // [rsp+120h] [rbp+20h]
  int v27; // [rsp+128h] [rbp+28h]
  int v28; // [rsp+12Ch] [rbp+2Ch]
  int *v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+138h] [rbp+38h]
  int v31; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v32; // [rsp+140h] [rbp+40h]
  int v33; // [rsp+148h] [rbp+48h]
  int v34; // [rsp+14Ch] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 0x11uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_1800878FD, 0LL, 0LL, 2u, &pData);
  RtlQueryUnbiasedInterruptTime(&v19);
  v16 = 0LL;
  v4 = 0;
  RmpAcquireGlobalLock();
  v5 = (_QWORD **)(a2 + 1);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    v7 = *v6;
    v8 = v6 - 152;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v9 = (_QWORD *)v6[1], (_QWORD *)*v9 != v6) )
      __fastfail(3u);
    *v9 = v7;
    *(_QWORD *)(v7 + 8) = v9;
    *v6 = 0LL;
    v6[1] = 0LL;
    if ( *((int *)v8 + 6) >= 0 && (*(_BYTE *)(v8[6] + 2684LL) & 2) == 0 )
    {
      if ( (*((_BYTE *)v8 + 1188) & 0x10) != 0 )
        *((_DWORD *)v6 - 8) |= 4u;
      v21 = -1LL;
      v23 = 0LL;
      v22 = 0LL;
      LODWORD(v23) = (*((_DWORD *)v8 + 297) & 0x10 | 0x20u) >> 4;
      RmpReleaseGlobalLock();
      if ( (int)RmpActivityHostDecommitOfferedMemory(
                  (struct _RM_ACTIVITY_HOST *)(v6 - 152),
                  (struct _RM_OFFERED_DECOMMIT_INFO *)&v21) >= 0 )
      {
        v16 += v22;
        ++v4;
        RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v8[7], (struct _RM_SYSTEM_MEMORY_METRICS *)&v25);
        *(v6 - 6) = v32;
      }
      RmpAcquireGlobalLock();
      v10 = *((_DWORD *)v6 - 8);
      if ( (v10 & 4) != 0 )
      {
        *((_DWORD *)v6 - 8) = v10 & 0xFFFFFFFB;
        RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)(v6 - 152));
      }
    }
    RmpObjectRelease((struct _RM_OBJECT_HEADER *)(v6 - 152));
  }
  RtlQueryUnbiasedInterruptTime(&v18);
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 0x19uLL) )
  {
    v28 = 0;
    v31 = 0;
    v26 = &v16;
    v29 = &v17;
    v34 = 0;
    v20 = v18 - v19;
    v32 = &v20;
    v27 = 8;
    v17 = v4;
    v30 = 4;
    v33 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180087925, 0LL, 0LL, 5u, &v25);
  }
  v11 = v16;
  a2[7] += v16;
  v12 = a2[8];
  if ( v11 < v12 )
    v12 = v11;
  a2[8] = v12;
  v13 = a2[9];
  if ( v11 > v13 )
    v13 = v11;
  v14 = v18;
  *((_DWORD *)a2 + 22) += v4;
  ++*((_DWORD *)a2 + 23);
  *((_DWORD *)a2 + 6) &= ~1u;
  a2[9] = v13;
  a2[10] += v14 - v19;
  a2[4] = v14;
  RmpReleaseGlobalLock();
  v15 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v15, 0LL);
  }
}
