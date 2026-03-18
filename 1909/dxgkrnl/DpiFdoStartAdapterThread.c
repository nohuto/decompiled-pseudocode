/*
 * XREFs of DpiFdoStartAdapterThread @ 0x1C0161010
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C00C6178 (DpiSessionCreateCallback.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DpiEnableD3Requests @ 0x1C0008B54 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C0008B68 (DpiDisableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00194A0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D90C (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     wcsncmp_0 @ 0x1C00233C3 (wcsncmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C004BA94 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C015CF18 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiPnpEnableVga @ 0x1C015E428 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x1C015E574 (DpiPnpNotifyGdi.c)
 *     DpiFdoStartAdapter @ 0x1C01631F8 (DpiFdoStartAdapter.c)
 *     DxgkFinishPnPTransition @ 0x1C0182290 (DxgkFinishPnPTransition.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C029E630 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C029E7DC (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStartAdapterInChain @ 0x1C02AEB1C (DpiLdaStartAdapterInChain.c)
 */

void __fastcall DpiFdoStartAdapterThread(WCHAR *StartContext)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r14
  NTSTATUS v5; // r15d
  char v6; // si
  bool v7; // r12
  int v8; // eax
  int v9; // eax
  bool v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbx
  struct _KEVENT *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // r13d
  __int64 v20; // r15
  char v21; // r13
  char v22; // al
  __int64 v23; // rsi
  ULONG v24; // r14d
  PVOID Data; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  NTSTATUS DevicePropertyData; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  bool v39; // bl
  __int64 v40; // rax
  union _LARGE_INTEGER *v41; // rcx
  int v42; // r9d
  __int64 *v43; // rdx
  struct _DEVICE_OBJECT *v44; // rcx
  int started; // eax
  bool v46; // cl
  char v47; // al
  struct _DEVICE_OBJECT *v48; // rcx
  __int64 v49; // rsi
  __int64 *v50; // rbx
  int v51; // ecx
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // ecx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-198h]
  char v56; // [rsp+40h] [rbp-178h]
  char v57; // [rsp+41h] [rbp-177h]
  char v58; // [rsp+42h] [rbp-176h]
  char v59; // [rsp+43h] [rbp-175h]
  int v60; // [rsp+44h] [rbp-174h]
  char v61; // [rsp+48h] [rbp-170h]
  __int64 v62; // [rsp+50h] [rbp-168h]
  unsigned int v63; // [rsp+58h] [rbp-160h]
  bool v64; // [rsp+5Ch] [rbp-15Ch]
  void *v65; // [rsp+60h] [rbp-158h] BYREF
  int v66; // [rsp+68h] [rbp-150h]
  ULONG RequiredSize; // [rsp+6Ch] [rbp-14Ch] BYREF
  PVOID P; // [rsp+70h] [rbp-148h]
  __int64 v69; // [rsp+78h] [rbp-140h] BYREF
  int v70; // [rsp+80h] [rbp-138h]
  UNICODE_STRING String1; // [rsp+88h] [rbp-130h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-120h] BYREF
  ULONG Type; // [rsp+A8h] [rbp-110h] BYREF
  void *v74; // [rsp+B0h] [rbp-108h] BYREF
  _BYTE v75[24]; // [rsp+B8h] [rbp-100h] BYREF
  _QWORD v76[10]; // [rsp+D0h] [rbp-E8h] BYREF
  wchar_t Str1[48]; // [rsp+120h] [rbp-98h] BYREF

  memset(v76, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v76[1]);
  v3 = 0LL;
  v4 = -1LL;
  v60 = 0;
  v5 = 0;
  P = 0LL;
  v56 = 0;
  v59 = 0;
  v76[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v76[3]) = 7;
  LOBYTE(v76[6]) = -1;
  v58 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v62 = -1LL;
  if ( StartContext )
  {
    v8 = *(_DWORD *)StartContext;
    v6 = *(_DWORD *)StartContext & 1;
    P = StartContext;
    v57 = v6;
    v7 = (v8 & 2) != 0;
    v9 = v8 & 4;
    v64 = v7;
    v10 = v9 != 0;
    v56 = v9 != 0;
    if ( !v9 )
      goto LABEL_6;
    StartContext[261] = 0;
    RtlInitUnicodeString(&DestinationString, StartContext + 2);
    v56 = v10;
  }
  else
  {
    v6 = 1;
    v7 = 1;
  }
  v64 = v7;
  v57 = v6;
