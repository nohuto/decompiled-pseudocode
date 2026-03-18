/*
 * XREFs of NtUserUpdateWindowTrackingInfo @ 0x1C01F6F30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     TransformWindowTrackInfo @ 0x1C0062D38 (TransformWindowTrackInfo.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 *     IsShellParticipatesInSizing @ 0x1C0074B18 (IsShellParticipatesInSizing.c)
 *     UpdateSizeTrackingInfo @ 0x1C01C5C90 (UpdateSizeTrackingInfo.c)
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
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  INT v21[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v22[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  updated = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v12 = (struct tagWND *)v7;
  if ( v7 && (((*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v22[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v22;
    v22[1] = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    if ( (unsigned int)IsShellParticipatesInSizing(v7) )
    {
      if ( *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL)
                                                                                 + 328LL)
                                                                     + 16LL)
                                                         + 416LL)
        && IAMThreadAccessGranted(gptiCurrent) )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned __int64 *)MmUserProbeAddress;
        v18 = *a2;
        *(_QWORD *)v21 = *a2;
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (unsigned __int64 *)MmUserProbeAddress;
        v19 = *a3;
        v23 = *a3;
        if ( (int)v18 > 0 )
        {
          v13 = HIDWORD(v18);
          if ( SHIDWORD(v18) > 0 && (int)v19 > 0 )
          {
            v13 = HIDWORD(v19);
            if ( SHIDWORD(v19) > 0 && (int)v18 >= (int)v19 && v21[1] >= SHIDWORD(v23) )
            {
              TransformWindowTrackInfo((__int64)v12, v21, (INT *)&v23, 1);
              updated = UpdateSizeTrackingInfo(v12, v21, &v23);
              goto LABEL_21;
            }
          }
        }
        v14 = 87LL;
      }
      else
      {
        v14 = 5LL;
      }
    }
    else
    {
      v14 = 5023LL;
    }
    UserSetLastError(v14, v13);
LABEL_21:
    ThreadUnlock1(v16, v15, v17);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return updated;
}
