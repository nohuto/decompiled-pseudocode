/*
 * XREFs of NtUserSetTimer @ 0x1C004C2C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C004C470 (InternalSetTimer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetTimer(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r15d
  __int64 v14; // rsi
  unsigned int v15; // ebx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int64 v23; // rsi
  unsigned int v24; // r8d
  int v25; // [rsp+50h] [rbp+8h]

  EnterCrit(0LL, 1LL);
  if ( gpresUser
    && (unsigned int)UserIsUserCritSecInExclusive()
    && (v10 = gpAtomickCheckStacks, ++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v9 = 0LL;
    v13 = ++gdwAtomicCheckSerial;
    v11 = gdwAtomicCheckLogSize;
    if ( gdwAtomicCheckLogSize )
    {
      v12 = gpAtomickCheckStacks;
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v9 << 6) + gpAtomickCheckStacks) )
      {
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v23 = (unsigned __int64)(unsigned int)v9 << 6;
      *(_DWORD *)(v23 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v23 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v23 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v23 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v13 = v25;
  }
LABEL_5:
  if ( a1 )
  {
    v14 = ValidateHwnd(a1);
    if ( !v14 )
    {
      v20 = 0LL;
      goto LABEL_18;
    }
  }
  else
  {
    v14 = 0LL;
  }
  v15 = 10;
  if ( a3 >= 0xA )
    v15 = a3;
  if ( v15 > 0x7FFFFFFF )
    v15 = 0x7FFFFFFF;
  v16 = a5;
  if ( a5 == 2147483637 )
  {
    v16 = 0x7FFFFFFF - v15;
  }
  else if ( a5 != -1 && (v15 + a5 < v15 || v15 + a5 > 0x7FFFFFFF) )
  {
    v20 = 0LL;
    UserSetLastError(87LL, v9, v11, v12);
    goto LABEL_18;
  }
  if ( v14 && PsGetCurrentProcessWin32Process(v10, v9) != *(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL) )
  {
    UserSetLastError(5LL, v17, v18, v19);
    v20 = 0LL;
  }
  else
  {
    v20 = InternalSetTimer(v14, a2, v15, a4, v16, 0);
  }
LABEL_18:
  v21 = gpresUser;
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      --gdwInAtomicOperation;
      v21 = gpAtomickCheckStacks;
      if ( gpAtomickCheckStacks )
      {
        v24 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v21 = v24;
            if ( *(_DWORD *)(((unsigned __int64)v24 << 6) + gpAtomickCheckStacks) == v13 )
              break;
            if ( ++v24 >= gdwAtomicCheckLogSize )
              goto LABEL_21;
          }
          v21 = (unsigned __int64)v24 << 6;
          *(_DWORD *)(v21 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v21);
  return v20;
}
