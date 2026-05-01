/*
 * XREFs of ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180023A10
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180028200 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800029F4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000ABD4 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x1800152B4 (RmpWnfPublishMessageToClientStateName.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampActStart(struct _HAM_ACTIVITY *a1)
{
  __int128 *v1; // r8
  char v3; // r13
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  struct _RM_HAM_ACTIVITY_HOST *v6; // rcx
  __int64 v7; // r15
  unsigned int v8; // ecx
  __int64 v9; // rsi
  DWORD v10; // r14d
  _QWORD *Value; // rbx
  _QWORD *v12; // rax
  bool v13; // zf
  DWORD v14; // esi
  __int64 v15; // r14
  _QWORD *v16; // rbx
  __int16 v17; // si
  int v18; // ebx
  _QWORD *v19; // rax
  int v20; // eax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rax
  char v34; // [rsp+48h] [rbp-C0h] BYREF
  char v35; // [rsp+49h] [rbp-BFh] BYREF
  unsigned int v36; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD v37[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+70h] [rbp-98h]
  __int64 v40; // [rsp+78h] [rbp-90h]
  int v41; // [rsp+80h] [rbp-88h]
  int v42; // [rsp+84h] [rbp-84h]
  int v43; // [rsp+88h] [rbp-80h]
  int v44; // [rsp+8Ch] [rbp-7Ch]
  int v45; // [rsp+90h] [rbp-78h]
  unsigned int v46; // [rsp+94h] [rbp-74h]
  unsigned __int64 v47; // [rsp+98h] [rbp-70h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-50h]
  struct _RTL_BITMAP BitMapHeader; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v52; // [rsp+D0h] [rbp-38h]
  __int128 v53; // [rsp+E0h] [rbp-28h]
  __int128 v54; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+108h] [rbp+0h] BYREF
  void *v56; // [rsp+118h] [rbp+10h]
  int v57; // [rsp+120h] [rbp+18h]
  int v58; // [rsp+124h] [rbp+1Ch]
  char *v59; // [rsp+128h] [rbp+20h]
  __int64 v60; // [rsp+130h] [rbp+28h]
  char *v61; // [rsp+138h] [rbp+30h]
  __int64 v62; // [rsp+140h] [rbp+38h]
  char *v63; // [rsp+148h] [rbp+40h]
  __int64 v64; // [rsp+150h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+158h] [rbp+50h] BYREF
  _QWORD *v66; // [rsp+178h] [rbp+70h]
  __int64 v67; // [rsp+180h] [rbp+78h]
  unsigned int *v68; // [rsp+188h] [rbp+80h]
  __int64 v69; // [rsp+190h] [rbp+88h]
  __int64 *v70; // [rsp+198h] [rbp+90h]
  __int64 v71; // [rsp+1A0h] [rbp+98h]

  v1 = (__int128 *)*((_QWORD *)a1 + 65);
  v3 = *((_BYTE *)a1 + 548);
  v4 = v1[1];
  v52 = *v1;
  v5 = v1[2];
  *((_BYTE *)a1 + 548) = 3;
  v53 = v4;
  v54 = v5;
  if ( v1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    *((_QWORD *)a1 + 65) = 0LL;
  }
  v6 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  *((_BYTE *)a1 + 549) = 6;
  HampHostUpdateActivityState(v6);
  v7 = *((_QWORD *)a1 + 10);
  *((_QWORD *)a1 + 64) = *(_QWORD *)(v7 + 800);
  v8 = *(_DWORD *)(v7 + 832);
  v9 = *(_QWORD *)(v7 + 688);
  if ( v8 <= *((_DWORD *)a1 + 97) )
    v8 = *((_DWORD *)a1 + 97);
  *(_DWORD *)(v7 + 832) = v8;
  if ( v9 )
  {
    v10 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        __int2c();
      *Value |= 8uLL;
      ++Value[4];
    }
    RtlAcquireSRWLockExclusive(v9 + 8);
    *(_DWORD *)(v9 + 16) = GetCurrentThreadId();
    HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v9);
    *(_DWORD *)(v9 + 16) = 0;
    RtlReleaseSRWLockExclusive(v9 + 8);
    if ( HampLockTrackerId != -1 )
    {
      v12 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v12 & 8) == 0 )
        __int2c();
      v13 = v12[4]-- == 1LL;
      if ( v13 )
        *v12 &= ~8uLL;
    }
  }
  RtlInitializeBitMap(&BitMapHeader, (PULONG)a1 + 124, 0x2Fu);
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x19u) )
    *(_QWORD *)(v7 + 648) |= 0x800000000000000uLL;
  if ( *((_QWORD *)a1 + 8) )
  {
    v37[0] = *((_QWORD *)a1 + 5);
    v38 = 0LL;
    HIWORD(v46) = 0;
    v37[1] = 0LL;
    if ( *(_DWORD *)(v7 + 560) == 2 )
    {
      v14 = HampLockTrackerId;
      v15 = *(_QWORD *)(v7 + 776);
      if ( HampLockTrackerId != -1 )
      {
        v16 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v14) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v16 |= 0x20uLL;
        ++v16[6];
      }
      RtlAcquireSRWLockShared(v15 + 576);
      v17 = *(_WORD *)(v15 + 608);
      v18 = (*(_DWORD *)(v15 + 616) >> 5) & 7;
      if ( HampLockTrackerId != -1 )
      {
        v19 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v19 & 0x20) == 0 )
          __int2c();
        v13 = v19[6]-- == 1LL;
        if ( v13 )
          *v19 &= ~0x20uLL;
      }
      RtlReleaseSRWLockShared(v15 + 576);
      if ( v18 == 4 )
      {
        v18 = 3;
      }
      else if ( v18 != 3 )
      {
        v20 = v18;
        if ( (*(_QWORD *)(v7 + 648) & 0x2000000000000LL) == 0 )
          v20 = 3;
        v18 = v20;
      }
    }
    else
    {
      v18 = 4;
      v17 = 6912;
    }
    LOWORD(v46) = v17;
    v46 = (v18 << 16) | v46 & 0xFFF8FFFF;
    v39 = *((_QWORD *)a1 + 64);
    RtlQueryPerformanceFrequency(&v47);
    v21 = -1LL;
    v40 = v52;
    v22 = -1LL;
    if ( is_mul_ok(*((_QWORD *)&v52 + 1) - v52, 0x3E8uLL) )
      v22 = 1000 * (*((_QWORD *)&v52 + 1) - v52);
    if ( v47 == 10000000 )
      v23 = v22 / 0x989680;
    else
      v23 = v22 / v47;
    if ( v23 > 0xFFFFFFFF )
      LODWORD(v23) = -1;
    v41 = v23;
    v24 = -1LL;
    if ( is_mul_ok(v53 - *((_QWORD *)&v52 + 1), 0x3E8uLL) )
      v24 = 1000 * (v53 - *((_QWORD *)&v52 + 1));
    if ( v47 == 10000000 )
      v25 = v24 / 0x989680;
    else
      v25 = v24 / v47;
    if ( v25 > 0xFFFFFFFF )
      LODWORD(v25) = -1;
    v42 = v25;
    v26 = -1LL;
    if ( is_mul_ok(*((_QWORD *)&v53 + 1) - v53, 0x3E8uLL) )
      v26 = 1000 * (*((_QWORD *)&v53 + 1) - v53);
    if ( v47 == 10000000 )
      v27 = v26 / 0x989680;
    else
      v27 = v26 / v47;
    if ( v27 > 0xFFFFFFFF )
      LODWORD(v27) = -1;
    v43 = v27;
    v28 = -1LL;
    if ( is_mul_ok(v54 - *((_QWORD *)&v53 + 1), 0x3E8uLL) )
      v28 = 1000 * (v54 - *((_QWORD *)&v53 + 1));
    if ( v47 == 10000000 )
      v29 = v28 / 0x989680;
    else
      v29 = v28 / v47;
    if ( v29 > 0xFFFFFFFF )
      LODWORD(v29) = -1;
    v44 = v29;
    v50 = ((unsigned __int64)(*((_QWORD *)&v54 + 1) - v54) * (unsigned __int128)0x3E8uLL) >> 64;
    if ( is_mul_ok(*((_QWORD *)&v54 + 1) - v54, 0x3E8uLL) )
      v21 = 1000 * (*((_QWORD *)&v54 + 1) - v54);
    if ( v47 == 10000000 )
      v30 = v21 / 0x989680;
    else
      v30 = v21 / v47;
    v31 = *((_QWORD *)a1 + 8);
    if ( v30 > 0xFFFFFFFF )
      LODWORD(v30) = -1;
    v45 = v30;
    v32 = (_QWORD *)(v31 + 104);
    if ( (*(_BYTE *)(v31 + 128) & 2) != 0 )
    {
      ((void (__fastcall *)(_QWORD *, _QWORD, unsigned __int64, unsigned __int64))*v32)(
        v37,
        *(_QWORD *)(v31 + 120),
        v21,
        v47);
    }
    else if ( (int)RmpWnfPublishMessageToClientStateName(v32, v37, 0x40u, *(_QWORD *)(v31 + 112)) < 0
           && dword_1800AB2C0 > 4u
           && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL) )
    {
      v67 = 8LL;
      v66 = v37;
      v36 = v38;
      v68 = &v36;
      v70 = &v48;
      v69 = 4LL;
      v48 = 0x1000000LL;
      v71 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009690B, 0LL, 0LL, 5u, &pData);
    }
    v33 = *(_QWORD *)(v7 + 648);
    if ( (v33 & 0x100000000000LL) != 0 && (v33 & 0x30000) != 0 )
      HampActRequestStopEx((__int64)a1, 2u, 4, 0, (unsigned __int16)v33, 0, 0LL);
  }
  if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
  {
    v60 = 8LL;
    v59 = (char *)a1 + 40;
    v61 = &v34;
    v63 = &v35;
    v34 = 3;
    v62 = 1LL;
    v35 = v3;
    v64 = 1LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
    v56 = &unk_180099A33;
    UserData.Reserved = 2;
    v57 = 55;
    v58 = 1;
    v36 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
}
