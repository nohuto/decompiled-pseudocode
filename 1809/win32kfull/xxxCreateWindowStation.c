/*
 * XREFs of xxxCreateWindowStation @ 0x1C00EC474
 * Callers:
 *     NtUserCreateWindowStation @ 0x1C00EBFE0 (NtUserCreateWindowStation.c)
 *     xxxConnectService @ 0x1C022BD68 (xxxConnectService.c)
 * Callees:
 *     xxxCleanupMotherDesktopWindow @ 0x1C0009158 (xxxCleanupMotherDesktopWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     zzzSetDesktop @ 0x1C00B11B0 (zzzSetDesktop.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C00CD26C (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00EB7E0 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     xxxInitWindowStation @ 0x1C00EBBA8 (xxxInitWindowStation.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C00EDC1C (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  struct tagWND **v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rbx
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v31; // esi
  _DWORD *Window; // rsi
  __int64 v33; // rdx
  PSECURITY_DESCRIPTOR v34; // r8
  ULONG v35; // esi
  ULONG v36; // edi
  __int64 v37; // rax
  __int64 v38; // rbx
  NTSTATUS inserted; // eax
  void *v40; // rcx
  _QWORD *i; // rcx
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 ThreadWin32Thread; // rax
  ULONG v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  ULONG v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // edi
  __int64 v55; // rbx
  int v56; // edi
  NTSTATUS v57; // ecx
  ULONG v58; // eax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  PSECURITY_DESCRIPTOR v62; // r8
  NTSTATUS v63; // ecx
  ULONG v64; // eax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // [rsp+98h] [rbp-80h]
  PVOID Object; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v70[8]; // [rsp+A8h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+B0h] [rbp-68h] BYREF
  int v72; // [rsp+B8h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-58h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor[2]; // [rsp+C8h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor[2]; // [rsp+D8h] [rbp-40h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v77[4]; // [rsp+108h] [rbp-10h] BYREF
  __int128 v78; // [rsp+128h] [rbp+10h] BYREF
  _QWORD v79[10]; // [rsp+138h] [rbp+20h] BYREF
  int MemoryAllocated; // [rsp+198h] [rbp+80h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+1A8h] [rbp+90h]
  __int64 v82; // [rsp+1B0h] [rbp+98h]

  v82 = a4;
  DesiredAccess = a3;
  ExplicitDescriptor[0] = *(PSECURITY_DESCRIPTOR *)(a1 + 32);
  v10 = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v13 = 0;
  v68 = 0;
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
    v46 = RtlNtStatusToDosError(v15);
    UserSetLastError(v46, v47, v48, v49);
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
    v57 = GlobalAtomTable;
LABEL_61:
    v58 = RtlNtStatusToDosError(v57);
    UserSetLastError(v58, v59, v60, v61);
    goto LABEL_48;
  }
  v22 = *((unsigned int *)Object + 8);
  if ( (v22 & 4) == 0 && !(unsigned int)xxxInitWindowStation(v22, v18, v19, v20) )
  {
    ObjectSecurity = -1073741801;
    v57 = -1073741801;
    goto LABEL_61;
  }
  v23 = (struct tagWND **)(v14 + 2);
  if ( *((_QWORD *)v14 + 1) )
    goto LABEL_23;
  v10 = gptiCurrent;
  v11 = *(void **)(gptiCurrent + 456LL);
  v24 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 424LL);
  v25 = *(_QWORD *)(gptiCurrent + 424LL);
  SecurityDescriptor = *(PSECURITY_DESCRIPTOR *)(gptiCurrent + 592LL);
  *(_QWORD *)(gptiCurrent + 424LL) = v24;
  if ( v11 )
    ObfReferenceObject(v11);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v70);
  ObjectSecurity = zzzSetDesktop(gptiCurrent, 0LL, 0LL);
  if ( ObjectSecurity < 0 )
  {
    UserAtomicCheck::Detach((UserAtomicCheck *)v70);
    zzzEndDeferWinEventNotify();
    *(_QWORD *)(gptiCurrent + 424LL) = v25;
LABEL_64:
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v70);
    v13 = 0;
    goto LABEL_48;
  }
  v26 = *(_DWORD *)(gptiCurrent + 488LL);
  v27 = v26 | 0x10000000;
  v28 = v26 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 488LL) = v27;
  MemoryAllocated = v28;
  v31 = 0;
  if ( PsGetCurrentProcessWin32Process(v28) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v31 = 1;
  }
  SmartObjStackRefBase<tagMENU>::Init(v77, 0LL);
  v77[2] = 0LL;
  Window = xxxCreateWindowEx(
             0,
             (wchar_t *)0x8001,
             32769LL,
             0LL,
             0x82000000,
             -32768,
             0xFFFF8000,
             0xFFFFu,
             0xFFFFu,
             0LL,
             (__int64)v77,
             hModuleWin,
             0LL,
             1u,
             0x30Au,
             v31,
             0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v77, v33);
  if ( !Window )
  {
    ObjectSecurity = -1073741801;
    UserAtomicCheck::Detach((UserAtomicCheck *)v70);
    zzzEndDeferWinEventNotify();
    v62 = SecurityDescriptor;
    *(_QWORD *)(gptiCurrent + 424LL) = v25;
    zzzSetDesktop(gptiCurrent, (__int64)v11, v62);
    goto LABEL_64;
  }
  NewDescriptor[0] = v14 + 2;
  NewDescriptor[1] = Window;
  v78 = *(_OWORD *)NewDescriptor;
  HMAssignmentLock(&v78);
  *(_DWORD *)(gptiCurrent + 488LL) = MemoryAllocated | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
  SetVisible(*v23, 1u);
  HMChangeOwnerThread(*v23, *((_QWORD *)v14 + 2));
  v34 = SecurityDescriptor;
  v68 = 1;
  v13 = 1;
  *(_QWORD *)(gptiCurrent + 424LL) = v25;
  ObjectSecurity = zzzSetDesktop(gptiCurrent, (__int64)v11, v34);
  if ( ObjectSecurity < 0 )
  {
    UserAtomicCheck::Detach((UserAtomicCheck *)v70);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v70);
    goto LABEL_48;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v70);
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
    v40 = *(void **)ObQueryNameInfo(Object);
    if ( !v40
      || (ObjectSecurity = ObGetObjectSecurity(v40, &SecurityDescriptor, (PBOOLEAN)&MemoryAllocated), ObjectSecurity >= 0) )
    {
      ObjectSecurity = SeAssignSecurity(
                         SecurityDescriptor,
                         ExplicitDescriptor[0],
                         NewDescriptor,
                         1u,
                         &SubjectContext,
                         WinStaMapping,
                         PagedPool);
      ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
      SeUnlockSubjectContext(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      if ( ObjectSecurity < 0 )
      {
        v63 = -1073741790;
        if ( ObjectSecurity != -1073741790 )
          v63 = ObjectSecurity;
        v64 = RtlNtStatusToDosError(v63);
        UserSetLastError(v64, v65, v66, v67);
      }
      else
      {
        v72 = 15;
        ObjectSecurity = ObSetSecurityDescriptorInfo(
                           Object,
                           &v72,
                           NewDescriptor[0],
                           (char *)Object - 8,
                           1,
                           WinStaMapping);
        SeDeassignSecurity(NewDescriptor);
        if ( ObjectSecurity >= 0 )
        {
          for ( i = (_QWORD *)grpWinStaList; *i; i = (_QWORD *)(*i + 8LL) )
            ;
          LockObjectAssignment(i, Object);
          if ( (*((_DWORD *)Object + 8) & 4) == 0 )
          {
            v42 = a8;
            if ( a8 )
            {
              PushW32ThreadLock((__int64)Object, v79, UserDereferenceObject);
              if ( !xxxSafeLoadKeyboardLayoutEx(Object, v82, 0LL, a5, a6, a7, v42, a9, -2147483647) )
                ObjectSecurity = -1073741823;
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43);
              *(_QWORD *)(ThreadWin32Thread + 16) = v79[0];
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
  v35 = RtlLengthSid(SeExports->SeWorldSid);
  v36 = v35 + 8;
  v37 = Win32AllocPoolWithQuota(v35 + 8, 1702064981LL);
  v38 = v37;
  if ( !v37
    || (*(_WORD *)v37 = 0,
        *(_WORD *)(v37 + 2) = v36,
        *(_DWORD *)(v37 + 4) = 0x100000,
        RtlCopySid(v35, (PSID)(v37 + 8), SeExports->SeWorldSid),
        v12 = (void *)CreateSecurityDescriptor(v38, v36, 0LL),
        Win32FreePool(v38),
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
  v13 = v68;
LABEL_48:
  v50 = RtlNtStatusToDosError(ObjectSecurity);
  UserSetLastError(v50, v51, v52, v53);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v13 )
  {
    ++gdwDeferWinEvent;
    v54 = *(_DWORD *)(v10 + 488);
    v55 = *(_QWORD *)(v10 + 424);
    *(_DWORD *)(v10 + 488) = v54 | 0x10000000;
    *(_QWORD *)(v10 + 424) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 424LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v10);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)ExplicitDescriptor);
    xxxCleanupMotherDesktopWindow((__int64)v14);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)ExplicitDescriptor);
    v56 = (*(_DWORD *)(v10 + 488) ^ v54) & 0x10000000;
    *(_QWORD *)(v10 + 424) = v55;
    *(_DWORD *)(v10 + 488) ^= v56;
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
