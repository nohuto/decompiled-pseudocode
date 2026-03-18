/*
 * XREFs of NtUserSetFallbackForeground @ 0x1C0234420
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     _SetFallbackForeground @ 0x1C01D6570 (_SetFallbackForeground.c)
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
  __int64 v10; // rcx
  char v12; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    if ( a1 )
    {
      v9 = ValidateHwnd(a1);
      v7 = v9;
      if ( !v9 )
        goto LABEL_8;
      v5 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFF;
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
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v10);
  return v4;
}
