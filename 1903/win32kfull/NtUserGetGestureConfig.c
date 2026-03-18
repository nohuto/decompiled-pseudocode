/*
 * XREFs of NtUserGetGestureConfig @ 0x1C022C530
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     GetGestureConfigSettings @ 0x1C0213E90 (GetGestureConfigSettings.c)
 */

__int64 __fastcall NtUserGetGestureConfig(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        volatile void *Address,
        int a6)
{
  __int64 v9; // rsi
  int GestureConfigSettings; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  size_t v19; // r15
  __int64 v20; // rcx
  _DWORD *v21; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v26[12]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v27[8]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v28; // [rsp+70h] [rbp-38h] BYREF
  __int64 v29; // [rsp+78h] [rbp-30h]
  __int64 v30; // [rsp+80h] [rbp-28h]

  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v27);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    v28 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v28;
    v29 = v9;
    HMLockObject(v9);
    if ( a6 == 12 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        UserSetLastError(1004LL, v11, v12, v13);
        GestureConfigSettings = 0;
LABEL_20:
        ThreadUnlock1(v16, v15, v17);
        goto LABEL_21;
      }
      v18 = *(_QWORD *)(v9 + 40);
      if ( *(char *)(v18 + 20) < 0 || *(char *)(v18 + 19) < 0 )
      {
        v14 = 1400LL;
        goto LABEL_19;
      }
      if ( Address )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (unsigned int *)MmUserProbeAddress;
        v26[0] = *a4;
        if ( v26[0] - 1 <= 0xFF )
        {
          v19 = 12 * v26[0];
          v21 = (_DWORD *)Win32AllocPoolWithQuota(v19, 1667724117LL);
          if ( v21 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v20);
            ProbeForWrite(Address, 12LL * v26[0], CurrentProcessWow64Process != 0 ? 1 : 4);
            memmove(v21, (const void *)Address, v19);
            GestureConfigSettings = GetGestureConfigSettings((struct tagWND *)v9, v23, a3, v26, v21);
            if ( GestureConfigSettings )
              memmove((void *)Address, v21, v19);
            Win32FreePool(v21);
            goto LABEL_20;
          }
          v14 = 8LL;
          goto LABEL_19;
        }
      }
    }
    v14 = 87LL;
LABEL_19:
    GestureConfigSettings = 0;
    UserSetLastError(v14, v11, v12, v13);
    goto LABEL_20;
  }
  GestureConfigSettings = 0;
LABEL_21:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v27);
  UserSessionSwitchLeaveCrit(v24);
  return GestureConfigSettings;
}
