/*
 * XREFs of NtUserUpdateInstance @ 0x1C02366A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     xxxChangeMonitorFlags @ 0x1C010D4A8 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall NtUserUpdateInstance(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // eax

  v6 = 0;
  EnterCrit(0LL, 1LL);
  v7 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v7 = (_DWORD *)MmUserProbeAddress;
  *v7 = *v7;
  v8 = HMValidateHandleNoRip(a1, 9);
  if ( v8 )
  {
    xxxChangeMonitorFlags(v8, a3);
    v10 = MonitorFlags;
  }
  else
  {
    v6 = 16390;
    v10 = 0;
  }
  *a2 = v10;
  UserSessionSwitchLeaveCrit(v9);
  return v6;
}
