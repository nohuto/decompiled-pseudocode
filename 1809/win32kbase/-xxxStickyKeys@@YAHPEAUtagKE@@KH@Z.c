/*
 * XREFs of ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0132800
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C0034E70 (xxxProcessKeyEvent.c)
 *     PostWinlogonMessage @ 0x1C0097ED0 (PostWinlogonMessage.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0131330 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0132CF0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C0132D50 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C0132E40 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibility @ 0x1C0162E6C (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C0163114 (ApiSetEditionPostRitSound.c)
 */

_BOOL8 __fastcall xxxStickyKeys(struct tagKE *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r14d
  char v4; // r10
  int v5; // r11d
  __int64 v6; // rsi
  __int64 v8; // rbp
  char v10; // dl
  char v11; // al
  __int64 v12; // r8
  BOOL v13; // ecx
  __int64 v14; // r8
  unsigned __int16 v15; // ax
  char v16; // di
  char v17; // si
  char v18; // r10
  BOOL v19; // eax
  __int64 v20; // r8
  bool v21; // zf

  v3 = a3;
  v4 = 0;
  LOBYTE(a3) = gCurrentModifierBit;
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  v6 = a2;
  v8 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
  if ( !gCurrentModifierBit )
  {
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
    if ( (dword_1C01CC994 & 1) != 0 )
    {
      if ( !gPhysModifierState || v5 )
      {
        if ( (unsigned int)AccessProceduresStream(a1, a2, v3) )
          xxxProcessKeyEvent((unsigned __int16 *)a1, v6, 0, 0, 0LL);
        xxxUpdateModifierState((unsigned __int8)gLockBits, v3);
        v21 = gLatchBits == 0;
        gLatchBits = 0;
        if ( !v21 )
          ApiSetEditionPostAccessibility(1LL);
        return 0LL;
      }
      xxxTwoKeysDown(v3);
    }
    return 1LL;
  }
  if ( (*((_WORD *)a1 + 1) & 0x8000) == 0
    && ((unsigned __int8)gPrevModifierState & (unsigned __int8)gCurrentModifierBit) != 0 )
  {
    gPrevModifierState = gPhysModifierState;
    return 1LL;
  }
  gPrevModifierState = gPhysModifierState;
  if ( *((_BYTE *)a1 + 2) != 0xA0 || ((unsigned __int8)~gCurrentModifierBit & (unsigned __int8)gPhysModifierState) != 0 )
    v10 = 0;
  else
    v10 = gStickyKeysLeftShiftCount + 1;
  gStickyKeysLeftShiftCount = v10;
  if ( *((_BYTE *)a1 + 2) != 0xA1 || ((unsigned __int8)~gCurrentModifierBit & (unsigned __int8)gPhysModifierState) != 0 )
    v11 = 0;
  else
    v11 = gStickyKeysRightShiftCount + 1;
  gStickyKeysRightShiftCount = v11;
  if ( v10 == 10 || v11 == 10 )
  {
    if ( (dword_1C01CC994 & 4) != 0 )
    {
      if ( (dword_1C01CC994 & 1) != 0 )
      {
        xxxTurnOffStickyKeys();
        if ( (dword_1C01CC994 & 0x10) != 0 )
          ApiSetEditionPostRitSound(v8, 1LL, v20, 0LL);
      }
      else
      {
        if ( (dword_1C01CC994 & 0x10) != 0 )
          ApiSetEditionPostRitSound(v8, 0LL, a3, 0LL);
        PostWinlogonMessage(1026LL, 1u);
      }
    }
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
    return 1LL;
  }
  if ( (dword_1C01CC994 & 1) == 0 )
    return 1LL;
  if ( !v5 )
  {
    if ( gPhysModifierState == gCurrentModifierBit )
    {
      v15 = *((_WORD *)a1 + 1);
      if ( v15 >= 0x5Bu )
      {
        if ( v15 <= 0x5Cu )
        {
          v4 = -64;
        }
        else if ( v15 > 0x9Fu )
        {
          if ( v15 <= 0xA1u )
          {
            v4 = 3;
          }
          else if ( v15 <= 0xA3u )
          {
            v4 = 12;
          }
          else if ( v15 <= 0xA5u )
          {
            v4 = 48;
          }
        }
      }
      v16 = gLockBits;
      v17 = gLatchBits;
      if ( ((unsigned __int8)gLockBits & (unsigned __int8)v4) != 0 )
      {
        v18 = ~v4;
        v16 = v18 & gLockBits;
        v17 = v18 & gLatchBits;
        xxxUpdateModifierState(
          (unsigned __int8)gCurrentModifierBit | (unsigned __int8)(v18 & gLockBits) | (unsigned __int8)(v18 & gLatchBits),
          v3);
      }
      else
      {
        if ( ((unsigned __int8)gCurrentModifierBit & (unsigned __int8)gLockBits) == 0 )
          v17 = gCurrentModifierBit ^ gLatchBits;
        if ( (dword_1C01CC994 & 0x80u) != 0
          && ((unsigned __int8)(gLockBits | gLatchBits) & (unsigned __int8)gCurrentModifierBit) != 0 )
        {
          v16 = gCurrentModifierBit ^ gLockBits;
        }
      }
      v19 = gLatchBits != v17 || gLockBits != v16;
      gLatchBits = v17;
      gLockBits = v16;
      if ( v19 )
        ApiSetEditionPostAccessibility(1LL);
      if ( (dword_1C01CC994 & 0x40) != 0 )
      {
        if ( ((unsigned __int8)gLockBits & (unsigned __int8)gCurrentModifierBit) == 0 )
          ApiSetEditionPostRitSound(v8, 2LL, a3, 0LL);
        if ( ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) != 0 )
          ApiSetEditionPostRitSound(v8, 3LL, a3, 0LL);
      }
      if ( ((unsigned __int8)gLatchBits & (unsigned __int8)gCurrentModifierBit) == 0 )
        return 0LL;
    }
    else if ( (unsigned int)xxxTwoKeysDown(v3) )
    {
      v13 = gLockBits || gLatchBits != gPhysModifierState;
      gLatchBits = gPhysModifierState;
      gLockBits = 0;
      if ( v13 )
        ApiSetEditionPostAccessibility(1LL);
      if ( (dword_1C01CC994 & 0x40) != 0 )
      {
        ApiSetEditionPostRitSound(v8, 2LL, v12, 0LL);
        ApiSetEditionPostRitSound(v8, 3LL, v14, 0LL);
      }
      return 0LL;
    }
    return 1LL;
  }
  return ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) == 0;
}
