/*
 * XREFs of NtUserSetBrokeredForeground @ 0x1C0009E90
 * Callers:
 *     <none>
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C0009DE0 (IsMessageOnlyWindow.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetBrokeredForeground(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
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
  v3 = ValidateHwnd(a1);
  v4 = (_QWORD *)v3;
  if ( !v3 )
    goto LABEL_17;
  if ( !(unsigned int)IsTopLevelWindow(v3) )
    goto LABEL_17;
  if ( v4[12] )
    goto LABEL_17;
  if ( (unsigned int)IsWindowBeingDestroyed(v4) )
    goto LABEL_17;
  if ( (*(_BYTE *)(v4[5] + 31LL) & 0x10) != 0 )
    goto LABEL_17;
  LOBYTE(v6) = IsMessageOnlyWindow(v5);
  if ( v6 || GetProp(v4, (unsigned __int16)gatomBrokeredForeground, 1LL) )
    goto LABEL_17;
  v7 = *(_DWORD *)(v4[5] + 236LL);
  if ( v7 != 14 && v7 != 4 )
  {
    UserSetLastError(5LL);
LABEL_17:
    v13 = 87LL;
    goto LABEL_18;
  }
  if ( !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 424LL)) || gptiCurrent != v4[2] )
  {
    v13 = 5LL;
LABEL_18:
    UserSetLastError(v13);
    goto LABEL_13;
  }
  v2 = InternalSetProp(v4, (unsigned __int16)gatomBrokeredForeground, gptiCurrent, 5LL);
LABEL_13:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v2;
}
