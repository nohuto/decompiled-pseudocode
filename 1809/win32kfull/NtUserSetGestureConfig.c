/*
 * XREFs of NtUserSetGestureConfig @ 0x1C012A940
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     SetGestureConfigSettings @ 0x1C012AC54 (SetGestureConfigSettings.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall NtUserSetGestureConfig(__int64 a1, __int64 a2, unsigned int a3, volatile void *a4, int a5)
{
  __int64 v6; // r14
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rcx
  _BYTE v25[16]; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v26[3]; // [rsp+58h] [rbp-30h] BYREF

  v6 = a3;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v25);
  v8 = ValidateHwnd(a1);
  v11 = 0;
  if ( v8 )
  {
    v12 = gptiCurrent;
    v26[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v26;
    v26[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    if ( a4 && a5 == 12 && (unsigned int)(v6 - 1) <= 0xFF )
    {
      v13 = *(_QWORD *)(v8 + 40);
      if ( *(char *)(v13 + 20) >= 0
        && *(char *)(v13 + 19) >= 0
        && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) )
      {
        v15 = (void *)Win32AllocPoolWithQuota((unsigned int)(12 * v6), 1667724117LL);
        if ( v15 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v14);
          ProbeForRead(a4, 12 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
          memmove(v15, (const void *)a4, (unsigned int)(12 * v6));
          v11 = SetGestureConfigSettings((struct tagWND *)v8);
          Win32FreePool(v15);
LABEL_10:
          ThreadUnlock1(v18, v17);
          goto LABEL_11;
        }
        v24 = 8LL;
      }
      else
      {
        v24 = 1400LL;
      }
    }
    else
    {
      v24 = 87LL;
    }
    UserSetLastError(v24, v12, v9, v10);
    goto LABEL_10;
  }
LABEL_11:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v25);
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return v11;
}
