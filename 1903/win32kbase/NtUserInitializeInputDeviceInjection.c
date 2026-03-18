/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1C0119720
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     HMValidateSharedHandle @ 0x1C003D614 (HMValidateSharedHandle.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C01487F4 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C014C8F4 (RIMIDE_InitializeDeviceInjection.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        unsigned __int16 a1,
        unsigned __int16 a2,
        char *a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // r14
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rbx
  ULONG64 v16; // rcx
  _QWORD *v17; // rdx
  int v18; // ebx
  void *v19; // rax
  __int64 v21; // [rsp+58h] [rbp-40h]
  __int64 v22; // [rsp+60h] [rbp-38h] BYREF

  v7 = a4;
  EnterCrit(0, 1);
  v10 = 0LL;
  v11 = 0LL;
  v22 = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v14 = 5LL;
LABEL_24:
    v18 = 0;
    UserSetLastError(v14, v12);
    goto LABEL_25;
  }
  v15 = 32 * v7;
  if ( (unsigned __int64)(32 * v7) > 0xFFFFFFFF || !(_DWORD)v7 || (unsigned int)(a6 - 1) > 2 )
  {
    v14 = 87LL;
    goto LABEL_24;
  }
  v16 = a5;
  if ( !a5 || (v11 = HMValidateSharedHandle(a5, v12, v13)) != 0 )
  {
    if ( v15 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v16) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v15] > MmUserProbeAddress || &a3[v15] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v19 = (void *)Win32AllocPoolWithQuota((unsigned int)v15, 0x74697355u);
    v10 = (__int64)v19;
    v21 = (__int64)v19;
    if ( !v19 )
      ExRaiseStatus(-1073741801);
    memmove(v19, a3, 32 * v7);
    v18 = RIMIDE_InitializeDeviceInjection(a1, a2, v10, (unsigned int)v7, v11, a6, &v22);
    if ( v18 )
    {
      v16 = MmUserProbeAddress;
      v17 = a7;
      if ( (unsigned __int64)a7 >= MmUserProbeAddress )
        v17 = (_QWORD *)MmUserProbeAddress;
      *v17 = *v17;
      *a7 = v22;
      v10 = v21;
    }
  }
  else
  {
    v18 = 0;
  }
  if ( v10 )
    Win32FreePool(v10);
LABEL_25:
  UserSessionSwitchLeaveCrit(v16, (__int64)v17);
  return v18;
}
