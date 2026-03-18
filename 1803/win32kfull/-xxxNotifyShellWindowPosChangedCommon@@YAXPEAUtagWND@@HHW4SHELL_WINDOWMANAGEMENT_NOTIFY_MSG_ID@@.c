/*
 * XREFs of ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01A492C
 * Callers:
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C0073BD0 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01A59E4 (xxxNotifyShellTrackedWindowPosChanged.c)
 * Callees:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00602A4 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xxxNotifyShellWindowPosChangedCommon(_QWORD *a1, int a2, int a3, int a4)
{
  int v8; // ecx
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // r8
  _QWORD v13[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v13, 0, sizeof(v13));
  v8 = 0;
  v9 = a1[5];
  v13[0] = *a1;
  LODWORD(v13[1]) = a4;
  LODWORD(v13[2]) = a2;
  v10 = *(_BYTE *)(v9 + 31);
  if ( (v10 & 1) != 0 )
  {
    v8 = 1;
  }
  else if ( (v10 & 0x20) != 0 )
  {
    v8 = 2;
  }
  else if ( a3 && (*(_BYTE *)(v9 + 233) & 3) != 0 )
  {
    v8 = 3;
  }
  v11 = a1[3];
  HIDWORD(v13[2]) = v8;
  TransformRectBetweenCoordinateSpaces(&v13[3], v9 + 88, *(_QWORD *)(v11 + 328), a1);
  return xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v13);
}
