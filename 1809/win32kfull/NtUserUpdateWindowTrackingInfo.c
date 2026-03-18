/*
 * XREFs of NtUserUpdateWindowTrackingInfo @ 0x1C021EA80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C006B4E0 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C0124364 (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     UpdateSizeTrackingInfo @ 0x1C01EAA28 (UpdateSizeTrackingInfo.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserUpdateWindowTrackingInfo(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  int updated; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagWND *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  INT v22[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v23[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  updated = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v12 = (struct tagWND *)v7;
  if ( v7 && (((*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v23;
    v23[1] = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    if ( IsShellParticipatesInSizing((struct tagWND *)v7) )
    {
      if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL)
                                                                                 + 328LL)
                                                                     + 16LL)
                                                         + 424LL)
        && IAMThreadAccessGranted(gptiCurrent) )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned __int64 *)MmUserProbeAddress;
        v19 = *a2;
        *(_QWORD *)v22 = *a2;
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (unsigned __int64 *)MmUserProbeAddress;
        v20 = *a3;
        v24 = *a3;
        if ( (int)v19 > 0 )
        {
          v13 = HIDWORD(v19);
          if ( SHIDWORD(v19) > 0 && (int)v20 > 0 )
          {
            v13 = HIDWORD(v20);
            if ( SHIDWORD(v20) > 0 && (int)v19 >= (int)v20 && v22[1] >= SHIDWORD(v24) )
            {
              ShellWindowManagement::TransformWindowTrackInfo((__int64)v12, v22, (INT *)&v24, 1);
              updated = UpdateSizeTrackingInfo(v12, v22, &v24);
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
    ThreadUnlock1(v18, v17);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return updated;
}
