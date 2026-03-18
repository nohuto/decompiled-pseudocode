/*
 * XREFs of NtUserGetGestureConfig @ 0x1C0214770
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     GetGestureConfigSettings @ 0x1C01FC948 (GetGestureConfigSettings.c)
 */

__int64 __fastcall NtUserGetGestureConfig(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        volatile void *Address,
        int a6)
{
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  size_t v17; // r15
  __int64 v18; // rcx
  _DWORD *v19; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v27[12]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v28[32]; // [rsp+68h] [rbp-40h] BYREF
  _QWORD v29[3]; // [rsp+88h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v28);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v29[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v29;
    v29[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( a6 == 12 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        UserSetLastError(1004LL, v9, v11, v12);
        LODWORD(v10) = 0;
LABEL_19:
        ThreadUnlock1(v15, v14);
        goto LABEL_20;
      }
      v16 = *(_QWORD *)(v10 + 40);
      if ( *(char *)(v16 + 20) < 0 || *(char *)(v16 + 19) < 0 )
      {
        v13 = 1400LL;
        goto LABEL_18;
      }
      if ( Address )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (unsigned int *)MmUserProbeAddress;
        v27[0] = *a4;
        if ( v27[0] - 1 <= 0xFF )
        {
          v17 = 12 * v27[0];
          v19 = (_DWORD *)Win32AllocPoolWithQuota(v17, 1667724117LL);
          if ( v19 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v18);
            ProbeForWrite(Address, 12LL * v27[0], CurrentProcessWow64Process != 0 ? 1 : 4);
            memmove(v19, (const void *)Address, v17);
            LODWORD(v10) = GetGestureConfigSettings((struct tagWND *)v10, v21, a3, v27, v19);
            if ( (_DWORD)v10 )
              memmove((void *)Address, v19, v17);
            Win32FreePool(v19);
            goto LABEL_19;
          }
          v13 = 8LL;
          goto LABEL_18;
        }
      }
    }
    v13 = 87LL;
LABEL_18:
    LODWORD(v10) = 0;
    UserSetLastError(v13, v9, v11, v12);
    goto LABEL_19;
  }
LABEL_20:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v28);
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  return (int)v10;
}
