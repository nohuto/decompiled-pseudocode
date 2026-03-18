/*
 * XREFs of NtUserSetGestureConfig @ 0x1C000F580
 * Callers:
 *     <none>
 * Callees:
 *     SetGestureConfigSettings @ 0x1C0010EFC (SetGestureConfigSettings.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall NtUserSetGestureConfig(__int64 a1, __int64 a2, unsigned int a3, volatile void *a4, int a5)
{
  __int64 v6; // r14
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  void *v12; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rcx
  __int64 v16; // rcx
  _BYTE v17[16]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v18; // [rsp+58h] [rbp-30h] BYREF
  __int64 v19; // [rsp+60h] [rbp-28h]
  __int64 v20; // [rsp+68h] [rbp-20h]

  v6 = a3;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v17);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    v18 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v18;
    v19 = v8;
    HMLockObject(v8);
    if ( a4 && a5 == 12 && (unsigned int)(v6 - 1) <= 0xFF )
    {
      v10 = *(_QWORD *)(v8 + 40);
      if ( *(char *)(v10 + 20) >= 0
        && *(char *)(v10 + 19) >= 0
        && *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) )
      {
        v12 = (void *)Win32AllocPoolWithQuota((unsigned int)(12 * v6), 1667724117LL);
        if ( v12 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
          ProbeForRead(a4, 12 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
          memmove(v12, (const void *)a4, (unsigned int)(12 * v6));
          v9 = SetGestureConfigSettings((struct tagWND *)v8);
          Win32FreePool(v12);
LABEL_10:
          ThreadUnlock1();
          goto LABEL_11;
        }
        v16 = 8LL;
      }
      else
      {
        v16 = 1400LL;
      }
    }
    else
    {
      v16 = 87LL;
    }
    UserSetLastError(v16);
    goto LABEL_10;
  }
LABEL_11:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v17);
  UserSessionSwitchLeaveCrit(v14);
  return v9;
}
