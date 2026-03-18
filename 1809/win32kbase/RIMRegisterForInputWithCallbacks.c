/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x1C007AF50
 * Callers:
 *     RIMRegisterForInput @ 0x1C007AEE0 (RIMRegisterForInput.c)
 * Callees:
 *     CreateKernelSemaphore @ 0x1C0007F20 (CreateKernelSemaphore.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C004EB30 (RIMDiscoverDevicesOfInputType.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00514E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RawInputManagerObjectCreate @ 0x1C0051DD0 (RawInputManagerObjectCreate.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0052040 (rimConvertUserToKernelEventHandle.c)
 *     RIMUnregisterForInput @ 0x1C0087040 (RIMUnregisterForInput.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C008D4EC (RIMIDEAdoptOrphanedRimDevs.c)
 *     rimFindReferencedKernelModeRimObj @ 0x1C008E14C (rimFindReferencedKernelModeRimObj.c)
 *     rimConvertUserToKernelTimerHandle @ 0x1C008E5C0 (rimConvertUserToKernelTimerHandle.c)
 *     RIMCheckPressureDefaultSetting @ 0x1C008FD9C (RIMCheckPressureDefaultSetting.c)
 *     ?RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z @ 0x1C00A45C0 (-RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C010FA40 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C010FBC8 (WPP_RECORDER_SF_qDd.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01242A4 (RIMDiscoverSpecificDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRegisterForInputWithCallbacks(
        unsigned int a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
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
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  unsigned __int16 v22; // r9
  struct _KSEMAPHORE *KernelSemaphore; // r14
  unsigned int v25; // esi
  __int64 v26; // rax
  char *v27; // rcx
  int v28; // esi
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  int v33; // eax
  bool v34; // sf
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  char *v38; // r14
  unsigned int v39; // r8d
  _QWORD *v40; // rdx
  GUID **v41; // rcx
  char *v42; // r9
  _DWORD *v43; // r10
  signed __int64 v44; // r11
  signed __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r11
  unsigned int v55; // r10d
  __int64 v56; // r11
  _DWORD *v57; // r8
  int v58; // eax
  _QWORD *v59; // r12
  __int64 v60; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v62; // r8
  _BYTE **v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rcx
  __int64 *v68; // rbx
  __int64 v69; // r15
  _QWORD *v70; // rdx
  __int64 v71; // r12
  __int64 *v72; // rbx
  int TableContext; // [rsp+20h] [rbp-128h]
  __int64 v74; // [rsp+28h] [rbp-120h]
  char v75; // [rsp+40h] [rbp-108h]
  int v76; // [rsp+44h] [rbp-104h]
  PVOID v77; // [rsp+48h] [rbp-100h] BYREF
  ULONG64 v78; // [rsp+50h] [rbp-F8h]
  unsigned int v79; // [rsp+58h] [rbp-F0h]
  HANDLE v80; // [rsp+60h] [rbp-E8h] BYREF
  int v81; // [rsp+68h] [rbp-E0h]
  int v82; // [rsp+6Ch] [rbp-DCh]
  HANDLE v83; // [rsp+70h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-D0h] BYREF
  unsigned int v85; // [rsp+88h] [rbp-C0h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp-B8h]
  struct _KSEMAPHORE *v87; // [rsp+98h] [rbp-B0h]
  HANDLE Handle; // [rsp+A0h] [rbp-A8h] BYREF
  HANDLE v89; // [rsp+A8h] [rbp-A0h] BYREF
  UNICODE_STRING SourceString; // [rsp+B0h] [rbp-98h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v92; // [rsp+C8h] [rbp-80h]
  struct _UNICODE_STRING *v93; // [rsp+D0h] [rbp-78h]
  void *v94; // [rsp+D8h] [rbp-70h]
  __int64 v95; // [rsp+E0h] [rbp-68h]
  _BYTE v96[24]; // [rsp+E8h] [rbp-60h] BYREF

  v92 = a4;
  v79 = a3;
  v15 = a2;
  v81 = a13;
  v93 = a2;
  *(_QWORD *)&DestinationString.Length = a4;
  v94 = a6;
  v95 = a7;
  *(_QWORD *)&SourceString.Length = a8;
  v78 = a14;
  Handle = (HANDLE)-1LL;
  v89 = (HANDLE)-1LL;
  v83 = (HANDLE)-1LL;
  v80 = (HANDLE)-1LL;
  memset(v96, 0, sizeof(v96));
  v82 = a13 != 0;
  v75 = 0;
  v17 = 3LL;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0xAu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  if ( (a1 & 0xFFFFFFC0) != 0 )
  {
    WPP_RECORDER_SF_d(gRimLog, 2u, 0x13u, 0xBu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, a1);
    v22 = 12;
LABEL_3:
    LODWORD(v74) = -1073741811;
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, v22, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v74);
    return 3221225485LL;
  }
  if ( v15 )
  {
    if ( !a1 || ((a1 - 1) & a1) != 0 || a3 )
    {
      WPP_RECORDER_SF_qDd(v19, v18, v20, v21, TableContext, (char)v15, a1, a3);
      v22 = 14;
      goto LABEL_3;
    }
  }
  else if ( a3 )
  {
    if ( (a1 & 0x20) == 0 )
    {
      WPP_RECORDER_SF_Dd(v19, v18, v20, v21, TableContext, a1, a3);
      v22 = 16;
      goto LABEL_3;
    }
    if ( a13 )
    {
      Object = 0LL;
      if ( (int)rimFindReferencedKernelModeRimObj(a1, &Object) >= 0 )
      {
        ObfDereferenceObject(Object);
        return 3221225485LL;
      }
      v75 = 1;
    }
  }
  KernelSemaphore = CreateKernelSemaphore(0, -1);
  v87 = KernelSemaphore;
  if ( KernelSemaphore )
  {
    v25 = 0;
    v77 = v96;
    while ( 1 )
    {
      v26 = Win32AllocPoolNonPaged(104LL, 0x63704152u);
      v27 = (char *)v77;
      *(_QWORD *)v77 = v26;
      if ( !v26 )
        break;
      ++v25;
      v77 = v27 + 8;
      if ( v25 > 2 )
      {
        v28 = rimConvertUserToKernelEventHandle(v94, &Handle);
        v29 = rimConvertUserToKernelTimerHandle(v95, &v89);
        v32 = v29;
        LODWORD(v77) = v29;
        if ( *(_QWORD *)&SourceString.Length )
        {
          v33 = rimConvertUserToKernelTimerHandle(*(_QWORD *)&SourceString.Length, &v83);
          v32 = (unsigned int)v77;
        }
        else
        {
          v33 = 0;
        }
        v34 = v28 < 0;
        if ( v28 >= 0 )
        {
          if ( (int)v32 >= 0 && v33 >= 0 )
          {
            KeEnterCriticalRegion();
            v28 = RawInputManagerObjectCreate((unsigned int)v82, v35, v36, v37, &v80);
            KeLeaveCriticalRegion();
            if ( v28 >= 0 )
            {
              v28 = RawInputManagerObjectResolveHandle((char *)v80, 3u, 1, &v77);
              v76 = v28;
              if ( v28 >= 0 )
              {
                v38 = (char *)v77;
                *((_QWORD *)v77 + 9) = v80;
                *((_WORD *)v38 + 40) = 0;
                v38[82] = 0;
                *((_DWORD *)v38 + 21) = a1;
                *((_QWORD *)v38 + 15) = a5;
                *((_QWORD *)v38 + 13) = 0LL;
                *((_QWORD *)v38 + 14) = 0LL;
                *((_QWORD *)v38 + 71) = 0LL;
                *((_QWORD *)v38 + 72) = 0LL;
                *((_QWORD *)v38 + 53) = 0LL;
                *((_DWORD *)v38 + 102) = 0;
                *((_QWORD *)v38 + 52) = 0LL;
                *((_QWORD *)v38 + 55) = v38 + 432;
                *((_QWORD *)v38 + 54) = v38 + 432;
                memset(v38 + 448, 0, 0x20uLL);
                *((_QWORD *)v38 + 57) = v38 + 448;
                *((_QWORD *)v38 + 56) = v38 + 448;
                memset(v38 + 480, 0, 0x20uLL);
                RIMCheckPressureDefaultSetting(v38);
                *((_DWORD *)v38 + 216) = a13 == 0;
                *((_QWORD *)v38 + 109) = v87;
                *((_DWORD *)v38 + 220) = 0;
                v87 = 0LL;
                v39 = 0;
                v40 = v96;
                v41 = &off_1C018E7E0;
                v42 = v38 + 248;
                v43 = v38 + 296;
                v44 = v38 - (char *)&off_1C018E7E0;
                v45 = v38 - v96;
                do
                {
                  *(_OWORD *)((char *)v41 + v44 + 128) = *(_OWORD *)v41;
                  *(_OWORD *)((char *)v41 + v44 + 144) = *((_OWORD *)v41 + 1);
                  *(_QWORD *)((char *)v40 + v45 + 224) = 0LL;
                  *(_QWORD *)((char *)v40 + v45 + 312) = *v40;
                  *v43 = 0;
                  *v40 = 0LL;
                  *((_DWORD *)v42 + 2) = v39;
                  *(_QWORD *)v42 = v38;
                  ++v39;
                  ++v43;
                  v41 += 4;
                  ++v40;
                  v42 += 16;
                }
                while ( v39 <= 2 );
                *((_QWORD *)v38 + 42) = v89;
                *((_QWORD *)v38 + 43) = v83;
                *((_DWORD *)v38 + 88) = a9;
                *((_QWORD *)v38 + 45) = 0LL;
                *((_QWORD *)v38 + 46) = 0LL;
                *((_QWORD *)v38 + 47) = 0LL;
                if ( a9 && v83 != (HANDLE)-1LL )
                {
                  *((_QWORD *)v38 + 45) = gliQpcFreq.QuadPart * a9 / 1000;
                  *((_QWORD *)v38 + 46) = gliQpcFreq.QuadPart * 20 * a9 / 1000;
                }
                *((_QWORD *)v38 + 50) = a10;
                *((_QWORD *)v38 + 48) = Handle;
                v38[392] = v75;
                v38[393] = 0;
                v38[584] = 0;
                *((_QWORD *)v38 + 89) = 0LL;
                *((_QWORD *)v38 + 88) = 500 * gliQpcFreq.QuadPart / 1000;
                *((_QWORD *)v38 + 92) = 5000 * gliQpcFreq.QuadPart / 1000;
                *((_QWORD *)v38 + 79) = a11;
                *((_QWORD *)v38 + 80) = a12;
                v38[512] = 0;
                RawInputManagerObject::bTouchInputAllowed = 1;
                v38[513] = 0;
                KeQueryPerformanceCounter((PLARGE_INTEGER)v38 + 65);
                *((_QWORD *)v38 + 66) = 1LL;
                *((_QWORD *)v38 + 76) = 0LL;
                *((_QWORD *)v38 + 68) = v38 + 536;
                *((_QWORD *)v38 + 67) = v38 + 536;
                *((_QWORD *)v38 + 70) = v38 + 552;
                *((_QWORD *)v38 + 69) = v38 + 552;
                *((_QWORD *)v38 + 75) = v38 + 592;
                *((_QWORD *)v38 + 74) = v38 + 592;
                *((_QWORD *)v38 + 78) = v38 + 616;
                *((_QWORD *)v38 + 77) = v38 + 616;
                *((_QWORD *)v38 + 112) = v38 + 888;
                *((_QWORD *)v38 + 111) = v38 + 888;
                RtlInitializeGenericTableAvl(
                  (PRTL_AVL_TABLE)(v38 + 744),
                  rimUserMemAllocNodeCompare,
                  rimUserMemAllocNodeAlloc,
                  (PRTL_AVL_FREE_ROUTINE)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
                  0LL);
                v49 = v79;
                *((_DWORD *)v38 + 22) = v79;
                if ( !(_DWORD)v49 )
                {
LABEL_54:
                  v58 = a13;
                  goto LABEL_55;
                }
                if ( v15 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v48);
                v50 = 0xFFFFFFFFLL;
                if ( (unsigned __int64)(4 * v49) <= 0xFFFFFFFF )
                  v50 = (unsigned int)(4 * v49);
                v82 = v50;
                if ( (unsigned __int64)(4 * v49) > 0xFFFFFFFF )
                {
                  v28 = -1073741811;
                }
                else
                {
                  v51 = Win32AllocPool(v50, 0x70617552u);
                  *((_QWORD *)v38 + 12) = v51;
                  if ( v51 )
                  {
                    if ( !a13 )
                    {
                      v52 = 0LL;
                      v53 = v49;
                      v54 = v92;
                      do
                      {
                        *(_DWORD *)(v52 + *((_QWORD *)v38 + 12)) = *(_DWORD *)(v52 + v54);
                        v52 += 4LL;
                        --v53;
                      }
                      while ( v53 );
                      goto LABEL_54;
                    }
                    v55 = 0;
                    v85 = 0;
                    v56 = v92;
                    while ( v55 < (unsigned int)v49 )
                    {
                      v57 = (_DWORD *)(v56 + 4LL * v55);
                      if ( (unsigned __int64)v57 >= MmUserProbeAddress )
                        v57 = (_DWORD *)MmUserProbeAddress;
                      *(_DWORD *)(*((_QWORD *)v38 + 12) + 4LL * v55++) = *v57;
                      v85 = v55;
                    }
                    v58 = a13;
LABEL_55:
                    if ( !v15 )
                    {
                      if ( v28 >= 0 && !v38[392] )
                        RIMDiscoverDevicesOfInputType(v38);
                      RIMIDEAdoptOrphanedRimDevs(v38);
                      v59 = (_QWORD *)v78;
                      goto LABEL_88;
                    }
                    p_DestinationString = 0LL;
                    *(_QWORD *)&DestinationString.Length = 0LL;
                    DestinationString.Buffer = 0LL;
                    if ( !v58 )
                    {
                      p_DestinationString = v15;
                      v59 = (_QWORD *)v78;
                      goto LABEL_75;
                    }
                    if ( (unsigned __int64)v15 >= MmUserProbeAddress )
                      v15 = (struct _UNICODE_STRING *)MmUserProbeAddress;
                    v60 = *(unsigned int *)&v15->Length;
                    v79 = v60;
                    *(_DWORD *)&SourceString.Length = v60;
                    Buffer = v15->Buffer;
                    SourceString.Buffer = Buffer;
                    if ( ((unsigned __int8)Buffer & 1) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v62 = (ULONG64)Buffer + (unsigned __int16)v60 + 2;
                    v63 = (_BYTE **)MmUserProbeAddress;
                    if ( v62 >= MmUserProbeAddress || (unsigned __int16)v60 > HIWORD(v79) )
                    {
LABEL_66:
                      if ( (v60 & 1) != 0 )
                        goto LABEL_67;
                    }
                    else
                    {
                      if ( (v60 & 1) == 0 )
                      {
                        if ( v62 <= (unsigned __int64)Buffer )
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
                          v28 = v76;
                        }
                        else
                        {
                          v28 = -1073741801;
                        }
                        v38 = (char *)v77;
                        v59 = (_QWORD *)v78;
LABEL_75:
                        if ( v28 >= 0 )
                        {
                          RIMLockExclusive((__int64)(v38 + 104));
                          v28 = RIMDiscoverSpecificDevice(v38);
                          CInpPushLock::UnLockExclusive((CInpPushLock *)(v38 + 104));
                          if ( v28 < 0 )
                          {
                            if ( *((_QWORD *)v38 + 12) )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v65, v64, v66);
                            v67 = *((_QWORD *)v38 + 52);
                            if ( v67 )
                            {
                              Win32FreePool(v67);
                              *((_QWORD *)v38 + 52) = 0LL;
                            }
                            *((_QWORD *)v38 + 42) = -1LL;
                            *((_QWORD *)v38 + 43) = -1LL;
                            *((_QWORD *)v38 + 48) = -1LL;
                          }
                        }
                        if ( DestinationString.Buffer )
                          Win32FreePool((__int64)DestinationString.Buffer);
LABEL_88:
                        InputTraceLogging::RIM::RawInputManagerObject((const struct RawInputManagerObject *)v38);
                        ObfDereferenceObject(v38);
                        KernelSemaphore = v87;
LABEL_93:
                        v68 = (__int64 *)v96;
                        if ( v28 < 0 )
                        {
                          v71 = 3LL;
                          do
                          {
                            if ( *v68 )
                              Win32FreePool(*v68);
                            ++v68;
                            --v71;
                          }
                          while ( v71 );
                          if ( KernelSemaphore )
                            Win32FreePool((__int64)KernelSemaphore);
                          if ( Handle != (HANDLE)-1LL )
                            ZwClose(Handle);
                          if ( v89 != (HANDLE)-1LL )
                            ZwClose(v89);
                          if ( v83 != (HANDLE)-1LL )
                            ZwClose(v83);
                          if ( v80 != (HANDLE)-1LL )
                            ObCloseHandle(v80, 1);
                        }
                        else
                        {
                          v69 = 3LL;
                          do
                          {
                            if ( *v68 )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v30, v31);
                            ++v68;
                            --v69;
                          }
                          while ( v69 );
                          if ( KernelSemaphore )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v30, v31);
                          if ( a13 )
                          {
                            v70 = (_QWORD *)v78;
                            if ( v78 >= MmUserProbeAddress )
                              v70 = (_QWORD *)MmUserProbeAddress;
                            *v70 = v80;
                          }
                          else
                          {
                            *v59 = v80;
                          }
                        }
                        WPP_RECORDER_SF_d(
                          gRimLog,
                          3u,
                          0x15u,
                          0x13u,
                          (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids,
                          v28);
                        return (unsigned int)v28;
                      }
LABEL_67:
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v60, Buffer, v62);
                      v63 = (_BYTE **)MmUserProbeAddress;
                    }
                    **v63 = 0;
                    goto LABEL_69;
                  }
                  v28 = -1073741801;
                }
                v76 = v28;
                goto LABEL_54;
              }
            }
LABEL_92:
            v59 = (_QWORD *)v78;
            goto LABEL_93;
          }
          v34 = v28 < 0;
        }
        if ( !v34 )
          v28 = v32;
        goto LABEL_92;
      }
    }
    v72 = (__int64 *)v96;
    do
    {
      if ( *v72 )
        Win32FreePool(*v72);
      ++v72;
      --v17;
    }
    while ( v17 );
    Win32FreePool((__int64)KernelSemaphore);
  }
  return 3221225495LL;
}
