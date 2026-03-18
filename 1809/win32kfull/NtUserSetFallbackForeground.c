/*
 * XREFs of NtUserSetFallbackForeground @ 0x1C021C920
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _SetFallbackForeground @ 0x1C01C33A0 (_SetFallbackForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetFallbackForeground(__int64 a1, int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v15; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    if ( a1 )
    {
      v9 = ValidateHwnd(a1);
      v7 = v9;
      if ( !v9 )
        goto LABEL_8;
      v5 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF;
      if ( (_DWORD)v5 == 669 || !(unsigned int)IsTopLevelWindow(v9) )
        goto LABEL_8;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      if ( !a2 )
      {
LABEL_8:
        v8 = 87LL;
        goto LABEL_3;
      }
    }
    else if ( a2 )
    {
      goto LABEL_8;
    }
    v4 = SetFallbackForeground(v7, a2);
    goto LABEL_15;
  }
  v8 = 5LL;
LABEL_3:
  UserSetLastError(v8, v5, v6, v7);
LABEL_15:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v4;
}
