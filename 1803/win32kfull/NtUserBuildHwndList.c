/*
 * XREFs of NtUserBuildHwndList @ 0x1C0029040
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C0011B90 (MapDesktop.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     CallerCanSeeImmersiveWindows @ 0x1C002A544 (CallerCanSeeImmersiveWindows.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     GetThreadDesktopWindow @ 0x1C00F06E0 (GetThreadDesktopWindow.c)
 *     memmove @ 0x1C013D380 (memmove.c)
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
  unsigned int v12; // esi
  __int64 ThreadDesktopWindow; // rax
  char *v14; // rcx
  ULONG64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  PVOID v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // esi
  _DWORD *v21; // r12
  int v22; // edi
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned __int64 v27; // rdi
  __int64 v28; // rcx
  int v29; // [rsp+48h] [rbp-50h] BYREF
  __int64 CurrentProcess; // [rsp+50h] [rbp-48h]
  PVOID v31; // [rsp+58h] [rbp-40h]
  int v32; // [rsp+60h] [rbp-38h]
  int v33; // [rsp+64h] [rbp-34h]
  PVOID Object; // [rsp+A8h] [rbp+10h] BYREF
  int v36; // [rsp+B0h] [rbp+18h]
  int v37; // [rsp+B8h] [rbp+20h]

  v36 = a3;
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
        v37 = ++gdwAtomicCheckSerial;
        v26 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)v26 << 6) + gpAtomickCheckStacks) )
          {
            if ( ++v26 >= gdwAtomicCheckLogSize )
              goto LABEL_4;
          }
          v27 = (unsigned __int64)v26 << 6;
          *(_DWORD *)(v27 + gpAtomickCheckStacks) = v37;
          *(_DWORD *)(gpAtomickCheckStacks + v27 + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(gpAtomickCheckStacks + v27 + 8) = (MEMORY[0xFFFFF78000000320]
                                                       * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v27 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
    }
  }
LABEL_4:
  v12 = 2 * (*gpsi & 4 | 1);
  if ( a4 && !(unsigned int)CallerCanSeeImmersiveWindows() )
    v12 |= 0x20u;
  if ( a2 )
  {
    ThreadDesktopWindow = ValidateHwnd(a2);
    if ( !ThreadDesktopWindow )
      goto LABEL_47;
  }
  else
  {
    ThreadDesktopWindow = 0LL;
  }
  if ( a5 )
  {
    v24 = PtiFromThreadId(a5);
    v17 = v24;
    if ( !v24 )
      goto LABEL_48;
    v25 = *(_QWORD *)(v24 + 448);
    if ( !v25 )
      goto LABEL_48;
    ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) + 24LL) + 88LL);
  }
  else
  {
    v17 = 0LL;
  }
  if ( !a1 )
  {
    v18 = 0LL;
    Object = 0LL;
    goto LABEL_13;
  }
  LOBYTE(v11) = 1;
  if ( (int)ValidateHdesk(a1, v11, 1LL, &Object) < 0 )
  {
LABEL_47:
    v22 = -1073741816;
    goto LABEL_28;
  }
  v32 = 0;
  v33 = 0;
  v31 = Object;
  v29 = 1;
  CurrentProcess = PsGetCurrentProcess(v14, v11);
  v22 = MapDesktop((__int64)&v29);
  if ( v22 < 0 )
  {
    v28 = 6LL;
    goto LABEL_51;
  }
  v18 = Object;
  ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 88LL);
LABEL_13:
  if ( !ThreadDesktopWindow )
  {
    if ( v18 )
      goto LABEL_17;
    ThreadDesktopWindow = GetThreadDesktopWindow(v17);
    if ( ThreadDesktopWindow )
      goto LABEL_16;
LABEL_48:
    v22 = -1073741816;
    UserSetLastError(87LL);
    goto LABEL_28;
  }
  if ( v36 )
  {
    v12 |= 1u;
LABEL_16:
    ThreadDesktopWindow = *(_QWORD *)(ThreadDesktopWindow + 88);
  }
LABEL_17:
  v19 = BuildHwndList(ThreadDesktopWindow, v12, v17);
  v10 = v19;
  if ( v19 )
  {
    v20 = ((*(_QWORD *)(v19 + 8) - v19 - 32) >> 3) + 1;
    ProbeForWrite(Address, 8LL * a6, 4u);
    v21 = (_DWORD *)a8;
    v11 = MmUserProbeAddress;
    v15 = a8;
    if ( a8 >= MmUserProbeAddress )
      v15 = MmUserProbeAddress;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    if ( v20 > a6 )
    {
      v22 = -1073741789;
    }
    else
    {
      memmove((void *)Address, (const void *)(v10 + 32), 8LL * v20);
      v22 = 0;
    }
    *v21 = v20;
    goto LABEL_24;
  }
  v22 = -1073741816;
  v28 = 8LL;
LABEL_51:
  UserSetLastError(v28);
LABEL_24:
  if ( v10 )
    FreeHwndList(v10);
  v14 = (char *)Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_28:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v14) )
    {
      --gdwInAtomicOperation;
      v16 = gpAtomickCheckStacks;
      if ( gpAtomickCheckStacks )
      {
        v15 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v11 = (unsigned int)v15;
            v14 = (char *)((unsigned __int64)(unsigned int)v15 << 6);
            if ( *(_DWORD *)&v14[gpAtomickCheckStacks] == v37 )
              break;
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= gdwAtomicCheckLogSize )
              goto LABEL_31;
          }
          v11 = (unsigned __int64)(unsigned int)v15 << 6;
          *(_DWORD *)(v11 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_31:
  UserSessionSwitchLeaveCrit(v14, v11, v15, v16);
  return (unsigned int)v22;
}
