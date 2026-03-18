/*
 * XREFs of ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C015D940
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C00679D0 (PostWinlogonMessage.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C015BC40 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C015DE50 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C015DEB0 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C015DFA0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01843C0 (xxxProcessKeyEvent.c)
 *     ApiSetEditionPostAccessibility @ 0x1C019B57C (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C019B8AC (ApiSetEditionPostRitSound.c)
 */

_BOOL8 __fastcall xxxStickyKeys(struct tagKE *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r14d
  int v4; // r11d
  int v6; // edi
  char v7; // r10
  __int64 v8; // rbp
  char v10; // dl
  char v11; // al
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // r8
  unsigned __int16 v15; // ax
  char v16; // di
  char v17; // si
  char v18; // r10
  int v19; // eax
  __int64 v20; // r8
  bool v21; // zf

  v3 = a3;
  LOBYTE(a3) = gCurrentModifierBit;
  v4 = *((_WORD *)a1 + 1) & 0x8000;
  v6 = (int)a1;
  v7 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
  if ( !gCurrentModifierBit )
  {
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
    if ( (dword_1C0211614 & 1) != 0 )
    {
      if ( !gPhysModifierState || v4 )
      {
        if ( (unsigned int)AccessProceduresStream(a1, a2, v3) )
          xxxProcessKeyEvent(v6, a2, 0, 0, 0LL, 0LL);
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
    if ( (dword_1C0211614 & 4) != 0 )
    {
      if ( (dword_1C0211614 & 1) != 0 )
      {
        xxxTurnOffStickyKeys();
        if ( (dword_1C0211614 & 0x10) != 0 )
          ApiSetEditionPostRitSound(v8, 1LL, v20, 0LL);
      }
      else
      {
        if ( (dword_1C0211614 & 0x10) != 0 )
          ApiSetEditionPostRitSound(v8, 0LL, a3, 0LL);
        PostWinlogonMessage(1026LL, 1u);
      }
    }
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
    return 1LL;
  }
  if ( (dword_1C0211614 & 1) == 0 )
    return 1LL;
  if ( !v4 )
  {
    if ( gPhysModifierState == gCurrentModifierBit )
    {
      v15 = *((_WORD *)a1 + 1);
      if ( v15 >= 0x5Bu )
      {
        if ( v15 <= 0x5Cu )
        {
          v7 = -64;
        }
        else if ( v15 > 0x9Fu )
        {
          if ( v15 <= 0xA1u )
          {
            v7 = 3;
          }
          else if ( v15 <= 0xA3u )
          {
            v7 = 12;
          }
          else if ( v15 <= 0xA5u )
          {
            v7 = 48;
          }
        }
      }
      v16 = gLockBits;
      v17 = gLatchBits;
      if ( ((unsigned __int8)gLockBits & (unsigned __int8)v7) != 0 )
      {
        v18 = ~v7;
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
        if ( (dword_1C0211614 & 0x80u) != 0
          && ((unsigned __int8)(gLockBits | gLatchBits) & (unsigned __int8)gCurrentModifierBit) != 0 )
        {
          v16 = gCurrentModifierBit ^ gLockBits;
        }
      }
      if ( gLatchBits != v17 || (v19 = 0, gLockBits != v16) )
        v19 = 1;
      gLatchBits = v17;
      gLockBits = v16;
      if ( v19 )
        ApiSetEditionPostAccessibility(1LL);
      if ( (dword_1C0211614 & 0x40) != 0 )
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
      if ( gLockBits || (v13 = 0, gLatchBits != gPhysModifierState) )
        v13 = 1;
      gLatchBits = gPhysModifierState;
      gLockBits = 0;
      if ( v13 )
        ApiSetEditionPostAccessibility(1LL);
      if ( (dword_1C0211614 & 0x40) != 0 )
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
