/*
 * XREFs of NtUserGetInteractiveControlInfo @ 0x1C01EEC60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C020C598 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveControlInfo(unsigned int a1, _OWORD *a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v10; // rax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v16; // [rsp+48h] [rbp-40h] BYREF
  __int64 v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+60h] [rbp-28h]

  v16 = 0uLL;
  v17 = 0LL;
  v18 = 0;
  v4 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( a1 && a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5, v7, v8);
    ProbeForWrite(a2, 0x1CuLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v10 = InteractiveControlManager::Instance();
    if ( (int)InteractiveControlManager::GetReportInfo(
                v10,
                (unsigned __int16)a1,
                HIWORD(a1),
                (struct tagINTERACTIVECTRL_INFO *)&v16) < 0 )
    {
      v4 = 0;
    }
    else
    {
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v16;
      *((_QWORD *)a2 + 2) = v17;
      *((_DWORD *)a2 + 6) = v18;
    }
  }
  else
  {
    v4 = 0;
    UserSetLastError(87LL, v5);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v4;
}
