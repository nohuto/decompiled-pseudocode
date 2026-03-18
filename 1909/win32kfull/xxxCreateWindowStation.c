/*
 * XREFs of xxxCreateWindowStation @ 0x1C007F978
 * Callers:
 *     xxxConnectService @ 0x1C007C344 (xxxConnectService.c)
 *     NtUserCreateWindowStation @ 0x1C007F1D0 (NtUserCreateWindowStation.c)
 * Callees:
 *     xxxCleanupMotherDesktopWindow @ 0x1C000B050 (xxxCleanupMotherDesktopWindow.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     zzzSetDesktop @ 0x1C0029750 (zzzSetDesktop.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C007BD98 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     xxxInitWindowStation @ 0x1C0080104 (xxxInitWindowStation.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C0080774 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C01359F0 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  void *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // esi
  int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v32; // di
  __int64 Window; // rdi
  __int64 v34; // rdx
  __int64 v35; // r8
  void *v36; // r8
  ULONG v37; // esi
  ULONG v38; // edi
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rbx
  __int64 ThreadWin32Thread; // rax
  ULONG v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  NTSTATUS v47; // ecx
  ULONG v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  void *v52; // r8
  ULONG v53; // eax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // edi
  __int64 v58; // rbx
  int v59; // edi
  NTSTATUS v60; // ecx
  ULONG v61; // eax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  int v65; // [rsp+98h] [rbp-80h]
  PVOID Object; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v67[8]; // [rsp+A8h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+B0h] [rbp-68h] BYREF
  int v69; // [rsp+B8h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-58h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+C8h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+D0h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-40h] BYREF
  _QWORD v74[4]; // [rsp+F8h] [rbp-20h] BYREF
  __int128 v75; // [rsp+118h] [rbp+0h]
  __int64 v76[4]; // [rsp+128h] [rbp+10h] BYREF
  _OWORD v77[4]; // [rsp+148h] [rbp+30h] BYREF
  void *MemoryAllocated; // [rsp+198h] [rbp+80h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+1A8h] [rbp+90h]
  __int64 v80; // [rsp+1B0h] [rbp+98h]

  v80 = a4;
  DesiredAccess = a3;
  ExplicitDescriptor = *(PSECURITY_DESCRIPTOR *)(a1 + 32);
  v10 = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v13 = 0;
  v65 = 0;
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
    v43 = RtlNtStatusToDosError(v15);
    UserSetLastError(v43, v44, v45, v46);
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
      v47 = GlobalAtomTable;
      goto LABEL_51;
    }
    if ( (*((_DWORD *)Object + 8) & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
    {
      DesktopNotificationEvent = -1073741801;
      v47 = -1073741801;
LABEL_51:
      v48 = RtlNtStatusToDosError(v47);
      UserSetLastError(v48, v49, v50, v51);
      goto LABEL_63;
    }
    v19 = (struct tagWND **)(v14 + 2);
    if ( *((_QWORD *)v14 + 1) )
    {
LABEL_11:
      if ( (*((_DWORD *)Object + 8) & 4) == 0 )
      {
        v37 = RtlLengthSid(SeExports->SeWorldSid);
        v38 = v37 + 8;
        v39 = Win32AllocPoolWithQuota(v37 + 8, 1702064981LL);
        v40 = v39;
        if ( !v39
          || (*(_WORD *)v39 = 0,
              *(_WORD *)(v39 + 2) = v38,
              *(_DWORD *)(v39 + 4) = 0x100000,
              RtlCopySid(v37, (PSID)(v39 + 8), SeExports->SeWorldSid),
              v12 = (void *)CreateSecurityDescriptor(v40, v38, 0LL),
              Win32FreePool(v40),
              !v12) )
        {
          DesktopNotificationEvent = -1073741801;
          goto LABEL_62;
        }
        DesktopNotificationEvent = CreateDesktopNotificationEvent(v12);
        if ( DesktopNotificationEvent < 0 )
        {
LABEL_62:
          v13 = v65;
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
          v60 = -1073741790;
          if ( DesktopNotificationEvent != -1073741790 )
            v60 = DesktopNotificationEvent;
          v61 = RtlNtStatusToDosError(v60);
          UserSetLastError(v61, v62, v63, v64);
        }
        else
        {
          v69 = 15;
          DesktopNotificationEvent = ObSetSecurityDescriptorInfo(
                                       Object,
                                       &v69,
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
              v41 = a8;
              if ( a8 )
              {
                memset(v74, 0, 24);
                PushW32ThreadLock((__int64)Object, v74, UserDereferenceObject);
                if ( !xxxSafeLoadKeyboardLayoutEx(Object, v80, 0LL, a5, a6, a7, v41, a9, -2147483647) )
                  DesktopNotificationEvent = -1073741823;
                ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                *(_QWORD *)(ThreadWin32Thread + 16) = v74[0];
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
    v24 = *(void **)(gptiCurrent + 416LL);
    v25 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 416LL);
    v11 = *(void **)(gptiCurrent + 448LL);
    MemoryAllocated = *(void **)(gptiCurrent + 584LL);
    SecurityDescriptor = v24;
    *(_QWORD *)(gptiCurrent + 416LL) = v25;
    if ( v11 )
    {
      ObfReferenceObject(v11);
    }
    else if ( *(_QWORD *)(gptiCurrent + 736LL) != gptiCurrent + 736LL )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
    }
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v67);
    DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, 0LL, 0LL);
    if ( DesktopNotificationEvent < 0 )
    {
      if ( !*(_QWORD *)(gptiCurrent + 448LL) && v11 )
        zzzSetDesktop(gptiCurrent, (__int64)v11, MemoryAllocated);
      UserAtomicCheck::Detach((UserAtomicCheck *)v67);
      zzzEndDeferWinEventNotify();
      *(_QWORD *)(gptiCurrent + 416LL) = v24;
    }
    else
    {
      v27 = *(_DWORD *)(gptiCurrent + 480LL);
      *(_DWORD *)(gptiCurrent + 480LL) = v27 | 0x10000000;
      v28 = v27 & 0x10000000;
      v32 = 0;
      if ( PsGetCurrentProcessWin32Process(0x10000000LL, v26) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30, v29);
        if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
          v32 = 1;
      }
      SmartObjStackRefBase<tagMENU>::Init(v76, 0LL);
      v76[2] = 0LL;
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
                 (__int64 **)v76,
                 hModuleWin,
                 0LL,
                 1u,
                 0x30Au,
                 v32,
                 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v76, v34, v35);
      if ( Window )
      {
        *(_QWORD *)&v75 = v14 + 2;
        *((_QWORD *)&v75 + 1) = Window;
        v77[0] = v75;
        HMAssignmentLock(v77);
        *(_DWORD *)(gptiCurrent + 480LL) = v28 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
        SetVisible(*v19, 1u);
        HMChangeOwnerThread(*v19, *((_QWORD *)v14 + 2));
        v13 = 1;
        v36 = MemoryAllocated;
        *(_QWORD *)(gptiCurrent + 416LL) = SecurityDescriptor;
        v65 = 1;
        DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, (__int64)v11, v36);
        if ( DesktopNotificationEvent < 0 )
        {
          UserAtomicCheck::Detach((UserAtomicCheck *)v67);
          zzzEndDeferWinEventNotify();
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v67);
          goto LABEL_63;
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v67);
        zzzEndDeferWinEventNotify();
        if ( v11 )
        {
          ObfDereferenceObject(v11);
          v11 = 0LL;
        }
        goto LABEL_11;
      }
      DesktopNotificationEvent = -1073741801;
      UserAtomicCheck::Detach((UserAtomicCheck *)v67);
      zzzEndDeferWinEventNotify();
      v52 = MemoryAllocated;
      *(_QWORD *)(gptiCurrent + 416LL) = SecurityDescriptor;
      zzzSetDesktop(gptiCurrent, (__int64)v11, v52);
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v67);
    v13 = 0;
    goto LABEL_63;
  }
  DesktopNotificationEvent = -1073741790;
LABEL_63:
  v53 = RtlNtStatusToDosError(DesktopNotificationEvent);
  UserSetLastError(v53, v54, v55, v56);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v13 )
  {
    ++gdwDeferWinEvent;
    v57 = *(_DWORD *)(v10 + 480);
    v58 = *(_QWORD *)(v10 + 416);
    *(_DWORD *)(v10 + 480) = v57 | 0x10000000;
    *(_QWORD *)(v10 + 416) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 416LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v10);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&ExplicitDescriptor);
    xxxCleanupMotherDesktopWindow((__int64)v14);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&ExplicitDescriptor);
    v59 = (*(_DWORD *)(v10 + 480) ^ v57) & 0x10000000;
    *(_QWORD *)(v10 + 416) = v58;
    *(_DWORD *)(v10 + 480) ^= v59;
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
