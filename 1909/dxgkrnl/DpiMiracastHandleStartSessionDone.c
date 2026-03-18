/*
 * XREFs of DpiMiracastHandleStartSessionDone @ 0x1C02A50B8
 * Callers:
 *     DxgkHandleMiracastEscape @ 0x1C02A5E58 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C004C36C (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastTearDownAssociation @ 0x1C004DCB0 (DpiMiracastTearDownAssociation.c)
 *     McTemplateK0qqqz @ 0x1C004F8E4 (McTemplateK0qqqz.c)
 *     McTemplateK0qqz @ 0x1C004F9B4 (McTemplateK0qqz.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C0052BAC (TraceLoggingWriteMiracastSessionStart.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C02A44E8 (DpiMiracastBroadcastDeviceStateChange.c)
 */

__int64 __fastcall DpiMiracastHandleStartSessionDone(char *P, __int64 a2, const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  const GUID *v9; // r8
  bool v10; // zf
  __int64 v11; // r8
  struct _KEVENT *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // rdx
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  int v37; // eax
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  int v40; // eax
  __int128 v41; // xmm0
  int v42; // eax
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  _OWORD v46[56]; // [rsp+40h] [rbp-C0h] BYREF

  DpiMiracastEtwLogStartMiracastSessionStage((__int64)P, 1, a3);
  *((_DWORD *)P + 175) = *(_DWORD *)(a2 + 16);
  *((_DWORD *)P + 176) = *(_DWORD *)(a2 + 4);
  *(_OWORD *)(P + 708) = *(_OWORD *)(a2 + 772);
  *(_OWORD *)(P + 724) = *(_OWORD *)(a2 + 788);
  *(_OWORD *)(P + 740) = *(_OWORD *)(a2 + 804);
  *(_OWORD *)(P + 756) = *(_OWORD *)(a2 + 820);
  *((_WORD *)P + 386) = 0;
  *((_DWORD *)P + 194) = *(_DWORD *)(a2 + 840);
  *((_DWORD *)P + 195) = *(_DWORD *)(a2 + 8);
  if ( *(int *)(a2 + 4) < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v17 + 24) = *(int *)(a2 + 4);
    WdLogEvent5_WdError(v17);
    *((_DWORD *)P + 196) = *(_DWORD *)(a2 + 16);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      McTemplateK0qqqz(
        v18,
        &EventMiracastStartMiracastSessionFail,
        v19,
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 8),
        *((_DWORD *)P + 50),
        *((const wchar_t **)P + 44));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
        McTemplateK0qqz(
          v20,
          &EventMiracastPerfTrackStartMiracastSessionFailed,
          v21,
          *((_DWORD *)P + 110),
          *((_DWORD *)P + 50),
          *((const wchar_t **)P + 44));
    }
    DpiMiracastTearDownAssociation(P, *(_DWORD *)a2, *(_DWORD *)(a2 + 12), *(_BYTE *)(a2 + 20) != 0 ? 1 : 128, 0);
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
    v10 = *((_DWORD *)P + 102) == 1;
    *((_QWORD *)P + 11) = KeGetCurrentThread();
    if ( v10 )
    {
      *((_DWORD *)P + 103) = 1;
      *((_DWORD *)P + 102) = 2;
      *((_DWORD *)P + 104) = *(_DWORD *)(a2 + 12);
      DpiMiracastBroadcastDeviceStateChange((__int64)P, v8, v9);
      KeSetEvent(*((PRKEVENT *)P + 58), 0, 0);
      v12 = (struct _KEVENT *)*((_QWORD *)P + 59);
      if ( v12 )
      {
        KeSetEvent(v12, 0, 0);
        ObfDereferenceObject(*((PVOID *)P + 59));
        *((_QWORD *)P + 59) = 0LL;
      }
      v13 = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)P + 162) = (MEMORY[0xFFFFF78000000014] - *((_DWORD *)P + 158)) / 10000;
      v14 = *((_QWORD *)P + 80);
      if ( v14 )
      {
        v15 = *(_DWORD *)(a2 + 32);
        v13 -= v14;
        if ( v13 > 1200000000 )
          v16 = v15 & 0xFFFFFFFB;
        else
          v16 = v15 | 4;
        *(_DWORD *)(a2 + 32) = v16;
      }
      *(_OWORD *)(P + 600) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(P + 616) = *(_OWORD *)(a2 + 48);
      if ( !P[590] && (*(_DWORD *)(a2 + 32) & 1) == 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
          McTemplateK0qqz(
            v13,
            &EventMiracastPerfTrackStartMiracastSessionDoneNoMonitor,
            v11,
            *((_DWORD *)P + 110),
            *((_DWORD *)P + 50),
            *((const wchar_t **)P + 44));
        P[590] = 1;
      }
    }
    *((_QWORD *)P + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
  }
  TraceLoggingWriteMiracastSessionStart();
  memset(v46, 0, sizeof(v46));
  v23 = *(_DWORD *)(a2 + 32);
  v24 = 5LL;
  memset(&v46[1], 0, 28);
  v46[3] = *(_OWORD *)(a2 + 40);
  *(_QWORD *)&v46[4] = *(_QWORD *)(a2 + 56);
  v46[0] = 0x38000000018uLL;
  DWORD2(v46[4]) ^= (BYTE8(v46[4]) ^ (unsigned __int8)(8 * v23)) & 0x38;
  v25 = &v46[6];
  LODWORD(v46[5]) = *(_DWORD *)(a2 + 16);
  DWORD1(v46[5]) = *(_DWORD *)(a2 + 4);
  *((_QWORD *)&v46[5] + 1) = *(_QWORD *)(a2 + 8);
  v26 = (_OWORD *)(a2 + 64);
  do
  {
    v27 = v26[1];
    *v25 = *v26;
    v28 = v26[2];
    v25[1] = v27;
    v29 = v26[3];
    v25[2] = v28;
    v30 = v26[4];
    v25[3] = v29;
    v31 = v26[5];
    v25[4] = v30;
    v32 = v26[6];
    v25[5] = v31;
    v33 = v26[7];
    v26 += 8;
    v25[6] = v32;
    v25 += 8;
    *(v25 - 1) = v33;
    --v24;
  }
  while ( v24 );
  v34 = v26[1];
  *v25 = *v26;
  v35 = v26[2];
  v25[1] = v34;
  v36 = v26[3];
  v37 = *((_DWORD *)v26 + 16);
  v25[2] = v35;
  v38 = *(_OWORD *)(a2 + 772);
  v25[3] = v36;
  *((_DWORD *)v25 + 16) = v37;
  v39 = *(_OWORD *)(a2 + 788);
  v40 = *(_DWORD *)(a2 + 840);
  *(_OWORD *)((char *)&v46[50] + 8) = v38;
  DWORD1(v46[50]) = v40;
  v41 = *(_OWORD *)(a2 + 804);
  v42 = *((_DWORD *)P + 197);
  *(_OWORD *)((char *)&v46[51] + 8) = v39;
  HIDWORD(v46[54]) = v42;
  v43 = *(_OWORD *)(a2 + 820);
  WORD4(v46[54]) = 0;
  *(_OWORD *)((char *)&v46[52] + 8) = v41;
  v44 = *((_OWORD *)P + 7);
  *(_OWORD *)((char *)&v46[53] + 8) = v43;
  v46[55] = v44;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46, 0x200000000LL, v22);
}
