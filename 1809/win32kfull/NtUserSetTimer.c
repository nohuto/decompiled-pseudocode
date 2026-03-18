/*
 * XREFs of NtUserSetTimer @ 0x1C00175B0
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetTimer @ 0x1C0017750 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetTimer(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  unsigned int v16; // edi
  bool v17; // cc
  __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  unsigned int v21; // edx
  unsigned __int64 v22; // rsi
  int v23; // [rsp+50h] [rbp+8h]

  EnterCrit(0LL, 1LL);
  if ( gpresUser
    && (unsigned int)UserIsUserCritSecInExclusive()
    && (v9 = gpAtomickCheckStacks, ++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v21 = 0;
    v10 = ++gdwAtomicCheckSerial;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v21 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v21 >= gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v22 = (unsigned __int64)v21 << 6;
      *(_DWORD *)(v22 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v22 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v22 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v22 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v10 = v23;
  }
LABEL_5:
  if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
    {
      v18 = 0LL;
      goto LABEL_19;
    }
  }
  else
  {
    v12 = 0LL;
  }
  v15 = 10;
  if ( a3 >= 0xA )
    v15 = a3;
  if ( v15 > 0x7FFFFFFF )
    v15 = 0x7FFFFFFF;
  v16 = a5;
  if ( a5 == 2147483637 )
  {
    v17 = v15 <= 0x7FFFFFFF;
    v16 = 0x7FFFFFFF - v15;
    goto LABEL_15;
  }
  if ( a5 != -1 )
  {
    if ( v15 + a5 < v15 )
      goto LABEL_31;
    v17 = v15 + a5 <= 0x7FFFFFFF;
LABEL_15:
    if ( v17 )
      goto LABEL_16;
LABEL_31:
    v18 = 0LL;
    UserSetLastError(87LL);
    goto LABEL_19;
  }
LABEL_16:
  if ( v12 && PsGetCurrentProcessWin32Process(v9) != *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL) )
  {
    UserSetLastError(5LL);
    v18 = 0LL;
  }
  else
  {
    v18 = InternalSetTimer(v12, a2, v15, a4, v16, 0);
  }
LABEL_19:
  v19 = gpresUser;
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      --gdwInAtomicOperation;
      v19 = gpAtomickCheckStacks;
      v11 = gpAtomickCheckStacks;
      if ( gpAtomickCheckStacks )
      {
        v13 = 0LL;
        v14 = gdwAtomicCheckLogSize;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v19 = (unsigned int)v13;
            if ( *(_DWORD *)(((unsigned __int64)(unsigned int)v13 << 6) + gpAtomickCheckStacks) == v10 )
              break;
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 >= gdwAtomicCheckLogSize )
              goto LABEL_22;
          }
          v19 = (unsigned __int64)(unsigned int)v13 << 6;
          *(_DWORD *)(v19 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_22:
  UserSessionSwitchLeaveCrit(v19, v11, v13, v14);
  return v18;
}
