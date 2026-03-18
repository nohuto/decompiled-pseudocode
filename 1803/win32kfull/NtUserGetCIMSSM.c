/*
 * XREFs of NtUserGetCIMSSM @ 0x1C012AC50
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0022A8C (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCIMSSM(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  _BYTE *v4; // rdx
  ULONG64 v5; // rcx
  int CurrentInputMessageSource; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h]

  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  if ( a1 && (unsigned int)_GetCurrentInputMessageSource(0, (struct tagINPUT_MESSAGE_SOURCE *)&v12) && !v12 )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(1, (struct tagINPUT_MESSAGE_SOURCE *)&v12);
    if ( CurrentInputMessageSource )
    {
      v9 = (unsigned int)v12;
      v10 = (unsigned int)(v12 - 18);
      if ( (v10 & 0xFFFFFFEF) == 0 )
        v9 = 2LL;
      LODWORD(v12) = v9;
      if ( PsGetCurrentProcessWow64Process(v10, v9, v7, v8) )
      {
        v13 = 1LL;
      }
      else
      {
        v13 = 4LL;
        v3 = 3LL;
      }
      if ( (v3 & a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v5 = MmUserProbeAddress;
      v4 = (_BYTE *)a1;
      if ( a1 >= MmUserProbeAddress )
        v4 = (_BYTE *)MmUserProbeAddress;
      *v4 = *v4;
      v4[7] = v4[7];
      *(_QWORD *)a1 = v12;
    }
  }
  else
  {
    UserSetLastError(87LL, v2);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return CurrentInputMessageSource;
}
