/*
 * XREFs of NtMITActivateInputProcessing @ 0x1C00B3860
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0039F4C (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     UserActivateMITInputProcessing @ 0x1C0130CD4 (UserActivateMITInputProcessing.c)
 */

__int64 __fastcall NtMITActivateInputProcessing(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // rdi
  CInputThread *v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v3 = (_QWORD *)a2;
  v5 = 0LL;
  v10 = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v9, a2, a3);
  if ( CInputThread::IsInputThread(v6) )
  {
    v7 = UserActivateMITInputProcessing(a1, &v10);
    v5 = v10;
  }
  else
  {
    v7 = 0;
    UserSetLastError(5);
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_QWORD *)MmUserProbeAddress;
  *v3 = v5;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress);
  return v7;
}
