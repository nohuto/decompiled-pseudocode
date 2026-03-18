/*
 * XREFs of NtUserGetCurrentInputMessageSource @ 0x1C01020D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C01021B8 (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

__int64 __fastcall NtUserGetCurrentInputMessageSource(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  _BYTE *v6; // rdx
  ULONG64 v7; // rcx
  int CurrentInputMessageSource; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edx
  __int64 v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h]

  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = 0LL;
  if ( a1 )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(0, (struct tagINPUT_MESSAGE_SOURCE *)&v14);
    if ( CurrentInputMessageSource )
    {
      v11 = v14;
      v12 = (unsigned int)(v14 - 18);
      if ( (v12 & 0xFFFFFFEF) == 0 )
        v11 = 2;
      LODWORD(v14) = v11;
      if ( PsGetCurrentProcessWow64Process(v12) )
      {
        v15 = 1LL;
      }
      else
      {
        v15 = 4LL;
        v5 = 3LL;
      }
      if ( (v5 & a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = MmUserProbeAddress;
      v6 = (_BYTE *)a1;
      if ( a1 >= MmUserProbeAddress )
        v6 = (_BYTE *)MmUserProbeAddress;
      *v6 = *v6;
      v6[7] = v6[7];
      *(_QWORD *)a1 = v14;
    }
  }
  else
  {
    UserSetLastError(87LL, v2, v3, v4);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return CurrentInputMessageSource;
}
