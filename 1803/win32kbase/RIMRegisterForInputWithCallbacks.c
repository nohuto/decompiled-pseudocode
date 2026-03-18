/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x1C00E4800
 * Callers:
 *     RIMRegisterForInput @ 0x1C00E4790 (RIMRegisterForInput.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0055980 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     CreateKernelSemaphore @ 0x1C00A0C50 (CreateKernelSemaphore.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C00DDB64 (RIMIDEAdoptOrphanedRimDevs.c)
 *     rimFindReferencedPrimaryRimObj @ 0x1C00DEAF0 (rimFindReferencedPrimaryRimObj.c)
 *     RIMUnregisterForInput @ 0x1C00E5A50 (RIMUnregisterForInput.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C00E602C (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C00E60F8 (WPP_RECORDER_SF_qDd.c)
 *     RIMCheckPressureDefaultSetting @ 0x1C00EA7F0 (RIMCheckPressureDefaultSetting.c)
 *     RawInputManagerObjectCreate @ 0x1C00F20B4 (RawInputManagerObjectCreate.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C00F2434 (rimConvertUserToKernelEventHandle.c)
 *     rimConvertUserToKernelTimerHandle @ 0x1C00F24D8 (rimConvertUserToKernelTimerHandle.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00F9D88 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00F9FF8 (RIMDiscoverSpecificDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRegisterForInputWithCallbacks(
        int a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        ULONG64 a14)
{
  struct _UNICODE_STRING *v15; // r12
  __int64 v17; // r13
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  unsigned __int16 v21; // r9
  struct _KSEMAPHORE *KernelSemaphore; // r14
  unsigned int v24; // esi
  __int64 v25; // rax
  __int64 *v26; // rcx
  int v27; // esi
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  bool v32; // sf
  int v33; // edx
  int v34; // r8d
  int v35; // r9d
  char *v36; // r14
  unsigned int v37; // r8d
  _QWORD *v38; // rdx
  GUID **v39; // rcx
  char *v40; // r9
  _DWORD *v41; // r10
  signed __int64 v42; // r11
  signed __int64 v43; // rbx
  __int64 v44; // rdx
  ULONG64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r11
  unsigned int v50; // r10d
  __int64 v51; // r11
  _DWORD *v52; // r8
  int v53; // eax
  _QWORD *v54; // r12
  __int64 v55; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v57; // r8
  _BYTE **v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 *v62; // rbx
  __int64 v63; // r15
  _QWORD *v64; // rdx
  __int64 v65; // r12
  __int64 *v66; // rbx
  int TableContext; // [rsp+20h] [rbp-138h]
  __int64 v68; // [rsp+28h] [rbp-130h]
  int v69; // [rsp+40h] [rbp-118h]
  int v70; // [rsp+44h] [rbp-114h]
  int v71; // [rsp+50h] [rbp-108h]
  HANDLE v72; // [rsp+58h] [rbp-100h] BYREF
  PVOID v73; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int v74; // [rsp+68h] [rbp-F0h]
  __int64 *v75; // [rsp+70h] [rbp-E8h]
  HANDLE v76; // [rsp+78h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v78; // [rsp+90h] [rbp-C8h]
  int v79; // [rsp+94h] [rbp-C4h]
  int v80; // [rsp+98h] [rbp-C0h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+A0h] [rbp-B8h]
  struct _KSEMAPHORE *v82; // [rsp+A8h] [rbp-B0h]
  HANDLE Handle; // [rsp+B0h] [rbp-A8h] BYREF
  HANDLE v84; // [rsp+B8h] [rbp-A0h] BYREF
  UNICODE_STRING SourceString; // [rsp+C0h] [rbp-98h] BYREF
  PVOID Object; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v87; // [rsp+D8h] [rbp-80h]
  struct _UNICODE_STRING *v88; // [rsp+E0h] [rbp-78h]
  __int64 v89; // [rsp+E8h] [rbp-70h]
  __int64 v90; // [rsp+F0h] [rbp-68h]
  _BYTE v91[24]; // [rsp+F8h] [rbp-60h] BYREF

  v87 = a4;
  v74 = a3;
  v15 = a2;
  v80 = a13;
  v79 = a13;
  v88 = a2;
  *(_QWORD *)&DestinationString.Length = a4;
  v89 = a6;
  v90 = a7;
  *(_QWORD *)&SourceString.Length = a8;
  Handle = (HANDLE)-1LL;
  v84 = (HANDLE)-1LL;
  v76 = (HANDLE)-1LL;
  v72 = (HANDLE)-1LL;
  memset(v91, 0, sizeof(v91));
  v69 = 0;
  LODWORD(v73) = a13 != 0;
  v17 = 3LL;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0xAu,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  if ( (a1 & 0xFFFFFFC0) != 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      0xBu,
      (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
      a1);
    v21 = 12;
LABEL_3:
    LODWORD(v68) = -1073741811;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      v21,
      (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
      v68);
    return 3221225485LL;
  }
  if ( v15 )
  {
    if ( !a1 || ((a1 - 1) & a1) != 0 || a3 )
    {
      WPP_RECORDER_SF_qDd(WPP_GLOBAL_Control->DeviceExtension, v18, v19, v20, TableContext, (char)v15, a1, a3);
      v21 = 14;
      goto LABEL_3;
    }
  }
  else if ( a3 )
  {
    if ( (a1 & 0x20) == 0 )
    {
      WPP_RECORDER_SF_Dd(WPP_GLOBAL_Control->DeviceExtension, v18, v19, v20, TableContext, a1, a3);
      v21 = 16;
      goto LABEL_3;
    }
    if ( a13 )
    {
      Object = 0LL;
      if ( (int)rimFindReferencedPrimaryRimObj(a1, (struct _LIST_ENTRY **)&Object) >= 0 )
      {
        v69 = 1;
        ObfDereferenceObject(Object);
      }
    }
  }
  KernelSemaphore = CreateKernelSemaphore(0, -1);
  v82 = KernelSemaphore;
  if ( KernelSemaphore )
  {
    v24 = 0;
    v75 = (__int64 *)v91;
    while ( 1 )
    {
      v25 = Win32AllocPoolNonPaged(104LL, 0x63704152u);
      v26 = v75;
      *v75 = v25;
      if ( !v25 )
        break;
      ++v24;
      v75 = v26 + 1;
      if ( v24 > 2 )
      {
        v27 = rimConvertUserToKernelEventHandle(v89, &Handle);
        v28 = rimConvertUserToKernelTimerHandle(v90, &v84);
        v30 = v28;
        LODWORD(v75) = v28;
        if ( *(_QWORD *)&SourceString.Length )
        {
          v31 = rimConvertUserToKernelTimerHandle(*(_QWORD *)&SourceString.Length, &v76);
          v30 = (unsigned int)v75;
        }
        else
        {
          v31 = 0;
        }
        v32 = v27 < 0;
        if ( v27 >= 0 )
        {
          if ( (int)v30 >= 0 && v31 >= 0 )
          {
            KeEnterCriticalRegion();
            v27 = RawInputManagerObjectCreate((int)v73, v33, v34, v35, &v72);
            KeLeaveCriticalRegion();
            if ( v27 >= 0 )
            {
              v27 = RawInputManagerObjectResolveHandle((char *)v72, 3u, 1, &v73);
              v70 = v27;
              if ( v27 >= 0 )
              {
                v36 = (char *)v73;
                *((_QWORD *)v73 + 8) = v72;
                *((_WORD *)v36 + 36) = 0;
                v36[75] = 0;
                *((_DWORD *)v36 + 19) = a1;
                *((_QWORD *)v36 + 14) = a5;
                *((_QWORD *)v36 + 12) = 0LL;
                *((_QWORD *)v36 + 13) = 0LL;
                *((_QWORD *)v36 + 69) = 0LL;
                *((_QWORD *)v36 + 70) = 0LL;
                *((_QWORD *)v36 + 51) = 0LL;
                *((_DWORD *)v36 + 98) = 0;
                *((_QWORD *)v36 + 50) = 0LL;
                *((_QWORD *)v36 + 53) = v36 + 416;
                *((_QWORD *)v36 + 52) = v36 + 416;
                memset(v36 + 432, 0, 0x20uLL);
                *((_QWORD *)v36 + 55) = v36 + 432;
                *((_QWORD *)v36 + 54) = v36 + 432;
                memset(v36 + 464, 0, 0x20uLL);
                RIMCheckPressureDefaultSetting(v36);
                *((_DWORD *)v36 + 212) = a13 == 0;
                *((_DWORD *)v36 + 213) = v69;
                *((_DWORD *)v36 + 219) = 0;
                *((_QWORD *)v36 + 110) = v82;
                *((_DWORD *)v36 + 222) = 0;
                v82 = 0LL;
                v37 = 0;
                v38 = v91;
                v39 = &off_1C0172B40;
                v40 = v36 + 240;
                v41 = v36 + 288;
                v42 = v36 - (char *)&off_1C0172B40;
                v43 = v36 - v91;
                do
                {
                  *(_OWORD *)((char *)v39 + v42 + 120) = *(_OWORD *)v39;
                  *(_OWORD *)((char *)v39 + v42 + 136) = *((_OWORD *)v39 + 1);
                  *(_QWORD *)((char *)v38 + v43 + 216) = 0LL;
                  *(_QWORD *)((char *)v38 + v43 + 304) = *v38;
                  *v41 = 0;
                  *v38 = 0LL;
                  *((_DWORD *)v40 + 2) = v37;
                  *(_QWORD *)v40 = v36;
                  ++v37;
                  ++v41;
                  v39 += 4;
                  ++v38;
                  v40 += 16;
                }
                while ( v37 <= 2 );
                *((_QWORD *)v36 + 41) = v84;
                *((_QWORD *)v36 + 42) = v76;
                *((_DWORD *)v36 + 86) = a9;
                *((_QWORD *)v36 + 44) = 0LL;
                *((_QWORD *)v36 + 45) = 0LL;
                *((_QWORD *)v36 + 46) = 0LL;
                if ( a9 && v76 != (HANDLE)-1LL )
                {
                  *((_QWORD *)v36 + 44) = gliQpcFreq.QuadPart * a9 / 1000;
                  *((_QWORD *)v36 + 45) = gliQpcFreq.QuadPart * 20 * a9 / 1000;
                }
                *((_QWORD *)v36 + 48) = a10;
                *((_QWORD *)v36 + 47) = Handle;
                v36[568] = 0;
                *((_QWORD *)v36 + 87) = 0LL;
                *((_QWORD *)v36 + 86) = 500 * gliQpcFreq.QuadPart / 1000;
                *((_QWORD *)v36 + 90) = 5000 * gliQpcFreq.QuadPart / 1000;
                *((_QWORD *)v36 + 77) = a11;
                *((_QWORD *)v36 + 78) = a12;
                v36[496] = 0;
                RawInputManagerObject::bTouchInputAllowed = 1;
                v36[497] = 0;
                KeQueryPerformanceCounter((PLARGE_INTEGER)v36 + 63);
                *((_QWORD *)v36 + 64) = 1LL;
                *((_QWORD *)v36 + 74) = 0LL;
                *((_QWORD *)v36 + 66) = v36 + 520;
                *((_QWORD *)v36 + 65) = v36 + 520;
                *((_QWORD *)v36 + 68) = v36 + 536;
                *((_QWORD *)v36 + 67) = v36 + 536;
                *((_QWORD *)v36 + 73) = v36 + 576;
                *((_QWORD *)v36 + 72) = v36 + 576;
                *((_QWORD *)v36 + 76) = v36 + 600;
                *((_QWORD *)v36 + 75) = v36 + 600;
                *((_QWORD *)v36 + 108) = v36 + 856;
                *((_QWORD *)v36 + 107) = v36 + 856;
                *((_QWORD *)v36 + 113) = v36 + 896;
                *((_QWORD *)v36 + 112) = v36 + 896;
                RtlInitializeGenericTableAvl(
                  (PRTL_AVL_TABLE)v36 + 7,
                  rimUserMemAllocNodeCompare,
                  rimUserMemAllocNodeAlloc,
                  (PRTL_AVL_FREE_ROUTINE)rimUserMemAllocNodeFree,
                  0LL);
                v46 = v74;
                *((_DWORD *)v36 + 20) = v74;
                if ( !(_DWORD)v46 )
                {
LABEL_52:
                  v53 = v69;
                  goto LABEL_53;
                }
                if ( v15 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44);
                v44 = 0xFFFFFFFFLL;
                v45 = 0xFFFFFFFFLL;
                if ( (unsigned __int64)(4 * v46) <= 0xFFFFFFFF )
                  v45 = (unsigned int)(4 * v46);
                v74 = v45;
                if ( (unsigned __int64)(4 * v46) > 0xFFFFFFFF )
                {
                  v27 = -1073741811;
                }
                else
                {
                  v47 = Win32AllocPool(v45, 0x70617552u);
                  *((_QWORD *)v36 + 11) = v47;
                  if ( v47 )
                  {
                    if ( !a13 )
                    {
                      v44 = 0LL;
                      v48 = v46;
                      v49 = v87;
                      do
                      {
                        v45 = *((_QWORD *)v36 + 11);
                        *(_DWORD *)(v44 + v45) = *(_DWORD *)(v44 + v49);
                        v44 += 4LL;
                        --v48;
                      }
                      while ( v48 );
                      goto LABEL_52;
                    }
                    v50 = 0;
                    v78 = 0;
                    v51 = v87;
                    while ( v50 < (unsigned int)v46 )
                    {
                      v52 = (_DWORD *)(v51 + 4LL * v50);
                      v44 = *((_QWORD *)v36 + 11);
                      v45 = MmUserProbeAddress;
                      if ( (unsigned __int64)v52 >= MmUserProbeAddress )
                        v52 = (_DWORD *)MmUserProbeAddress;
                      *(_DWORD *)(v44 + 4LL * v50++) = *v52;
                      v78 = v50;
                    }
                    v53 = v69;
LABEL_53:
                    if ( !v15 )
                    {
                      if ( v27 >= 0 )
                        RIMDiscoverDevicesOfInputType(v36);
                      if ( !v69 )
                        RIMIDEAdoptOrphanedRimDevs((PVOID **)v36);
                      v54 = (_QWORD *)a14;
                      goto LABEL_89;
                    }
                    if ( v53 )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44);
                    p_DestinationString = 0LL;
                    *(_QWORD *)&DestinationString.Length = 0LL;
                    DestinationString.Buffer = 0LL;
                    if ( !a13 )
                    {
                      p_DestinationString = v15;
                      v54 = (_QWORD *)a14;
                      goto LABEL_75;
                    }
                    if ( (unsigned __int64)v15 >= MmUserProbeAddress )
                      v15 = (struct _UNICODE_STRING *)MmUserProbeAddress;
                    v55 = *(unsigned int *)&v15->Length;
                    v71 = *(_DWORD *)&v15->Length;
                    *(_DWORD *)&SourceString.Length = *(_DWORD *)&v15->Length;
                    Buffer = v15->Buffer;
                    SourceString.Buffer = Buffer;
                    if ( ((unsigned __int8)Buffer & 1) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v57 = (ULONG64)Buffer + (unsigned __int16)v55 + 2;
                    v58 = (_BYTE **)MmUserProbeAddress;
                    if ( v57 >= MmUserProbeAddress || (unsigned __int16)v55 > HIWORD(v71) )
                    {
LABEL_66:
                      if ( (v55 & 1) != 0 )
                        goto LABEL_67;
                    }
                    else
                    {
                      if ( (v55 & 1) == 0 )
                      {
                        if ( v57 <= (unsigned __int64)Buffer )
                          goto LABEL_66;
LABEL_69:
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
                          v27 = v70;
                        }
                        else
                        {
                          v27 = -1073741801;
                        }
                        v36 = (char *)v73;
                        v54 = (_QWORD *)a14;
LABEL_75:
                        if ( v27 >= 0 )
                        {
                          RIMLockExclusive((__int64)(v36 + 96));
                          v27 = RIMDiscoverSpecificDevice(v36);
                          CInpPushLock::UnLockExclusive((CInpPushLock *)(v36 + 96));
                          if ( v27 < 0 )
                          {
                            if ( *((_QWORD *)v36 + 11) )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v60, v59);
                            v61 = *((_QWORD *)v36 + 50);
                            if ( v61 )
                            {
                              Win32FreePool(v61);
                              *((_QWORD *)v36 + 50) = 0LL;
                            }
                            *((_QWORD *)v36 + 41) = -1LL;
                            *((_QWORD *)v36 + 42) = -1LL;
                            *((_QWORD *)v36 + 47) = -1LL;
                          }
                        }
                        if ( DestinationString.Buffer )
                          Win32FreePool((__int64)DestinationString.Buffer);
LABEL_89:
                        ObfDereferenceObject(v36);
                        KernelSemaphore = v82;
LABEL_94:
                        v62 = (__int64 *)v91;
                        if ( v27 < 0 )
                        {
                          v65 = 3LL;
                          do
                          {
                            if ( *v62 )
                              Win32FreePool(*v62);
                            ++v62;
                            --v65;
                          }
                          while ( v65 );
                          if ( KernelSemaphore )
                            Win32FreePool((__int64)KernelSemaphore);
                          if ( Handle != (HANDLE)-1LL )
                            ZwClose(Handle);
                          if ( v84 != (HANDLE)-1LL )
                            ZwClose(v84);
                          if ( v76 != (HANDLE)-1LL )
                            ZwClose(v76);
                          if ( v72 != (HANDLE)-1LL )
                            ObCloseHandle(v72, 1);
                        }
                        else
                        {
                          v63 = 3LL;
                          do
                          {
                            if ( *v62 )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29);
                            ++v62;
                            --v63;
                          }
                          while ( v63 );
                          if ( KernelSemaphore )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29);
                          if ( v80 )
                          {
                            v64 = (_QWORD *)a14;
                            if ( a14 >= MmUserProbeAddress )
                              v64 = (_QWORD *)MmUserProbeAddress;
                            *v64 = v72;
                          }
                          else
                          {
                            *v54 = v72;
                          }
                        }
                        WPP_RECORDER_SF_D(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          3u,
                          0x14u,
                          0x13u,
                          (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
                          v27);
                        return (unsigned int)v27;
                      }
LABEL_67:
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, Buffer);
                      v58 = (_BYTE **)MmUserProbeAddress;
                    }
                    **v58 = 0;
                    goto LABEL_69;
                  }
                  v27 = -1073741801;
                }
                v70 = v27;
                goto LABEL_52;
              }
            }
LABEL_93:
            v54 = (_QWORD *)a14;
            goto LABEL_94;
          }
          v32 = v27 < 0;
        }
        if ( !v32 )
          v27 = v30;
        goto LABEL_93;
      }
    }
    v66 = (__int64 *)v91;
    do
    {
      if ( *v66 )
        Win32FreePool(*v66);
      ++v66;
      --v17;
    }
    while ( v17 );
    Win32FreePool((__int64)KernelSemaphore);
  }
  return 3221225495LL;
}