LABEL_6:
  if ( byte_1C00A275A )
  {
    v11 = WdLogNewEntry5_WdEvent(v3);
    *(_QWORD *)(v11 + 24) = 0LL;
    WdLogEvent5_WdEvent(v11);
    goto LABEL_114;
  }
  v12 = *((_QWORD *)DXGGLOBAL::GetGlobal(v3, v2) + 74);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v75, (struct DXGFASTMUTEX *const)(v12 + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v75);
  v13 = *(struct _KEVENT **)(v12 + 136);
  if ( v13 )
    KeResetEvent(v13);
  v66 = ++*(_DWORD *)(v12 + 144);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v75);
  if ( v7 )
  {
    _InterlockedCompareExchange(&dword_1C00A2A88, 5, 4);
    LOBYTE(v14) = 1;
    DpiPnpEnableVga(0LL, v14, 0, (__int64)v76);
  }
  AcquireMiniportListMutex();
  if ( !qword_1C00A29E0 )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v18);
  }
  if ( v6 )
  {
    byte_1C00A2792 = 1;
    DpiAcquirePostDisplayInfoFromBgfx(&dword_1C00A29E8, 1, 1);
    dword_1C00A2AD4 = 1;
    if ( qword_1C00A29E0 )
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(qword_1C00A29E0 + 64) + 976LL))(
        *(_QWORD *)(*(_QWORD *)(qword_1C00A29E0 + 64) + 48LL),
        &dword_1C00A29E8);
    dword_1C00A2A88 = 1;
  }
  else
  {
    if ( !v7 )
    {
LABEL_22:
      v19 = 1;
      goto LABEL_23;
    }
    if ( (unsigned int)(dword_1C00A2A88 - 4) <= 1 )
      DpiDisableMsBddFallbackDriver(v76);
  }
  v19 = 0;
  if ( !v7 )
    goto LABEL_22;
LABEL_23:
  v63 = v19;
  do
  {
    v20 = qword_1C00A2778;
    v61 = v19 == 0;
    if ( *(_QWORD *)v20 == v20 )
      goto LABEL_84;
    v21 = v56;
    do
    {
      v22 = *(_BYTE *)(v20 + 134);
      if ( v21 )
      {
        if ( !v22 )
          goto LABEL_82;
      }
      else if ( v22 )
      {
        goto LABEL_82;
      }
      KeWaitForSingleObject((PVOID)(v20 + 72), Executive, 0, 0, 0LL);
      v23 = *(_QWORD *)(v20 + 56);
      if ( *(_QWORD *)v23 != v23 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v23 + 16) == 1953656900 && *(_DWORD *)(v23 + 20) == 4 )
            goto LABEL_80;
          if ( !v21 )
            break;
          v24 = DestinationString.Length + 2;
          RequiredSize = 0;
          v65 = 0LL;
          Data = ExAllocatePoolWithTag(PagedPool, v24, 0x74727044u);
          AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v65);
          v65 = Data;
          v74 = 0LL;
          AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v74);
          if ( Data )
          {
            DevicePropertyData = IoGetDevicePropertyData(
                                   *(PDEVICE_OBJECT *)(v23 + 152),
                                   &DEVPKEY_Device_InstanceId,
                                   0,
                                   0,
                                   v24,
                                   Data,
                                   &RequiredSize,
                                   &Type);
            v34 = DevicePropertyData;
            v60 = DevicePropertyData;
            if ( DevicePropertyData < 0 )
            {
              v40 = WdLogNewEntry5_WdError(v32, v31, v33);
              *(_QWORD *)(v40 + 24) = v34;
              WdLogEvent5_WdError(v40);
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v65);
              v4 = v62;
              goto LABEL_79;
            }
            *(_QWORD *)&String1.Length = 0LL;
            String1.Buffer = 0LL;
            RtlInitUnicodeString(&String1, (PCWSTR)Data);
            if ( *(_BYTE *)(v23 + 1160) )
            {
              wcscpy(Str1, L"SWD\\VirtualDisplayAdapter\\VirtualDisplayDevice_");
              if ( String1.Length < 0x60u || wcsncmp_0(Str1, String1.Buffer, 0x2FuLL) )
              {
                v38 = WdLogNewEntry5_WdError(v36, v35, v37);
                WdLogEvent5_WdError(v38);
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v65);
                v4 = v62;
LABEL_79:
                v21 = v56;
                goto LABEL_80;
              }
            }
            v39 = RtlCompareUnicodeString(&String1, &DestinationString, 1u) == 0;
            AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v65);
            v4 = v62;
            v21 = v56;
