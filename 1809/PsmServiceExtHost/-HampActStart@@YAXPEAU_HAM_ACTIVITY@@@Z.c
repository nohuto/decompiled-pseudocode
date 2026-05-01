/*
 * XREFs of ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800223C0
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800248E0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800058B4 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x180014374 (RmpWnfPublishMessageToClientStateName.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027F30 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002F5C4 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampActStart(struct _HAM_ACTIVITY *a1)
{
  _OWORD *v1; // r8
  char v3; // r12
  __int128 v4; // xmm1
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx
  __int64 v6; // rsi
  unsigned int v7; // ecx
  __int64 v8; // r14
  DWORD v9; // r15d
  _QWORD *Value; // rbx
  _QWORD *v11; // rax
  bool v12; // zf
  __int64 v13; // rbx
  DWORD v14; // r14d
  __int64 v15; // r15
  _QWORD *v16; // rbx
  __int64 v17; // r14
  int v18; // ebx
  __int16 v19; // r15
  _QWORD *v20; // rax
  int v21; // eax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rax
  char v33; // [rsp+30h] [rbp-D0h] BYREF
  char v34; // [rsp+31h] [rbp-CFh] BYREF
  int v35; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h]
  int v40; // [rsp+68h] [rbp-98h]
  int v41; // [rsp+6Ch] [rbp-94h]
  int v42; // [rsp+70h] [rbp-90h]
  int v43; // [rsp+74h] [rbp-8Ch]
  unsigned int v44; // [rsp+78h] [rbp-88h]
  unsigned __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+98h] [rbp-68h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-58h]
  __int128 v49; // [rsp+B8h] [rbp-48h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v52; // [rsp+E0h] [rbp-20h]
  int v53; // [rsp+E8h] [rbp-18h]
  int v54; // [rsp+ECh] [rbp-14h]
  char *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  char *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  char *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  _QWORD *v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]
  int *v64; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]

  v1 = (_OWORD *)*((_QWORD *)a1 + 65);
  v3 = *((_BYTE *)a1 + 548);
  v4 = v1[1];
  v48 = *v1;
  v50 = *((_QWORD *)v1 + 4);
  *((_BYTE *)a1 + 548) = 3;
  v49 = v4;
  if ( v1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    *((_QWORD *)a1 + 65) = 0LL;
  }
  v5 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  *((_BYTE *)a1 + 549) = 5;
  HampHostUpdateActivityState(v5);
  v6 = *((_QWORD *)a1 + 10);
  *((_QWORD *)a1 + 64) = *(_QWORD *)(v6 + 776);
  v7 = *(_DWORD *)(v6 + 808);
  v8 = *(_QWORD *)(v6 + 664);
  if ( v7 <= *((_DWORD *)a1 + 97) )
    v7 = *((_DWORD *)a1 + 97);
  *(_DWORD *)(v6 + 808) = v7;
  if ( v8 )
  {
    v9 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        __int2c();
      *Value |= 8uLL;
      ++Value[4];
    }
    RtlAcquireSRWLockExclusive(v8 + 8);
    *(_DWORD *)(v8 + 16) = GetCurrentThreadId();
    HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v8);
    *(_DWORD *)(v8 + 16) = 0;
    RtlReleaseSRWLockExclusive(v8 + 8);
    if ( HampLockTrackerId != -1 )
    {
      v11 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v11 & 8) == 0 )
        __int2c();
      v12 = v11[4]-- == 1LL;
      if ( v12 )
        *v11 &= ~8uLL;
    }
  }
  RtlInitializeBitMap(&BitMapHeader, (PULONG)a1 + 124, 0x2Fu);
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x19u) )
    *(_QWORD *)(v6 + 632) |= 0x800000000000000uLL;
  if ( *((_QWORD *)a1 + 8) )
  {
    v13 = *((_QWORD *)a1 + 5);
    memset_0(v36, 0, 0x40uLL);
    v36[0] = v13;
    v36[1] = 0LL;
    v37 = 0;
    if ( *(_DWORD *)(v6 + 560) == 2 )
    {
      v14 = HampLockTrackerId;
      v15 = *(_QWORD *)(v6 + 752);
      if ( HampLockTrackerId != -1 )
      {
        v16 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v14) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v16 |= 0x20uLL;
        ++v16[6];
      }
      v17 = v15 + 576;
      RtlAcquireSRWLockShared(v15 + 576);
      v18 = *(_DWORD *)(v15 + 608) & 7;
      v19 = *(_DWORD *)(v15 + 608) >> 3;
      if ( HampLockTrackerId != -1 )
      {
        v20 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v20 & 0x20) == 0 )
          __int2c();
        v12 = v20[6]-- == 1LL;
        if ( v12 )
          *v20 &= ~0x20uLL;
      }
      RtlReleaseSRWLockShared(v17);
      if ( v18 == 4 )
      {
        v18 = 3;
      }
      else if ( v18 != 3 )
      {
        v21 = v18;
        if ( (*(_QWORD *)(v6 + 632) & 0x2000000000000LL) == 0 )
          v21 = 3;
        v18 = v21;
      }
    }
    else
    {
      v18 = 4;
      v19 = 6656;
    }
    LOWORD(v44) = v19;
    v44 = (v18 << 16) | v44 & 0xFFF8FFFF;
    v38 = *((_QWORD *)a1 + 64);
    RtlQueryPerformanceFrequency(&v45);
    v22 = -1LL;
    v39 = v48;
    v23 = -1LL;
    if ( is_mul_ok(*((_QWORD *)&v48 + 1) - v48, 0x3E8uLL) )
      v23 = 1000 * (*((_QWORD *)&v48 + 1) - v48);
    if ( v45 == 10000000 )
      v24 = v23 / 0x989680;
    else
      v24 = v23 / v45;
    if ( v24 > 0xFFFFFFFF )
      LODWORD(v24) = -1;
    v40 = v24;
    v25 = -1LL;
    if ( is_mul_ok(v49 - *((_QWORD *)&v48 + 1), 0x3E8uLL) )
      v25 = 1000 * (v49 - *((_QWORD *)&v48 + 1));
    if ( v45 == 10000000 )
      v26 = v25 / 0x989680;
    else
      v26 = v25 / v45;
    if ( v26 > 0xFFFFFFFF )
      LODWORD(v26) = -1;
    v41 = v26;
    v27 = -1LL;
    if ( is_mul_ok(*((_QWORD *)&v49 + 1) - v49, 0x3E8uLL) )
      v27 = 1000 * (*((_QWORD *)&v49 + 1) - v49);
    if ( v45 == 10000000 )
      v28 = v27 / 0x989680;
    else
      v28 = v27 / v45;
    if ( v28 > 0xFFFFFFFF )
      LODWORD(v28) = -1;
    v42 = v28;
    if ( is_mul_ok(v50 - *((_QWORD *)&v49 + 1), 0x3E8uLL) )
      v22 = 1000 * (v50 - *((_QWORD *)&v49 + 1));
    if ( v45 == 10000000 )
      v29 = v22 / 0x989680;
    else
      v29 = v22 / v45;
    v30 = *((_QWORD *)a1 + 8);
    if ( v29 > 0xFFFFFFFF )
      LODWORD(v29) = -1;
    v43 = v29;
    v31 = (_QWORD *)(v30 + 104);
    if ( (*(_BYTE *)(v30 + 128) & 2) != 0 )
    {
      ((void (__fastcall *)(_QWORD *, _QWORD, unsigned __int64, unsigned __int64))*v31)(
        v36,
        *(_QWORD *)(v30 + 120),
        v22,
        v45);
    }
    else if ( (int)RmpWnfPublishMessageToClientStateName(v31, v36, 0x40u, *(_QWORD *)(v30 + 112)) < 0
           && hProvider > 4u
           && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL) )
    {
      v63 = 8LL;
      v62 = v36;
      v35 = v37;
      v64 = &v35;
      v65 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180088BA2, 0LL, 0LL, 4u, &pData);
    }
    v32 = *(_QWORD *)(v6 + 632);
    if ( (v32 & 0x100000000000LL) != 0 && (v32 & 0x30000) != 0 )
      HampActRequestStop((__int64)a1, 2u, 4, (unsigned __int16)v32, 0, 0LL);
  }
  if ( hProvider > 4u && (byte_18009B100 & 8) != 0 && (qword_18009B108 & 8) == qword_18009B108 )
  {
    v56 = 8LL;
    v55 = (char *)a1 + 40;
    v57 = &v33;
    v59 = &v34;
    v33 = 3;
    v58 = 1LL;
    v34 = v3;
    v60 = 1LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18008BBE0 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0F8;
    v52 = &unk_18008BBEB;
    UserData.Reserved = 2;
    v53 = 55;
    v54 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
}
