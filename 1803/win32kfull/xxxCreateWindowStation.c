/*
 * XREFs of xxxCreateWindowStation @ 0x1C00B437C
 * Callers:
 *     NtUserCreateWindowStation @ 0x1C00B35A0 (NtUserCreateWindowStation.c)
 *     xxxConnectService @ 0x1C0134E7C (xxxConnectService.c)
 * Callees:
 *     zzzSetDesktop @ 0x1C000F360 (zzzSetDesktop.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00B3C64 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     xxxInitWindowStation @ 0x1C00B3FAC (xxxInitWindowStation.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C00B72EC (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0108D28 (xxxCleanupMotherDesktopWindow.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0198170 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
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
  void *v11; // r12
  void *v12; // r15
  int v13; // edi
  int *v14; // r13
  NTSTATUS v15; // eax
  unsigned int v16; // ebx
  NTSTATUS GlobalAtomTable; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTATUS ObjectSecurity; // esi
  __int64 v22; // rcx
  __int128 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rbx
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v31; // esi
  __int64 v32; // rdx
  PSECURITY_DESCRIPTOR v33; // r8
  ULONG v34; // esi
  ULONG v35; // edi
  __int64 v36; // rax
  __int64 v37; // rbx
  NTSTATUS inserted; // eax
  void *v39; // rcx
  _QWORD *i; // rcx
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 ThreadWin32Thread; // rax
  ULONG v45; // eax
  __int64 v46; // rdx
  ULONG v47; // eax
  __int64 v48; // rdx
  int v49; // edi
  __int64 v50; // rbx
  int v51; // edi
  NTSTATUS v52; // ecx
  ULONG v53; // eax
  __int64 v54; // rdx
  PSECURITY_DESCRIPTOR v55; // r8
  NTSTATUS v56; // ecx
  ULONG v57; // eax
  __int64 v58; // rdx
  int v59; // [rsp+98h] [rbp-80h]
  PVOID Object; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v61[8]; // [rsp+A8h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+B0h] [rbp-68h] BYREF
  int v63; // [rsp+B8h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-58h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+C8h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+D0h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-40h] BYREF
  __int128 v68; // [rsp+F8h] [rbp-20h]
  _QWORD v69[4]; // [rsp+108h] [rbp-10h] BYREF
  __int128 v70; // [rsp+128h] [rbp+10h] BYREF
  _QWORD v71[10]; // [rsp+138h] [rbp+20h] BYREF
  int MemoryAllocated; // [rsp+198h] [rbp+80h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+1A8h] [rbp+90h]
  __int64 v74; // [rsp+1B0h] [rbp+98h]

  v74 = a4;
  DesiredAccess = a3;
  ExplicitDescriptor = *(PSECURITY_DESCRIPTOR *)(a1 + 32);
  v10 = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v13 = 0;
  v59 = 0;
  if ( grpWinStaList )
  {
    gTermNOIO |= 2u;
    v14 = &gTermNOIO;
  }
  else
  {
    v14 = (int *)gTermIO;
  }
  LOBYTE(a4) = a2;
  v15 = ObCreateObject(0LL, ExWindowStationObjectType, a1, a4, 0LL, 184, 0, 0, &Object);
  v16 = v15;
  if ( v15 < 0 )
  {
    v45 = RtlNtStatusToDosError(v15);
    UserSetLastError(v45, v46);
    return v16;
  }
  if ( !ExAcquireRundownProtection(gWinstaRunRef) )
  {
    ObjectSecurity = -1073741790;
    goto LABEL_48;
  }
  memset(Object, 0, 0xB8uLL);
  *(_DWORD *)Object = gSessionId;
  *((_QWORD *)Object + 3) = v14;
  if ( (*v14 & 2) != 0 )
    *((_DWORD *)Object + 8) = 4;
  GlobalAtomTable = CreateGlobalAtomTable((char *)Object + 136);
  ObjectSecurity = GlobalAtomTable;
  if ( GlobalAtomTable < 0
    || (*v14 & 1) == 0
    && (GlobalAtomTable = xxxInitTerminal((struct tagTERMINAL *)v14),
        ObjectSecurity = GlobalAtomTable,
        GlobalAtomTable < 0) )
  {
    v52 = GlobalAtomTable;
LABEL_61:
    v53 = RtlNtStatusToDosError(v52);
    UserSetLastError(v53, v54);
    goto LABEL_48;
  }
  v22 = *((unsigned int *)Object + 8);
  if ( (v22 & 4) == 0 && !(unsigned int)xxxInitWindowStation(v22, v18, v19, v20) )
  {
    ObjectSecurity = -1073741801;
    v52 = -1073741801;
    goto LABEL_61;
  }
  *(_QWORD *)&v23 = v14 + 2;
  if ( *((_QWORD *)v14 + 1) )
    goto LABEL_23;
  v10 = gptiCurrent;
  v11 = *(void **)(gptiCurrent + 448LL);
  v24 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 416LL);
  v25 = *(_QWORD *)(gptiCurrent + 416LL);
  SecurityDescriptor = *(PSECURITY_DESCRIPTOR *)(gptiCurrent + 584LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v24;
  if ( v11 )
    ObfReferenceObject(v11);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v61);
  ObjectSecurity = zzzSetDesktop(gptiCurrent, 0LL, 0LL);
  if ( ObjectSecurity < 0 )
  {
    UserAtomicCheck::Detach((UserAtomicCheck *)v61);
    zzzEndDeferWinEventNotify();
    *(_QWORD *)(gptiCurrent + 416LL) = v25;
LABEL_64:
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v61);
    v13 = 0;
    goto LABEL_48;
  }
  v26 = *(_DWORD *)(gptiCurrent + 480LL);
  v27 = v26 | 0x10000000;
  v28 = v26 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 480LL) = v27;
  MemoryAllocated = v28;
  v31 = 0;
  if ( PsGetCurrentProcessWin32Process(v28) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v31 = 1;
  }
  SmartObjStackRefBase<tagMENU>::Init(v69, 0LL);
  v69[2] = 0LL;
  *((_QWORD *)&v23 + 1) = xxxCreateWindowEx(
                            0,
                            32769LL,
                            32769LL,
                            0LL,
                            0x82000000,
                            -32768,
                            -32768,
                            0xFFFF,
                            0xFFFF,
                            0LL,
                            (__int64)v69,
                            hModuleWin,
                            0LL,
                            1u,
                            0x30Au,
                            v31,
                            0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v69, v32);
  if ( !*((_QWORD *)&v23 + 1) )
  {
    ObjectSecurity = -1073741801;
    UserAtomicCheck::Detach((UserAtomicCheck *)v61);
    zzzEndDeferWinEventNotify();
    v55 = SecurityDescriptor;
    *(_QWORD *)(gptiCurrent + 416LL) = v25;
    zzzSetDesktop(gptiCurrent, (__int64)v11, v55);
    goto LABEL_64;
  }
  v68 = v23;
  v70 = v23;
  HMAssignmentLock(&v70);
  *(_DWORD *)(gptiCurrent + 480LL) = MemoryAllocated | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
  SetVisible(*(struct tagWND **)v23, 1u);
  HMChangeOwnerThread(*(_QWORD *)v23, *((_QWORD *)v14 + 2));
  v33 = SecurityDescriptor;
  v59 = 1;
  v13 = 1;
  *(_QWORD *)(gptiCurrent + 416LL) = v25;
  ObjectSecurity = zzzSetDesktop(gptiCurrent, (__int64)v11, v33);
  if ( ObjectSecurity < 0 )
  {
    UserAtomicCheck::Detach((UserAtomicCheck *)v61);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v61);
    goto LABEL_48;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v61);
  zzzEndDeferWinEventNotify();
  if ( v11 )
  {
    ObfDereferenceObject(v11);
    v11 = 0LL;
  }
LABEL_23:
  if ( (*((_DWORD *)Object + 8) & 4) != 0 )
  {
LABEL_28:
    inserted = ObInsertObject(Object, 0LL, DesiredAccess, 1u, &Object, &Handle);
    ObjectSecurity = inserted;
    if ( inserted < 0 )
    {
      Object = 0LL;
      goto LABEL_42;
    }
    if ( inserted == 0x40000000 )
    {
LABEL_43:
      ObfDereferenceObject(Object);
      *a10 = Handle;
      return 0LL;
    }
    SecurityDescriptor = 0LL;
    LOBYTE(MemoryAllocated) = 0;
    SeCaptureSubjectContext(&SubjectContext);
    SeLockSubjectContext(&SubjectContext);
    v39 = *(void **)ObQueryNameInfo(Object);
    if ( !v39
      || (ObjectSecurity = ObGetObjectSecurity(v39, &SecurityDescriptor, (PBOOLEAN)&MemoryAllocated), ObjectSecurity >= 0) )
    {
      ObjectSecurity = SeAssignSecurity(
                         SecurityDescriptor,
                         ExplicitDescriptor,
                         &NewDescriptor,
                         1u,
                         &SubjectContext,
                         WinStaMapping,
                         PagedPool);
      ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
      SeUnlockSubjectContext(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      if ( ObjectSecurity < 0 )
      {
        v56 = -1073741790;
        if ( ObjectSecurity != -1073741790 )
          v56 = ObjectSecurity;
        v57 = RtlNtStatusToDosError(v56);
        UserSetLastError(v57, v58);
      }
      else
      {
        v63 = 15;
        ObjectSecurity = ObSetSecurityDescriptorInfo(Object, &v63, NewDescriptor, (char *)Object - 8, 1, WinStaMapping);
        SeDeassignSecurity(&NewDescriptor);
        if ( ObjectSecurity >= 0 )
        {
          for ( i = (_QWORD *)grpWinStaList; *i; i = (_QWORD *)(*i + 8LL) )
            ;
          LockObjectAssignment(i, Object);
          if ( (*((_DWORD *)Object + 8) & 4) == 0 )
          {
            v41 = a8;
            if ( a8 )
            {
              PushW32ThreadLock((__int64)Object, v71, UserDereferenceObject);
              if ( !xxxSafeLoadKeyboardLayoutEx(Object, v74, 0LL, a5, a6, a7, v41, a9, -2147483647) )
                ObjectSecurity = -1073741823;
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42);
              *(_QWORD *)(ThreadWin32Thread + 16) = v71[0];
            }
          }
        }
      }
LABEL_42:
      v12 = 0LL;
      if ( ObjectSecurity >= 0 )
        goto LABEL_43;
      goto LABEL_45;
    }
    SeUnlockSubjectContext(&SubjectContext);
    SeReleaseSubjectContext(&SubjectContext);
    v12 = 0LL;
    goto LABEL_45;
  }
  v34 = RtlLengthSid(SeExports->SeWorldSid);
  v35 = v34 + 8;
  v36 = Win32AllocPoolWithQuota(v34 + 8, 1702064981LL);
  v37 = v36;
  if ( !v36
    || (*(_WORD *)v36 = 0,
        *(_WORD *)(v36 + 2) = v35,
        *(_DWORD *)(v36 + 4) = 0x100000,
        RtlCopySid(v34, (PSID)(v36 + 8), SeExports->SeWorldSid),
        v12 = (void *)CreateSecurityDescriptor(v37, v35, 0LL),
        Win32FreePool(v37),
        !v12) )
  {
    ObjectSecurity = -1073741801;
    goto LABEL_45;
  }
  ObjectSecurity = CreateDesktopNotificationEvent(v12);
  if ( ObjectSecurity >= 0 )
  {
    Win32FreePool(v12);
    goto LABEL_28;
  }
LABEL_45:
  v13 = v59;
LABEL_48:
  v47 = RtlNtStatusToDosError(ObjectSecurity);
  UserSetLastError(v47, v48);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v13 )
  {
    ++gdwDeferWinEvent;
    v49 = *(_DWORD *)(v10 + 480);
    v50 = *(_QWORD *)(v10 + 416);
    *(_DWORD *)(v10 + 480) = v49 | 0x10000000;
    *(_QWORD *)(v10 + 416) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 416LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v10);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&ExplicitDescriptor);
    xxxCleanupMotherDesktopWindow(v14);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&ExplicitDescriptor);
    v51 = (*(_DWORD *)(v10 + 480) ^ v49) & 0x10000000;
    *(_QWORD *)(v10 + 416) = v50;
    *(_DWORD *)(v10 + 480) ^= v51;
    zzzEndDeferWinEventNotify();
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v12 )
    Win32FreePool(v12);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)ObjectSecurity;
}
