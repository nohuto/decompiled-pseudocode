/*
 * XREFs of NtUserSetFallbackForeground @ 0x1C01F50E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 *     _SetFallbackForeground @ 0x1C01A1B28 (_SetFallbackForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetFallbackForeground(__int64 a1, int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v14; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    if ( a1 )
    {
      v7 = ValidateHwnd(a1);
      if ( !v7 )
        goto LABEL_8;
      v5 = *(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x3FFF;
      if ( (_DWORD)v5 == 669 || !(unsigned int)IsTopLevelWindow(v7) )
        goto LABEL_8;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      if ( !a2 )
      {
LABEL_8:
        v6 = 87LL;
        goto LABEL_3;
      }
    }
    else if ( a2 )
    {
      goto LABEL_8;
    }
    v4 = SetFallbackForeground(v8, a2);
    goto LABEL_15;
  }
  v6 = 5LL;
LABEL_3:
  UserSetLastError(v6, v5);
LABEL_15:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v4;
}
