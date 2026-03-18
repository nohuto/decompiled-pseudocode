/*
 * XREFs of NtUserUpdateWindowTrackingInfo @ 0x1C0236DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C002DFBC (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C012DA10 (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     UpdateSizeTrackingInfo @ 0x1C0200578 (UpdateSizeTrackingInfo.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserUpdateWindowTrackingInfo(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  int updated; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  INT v20[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+38h] [rbp-30h]
  __int64 v23; // [rsp+40h] [rbp-28h]
  unsigned __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 1LL);
  updated = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( v7 && (((*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v21 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v21;
    v22 = v7;
    HMLockObject(v7);
    if ( IsShellParticipatesInSizing(v9) )
    {
      if ( *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL)
                                                                                 + 328LL)
                                                                     + 16LL)
                                                         + 416LL)
        && IAMThreadAccessGranted(gptiCurrent) )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned __int64 *)MmUserProbeAddress;
        v17 = *a2;
        *(_QWORD *)v20 = *a2;
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (unsigned __int64 *)MmUserProbeAddress;
        v18 = *a3;
        v24 = *a3;
        if ( (int)v17 > 0 )
        {
          v10 = HIDWORD(v17);
          if ( SHIDWORD(v17) > 0 && (int)v18 > 0 )
          {
            v10 = HIDWORD(v18);
            if ( SHIDWORD(v18) > 0 && (int)v17 >= (int)v18 && v20[1] >= SHIDWORD(v24) )
            {
              ShellWindowManagement::TransformWindowTrackInfo((__int64)v9, v20, (INT *)&v24, 1);
              updated = UpdateSizeTrackingInfo(v9, v20, &v24);
              goto LABEL_21;
            }
          }
        }
        v13 = 87LL;
      }
      else
      {
        v13 = 5LL;
      }
    }
    else
    {
      v13 = 5023LL;
    }
    UserSetLastError(v13, v10, v11, v12);
LABEL_21:
    ThreadUnlock1(v15, v14, v16);
  }
  UserSessionSwitchLeaveCrit(v8);
  return updated;
}
