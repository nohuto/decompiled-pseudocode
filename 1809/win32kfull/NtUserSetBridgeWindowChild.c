/*
 * XREFs of NtUserSetBridgeWindowChild @ 0x1C021BFE0
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ValidateHwndIAM @ 0x1C011CA10 (ValidateHwndIAM.c)
 *     xxxSetBridgeWindowChild @ 0x1C01E21C4 (xxxSetBridgeWindowChild.c)
 */

__int64 NtUserSetBridgeWindowChild()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

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
    || (v6 = ValidateHwndIAM(), (v2 = v6) == 0)
    || (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 234LL) & 0x20) == 0
    || !(unsigned int)IsTopLevelWindow(v6)
    || !(unsigned int)IsTopLevelWindow(v5)
    || (v7 = *(_QWORD *)(v5 + 40), (*(_BYTE *)(v7 + 234) & 0x20) != 0)
    || (*(_BYTE *)(v7 + 31) & 8) != 0 )
  {
    v4 = 87LL;
    goto LABEL_12;
  }
  v17[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v17;
  v17[1] = v5;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v18[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v18;
  v18[1] = v2;
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  v3 = xxxSetBridgeWindowChild((struct tagWND *)v5, (struct tagWND *)v2);
  ThreadUnlock1(v9, v8);
  ThreadUnlock1(v11, v10);
LABEL_13:
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v3;
}
