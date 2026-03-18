/*
 * XREFs of NtUserSetGestureConfig @ 0x1C0109540
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     SetGestureConfigSettings @ 0x1C0109818 (SetGestureConfigSettings.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall NtUserSetGestureConfig(__int64 a1, __int64 a2, unsigned int a3, volatile void *a4, int a5)
{
  __int64 v6; // r14
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rcx
  _BYTE v26[16]; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v27[3]; // [rsp+58h] [rbp-30h] BYREF

  v6 = a3;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    v10 = gptiCurrent;
    v27[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v27;
    v27[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    if ( a4 && a5 == 12 && (unsigned int)(v6 - 1) <= 0xFF )
    {
      v11 = *(_QWORD *)(v8 + 40);
      if ( *(char *)(v11 + 20) >= 0
        && *(char *)(v11 + 19) >= 0
        && *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) )
      {
        v13 = (void *)Win32AllocPoolWithQuota((unsigned int)(12 * v6), 1667724117LL);
        if ( v13 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12, v10, v14, v15);
          ProbeForRead(a4, 12 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
          memmove(v13, (const void *)a4, (unsigned int)(12 * v6));
          v9 = SetGestureConfigSettings((struct tagWND *)v8);
          Win32FreePool(v13);
LABEL_10:
          ThreadUnlock1(v18, v17, v19);
          goto LABEL_11;
        }
        v25 = 8LL;
      }
      else
      {
        v25 = 1400LL;
      }
    }
    else
    {
      v25 = 87LL;
    }
    UserSetLastError(v25, v10);
    goto LABEL_10;
  }
LABEL_11:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v26);
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v9;
}