LABEL_44:
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v23 + 484) )
              DpiCheckForOutstandingD3Requests(v23);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 168), 1u);
            if ( v61 == *(_BYTE *)(v23 + 1152) && *(_DWORD *)(v23 + 236) == 1 && !*(_BYTE *)(v23 + 232) && (!v21 || v39) )
            {
              v69 = 0LL;
              v41 = 0LL;
              v70 = 0;
              v42 = 0;
              if ( P && *((_DWORD *)P + 131) )
              {
                v41 = (union _LARGE_INTEGER *)((char *)P + 528);
                v42 = *((_DWORD *)P + 131);
              }
              v43 = &v69;
              LOBYTE(v43) = v57;
              Timeout = v41;
              v44 = *(struct _DEVICE_OBJECT **)(v23 + 24);
              if ( *(_DWORD *)(v23 + 504) )
                started = DpiLdaStartAdapterInChain(
                            (_DWORD)v44,
                            (_DWORD)v43,
                            (unsigned int)v76,
                            v42,
                            (__int64)Timeout,
                            (__int64)&v69);
              else
                started = DpiFdoStartAdapter(v44, (__int64)Timeout, (__int64)&v69);
              v60 = started;
              if ( started != 1075708986 )
              {
                if ( started < 0 )
                {
                  v48 = *(struct _DEVICE_OBJECT **)(v23 + 152);
                  *(_BYTE *)(v23 + 232) = 1;
                  IoInvalidateDeviceState(v48);
                }
                else
                {
                  v46 = (v69 & 1) != 0 || (_BYTE)word_1C00A275C && (v69 & 0x40) != 0;
                  v59 |= v46;
                  if ( (v69 & 2) == 0 || (v47 = 1, (v69 & 0x2000) != 0) )
                    v47 = 0;
                  v58 |= v47;
                  if ( *(_DWORD *)(v23 + 16) == 1953656900
                    && *(_DWORD *)(v23 + 20) == 2
                    && *(_BYTE *)(v23 + 2743)
                    && (v4 == -1 || v4 == *(_QWORD *)(v23 + 5760)) )
                  {
                    v4 = *(_QWORD *)(v23 + 5760);
                  }
                  else
                  {
                    v4 = 0x100000000LL;
                  }
                  v62 = v4;
                }
              }
            }
            if ( *(_BYTE *)(v23 + 484) )
              DpiEnableD3Requests(*(_QWORD *)(v23 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v23 + 168));
            KeLeaveCriticalRegion();
            goto LABEL_79;
          }
          v60 = -1073741801;
          v29 = WdLogNewEntry5_WdError(v27, v26, v28);
          WdLogEvent5_WdError(v29);
          AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v65);
          v4 = v62;
LABEL_80:
          v23 = *(_QWORD *)v23;
          if ( *(_QWORD *)v23 == *(_QWORD *)(v20 + 56) )
            goto LABEL_81;
        }
        v39 = 1;
        goto LABEL_44;
      }
LABEL_81:
      KeReleaseMutex((PRKMUTEX)(v20 + 72), 0);
LABEL_82:
      v20 = *(_QWORD *)v20;
    }
    while ( *(_QWORD *)v20 != qword_1C00A2778 );
    v19 = v63;
LABEL_84:
    v63 = ++v19;
  }
  while ( v19 < 2 );
  if ( v64 && (unsigned int)(dword_1C00A2A88 - 1) <= 1 )
    DpiEnableMsBddFallbackDriver(v76);
  if ( v58 )
  {
    v49 = qword_1C00A2778;
    if ( *(_QWORD *)v49 != v49 )
    {
      do
      {
        if ( *(_BYTE *)(v49 + 134) )
        {
          KeWaitForSingleObject((PVOID)(v49 + 72), Executive, 0, 0, 0LL);
          v50 = *(__int64 **)(v49 + 56);
          if ( (__int64 *)*v50 != v50 )
          {
            do
            {
              KeEnterCriticalRegion();
              if ( *((_BYTE *)v50 + 484) )
                DpiDisableD3Requests(v50[3]);
              ExAcquireResourceSharedLite((PERESOURCE)v50[21], 1u);
              if ( *((_DWORD *)v50 + 4) == 1953656900 && *((_DWORD *)v50 + 5) == 2 )
              {
                v51 = *((_DWORD *)v50 + 59);
                if ( v51 == 2 || *((_DWORD *)v50 + 60) == 2 && ((v51 - 3) & 0xFFFFFFFC) == 0 && v51 != 4 )
                  IoInvalidateDeviceRelations((PDEVICE_OBJECT)v50[19], PowerRelations);
              }
              if ( *((_BYTE *)v50 + 484) )
                DpiEnableD3Requests(v50[3]);
              ExReleaseResourceLite((PERESOURCE)v50[21]);
              KeLeaveCriticalRegion();
              v50 = (__int64 *)*v50;
            }
            while ( *v50 != *(_QWORD *)(v49 + 56) );
          }
          KeReleaseMutex((PRKMUTEX)(v49 + 72), 0);
        }
        v49 = *(_QWORD *)v49;
      }
      while ( *(_QWORD *)v49 != qword_1C00A2778 );
    }
  }
  _InterlockedExchange64(&qword_1C00A2788, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v59 == 1 )
  {
    DpiPnpNotifyGdi(0LL, 1u, v66, v62, v56, (__int64)v76);
  }
  else if ( v64 )
  {
    LOBYTE(v52) = 1;
    LOBYTE(v53) = 1;
    DpiPnpEnableVga(v53, v52, v66, (__int64)v76);
  }
  else
  {
    v54 = v62;
    if ( v62 == -1 )
      v54 = 0;
    DxgkFinishPnPTransition(v54);
  }
  v5 = v60;
  v6 = v57;
LABEL_114:
  if ( P )
    ExFreePoolWithTag(P, 0x74727044u);
  if ( !v6 )
    PsTerminateSystemThread(v5);
}
