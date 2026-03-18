/*
 * XREFs of NtMITWaitForMultipleObjectsEx @ 0x1C00EDF00
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0031610 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     UserProcessMITInput @ 0x1C01530AC (UserProcessMITInput.c)
 */

__int64 __fastcall NtMITWaitForMultipleObjectsEx(unsigned int a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  unsigned int v4; // ebx
  __int64 v6; // rsi
  CInputThread *v7; // rcx
  unsigned int v8; // ebx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = (_QWORD *)a3;
  v4 = a2;
  v6 = 0LL;
  v10[0] = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v11, a2, a3);
  if ( CInputThread::IsInputThread(v7) )
  {
    v8 = UserProcessMITInput(a1, v4, v10);
    v6 = v10[0];
  }
  else
  {
    v8 = -1;
    UserSetLastError(5LL);
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_QWORD *)MmUserProbeAddress;
  *v3 = v6;
  UserSessionSwitchLeaveCrit();
  return v8;
}
