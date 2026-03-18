/*
 * XREFs of NtUserGetHDevName @ 0x1C00B63C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ValidateHmonitor @ 0x1C00597A0 (ValidateHmonitor.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RtlStringCchCopyW @ 0x1C00A8900 (RtlStringCchCopyW.c)
 *     DrvGetHdevName @ 0x1C00D5070 (DrvGetHdevName.c)
 *     SetLastNtError @ 0x1C0142AA4 (SetLastNtError.c)
 */

__int64 __fastcall NtUserGetHDevName(__int64 a1, ULONG64 a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  _BYTE *v9; // r8
  NTSTATUS v10; // eax
  _BYTE v12[4]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-74h]
  wchar_t pszSrc[32]; // [rsp+40h] [rbp-58h] BYREF

  memset(pszSrc, 0, sizeof(pszSrc));
  v4 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v12, v5, v6);
  v7 = ValidateHmonitor(a1);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 240);
    if ( v8 )
    {
      if ( (unsigned int)DrvGetHdevName(v8, pszSrc) )
      {
        pszSrc[31] = 0;
        v13 = 1;
        if ( (a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v9 = (_BYTE *)a2;
        if ( a2 >= MmUserProbeAddress )
          v9 = (_BYTE *)MmUserProbeAddress;
        *v9 = *v9;
        v9[63] = v9[63];
        v10 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)a2, 0x20uLL, pszSrc);
        v8 = v13;
        if ( v10 < 0 )
          v8 = 0LL;
        v4 = v8;
        v13 = v8;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
