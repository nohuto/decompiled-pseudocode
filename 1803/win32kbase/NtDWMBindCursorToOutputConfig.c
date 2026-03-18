/*
 * XREFs of NtDWMBindCursorToOutputConfig @ 0x1C00B3090
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z @ 0x1C0131BB4 (-BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z.c)
 */

__int64 __fastcall NtDWMBindCursorToOutputConfig(struct _LUID *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  PVOID CurrentProcess; // rax
  int v6; // ebx
  BOOL v7; // edx
  ULONG v8; // ecx
  CInputConfig *v9; // rcx
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  char v13; // [rsp+68h] [rbp+10h] BYREF
  struct _LUID v14; // [rsp+70h] [rbp+18h] BYREF
  char v15; // [rsp+78h] [rbp+20h] BYREF

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v13, a2, a3);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v4);
  v6 = 0;
  v7 = 0;
  if ( CurrentProcess )
    v7 = CurrentProcess == g_pepDwm;
  if ( v7 )
  {
    v9 = (CInputConfig *)&a1[1];
    if ( &a1[1] < a1 || (unsigned __int64)v9 > MmUserProbeAddress )
      a1 = (struct _LUID *)MmUserProbeAddress;
    v14 = *a1;
    v10 = CInputConfig::BindMouse(v9, &v14);
    if ( v10 >= 0 )
    {
      v6 = 1;
      goto LABEL_12;
    }
    v8 = RtlNtStatusToDosError(v10);
  }
  else
  {
    v8 = 5;
  }
  UserSetLastError(v8);
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
  UserSessionSwitchLeaveCrit(v11);
  return v6;
}
