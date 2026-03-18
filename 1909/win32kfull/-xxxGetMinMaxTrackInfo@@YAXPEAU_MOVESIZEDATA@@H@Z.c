/*
 * XREFs of ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01FDC98
 * Callers:
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FC9D4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0034030 (xxxInitSendValidateMinMaxInfoEx.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall xxxGetMinMaxTrackInfo(struct tagWND **a1, int a2)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(v4, 0, sizeof(v4));
  xxxInitSendValidateMinMaxInfoEx(a1[2], (__int64)v4, 0LL, a2);
  a1[13] = (struct tagWND *)v4[3];
  a1[14] = (struct tagWND *)v4[4];
}
