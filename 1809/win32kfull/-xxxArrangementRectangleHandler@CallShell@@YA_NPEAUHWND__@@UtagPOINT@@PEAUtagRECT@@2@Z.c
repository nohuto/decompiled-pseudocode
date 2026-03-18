/*
 * XREFs of ?xxxArrangementRectangleHandler@CallShell@@YA_NPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@2@Z @ 0x1C0221FE0
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01E8650 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C02220E8 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 */

char __fastcall CallShell::xxxArrangementRectangleHandler(
        CallShell *this,
        HWND a2,
        struct tagPOINT a3,
        struct tagRECT *a4)
{
  char v8; // bl
  unsigned int v9; // ecx
  char v10; // r8
  char v11; // al
  int v12; // edx
  int v13; // eax
  struct tagRECT v14; // xmm1
  _OWORD v16[4]; // [rsp+20h] [rbp-58h] BYREF

  **(_QWORD **)&a3 = 0LL;
  *(_QWORD *)(*(_QWORD *)&a3 + 8LL) = 0LL;
  *(_QWORD *)&a4->left = 0LL;
  *(_QWORD *)&a4->right = 0LL;
  memset(v16, 0, sizeof(v16));
  DWORD2(v16[0]) = 0;
  *(_QWORD *)((char *)v16 + 12) = a2;
  v8 = 1;
  *(_QWORD *)&v16[0] = this;
  v9 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL);
  if ( (v9 & 0x800000) != 0 )
    DWORD2(v16[1]) = 2;
  else
    DWORD2(v16[1]) = HIBYTE(v9) & 1;
  HIDWORD(v16[1]) = *(_DWORD *)(gptiCurrent + 1216LL);
  v11 = *(_BYTE *)(*(_QWORD *)(gptiCurrent + 432LL) + 232LL);
  v10 = v11;
  v12 = (4 * (v11 & 1)) | 1;
  if ( (v11 & 0x10) == 0 )
    v12 = 4 * (v11 & 1);
  v13 = v12 | 2;
  if ( (v10 & 4) == 0 )
    v13 = v12;
  DWORD1(v16[1]) = v13;
  if ( !(unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler(v16) )
    return 0;
  v14 = (struct tagRECT)v16[3];
  *(_OWORD *)*(_QWORD *)&a3 = v16[2];
  *a4 = v14;
  return v8;
}
