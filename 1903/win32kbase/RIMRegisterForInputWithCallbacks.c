/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x1C006DC80
 * Callers:
 *     RIMRegisterForInput @ 0x1C006DC10 (RIMRegisterForInput.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0054C20 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     Win32AllocPoolNonPaged @ 0x1C0056D40 (Win32AllocPoolNonPaged.c)
 *     CreateKernelSemaphore @ 0x1C0058A60 (CreateKernelSemaphore.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C006A50C (RIMDiscoverDevicesOfInputType.c)
 *     RIMUnregisterForInput @ 0x1C006A630 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C006CCF4 (rimConvertUserToKernelEventHandle.c)
 *     RawInputManagerObjectCreate @ 0x1C00A0374 (RawInputManagerObjectCreate.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C00A05D0 (RIMIDEAdoptOrphanedRimDevs.c)
 *     rimFindReferencedKernelModeRimObj @ 0x1C00A0C44 (rimFindReferencedKernelModeRimObj.c)
 *     rimConvertUserToKernelTimerHandle @ 0x1C00A1A28 (rimConvertUserToKernelTimerHandle.c)
 *     RIMCheckPressureDefaultSetting @ 0x1C00A2070 (RIMCheckPressureDefaultSetting.c)
 *     ?RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z @ 0x1C00B4004 (-RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011EE78 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C013AB28 (WPP_RECORDER_SF_qDd.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01508B8 (RIMDiscoverSpecificDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRegisterForInputWithCallbacks(
        unsigned int a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        LONGLONG a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        HANDLE *a14)
{
  struct _UNICODE_STRING *v14; // rsi
  int v16; // edx
  int v17; // r9d
  struct _KSEMAPHORE *KernelSemaphore; // r14
  unsigned int v20; // esi
  __int64 *v21; // r12
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r12d
  int v28; // eax
  bool v29; // sf
  int v30; // edx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // r12
  char *v34; // r14
  unsigned int v35; // r8d
  char *v36; // rdx
  GUID **v37; // rcx
  char *v38; // r9
  _DWORD *v39; // r10
  signed __int64 v40; // r11
  signed __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  struct _UNICODE_STRING *v46; // rbx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned int v52; // r10d
  _DWORD *v53; // r8
  BOOL v54; // ecx
  __int64 v55; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v57; // r8
  _BYTE **v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rcx
  __int64 *v63; // rbx
  _QWORD *v64; // rdx
  void *v65; // rdx
  __int64 *v66; // rbx
  __int64 v67; // r12
  int TableContext; // [rsp+20h] [rbp-138h]
  char v69; // [rsp+40h] [rbp-118h]
  int v70; // [rsp+44h] [rbp-114h]
  unsigned int v71; // [rsp+4Ch] [rbp-10Ch]
  int v72; // [rsp+50h] [rbp-108h]
  HANDLE v73; // [rsp+58h] [rbp-100h] BYREF
  PVOID v74; // [rsp+60h] [rbp-F8h] BYREF
  BOOL v75; // [rsp+68h] [rbp-F0h]
  HANDLE *v76; // [rsp+70h] [rbp-E8h]
  HANDLE v77; // [rsp+78h] [rbp-E0h] BYREF
  UNICODE_STRING SourceString; // [rsp+80h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-C8h] BYREF
  unsigned int v80; // [rsp+A0h] [rbp-B8h]
  struct _UNICODE_STRING *v81; // [rsp+A8h] [rbp-B0h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+B0h] [rbp-A8h]
  struct _KSEMAPHORE *v83; // [rsp+B8h] [rbp-A0h]
  HANDLE Handle; // [rsp+C0h] [rbp-98h] BYREF
  HANDLE v85; // [rsp+C8h] [rbp-90h] BYREF
  PVOID Object; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v87; // [rsp+D8h] [rbp-80h]
  struct _UNICODE_STRING *v88; // [rsp+E0h] [rbp-78h]
  LONGLONG v89; // [rsp+E8h] [rbp-70h]
  LONGLONG v90; // [rsp+F0h] [rbp-68h]
  LONGLONG v91; // [rsp+F8h] [rbp-60h]
  LONGLONG v92; // [rsp+100h] [rbp-58h]
  char v93; // [rsp+108h] [rbp-50h] BYREF
  __int128 v94; // [rsp+110h] [rbp-48h]

  v87 = a4;
  v71 = a3;
  v14 = a2;
  v81 = a2;
  v88 = a2;
  *(_QWORD *)&DestinationString.Length = a4;
  v74 = a6;
  v89 = a7;
  *(_QWORD *)&SourceString.Length = a8;
  v76 = a14;
  Handle = (HANDLE)-1LL;
  v85 = (HANDLE)-1LL;
  v77 = (HANDLE)-1LL;
  v73 = (HANDLE)-1LL;
  v94 = 0LL;
  v75 = a13 != 0;
  v69 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 10, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
    a3 = v71;
  }
  if ( (a1 & 0xFFFFFFC0) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, (_DWORD)a2, 1, 11, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, a1);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v17 = 12;
    goto LABEL_7;
  }
  if ( v14 )
  {
    if ( !a1 || ((a1 - 1) & a1) != 0 || a3 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      WPP_RECORDER_SF_qDd(a1, (_DWORD)a2, a3, a4, TableContext, (char)v14, a1, a3);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v17 = 14;
      goto LABEL_7;
    }
  }
  else if ( a3 )
  {
    if ( (a1 & 0x20) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_Dd(
        (_DWORD)gRimLog,
        (_DWORD)a2,
        1,
        15,
        (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids,
        a1,
        a3);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v17 = 16;
LABEL_7:
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, v17, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      return 3221225485LL;
    }
    if ( a13 )
    {
      Object = 0LL;
      if ( (int)rimFindReferencedKernelModeRimObj(a1, &Object) >= 0 )
      {
        ObfDereferenceObject(Object);
        return 3221225485LL;
      }
      v69 = 1;
    }
  }
  KernelSemaphore = CreateKernelSemaphore(0, -1);
  v83 = KernelSemaphore;
  if ( KernelSemaphore )
  {
    v20 = 0;
    v21 = (__int64 *)&v93;
    while ( 1 )
    {
      v22 = Win32AllocPoolNonPaged(104LL, 0x63704152u);
      *v21 = v22;
      if ( !v22 )
        break;
      ++v20;
      ++v21;
      if ( v20 > 2 )
      {
        v23 = rimConvertUserToKernelEventHandle(v74, &Handle);
        v27 = rimConvertUserToKernelTimerHandle(v89, &v85);
        if ( *(_QWORD *)&SourceString.Length )
          v28 = rimConvertUserToKernelTimerHandle(*(_QWORD *)&SourceString.Length, &v77);
        else
          v28 = 0;
        v29 = v23 < 0;
        if ( v23 >= 0 )
        {
          if ( v27 >= 0 && v28 >= 0 )
          {
            KeEnterCriticalRegion();
            v23 = RawInputManagerObjectCreate(a13 != 0, v30, v31, v32, &v73);
            KeLeaveCriticalRegion();
            v33 = 3LL;
            if ( v23 < 0 )
              goto LABEL_99;
            v23 = RawInputManagerObjectResolveHandle((char *)v73, 3u, 1, &v74);
            v70 = v23;
            if ( v23 < 0 )
              goto LABEL_99;
            v34 = (char *)v74;
            *((_QWORD *)v74 + 9) = v73;
            *((_WORD *)v34 + 40) = 0;
            v34[82] = 0;
            *((_DWORD *)v34 + 21) = a1;
            *((_QWORD *)v34 + 15) = a5;
            *((_QWORD *)v34 + 13) = 0LL;
            *((_QWORD *)v34 + 14) = 0LL;
            *((_QWORD *)v34 + 71) = 0LL;
            *((_QWORD *)v34 + 72) = 0LL;
            *((_QWORD *)v34 + 53) = 0LL;
            *((_DWORD *)v34 + 102) = 0;
            *((_QWORD *)v34 + 52) = 0LL;
            *((_QWORD *)v34 + 55) = v34 + 432;
            *((_QWORD *)v34 + 54) = v34 + 432;
            memset(v34 + 448, 0, 0x20uLL);
            *((_QWORD *)v34 + 57) = v34 + 448;
            *((_QWORD *)v34 + 56) = v34 + 448;
            memset(v34 + 480, 0, 0x20uLL);
            RIMCheckPressureDefaultSetting(v34);
            *((_DWORD *)v34 + 216) = a13 == 0;
            *((_QWORD *)v34 + 109) = v83;
            *((_DWORD *)v34 + 220) = 0;
            v83 = 0LL;
            v35 = 0;
            v36 = &v93;
            v37 = &off_1C01D3B70;
            v38 = v34 + 248;
            v39 = v34 + 296;
            v40 = v34 - (char *)&off_1C01D3B70;
            v41 = v34 - &v93;
            do
            {
              *(_OWORD *)((char *)v37 + v40 + 128) = *(_OWORD *)v37;
              *(_OWORD *)((char *)v37 + v40 + 144) = *((_OWORD *)v37 + 1);
              *(_QWORD *)&v36[v41 + 224] = 0LL;
              *(_QWORD *)&v36[v41 + 312] = *(_QWORD *)v36;
              *v39 = 0;
              *(_QWORD *)v36 = 0LL;
              *((_DWORD *)v38 + 2) = v35;
              *(_QWORD *)v38 = v34;
              ++v35;
              ++v39;
              v37 += 4;
              v36 += 8;
              v38 += 16;
            }
            while ( v35 <= 2 );
            *((_QWORD *)v34 + 42) = v85;
            *((_QWORD *)v34 + 43) = v77;
            *((_DWORD *)v34 + 88) = a9;
            *((_QWORD *)v34 + 45) = 0LL;
            *((_QWORD *)v34 + 46) = 0LL;
            *((_QWORD *)v34 + 47) = 0LL;
            if ( a9 && v77 != (HANDLE)-1LL )
            {
              v89 = gliQpcFreq.QuadPart * a9 / 1000;
              *((_QWORD *)v34 + 45) = v89;
              v90 = gliQpcFreq.QuadPart * 20 * a9 / 1000;
              *((_QWORD *)v34 + 46) = v90;
            }
            *((_QWORD *)v34 + 50) = a10;
            *((_QWORD *)v34 + 48) = Handle;
            v34[392] = v69;
            v34[393] = 0;
            v34[584] = 0;
            *((_QWORD *)v34 + 89) = 0LL;
            v91 = 500 * gliQpcFreq.QuadPart / 1000;
            *((_QWORD *)v34 + 88) = v91;
            v92 = 5000 * gliQpcFreq.QuadPart / 1000;
            *((_QWORD *)v34 + 92) = v92;
            *((_QWORD *)v34 + 79) = a11;
            *((_QWORD *)v34 + 80) = a12;
            v34[512] = 0;
            RawInputManagerObject::bTouchInputAllowed = 1;
            v34[513] = 0;
            KeQueryPerformanceCounter((PLARGE_INTEGER)v34 + 65);
            *((_QWORD *)v34 + 66) = 1LL;
            *((_QWORD *)v34 + 76) = 0LL;
            *((_QWORD *)v34 + 68) = v34 + 536;
            *((_QWORD *)v34 + 67) = v34 + 536;
            *((_QWORD *)v34 + 70) = v34 + 552;
            *((_QWORD *)v34 + 69) = v34 + 552;
            *((_QWORD *)v34 + 75) = v34 + 592;
            *((_QWORD *)v34 + 74) = v34 + 592;
            *((_QWORD *)v34 + 78) = v34 + 616;
            *((_QWORD *)v34 + 77) = v34 + 616;
            *((_QWORD *)v34 + 112) = v34 + 888;
            *((_QWORD *)v34 + 111) = v34 + 888;
            RtlInitializeGenericTableAvl(
              (PRTL_AVL_TABLE)(v34 + 744),
              rimUserMemAllocNodeCompare,
              rimUserMemAllocNodeAlloc,
              (PRTL_AVL_FREE_ROUTINE)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
              0LL);
            v45 = v71;
            *((_DWORD *)v34 + 22) = v71;
            v46 = v81;
            if ( !v71 )
            {
LABEL_60:
              v54 = a13 != 0;
              goto LABEL_61;
            }
            if ( v81 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44);
              v45 = v71;
            }
            *(_QWORD *)&SourceString.Length = v45;
            v47 = 4 * v45;
            if ( v47 > 0xFFFFFFFF )
            {
              v23 = -1073741811;
            }
            else
            {
              LODWORD(v81) = v47;
              v48 = Win32AllocPool((unsigned int)v47, 0x70617552u);
              *((_QWORD *)v34 + 12) = v48;
              if ( v48 )
              {
                if ( !a13 )
                {
                  v49 = 0LL;
                  v50 = *(_QWORD *)&SourceString.Length;
                  v51 = v87;
                  do
                  {
                    *(_DWORD *)(v49 + *((_QWORD *)v34 + 12)) = *(_DWORD *)(v49 + v51);
                    v49 += 4LL;
                    --v50;
                  }
                  while ( v50 );
                  goto LABEL_60;
                }
                v52 = 0;
                v80 = 0;
                while ( v52 < v71 )
                {
                  v53 = (_DWORD *)(v87 + 4LL * v52);
                  if ( (unsigned __int64)v53 >= MmUserProbeAddress )
                    v53 = (_DWORD *)MmUserProbeAddress;
                  *(_DWORD *)(*((_QWORD *)v34 + 12) + 4LL * v52++) = *v53;
                  v80 = v52;
                }
                v54 = a13 != 0;
LABEL_61:
                if ( !v46 )
                {
                  if ( v23 >= 0 && !v34[392] )
                    RIMDiscoverDevicesOfInputType((unsigned int *)v34);
                  RIMIDEAdoptOrphanedRimDevs(v34);
                  goto LABEL_94;
                }
                *(_QWORD *)&SourceString.Length = 0LL;
                SourceString.Buffer = 0LL;
                p_DestinationString = 0LL;
                *(_QWORD *)&DestinationString.Length = 0LL;
                DestinationString.Buffer = 0LL;
                if ( !v54 )
                {
                  p_DestinationString = v46;
                  goto LABEL_81;
                }
                if ( (unsigned __int64)v46 >= MmUserProbeAddress )
                  v46 = (struct _UNICODE_STRING *)MmUserProbeAddress;
                v55 = *(unsigned int *)&v46->Length;
                v72 = *(_DWORD *)&v46->Length;
                *(_DWORD *)&SourceString.Length = *(_DWORD *)&v46->Length;
                Buffer = v46->Buffer;
                SourceString.Buffer = Buffer;
                if ( ((unsigned __int8)Buffer & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v57 = (ULONG64)Buffer + (unsigned __int16)v55 + 2;
                v58 = (_BYTE **)MmUserProbeAddress;
                if ( v57 >= MmUserProbeAddress || (unsigned __int16)v55 > HIWORD(v72) )
                {
LABEL_72:
                  if ( (v55 & 1) != 0 )
                    goto LABEL_73;
                }
                else
                {
                  if ( (v55 & 1) == 0 )
                  {
                    if ( v57 <= (unsigned __int64)Buffer )
                      goto LABEL_72;
LABEL_75:
                    if ( SourceString.Length )
                    {
                      DestinationString.MaximumLength = SourceString.Length;
                      DestinationString.Length = SourceString.Length;
                      DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 0x706D7452u);
                      if ( DestinationString.Buffer )
                      {
                        RtlCopyUnicodeString(&DestinationString, &SourceString);
                        p_DestinationString = &DestinationString;
                      }
                      v23 = v70;
                    }
                    else
                    {
                      v23 = -1073741801;
                    }
                    v34 = (char *)v74;
LABEL_81:
                    if ( v23 >= 0 )
                    {
                      RIMLockExclusive((__int64)(v34 + 104));
                      v23 = RIMDiscoverSpecificDevice(v34);
                      CInpPushLock::UnLockExclusive((CInpPushLock *)(v34 + 104));
                      if ( v23 < 0 )
                      {
                        if ( *((_QWORD *)v34 + 12) )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v60, v59, v61);
                        v62 = *((_QWORD *)v34 + 52);
                        if ( v62 )
                        {
                          Win32FreePool(v62);
                          *((_QWORD *)v34 + 52) = 0LL;
                        }
                        *((_QWORD *)v34 + 42) = -1LL;
                        *((_QWORD *)v34 + 43) = -1LL;
                        *((_QWORD *)v34 + 48) = -1LL;
                      }
                    }
                    if ( DestinationString.Buffer )
                      Win32FreePool((__int64)DestinationString.Buffer);
LABEL_94:
                    InputTraceLogging::RIM::RawInputManagerObject((const struct RawInputManagerObject *)v34);
                    ObfDereferenceObject(v34);
                    KernelSemaphore = v83;
LABEL_99:
                    v63 = (__int64 *)&v93;
                    if ( v23 < 0 )
                    {
                      do
                      {
                        if ( *v63 )
                          Win32FreePool(*v63);
                        ++v63;
                        --v33;
                      }
                      while ( v33 );
                      if ( KernelSemaphore )
                        Win32FreePool((__int64)KernelSemaphore);
                      if ( Handle != (HANDLE)-1LL )
                        ZwClose(Handle);
                      if ( v85 != (HANDLE)-1LL )
                        ZwClose(v85);
                      if ( v77 != (HANDLE)-1LL )
                        ZwClose(v77);
                      if ( v73 != (HANDLE)-1LL )
                        ObCloseHandle(v73, 1);
LABEL_123:
                      v65 = &WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids;
                    }
                    else
                    {
                      do
                      {
                        if ( *v63 )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
                        ++v63;
                        --v33;
                      }
                      while ( v33 );
                      if ( KernelSemaphore )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
                      if ( !a13 )
                      {
                        *v76 = v73;
                        goto LABEL_123;
                      }
                      v64 = v76;
                      if ( (unsigned __int64)v76 >= MmUserProbeAddress )
                        v64 = (_QWORD *)MmUserProbeAddress;
                      *v64 = v73;
                      v65 = &WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids;
                    }
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v65) = 4;
                      WPP_RECORDER_SF_D(
                        (_DWORD)gRimLog,
                        (_DWORD)v65,
                        1,
                        19,
                        (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids,
                        v23);
                    }
                    return (unsigned int)v23;
                  }
LABEL_73:
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, Buffer, v57);
                  v58 = (_BYTE **)MmUserProbeAddress;
                }
                **v58 = 0;
                goto LABEL_75;
              }
              v23 = -1073741801;
            }
            v70 = v23;
            goto LABEL_60;
          }
          v29 = v23 < 0;
        }
        if ( !v29 )
          v23 = v27;
        v33 = 3LL;
        goto LABEL_99;
      }
    }
    v66 = (__int64 *)&v93;
    v67 = 3LL;
    do
    {
      if ( *v66 )
        Win32FreePool(*v66);
      ++v66;
      --v67;
    }
    while ( v67 );
    Win32FreePool((__int64)KernelSemaphore);
  }
  return 3221225495LL;
}
