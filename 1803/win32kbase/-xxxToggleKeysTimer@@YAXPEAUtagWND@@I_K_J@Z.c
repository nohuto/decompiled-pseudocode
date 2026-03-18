/*
 * XREFs of ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010B8E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     PostWinlogonMessage @ 0x1C00A1E00 (PostWinlogonMessage.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0109D10 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1C0130400 (xxxProcessKeyEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C013FA14 (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxToggleKeysTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // rcx
  _BYTE v5[2]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v6; // [rsp+32h] [rbp-36h]

  v3 = dword_1C01A4E4C;
  v4 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
  if ( (dword_1C01A4E4C & 1) != 0 )
  {
    dword_1C01A4E4C &= ~1u;
    if ( (v3 & 0x10) != 0 )
      ApiSetEditionPostRitSound(v4, 1LL, a3, 0LL);
  }
  else
  {
    if ( (dword_1C01A4E4C & 0x10) != 0 )
      ApiSetEditionPostRitSound(v4, 0LL, a3, 0LL);
    PostWinlogonMessage(1026LL, 4u);
  }
  v5[0] = gTKScanCode;
  v6 = gNumLockVk | 0x8000;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v5, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent((unsigned int)v5, gTKExtraInformation, 0, 0, 0LL);
  v6 = gNumLockVk;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v5, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent((unsigned int)v5, gTKExtraInformation, 0, 0, 0LL);
}
