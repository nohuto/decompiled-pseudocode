/*
 * XREFs of NtUserGetHDevName @ 0x1C003A890
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     HMValidateSharedHandle @ 0x1C003D614 (HMValidateSharedHandle.c)
 *     DrvGetHdevName @ 0x1C003DFB0 (DrvGetHdevName.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003DFE4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall NtUserGetHDevName(__int64 a1, ULONG64 a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE *v8; // r8
  unsigned __int16 v10[32]; // [rsp+40h] [rbp-58h] BYREF

  memset(v10, 0, sizeof(v10));
  v4 = 0;
  EnterCrit(0, 1);
  v5 = HMValidateSharedHandle(a1);
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 240);
    if ( v7 )
    {
      if ( (unsigned int)DrvGetHdevName(v7, v10) )
      {
        v10[31] = 0;
        if ( (a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v8 = (_BYTE *)a2;
        if ( a2 >= MmUserProbeAddress )
          v8 = (_BYTE *)MmUserProbeAddress;
        *v8 = *v8;
        v8[63] = v8[63];
        v7 = RtlStringCchCopyW((unsigned __int16 *)a2, 0x20uLL, v10) >= 0;
        v4 = v7;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
