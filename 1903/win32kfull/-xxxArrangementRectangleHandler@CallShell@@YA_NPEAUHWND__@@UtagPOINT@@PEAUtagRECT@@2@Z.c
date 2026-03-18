/*
 * XREFs of ?xxxArrangementRectangleHandler@CallShell@@YA_NPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@2@Z @ 0x1C023A8D4
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01FDFBC (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 * Callees:
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C000FB44 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  int v11; // edx
  int v12; // eax
  struct tagRECT v13; // xmm1
  _OWORD v15[4]; // [rsp+20h] [rbp-78h] BYREF

  **(_QWORD **)&a3 = 0LL;
  *(_QWORD *)(*(_QWORD *)&a3 + 8LL) = 0LL;
  *(_QWORD *)&a4->left = 0LL;
  *(_QWORD *)&a4->right = 0LL;
  memset(v15, 0, sizeof(v15));
  *(_QWORD *)((char *)v15 + 12) = a2;
  v8 = 1;
  *(_QWORD *)&v15[0] = this;
  v9 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL);
  if ( (v9 & 0x800000) != 0 )
    DWORD2(v15[1]) = 2;
  else
    DWORD2(v15[1]) = HIBYTE(v9) & 1;
  HIDWORD(v15[1]) = *(_DWORD *)(gptiCurrent + 1240LL);
  v10 = *(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 240LL);
  v11 = (4 * (v10 & 1)) | 1;
  if ( (v10 & 0x10) == 0 )
    v11 = 4 * (v10 & 1);
  v12 = v11 | 2;
  if ( (v10 & 4) == 0 )
    v12 = v11;
  DWORD1(v15[1]) = v12;
  if ( !(unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler() )
    return 0;
  v13 = (struct tagRECT)v15[3];
  *(_OWORD *)*(_QWORD *)&a3 = v15[2];
  *a4 = v13;
  return v8;
}
