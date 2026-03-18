/*
 * XREFs of NtUserSetBrokeredForeground @ 0x1C000B230
 * Callers:
 *     <none>
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C000B7B0 (IsMessageOnlyWindow.c)
 *     InternalSetProp @ 0x1C001AA48 (InternalSetProp.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetBrokeredForeground(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  _QWORD *v4; // rdi
  int v5; // ecx
  __int64 v7; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  if ( !a1 )
    goto LABEL_17;
  v3 = ValidateHwnd(a1);
  v4 = (_QWORD *)v3;
  if ( !v3
    || !(unsigned int)IsTopLevelWindow(v3)
    || v4[15]
    || (unsigned int)IsWindowBeingDestroyed(v4)
    || (*(_BYTE *)(v4[5] + 31LL) & 0x10) != 0
    || (unsigned int)IsMessageOnlyWindow()
    || GetProp(v4, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL) )
  {
    goto LABEL_17;
  }
  v5 = *(_DWORD *)(v4[5] + 236LL);
  if ( v5 != 14 && v5 != 4 )
  {
    UserSetLastError(5LL);
LABEL_17:
    v7 = 87LL;
    goto LABEL_18;
  }
  if ( !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 416LL)) || gptiCurrent != v4[2] )
  {
    v7 = 5LL;
LABEL_18:
    UserSetLastError(v7);
    goto LABEL_13;
  }
  v2 = InternalSetProp(v4, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), gptiCurrent, 5LL);
LABEL_13:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
  UserSessionSwitchLeaveCrit();
  return v2;
}
