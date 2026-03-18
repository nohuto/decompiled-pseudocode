/*
 * XREFs of ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015FF10
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C00AC010 (PostWinlogonMessage.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C015DE40 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01865B0 (xxxProcessKeyEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C019DB5C (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxToggleKeysTimer(struct tagWND *a1)
{
  __int64 v1; // r8
  char v2; // al
  __int64 v3; // rcx
  _WORD v4[16]; // [rsp+30h] [rbp-38h] BYREF

  memset(v4, 0, sizeof(v4));
  v2 = dword_1C02145DC;
  v3 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
  if ( (dword_1C02145DC & 1) != 0 )
  {
    dword_1C02145DC &= ~1u;
    if ( (v2 & 0x10) != 0 )
      ApiSetEditionPostRitSound(v3, 1LL, v1, 0LL);
  }
  else
  {
    if ( (dword_1C02145DC & 0x10) != 0 )
      ApiSetEditionPostRitSound(v3, 0LL, v1, 0LL);
    PostWinlogonMessage(1026LL, 4u);
  }
  LOBYTE(v4[0]) = gTKScanCode;
  v4[1] = gNumLockVk | 0x8000;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v4, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent((unsigned int)v4, gTKExtraInformation, 0, 0, 0LL, 0LL);
  v4[1] = gNumLockVk;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v4, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent((unsigned int)v4, gTKExtraInformation, 0, 0, 0LL, 0LL);
}
