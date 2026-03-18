/*
 * XREFs of NtUserSetBrokeredForeground @ 0x1C00F1DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsWindowBeingDestroyed @ 0x1C00C476C (IsWindowBeingDestroyed.c)
 *     IsMessageOnlyWindow @ 0x1C00F1F50 (IsMessageOnlyWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetBrokeredForeground(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rcx
  char v14; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( !a1 )
    goto LABEL_17;
  v4 = ValidateHwnd(a1);
  v5 = (_QWORD *)v4;
  if ( !v4
    || !(unsigned int)IsTopLevelWindow(v4)
    || v5[12]
    || (unsigned int)IsWindowBeingDestroyed((__int64)v5)
    || (*(_BYTE *)(v5[5] + 31LL) & 0x10) != 0
    || (unsigned int)IsMessageOnlyWindow(v6)
    || RealGetProp(v5[15], (unsigned __int16)gatomBrokeredForeground, 1LL) )
  {
    goto LABEL_17;
  }
  v7 = *(_DWORD *)(v5[5] + 236LL);
  if ( v7 != 14 && v7 != 4 )
  {
    UserSetLastError(5LL, v3);
LABEL_17:
    v13 = 87LL;
    goto LABEL_18;
  }
  if ( !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 416LL)) || gptiCurrent != v5[2] )
  {
    v13 = 5LL;
LABEL_18:
    UserSetLastError(v13, v3);
    goto LABEL_13;
  }
  v2 = RealInternalSetProp(v5 + 15, (unsigned __int16)gatomBrokeredForeground, gptiCurrent, 5LL);
LABEL_13:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v2;
}
