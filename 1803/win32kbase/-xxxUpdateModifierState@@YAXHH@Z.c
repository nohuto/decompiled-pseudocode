/*
 * XREFs of ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C010BB50
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C010B530 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C010BA00 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C010BA60 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C010BAF0 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0109D10 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1C0130400 (xxxProcessKeyEvent.c)
 */

void __fastcall xxxUpdateModifierState(int a1, unsigned int a2)
{
  _DWORD *v2; // rbx
  int v4; // esi
  unsigned int i; // edi
  int v7; // ecx
  __int16 v8; // ax
  _BYTE v9[2]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v10; // [rsp+32h] [rbp-46h]

  v2 = &unk_1C0183C44;
  v4 = (unsigned __int8)gLockBits | (unsigned __int8)gLatchBits;
  for ( i = 0; i < 8; ++i )
  {
    v7 = v4 & *(v2 - 1);
    if ( v7 != (a1 & *(v2 - 1)) )
    {
      v9[0] = *(_BYTE *)v2;
      v8 = *((_WORD *)v2 + 1);
      v10 = v8;
      if ( v7 )
        v10 = v8 | 0x8000;
      if ( (unsigned int)AccessProceduresStream((struct tagKE *)v9, 0, a2) )
        xxxProcessKeyEvent((unsigned int)v9, 0, 0, 0, 0LL);
    }
    v2 += 2;
  }
}
