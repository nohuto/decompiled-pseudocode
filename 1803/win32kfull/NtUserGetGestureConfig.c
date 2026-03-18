/*
 * XREFs of NtUserGetGestureConfig @ 0x1C01EE260
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     GetGestureConfigSettings @ 0x1C01D7B44 (GetGestureConfigSettings.c)
 */

__int64 __fastcall NtUserGetGestureConfig(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        volatile void *Address,
        int a6)
{
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  size_t v16; // r15
  __int64 v17; // rcx
  _DWORD *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 CurrentProcessWow64Process; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v28[12]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v29[32]; // [rsp+68h] [rbp-40h] BYREF
  _QWORD v30[3]; // [rsp+88h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v29);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v30[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v30;
    v30[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( a6 == 12 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        UserSetLastError(1004LL, v9);
        LODWORD(v10) = 0;
LABEL_19:
        ThreadUnlock1(v13, v12, v14);
        goto LABEL_20;
      }
      v15 = *(_QWORD *)(v10 + 40);
      if ( *(char *)(v15 + 20) < 0 || *(char *)(v15 + 19) < 0 )
      {
        v11 = 1400LL;
        goto LABEL_18;
      }
      if ( Address )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (unsigned int *)MmUserProbeAddress;
        v28[0] = *a4;
        if ( v28[0] - 1 <= 0xFF )
        {
          v16 = 12 * v28[0];
          v18 = (_DWORD *)Win32AllocPoolWithQuota(v16, 1667724117LL);
          if ( v18 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v9, v19, v20);
            ProbeForWrite(Address, 12LL * v28[0], CurrentProcessWow64Process != 0 ? 1 : 4);
            memmove(v18, (const void *)Address, v16);
            LODWORD(v10) = GetGestureConfigSettings((struct tagWND *)v10, v22, a3, v28, v18);
            if ( (_DWORD)v10 )
              memmove((void *)Address, v18, v16);
            Win32FreePool(v18);
            goto LABEL_19;
          }
          v11 = 8LL;
          goto LABEL_18;
        }
      }
    }
    v11 = 87LL;
LABEL_18:
    LODWORD(v10) = 0;
    UserSetLastError(v11, v9);
    goto LABEL_19;
  }
LABEL_20:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v29);
  UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
  return (int)v10;
}
