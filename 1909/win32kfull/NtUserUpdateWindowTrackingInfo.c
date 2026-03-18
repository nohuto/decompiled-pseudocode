/*
 * XREFs of NtUserUpdateWindowTrackingInfo @ 0x1C02367B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00236DC (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C013732C (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     UpdateSizeTrackingInfo @ 0x1C02002C8 (UpdateSizeTrackingInfo.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  INT v23[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+38h] [rbp-30h]
  __int64 v26; // [rsp+40h] [rbp-28h]
  unsigned __int64 v27; // [rsp+88h] [rbp+20h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  EnterCrit(0LL, 1LL);
  updated = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( v7 && (((*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v24 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v24;
    v25 = v7;
    HMLockObject(v7);
    if ( IsShellParticipatesInSizing(v9, v10, v11, v12) )
    {
      if ( *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL)
                                                                                 + 328LL)
                                                                     + 16LL)
                                                         + 416LL)
        && IAMThreadAccessGranted(gptiCurrent) )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned __int64 *)MmUserProbeAddress;
        v20 = *a2;
        *(_QWORD *)v23 = *a2;
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (unsigned __int64 *)MmUserProbeAddress;
        v21 = *a3;
        v27 = *a3;
        if ( (int)v20 > 0 )
        {
          v13 = HIDWORD(v20);
          if ( SHIDWORD(v20) > 0 && (int)v21 > 0 )
          {
            v13 = HIDWORD(v21);
            if ( SHIDWORD(v21) > 0 && (int)v20 >= (int)v21 && v23[1] >= SHIDWORD(v27) )
            {
              ShellWindowManagement::TransformWindowTrackInfo((__int64)v9, v23, (INT *)&v27, 1);
              updated = UpdateSizeTrackingInfo(v9, v23, &v27);
              goto LABEL_21;
            }
          }
        }
        v16 = 87LL;
      }
      else
      {
        v16 = 5LL;
      }
    }
    else
    {
      v16 = 5023LL;
    }
    UserSetLastError(v16, v13, v14, v15);
LABEL_21:
    ThreadUnlock1(v18, v17, v19);
  }
  UserSessionSwitchLeaveCrit(v8);
  return updated;
}
