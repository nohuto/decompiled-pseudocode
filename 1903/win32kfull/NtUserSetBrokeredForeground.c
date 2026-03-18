/*
 * XREFs of NtUserSetBrokeredForeground @ 0x1C00106A0
 * Callers:
 *     <none>
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C0010C20 (IsMessageOnlyWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     InternalSetProp @ 0x1C008C438 (InternalSetProp.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetBrokeredForeground(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v9; // rcx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  if ( !a1 )
    goto LABEL_17;
  v3 = ValidateHwnd(a1);
  v4 = (_QWORD *)v3;
  if ( !v3
    || !(unsigned int)IsTopLevelWindow(v3)
    || v4[15]
    || (unsigned int)IsWindowBeingDestroyed(v4)
    || (*(_BYTE *)(v4[5] + 31LL) & 0x10) != 0
    || (unsigned int)IsMessageOnlyWindow(v5)
    || GetProp(v4, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL) )
  {
    goto LABEL_17;
  }
  v6 = *(_DWORD *)(v4[5] + 236LL);
  if ( v6 != 14 && v6 != 4 )
  {
    UserSetLastError(5LL);
LABEL_17:
    v9 = 87LL;
    goto LABEL_18;
  }
  if ( !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 416LL)) || gptiCurrent != v4[2] )
  {
    v9 = 5LL;
LABEL_18:
    UserSetLastError(v9);
    goto LABEL_13;
  }
  v2 = InternalSetProp(v4, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), gptiCurrent, 5LL);
LABEL_13:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  UserSessionSwitchLeaveCrit(v7);
  return v2;
}
