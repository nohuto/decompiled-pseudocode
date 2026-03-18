/*
 * XREFs of ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01601A0
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C015FB40 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0160050 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C01600B0 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C0160140 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C015DE40 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01865B0 (xxxProcessKeyEvent.c)
 */

void __fastcall xxxUpdateModifierState(int a1, unsigned int a2)
{
  _DWORD *v4; // rbx
  int v5; // esi
  unsigned int i; // edi
  int v7; // ecx
  __int16 v8; // ax
  _WORD v9[16]; // [rsp+30h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  v4 = &unk_1C01EE2A4;
  v5 = (unsigned __int8)gLockBits | (unsigned __int8)gLatchBits;
  for ( i = 0; i < 8; ++i )
  {
    v7 = v5 & *(v4 - 1);
    if ( v7 != (a1 & *(v4 - 1)) )
    {
      LOBYTE(v9[0]) = *(_BYTE *)v4;
      v8 = *((_WORD *)v4 + 1);
      v9[1] = v8;
      if ( v7 )
        v9[1] = v8 | 0x8000;
      if ( (unsigned int)AccessProceduresStream((struct tagKE *)v9, 0, a2) )
        xxxProcessKeyEvent((unsigned int)v9, 0, 0, 0, 0LL, 0LL);
    }
    v4 += 2;
  }
}
