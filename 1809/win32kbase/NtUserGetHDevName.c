/*
 * XREFs of NtUserGetHDevName @ 0x1C0013910
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateSharedHandle @ 0x1C0013BD4 (HMValidateSharedHandle.c)
 *     RtlStringCchCopyW @ 0x1C0013C98 (RtlStringCchCopyW.c)
 *     DrvGetHdevName @ 0x1C0013CE0 (DrvGetHdevName.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall NtUserGetHDevName(__int64 a1, ULONG64 a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE *v7; // r8
  NTSTATUS v8; // eax
  _BYTE v10[4]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v11; // [rsp+24h] [rbp-74h]
  wchar_t pszSrc[32]; // [rsp+40h] [rbp-58h] BYREF

  memset(pszSrc, 0, sizeof(pszSrc));
  v4 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v10);
  v5 = HMValidateSharedHandle(a1);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 240);
    if ( v6 )
    {
      if ( (unsigned int)DrvGetHdevName(v6, pszSrc) )
      {
        pszSrc[31] = 0;
        v11 = 1;
        if ( (a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v7 = (_BYTE *)a2;
        if ( a2 >= MmUserProbeAddress )
          v7 = (_BYTE *)MmUserProbeAddress;
        *v7 = *v7;
        v7[63] = v7[63];
        v8 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)a2, 0x20uLL, pszSrc);
        v6 = v11;
        if ( v8 < 0 )
          v6 = 0LL;
        v4 = v6;
        v11 = v6;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
