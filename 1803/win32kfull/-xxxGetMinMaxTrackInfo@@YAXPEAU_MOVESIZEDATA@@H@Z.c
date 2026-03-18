/*
 * XREFs of ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01C316C
 * Callers:
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01C2948 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C01C7264 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0036384 (xxxInitSendValidateMinMaxInfoEx.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall xxxGetMinMaxTrackInfo(struct tagWND **a1, int a2)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(v4, 0, sizeof(v4));
  xxxInitSendValidateMinMaxInfoEx(a1[2], (__int64)v4, 0LL, a2);
  a1[13] = (struct tagWND *)v4[3];
  a1[14] = (struct tagWND *)v4[4];
}
