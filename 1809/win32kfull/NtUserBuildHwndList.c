/*
 * XREFs of NtUserBuildHwndList @ 0x1C006FAB0
 * Callers:
 *     <none>
 * Callees:
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     CallerCanSeeImmersiveWindows @ 0x1C0071188 (CallerCanSeeImmersiveWindows.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     MapDesktop @ 0x1C00B24C0 (MapDesktop.c)
 *     GetThreadDesktopWindow @ 0x1C0109EB8 (GetThreadDesktopWindow.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserBuildHwndList(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        volatile void *Address,
        ULONG64 a8)
{
  __int64 v10; // r15
  ULONG64 v11; // rdx
  __int64 ThreadDesktopWindow; // rax
  char *v13; // rcx
  ULONG64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  PVOID v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // esi
  _DWORD *v20; // r12
  int v21; // edi
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // ecx
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  int v28; // [rsp+48h] [rbp-50h] BYREF
  __int64 CurrentProcess; // [rsp+50h] [rbp-48h]
  PVOID v30; // [rsp+58h] [rbp-40h]
  int v31; // [rsp+60h] [rbp-38h]
  int v32; // [rsp+64h] [rbp-34h]
  PVOID Object; // [rsp+A8h] [rbp+10h] BYREF
  int v35; // [rsp+B0h] [rbp+18h]
  int v36; // [rsp+B8h] [rbp+20h]

  v35 = a3;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( gpresUser )
  {
    if ( (unsigned int)((__int64 (*)(void))UserIsUserCritSecInExclusive)() )
    {
      ++gdwInAtomicOperation;
      v11 = gpAtomickCheckStacks;
      if ( gpAtomickCheckStacks )
      {
        v36 = ++gdwAtomicCheckSerial;
        v25 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)v25 << 6) + gpAtomickCheckStacks) )
          {
            if ( ++v25 >= gdwAtomicCheckLogSize )
              goto LABEL_4;
          }
          v26 = (unsigned __int64)v25 << 6;
          *(_DWORD *)(v26 + gpAtomickCheckStacks) = v36;
          *(_DWORD *)(gpAtomickCheckStacks + v26 + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(gpAtomickCheckStacks + v26 + 8) = (MEMORY[0xFFFFF78000000320]
                                                       * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v26 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
    }
  }
LABEL_4:
  if ( a4 )
    CallerCanSeeImmersiveWindows();
  if ( a2 )
  {
    ThreadDesktopWindow = ValidateHwnd(a2);
    if ( !ThreadDesktopWindow )
      goto LABEL_40;
  }
  else
  {
    ThreadDesktopWindow = 0LL;
  }
  if ( a5 )
  {
    v23 = PtiFromThreadId(a5);
    v16 = v23;
    if ( !v23 )
      goto LABEL_46;
    v24 = *(_QWORD *)(v23 + 456);
    if ( !v24 )
      goto LABEL_46;
    ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) + 24LL) + 88LL);
  }
  else
  {
    v16 = 0LL;
  }
  if ( !a1 )
  {
    v17 = 0LL;
    Object = 0LL;
    goto LABEL_12;
  }
  LOBYTE(v11) = 1;
  if ( (int)ValidateHdesk(a1, v11, 1LL, &Object) < 0 )
  {
LABEL_40:
    v21 = -1073741816;
    goto LABEL_26;
  }
  v31 = 0;
  v32 = 0;
  v30 = Object;
  v28 = 1;
  CurrentProcess = PsGetCurrentProcess(v13, v11, v14, v15);
  v21 = MapDesktop(&v28);
  if ( v21 < 0 )
  {
    v27 = 6LL;
    goto LABEL_49;
  }
  v17 = Object;
  ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 88LL);
LABEL_12:
  if ( !ThreadDesktopWindow )
  {
    if ( v17 )
      goto LABEL_15;
    ThreadDesktopWindow = GetThreadDesktopWindow(v16);
    if ( ThreadDesktopWindow )
      goto LABEL_14;
LABEL_46:
    v21 = -1073741816;
    UserSetLastError(87LL);
    goto LABEL_26;
  }
  if ( v35 )
LABEL_14:
    ThreadDesktopWindow = *(_QWORD *)(ThreadDesktopWindow + 88);
LABEL_15:
  v18 = BuildHwndList((struct tagWND *)ThreadDesktopWindow);
  v10 = v18;
  if ( v18 )
  {
    v19 = ((*(_QWORD *)(v18 + 8) - v18 - 32) >> 3) + 1;
    ProbeForWrite(Address, 8LL * a6, 4u);
    v20 = (_DWORD *)a8;
    v11 = MmUserProbeAddress;
    v14 = a8;
    if ( a8 >= MmUserProbeAddress )
      v14 = MmUserProbeAddress;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    if ( v19 > a6 )
    {
      v21 = -1073741789;
    }
    else
    {
      memmove((void *)Address, (const void *)(v10 + 32), 8LL * v19);
      v21 = 0;
    }
    *v20 = v19;
    goto LABEL_22;
  }
  v21 = -1073741816;
  v27 = 8LL;
LABEL_49:
  UserSetLastError(v27);
LABEL_22:
  if ( v10 )
    FreeHwndList(v10);
  v13 = (char *)Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_26:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v13) )
    {
      --gdwInAtomicOperation;
      v15 = gpAtomickCheckStacks;
      if ( gpAtomickCheckStacks )
      {
        v14 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v11 = (unsigned int)v14;
            v13 = (char *)((unsigned __int64)(unsigned int)v14 << 6);
            if ( *(_DWORD *)&v13[gpAtomickCheckStacks] == v36 )
              break;
            v14 = (unsigned int)(v14 + 1);
            if ( (unsigned int)v14 >= gdwAtomicCheckLogSize )
              goto LABEL_29;
          }
          v11 = (unsigned __int64)(unsigned int)v14 << 6;
          *(_DWORD *)(v11 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_29:
  UserSessionSwitchLeaveCrit(v13, v11, v14, v15);
  return (unsigned int)v21;
}
