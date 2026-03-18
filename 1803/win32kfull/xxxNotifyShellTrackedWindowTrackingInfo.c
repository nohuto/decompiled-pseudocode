/*
 * XREFs of xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C0062C7C
 * Callers:
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C0062DC4 (xxxEndGetWidnowTrackInfoAsync.c)
 * Callees:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00602A4 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     TransformWindowTrackInfo @ 0x1C0062D38 (TransformWindowTrackInfo.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xxxNotifyShellTrackedWindowTrackingInfo(_QWORD *a1, __int64 a2)
{
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  __int64 v6; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v7[7]; // [rsp+30h] [rbp-40h] BYREF

  memset(v7, 0, sizeof(v7));
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(_QWORD *)(a2 + 24);
  v7[0] = *a1;
  LODWORD(v7[1]) = 1;
  TransformWindowTrackInfo(a1, &v5, &v6, 0LL);
  v7[3] = v5;
  v7[2] = v6;
  LOWORD(v7[4]) = *(_WORD *)(a1[5] + 284LL);
  return xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v7);
}
