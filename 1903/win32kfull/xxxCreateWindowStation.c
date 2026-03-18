/*
 * XREFs of xxxCreateWindowStation @ 0x1C00DFC88
 * Callers:
 *     xxxConnectService @ 0x1C00DC654 (xxxConnectService.c)
 *     NtUserCreateWindowStation @ 0x1C00DF4E0 (NtUserCreateWindowStation.c)
 * Callees:
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0017FEC (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     zzzSetDesktop @ 0x1C00232E0 (zzzSetDesktop.c)
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C00DC0A8 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     xxxInitWindowStation @ 0x1C00E04A8 (xxxInitWindowStation.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C013BE88 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C01415E0 (xxxCleanupMotherDesktopWindow.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateWindowStation(
        __int64 a1,
        char a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        HANDLE *a10)
{
  __int64 v10; // r14
  void *v11; // r15
  void *v12; // r12
  int v13; // edi
  int *v14; // r13
  NTSTATUS v15; // eax
  unsigned int v16; // ebx
  int GlobalAtomTable; // eax
  NTSTATUS DesktopNotificationEvent; // esi
  struct tagWND **v19; // rbx
  NTSTATUS inserted; // eax
  void *v21; // rcx
  _QWORD *i; // rcx
  __int64 v23; // r9
  void *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r9
  int v30; // esi
  int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v35; // di
  __int64 Window; // rdi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  void *v40; // r8
  __int64 v41; // r9
  ULONG v42; // esi
  ULONG v43; // edi
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 ThreadWin32Thread; // rax
  ULONG v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  NTSTATUS v55; // ecx
  ULONG v56; // eax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  void *v60; // r8
  __int64 v61; // r9
  ULONG v62; // eax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // edi
  __int64 v67; // rbx
  int v68; // edi
  NTSTATUS v69; // ecx
  ULONG v70; // eax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  int v74; // [rsp+98h] [rbp-80h]
  PVOID Object; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v76[8]; // [rsp+A8h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+B0h] [rbp-68h] BYREF
  int v78; // [rsp+B8h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-58h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+C8h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+D0h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-40h] BYREF
  _QWORD v83[4]; // [rsp+F8h] [rbp-20h] BYREF
  __int128 v84; // [rsp+118h] [rbp+0h]
  __int64 v85[4]; // [rsp+128h] [rbp+10h] BYREF
  _OWORD v86[4]; // [rsp+148h] [rbp+30h] BYREF
  void *MemoryAllocated; // [rsp+198h] [rbp+80h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+1A8h] [rbp+90h]
  __int64 v89; // [rsp+1B0h] [rbp+98h]

  v89 = a4;
  DesiredAccess = a3;
  ExplicitDescriptor = *(PSECURITY_DESCRIPTOR *)(a1 + 32);
  v10 = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v13 = 0;
  v74 = 0;
  if ( grpWinStaList )
  {
    gTermNOIO |= 2u;
    v14 = &gTermNOIO;
  }
  else
  {
    v14 = (int *)gTermIO[0];
  }
  LOBYTE(a4) = a2;
  v15 = ObCreateObject(0LL, ExWindowStationObjectType, a1, a4, 0LL, 184, 0, 0, &Object);
  v16 = v15;
  if ( v15 < 0 )
  {
    v51 = RtlNtStatusToDosError(v15);
    UserSetLastError(v51, v52, v53, v54);
    return v16;
  }
  if ( ExAcquireRundownProtection(gWinstaRunRef) )
  {
    memset(Object, 0, 0xB8uLL);
    *(_DWORD *)Object = gSessionId;
    *((_QWORD *)Object + 3) = v14;
    if ( (*v14 & 2) != 0 )
      *((_DWORD *)Object + 8) = 4;
    GlobalAtomTable = CreateGlobalAtomTable((char *)Object + 136);
    DesktopNotificationEvent = GlobalAtomTable;
    if ( GlobalAtomTable < 0
      || (*v14 & 1) == 0
      && (GlobalAtomTable = xxxInitTerminal((struct tagTERMINAL *)v14),
          DesktopNotificationEvent = GlobalAtomTable,
          GlobalAtomTable < 0) )
    {
      v55 = GlobalAtomTable;
      goto LABEL_51;
    }
    if ( (*((_DWORD *)Object + 8) & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
    {
      DesktopNotificationEvent = -1073741801;
      v55 = -1073741801;
LABEL_51:
      v56 = RtlNtStatusToDosError(v55);
      UserSetLastError(v56, v57, v58, v59);
      goto LABEL_63;
    }
    v19 = (struct tagWND **)(v14 + 2);
    if ( *((_QWORD *)v14 + 1) )
    {
LABEL_11:
      if ( (*((_DWORD *)Object + 8) & 4) == 0 )
      {
        v42 = RtlLengthSid(SeExports->SeWorldSid);
        v43 = v42 + 8;
        v44 = Win32AllocPoolWithQuota(v42 + 8, 1702064981LL);
        v45 = v44;
        if ( !v44
          || (*(_WORD *)v44 = 0,
              *(_WORD *)(v44 + 2) = v43,
              *(_DWORD *)(v44 + 4) = 0x100000,
              RtlCopySid(v42, (PSID)(v44 + 8), SeExports->SeWorldSid),
              v12 = (void *)CreateSecurityDescriptor(v45, v43, 0LL),
              Win32FreePool(v45),
              !v12) )
        {
          DesktopNotificationEvent = -1073741801;
          goto LABEL_62;
        }
        DesktopNotificationEvent = CreateDesktopNotificationEvent(v12);
        if ( DesktopNotificationEvent < 0 )
        {
LABEL_62:
          v13 = v74;
          goto LABEL_63;
        }
        Win32FreePool(v12);
      }
      inserted = ObInsertObject(Object, 0LL, DesiredAccess, 1u, &Object, &Handle);
      DesktopNotificationEvent = inserted;
      if ( inserted < 0 )
      {
        Object = 0LL;
      }
      else
      {
        if ( inserted == 0x40000000 )
        {
LABEL_23:
          ObfDereferenceObject(Object);
          *a10 = Handle;
          return 0LL;
        }
        SecurityDescriptor = 0LL;
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        LOBYTE(MemoryAllocated) = 0;
        SeCaptureSubjectContext(&SubjectContext);
        SeLockSubjectContext(&SubjectContext);
        v21 = *(void **)ObQueryNameInfo(Object);
        if ( v21 )
        {
          DesktopNotificationEvent = ObGetObjectSecurity(v21, &SecurityDescriptor, (PBOOLEAN)&MemoryAllocated);
          if ( DesktopNotificationEvent < 0 )
          {
            SeUnlockSubjectContext(&SubjectContext);
            SeReleaseSubjectContext(&SubjectContext);
            v12 = 0LL;
            goto LABEL_62;
          }
        }
        DesktopNotificationEvent = SeAssignSecurity(
                                     SecurityDescriptor,
                                     ExplicitDescriptor,
                                     &NewDescriptor,
                                     1u,
                                     &SubjectContext,
                                     WinStaMapping,
                                     PagedPool);
        ObReleaseObjectSecurity(SecurityDescriptor, (BOOLEAN)MemoryAllocated);
        SeUnlockSubjectContext(&SubjectContext);
        SeReleaseSubjectContext(&SubjectContext);
        if ( DesktopNotificationEvent < 0 )
        {
          v69 = -1073741790;
          if ( DesktopNotificationEvent != -1073741790 )
            v69 = DesktopNotificationEvent;
          v70 = RtlNtStatusToDosError(v69);
          UserSetLastError(v70, v71, v72, v73);
        }
        else
        {
          v78 = 15;
          DesktopNotificationEvent = ObSetSecurityDescriptorInfo(
                                       Object,
                                       &v78,
                                       NewDescriptor,
                                       (char *)Object - 8,
                                       1,
                                       WinStaMapping);
          SeDeassignSecurity(&NewDescriptor);
          if ( DesktopNotificationEvent >= 0 )
          {
            for ( i = (_QWORD *)grpWinStaList; *i; i = (_QWORD *)(*i + 8LL) )
              ;
            LockObjectAssignment(i, Object);
            if ( (*((_DWORD *)Object + 8) & 4) == 0 )
            {
              v46 = a8;
              if ( a8 )
              {
                memset(v83, 0, 24);
                PushW32ThreadLock((__int64)Object, v83, UserDereferenceObject, v23);
                if ( !xxxSafeLoadKeyboardLayoutEx(Object, v89, 0LL, a5, a6, a7, v46, a9, -2147483647) )
                  DesktopNotificationEvent = -1073741823;
                ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49);
                *(_QWORD *)(ThreadWin32Thread + 16) = v83[0];
              }
            }
          }
        }
      }
      v12 = 0LL;
      if ( DesktopNotificationEvent >= 0 )
        goto LABEL_23;
      goto LABEL_62;
    }
    v10 = gptiCurrent;
    v25 = *(void **)(gptiCurrent + 416LL);
    v26 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 416LL);
    v11 = *(void **)(gptiCurrent + 448LL);
    MemoryAllocated = *(void **)(gptiCurrent + 584LL);
    SecurityDescriptor = v25;
    *(_QWORD *)(gptiCurrent + 416LL) = v26;
    if ( v11 )
    {
      ObfReferenceObject(v11);
    }
    else if ( *(_QWORD *)(gptiCurrent + 736LL) != gptiCurrent + 736LL )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
    }
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v76);
    DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, 0LL, 0LL, v27);
    if ( DesktopNotificationEvent < 0 )
    {
      if ( !*(_QWORD *)(gptiCurrent + 448LL) && v11 )
        zzzSetDesktop(gptiCurrent, (__int64)v11, MemoryAllocated, v29);
      UserAtomicCheck::Detach((UserAtomicCheck *)v76);
      zzzEndDeferWinEventNotify();
      *(_QWORD *)(gptiCurrent + 416LL) = v25;
    }
    else
    {
      v30 = *(_DWORD *)(gptiCurrent + 480LL);
      *(_DWORD *)(gptiCurrent + 480LL) = v30 | 0x10000000;
      v31 = v30 & 0x10000000;
      v35 = 0;
      if ( PsGetCurrentProcessWin32Process(0x10000000LL, v28) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33, v32);
        if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
          v35 = 1;
      }
      SmartObjStackRefBase<tagMENU>::Init(v85, 0LL);
      v85[2] = 0LL;
      Window = xxxCreateWindowEx(
                 0,
                 32769LL,
                 32769LL,
                 0LL,
                 -2113929216,
                 -32768,
                 -32768,
                 0xFFFFu,
                 0xFFFFu,
                 0LL,
                 (__int64 **)v85,
                 hModuleWin,
                 0LL,
                 1u,
                 0x30Au,
                 v35,
                 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v85, v37, v38, v39);
      if ( Window )
      {
        *(_QWORD *)&v84 = v14 + 2;
        *((_QWORD *)&v84 + 1) = Window;
        v86[0] = v84;
        HMAssignmentLock(v86);
        *(_DWORD *)(gptiCurrent + 480LL) = v31 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
        SetVisible(*v19, 1u);
        HMChangeOwnerThread(*v19, *((_QWORD *)v14 + 2));
        v13 = 1;
        v40 = MemoryAllocated;
        *(_QWORD *)(gptiCurrent + 416LL) = SecurityDescriptor;
        v74 = 1;
        DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, (__int64)v11, v40, v41);
        if ( DesktopNotificationEvent < 0 )
        {
          UserAtomicCheck::Detach((UserAtomicCheck *)v76);
          zzzEndDeferWinEventNotify();
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v76);
          goto LABEL_63;
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v76);
        zzzEndDeferWinEventNotify();
        if ( v11 )
        {
          ObfDereferenceObject(v11);
          v11 = 0LL;
        }
        goto LABEL_11;
      }
      DesktopNotificationEvent = -1073741801;
      UserAtomicCheck::Detach((UserAtomicCheck *)v76);
      zzzEndDeferWinEventNotify();
      v60 = MemoryAllocated;
      *(_QWORD *)(gptiCurrent + 416LL) = SecurityDescriptor;
      zzzSetDesktop(gptiCurrent, (__int64)v11, v60, v61);
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v76);
    v13 = 0;
    goto LABEL_63;
  }
  DesktopNotificationEvent = -1073741790;
LABEL_63:
  v62 = RtlNtStatusToDosError(DesktopNotificationEvent);
  UserSetLastError(v62, v63, v64, v65);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v13 )
  {
    ++gdwDeferWinEvent;
    v66 = *(_DWORD *)(v10 + 480);
    v67 = *(_QWORD *)(v10 + 416);
    *(_DWORD *)(v10 + 480) = v66 | 0x10000000;
    *(_QWORD *)(v10 + 416) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 416LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v10);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&ExplicitDescriptor);
    xxxCleanupMotherDesktopWindow(v14);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&ExplicitDescriptor);
    v68 = (*(_DWORD *)(v10 + 480) ^ v66) & 0x10000000;
    *(_QWORD *)(v10 + 416) = v67;
    *(_DWORD *)(v10 + 480) ^= v68;
    zzzEndDeferWinEventNotify();
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v12 )
    Win32FreePool(v12);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)DesktopNotificationEvent;
}
