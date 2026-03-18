/*
 * XREFs of NtUserInteractiveControlQueryUsage @ 0x1C01F1980
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C020C2EC (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 */

__int64 __fastcall NtUserInteractiveControlQueryUsage(
        unsigned int a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        int *a5)
{
  int v9; // esi
  _DWORD *v10; // rdx
  InteractiveControlManager *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17[12]; // [rsp+40h] [rbp-48h] BYREF

  v9 = 1;
  EnterSharedCrit(0LL, 1LL);
  v10 = a5;
  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  *v10 = *v10;
  v11 = InteractiveControlManager::Instance();
  if ( (int)InteractiveControlManager::GetReportExtendedUsage(v11, (unsigned __int16)a1, HIWORD(a1), a3, a2, a4, v17) < 0 )
    v9 = 0;
  else
    *a5 = v17[0];
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v9;
}
