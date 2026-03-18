/*
 * XREFs of xxxCallShellWindowSizeStartingHandler @ 0x1C01A5528
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C4114 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01A4824 (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 */

__int64 __fastcall xxxCallShellWindowSizeStartingHandler(_QWORD *a1, int a2)
{
  __int64 v2; // rdi
  char v5; // r8
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  _QWORD v10[8]; // [rsp+20h] [rbp-58h] BYREF

  v2 = a1[2];
  memset(v10, 0, sizeof(v10));
  v10[0] = *a1;
  LODWORD(v10[1]) = 2;
  HIDWORD(v10[3]) = a2;
  v5 = *(_BYTE *)(*(_QWORD *)(v2 + 424) + 232LL);
  v6 = (4 * (v5 & 1)) | 1;
  if ( (v5 & 0x10) == 0 )
    v6 = 4 * (v5 & 1);
  v7 = v6 | 2;
  if ( (v5 & 4) == 0 )
    v7 = v6;
  v8 = a1[5];
  LODWORD(v10[4]) = v7;
  TransformRectBetweenCoordinateSpaces((char *)&v10[1] + 4, v8 + 88, *(_QWORD *)(*(_QWORD *)(v2 + 448) + 328LL), a1);
  return xxxCallIAMWindowManagementHandler((const struct _SHELL_WINDOWMANAGEMENT_CALLOUT_INFO *const)v10);
}
