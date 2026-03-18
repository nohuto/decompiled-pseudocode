/*
 * XREFs of NtUserSetBridgeWindowChild @ 0x1C01F4880
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ValidateHwndIAM @ 0x1C007039C (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 *     xxxSetBridgeWindowChild @ 0x1C01BF73C (xxxSetBridgeWindowChild.c)
 */

__int64 NtUserSetBridgeWindowChild()
{
  __int64 v0; // rdx
  int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD v18[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v1 = 0;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v2 = 5LL;
LABEL_12:
    UserSetLastError(v2, v0);
    goto LABEL_13;
  }
  v3 = ValidateHwndIAM();
  if ( !v3
    || (v4 = ValidateHwndIAM()) == 0
    || (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 234LL) & 0x20) == 0
    || !(unsigned int)IsTopLevelWindow(v4)
    || !(unsigned int)IsTopLevelWindow(v3)
    || (v6 = *(_QWORD *)(v3 + 40), (*(_BYTE *)(v6 + 234) & 0x20) != 0)
    || (*(_BYTE *)(v6 + 31) & 8) != 0 )
  {
    v2 = 87LL;
    goto LABEL_12;
  }
  v18[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v18;
  v18[1] = v3;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  v19[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v19;
  v19[1] = v5;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v1 = xxxSetBridgeWindowChild((struct tagWND *)v3, (struct tagWND *)v5);
  ThreadUnlock1(v8, v7, v9);
  ThreadUnlock1(v11, v10, v12);
LABEL_13:
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v1;
}
