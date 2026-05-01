/*
 * XREFs of ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800350B0
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180022D20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampRmContextStopActivity@@YAXPEAX@Z @ 0x18002BE94 (-HampRmContextStopActivity@@YAXPEAX@Z.c)
 *     RmCoreRpcSrvReleaseResourceSet @ 0x180035080 (RmCoreRpcSrvReleaseResourceSet.c)
 *     RmtSrv_RS_ReleaseResources @ 0x180054DF0 (RmtSrv_RS_ReleaseResources.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetReleaseResources(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, unsigned int a3)
{
  int v5; // r12d
  __int64 v6; // rbx
  DWORD v7; // esi
  _QWORD *Value; // rdi
  struct _RM_OBJECT_HEADER *v9; // r14
  unsigned int v10; // r10d
  __int64 v11; // rdi
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r11
  _QWORD *v15; // rax
  DWORD v18; // ebx
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h]
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  char *v22; // [rsp+50h] [rbp-B8h]
  __int64 v23; // [rsp+58h] [rbp-B0h]
  __int64 v24; // [rsp+60h] [rbp-A8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR v26; // [rsp+78h] [rbp-90h] BYREF
  char v27[144]; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp+10h] BYREF
  void *v29; // [rsp+128h] [rbp+20h]
  int v30; // [rsp+130h] [rbp+28h]
  int v31; // [rsp+134h] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+138h] [rbp+30h] BYREF
  void *v33; // [rsp+148h] [rbp+40h]
  int v34; // [rsp+150h] [rbp+48h]
  int v35; // [rsp+154h] [rbp+4Ch]
  __int64 *v36; // [rsp+158h] [rbp+50h]
  __int64 v37; // [rsp+160h] [rbp+58h]
  __int64 *v38; // [rsp+168h] [rbp+60h]
  __int64 v39; // [rsp+170h] [rbp+68h]

  v21 = a2;
  if ( HampLockTrackerId == -1 || !TlsGetValue(HampLockTrackerId) )
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v27);
    v5 = 0;
  }
  else
  {
    v5 = 1;
  }
  if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180085D2D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0B8;
    v29 = &unk_180085D38;
    UserData.Reserved = 2;
    v30 = 32;
    v31 = 1;
    EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v6 = 0LL;
  if ( (a3 & 3) == a3 )
  {
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v7) )
        __int2c();
      *Value |= 1uLL;
      ++Value[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    v9 = 0LL;
    dword_18009BF18 = GetCurrentThreadId();
    v24 = v21;
    v20 = v21;
    v22 = (char *)a1 + 552;
    RtlAcquireSRWLockShared((char *)a1 + 552);
    v10 = *((_DWORD *)a1 + 135);
    v11 = 0LL;
    v12 = -1073741275;
    v13 = -1LL << (*((_BYTE *)a1 + 540) & 0x1F);
    v14 = v13 & (HIBYTE(v21)
               + 37
               * (BYTE6(v21)
                + 37
                * (BYTE5(v21)
                 + 37
                 * (BYTE4(v21)
                  + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883LL))))))));
    v23 = v13;
    v20 = v14;
LABEL_14:
    if ( v11 )
      goto LABEL_17;
    if ( v10 >= 0x20 )
    {
      v13 = v23;
      v11 = *((_QWORD *)a1 + 68)
          + 8LL
          * ((37
            * (BYTE6(v20)
             + 37
             * (BYTE5(v20)
              + 37
              * (BYTE4(v20)
               + 37 * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v14 + 11623883)))))))
            + HIBYTE(v20)) & ((v10 >> 5) - 1));
LABEL_17:
      while ( 1 )
      {
        v11 = *(_QWORD *)v11;
        if ( (v11 & 1) != 0 )
          break;
        if ( v14 == (v13 & *(_QWORD *)(v11 + 8)) )
        {
          if ( v24 != *(_QWORD *)(v11 + 32) )
            goto LABEL_14;
          v12 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 16)) <= 1 )
            __fastfail(0xEu);
          goto LABEL_21;
        }
      }
    }
    v11 = (__int64)v22;
LABEL_21:
    RtlReleaseSRWLockShared(v22);
    if ( v12 >= 0 )
    {
      v9 = (struct _RM_OBJECT_HEADER *)v11;
      v12 = 0;
      v6 = *(_QWORD *)(v11 + 48);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
    if ( v9 )
      RmpObjectRelease(v9);
    if ( v12 == -1073741275 )
    {
      LODWORD(v19) = 1;
    }
    else
    {
      LODWORD(v19) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, a3);
      if ( (int)v19 >= 0 )
        LODWORD(v19) = 0;
    }
    dword_18009BF18 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      v15 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v15 & 1) == 0 )
        __int2c();
      if ( v15[1]-- == 1LL )
        *v15 &= ~1uLL;
    }
  }
  else
  {
    LODWORD(v19) = -805306127;
  }
  if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 9) != 0 && (qword_18009B0C8 & 9) == qword_18009B0C8 )
  {
    v37 = 4LL;
    v36 = &v19;
    v38 = &v21;
    v39 = 8LL;
    *(_DWORD *)&v26.Level = 516;
    v32.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&v26.Id = ((unsigned int)&unk_1800856DD - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v26.Keyword = 9LL;
    v32.Size = *(unsigned __int16 *)off_18009B0B8;
    v33 = &unk_1800856E8;
    v32.Reserved = 2;
    v34 = 50;
    v35 = 1;
    EventWriteTransfer(qword_18009B0D0, &v26, 0LL, 0LL, 4u, &v32);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( !v5 )
  {
    v18 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v18, 0LL);
    }
  }
  return (unsigned int)v19;
}
