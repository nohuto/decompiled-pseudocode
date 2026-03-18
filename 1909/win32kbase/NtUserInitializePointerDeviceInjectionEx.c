/*
 * XREFs of NtUserInitializePointerDeviceInjectionEx @ 0x1C0117010
 * Callers:
 *     NtUserInitializePointerDeviceInjection @ 0x1C0116FE0 (NtUserInitializePointerDeviceInjection.c)
 * Callees:
 *     EnterCrit @ 0x1C0026390 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     HMValidateSharedHandle @ 0x1C004FDE4 (HMValidateSharedHandle.c)
 *     NtUserRemoveInjectionDevice @ 0x1C01190C0 (NtUserRemoveInjectionDevice.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0146184 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C014A3CC (RIMIDE_InitializePointerDeviceInjection.c)
 */

__int64 __fastcall NtUserInitializePointerDeviceInjectionEx(
        int a1,
        int a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        _QWORD *a6)
{
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  ULONG64 v15; // rdx
  _QWORD *v16; // rcx
  int v17; // ebx
  __int64 v19; // [rsp+50h] [rbp-18h] BYREF

  EnterCrit(0, 1);
  v10 = 0;
  v19 = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v13 = 5LL;
LABEL_18:
    v17 = 0;
    UserSetLastError(v13, v11);
    goto LABEL_19;
  }
  if ( a1 == 3 )
  {
    if ( a2 != 1 )
      goto LABEL_17;
  }
  else if ( a1 != 2 || (unsigned int)(a2 - 1) > 0xFF )
  {
    goto LABEL_17;
  }
  if ( (unsigned int)(a4 - 1) > 2 )
  {
LABEL_17:
    v13 = 87LL;
    goto LABEL_18;
  }
  if ( !a3 || (v14 = HMValidateSharedHandle(a3, v11, v12), v10 = v14, v14) )
  {
    v17 = RIMIDE_InitializePointerDeviceInjection(a1, a2, v10, a4, 0, a5, (__int64)&v19);
    if ( v17 )
    {
      v15 = MmUserProbeAddress;
      v16 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v16 = (_QWORD *)MmUserProbeAddress;
      *v16 = *v16;
      *a6 = v19;
    }
  }
  else
  {
    v17 = 0;
  }
LABEL_19:
  UserSessionSwitchLeaveCrit((__int64)v16, v15);
  return v17;
}
