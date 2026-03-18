/*
 * XREFs of xxxCallIAMGetArrangementRectangleHandler @ 0x1C01A5344
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01C31E0 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01A4824 (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 */

__int64 __fastcall xxxCallIAMGetArrangementRectangleHandler(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v8; // ecx
  char v9; // r8
  int v10; // edx
  int v11; // eax
  __int64 result; // rax
  __int128 v13; // xmm1
  _OWORD v14[4]; // [rsp+20h] [rbp-58h] BYREF

  *a3 = 0LL;
  a3[1] = 0LL;
  *a4 = 0LL;
  a4[1] = 0LL;
  memset(v14, 0, sizeof(v14));
  DWORD2(v14[0]) = 0;
  *(_QWORD *)&v14[0] = a1;
  *(_QWORD *)((char *)v14 + 12) = a2;
  v8 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL);
  if ( (v8 & 0x800000) != 0 )
    DWORD2(v14[1]) = 2;
  else
    DWORD2(v14[1]) = HIBYTE(v8) & 1;
  HIDWORD(v14[1]) = *(_DWORD *)(gptiCurrent + 1208LL);
  v9 = *(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 232LL);
  v10 = (4 * (v9 & 1)) | 1;
  if ( (v9 & 0x10) == 0 )
    v10 = 4 * (v9 & 1);
  v11 = v10 | 2;
  if ( (v9 & 4) == 0 )
    v11 = v10;
  DWORD1(v14[1]) = v11;
  result = xxxCallIAMWindowManagementHandler((const struct _SHELL_WINDOWMANAGEMENT_CALLOUT_INFO *const)v14);
  if ( (_DWORD)result )
  {
    v13 = v14[3];
    *(_OWORD *)a3 = v14[2];
    *(_OWORD *)a4 = v13;
  }
  return result;
}
