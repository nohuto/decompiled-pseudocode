/*
 * XREFs of ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180036200
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800252A0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampRmContextStopActivity@@YAXPEAX@Z @ 0x180034F64 (-HampRmContextStopActivity@@YAXPEAX@Z.c)
 *     RmCoreRpcSrvReleaseResourceSet @ 0x1800361D0 (RmCoreRpcSrvReleaseResourceSet.c)
 *     RmtSrv_RS_ReleaseResources @ 0x180061820 (RmtSrv_RS_ReleaseResources.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetReleaseResources(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, unsigned int a3)
{
  int v4; // r13d
  __int64 v5; // rbx
  DWORD v6; // esi
  _QWORD *Value; // rdi
  void *v8; // r14
  __int64 v9; // rdi
  int v10; // esi
  unsigned int v11; // r11d
  __int64 v12; // rdx
  __int64 v13; // r10
  _QWORD *v14; // rax
  DWORD v17; // ebx
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  struct _RM_SERVICE_GLOBALS *v19; // [rsp+48h] [rbp-C0h]
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h]
  __int64 v22; // [rsp+60h] [rbp-A8h]
  char *v23; // [rsp+68h] [rbp-A0h]
  __int64 v24; // [rsp+70h] [rbp-98h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR v26; // [rsp+88h] [rbp-80h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h]
  _BYTE v28[144]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+138h] [rbp+30h] BYREF
  void *v30; // [rsp+148h] [rbp+40h]
  int v31; // [rsp+150h] [rbp+48h]
  int v32; // [rsp+154h] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+158h] [rbp+50h] BYREF
  void *v34; // [rsp+168h] [rbp+60h]
  int v35; // [rsp+170h] [rbp+68h]
  int v36; // [rsp+174h] [rbp+6Ch]
  __int64 *v37; // [rsp+178h] [rbp+70h]
  __int64 v38; // [rsp+180h] [rbp+78h]
  __int64 *v39; // [rsp+188h] [rbp+80h]
  __int64 v40; // [rsp+190h] [rbp+88h]

  v19 = a1;
  v20 = a2;
  if ( HampLockTrackerId == -1 || !TlsGetValue(HampLockTrackerId) )
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v28);
    v4 = 0;
  }
  else
  {
    v4 = 1;
  }
  if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB288;
    v30 = &unk_180093AF5;
    UserData.Reserved = 2;
    v31 = 32;
    v32 = 1;
    EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = 0LL;
  if ( (a3 & 3) == a3 )
  {
    v6 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v6) )
        __int2c();
      *Value |= 1uLL;
      ++Value[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    v8 = 0LL;
    dword_1800AC208 = GetCurrentThreadId();
    v22 = v20;
    v23 = (char *)v19 + 552;
    RtlAcquireSRWLockShared((char *)v19 + 552);
    v9 = 0LL;
    v27 = v20;
    v10 = -1073741275;
    v11 = *((_DWORD *)v19 + 135);
    v12 = -1LL << (*((_BYTE *)v19 + 540) & 0x1F);
    v13 = v12 & (HIBYTE(v20)
               + 37
               * (BYTE6(v20)
                + 37
                * (BYTE5(v20)
                 + 37
                 * (BYTE4(v20)
                  + 37 * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883LL))))))));
    v21 = v12;
LABEL_14:
    if ( v9 )
      goto LABEL_17;
    if ( v11 >= 0x20 )
    {
      v24 = v13;
      v12 = v21;
      v9 = *((_QWORD *)v19 + 68)
         + 8LL
         * ((37
           * (BYTE6(v13)
            + 37
            * (BYTE5(v13)
             + 37
             * (BYTE4(v13)
              + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
           + HIBYTE(v13)) & ((v11 >> 5) - 1));
LABEL_17:
      while ( 1 )
      {
        v9 = *(_QWORD *)v9;
        if ( (v9 & 1) != 0 )
          break;
        if ( v13 == (v12 & *(_QWORD *)(v9 + 8)) )
        {
          if ( v22 != *(_QWORD *)(v9 + 32) )
            goto LABEL_14;
          v10 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 + 16)) <= 1 )
            __fastfail(0xEu);
          goto LABEL_21;
        }
      }
    }
    v9 = v24;
LABEL_21:
    RtlReleaseSRWLockShared(v23);
    if ( v10 >= 0 )
    {
      v8 = (void *)v9;
      v10 = 0;
      v5 = *(_QWORD *)(v9 + 48);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    }
    if ( v8 )
      RmpObjectRelease(v8);
    if ( v10 == -1073741275 )
    {
      LODWORD(v18) = 1;
    }
    else
    {
      LODWORD(v18) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, a3);
      if ( (int)v18 >= 0 )
        LODWORD(v18) = 0;
    }
    dword_1800AC208 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      v14 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v14 & 1) == 0 )
        __int2c();
      if ( v14[1]-- == 1LL )
        *v14 &= ~1uLL;
    }
  }
  else
  {
    LODWORD(v18) = -805306127;
  }
  if ( hProvider > 4u && (byte_1800AB290 & 9) != 0 && (qword_1800AB298 & 9) == qword_1800AB298 )
  {
    v38 = 4LL;
    v37 = &v18;
    v39 = &v20;
    v40 = 8LL;
    *(_DWORD *)&v26.Level = 516;
    v33.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&v26.Id = 184549376;
    v26.Keyword = 9LL;
    v33.Size = *(unsigned __int16 *)off_1800AB288;
    v34 = &unk_1800934D5;
    v33.Reserved = 2;
    v35 = 50;
    v36 = 1;
    EventWriteTransfer(qword_1800AB2A0, &v26, 0LL, 0LL, 4u, &v33);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( !v4 )
  {
    v17 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v17, 0LL);
    }
  }
  return (unsigned int)v18;
}
