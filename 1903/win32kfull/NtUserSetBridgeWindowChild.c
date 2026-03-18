/*
 * XREFs of NtUserSetBridgeWindowChild @ 0x1C0234150
 * Callers:
 *     <none>
 * Callees:
 *     ValidateHwndIAM @ 0x1C0089640 (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F84E4 (xxxSetBridgeWindowChild.c)
 */

__int64 NtUserSetBridgeWindowChild()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  struct tagWND *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h]
  __int64 v19; // [rsp+30h] [rbp-20h]
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  struct tagWND *v21; // [rsp+40h] [rbp-10h]
  __int64 v22; // [rsp+48h] [rbp-8h]

  EnterCrit(0LL, 1LL);
  v3 = 0;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v4 = 5LL;
LABEL_12:
    UserSetLastError(v4, v0, v1, v2);
    goto LABEL_13;
  }
  v5 = ValidateHwndIAM();
  if ( !v5
    || (v6 = ValidateHwndIAM(), (v7 = (struct tagWND *)v6) == 0LL)
    || (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 234LL) & 0x20) == 0
    || !(unsigned int)IsTopLevelWindow(v6)
    || !(unsigned int)IsTopLevelWindow(v5)
    || (v8 = *(_QWORD *)(v5 + 40), (*(_BYTE *)(v8 + 234) & 0x20) != 0)
    || (*(_BYTE *)(v8 + 31) & 8) != 0 )
  {
    v4 = 87LL;
    goto LABEL_12;
  }
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v17 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v17;
  v18 = v5;
  HMLockObject(v5);
  v20 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v20;
  v21 = v7;
  HMLockObject(v7);
  v3 = xxxSetBridgeWindowChild((struct tagWND *)v5, v7);
  ThreadUnlock1(v10, v9, v11);
  ThreadUnlock1(v13, v12, v14);
LABEL_13:
  UserSessionSwitchLeaveCrit(v15);
  return v3;
}
