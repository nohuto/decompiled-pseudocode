/*
 * XREFs of ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C010B530
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C00A1E00 (PostWinlogonMessage.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0109D10 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C010BA00 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C010BA60 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C010BB50 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     xxxProcessKeyEvent @ 0x1C0130400 (xxxProcessKeyEvent.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013F790 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C013FA14 (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall xxxStickyKeys(struct tagKE *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r15d
  int v5; // r11d
  int v7; // esi
  char v8; // r10
  __int64 v9; // r14
  char v11; // dl
  char v12; // al
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // r8
  unsigned int v16; // eax
  char v17; // si
  char v18; // bp
  char v19; // r10
  int v20; // eax
  __int64 v21; // r8
  bool v22; // zf

  v3 = 0;
  v4 = a3;
  LOBYTE(a3) = gCurrentModifierBit;
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  v7 = (int)a1;
  v8 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
  if ( !gCurrentModifierBit )
  {
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
    if ( (dword_1C01A4E84 & 1) != 0 )
    {
      if ( !gPhysModifierState || v5 )
      {
        if ( (unsigned int)AccessProceduresStream(a1, a2, v4) )
          xxxProcessKeyEvent(v7, a2, 0, 0, 0LL);
        xxxUpdateModifierState((unsigned __int8)gLockBits, v4);
        v22 = gLatchBits == 0;
        gLatchBits = 0;
        if ( !v22 )
          ApiSetEditionPostAccessibility(1LL);
        return 0LL;
      }
      xxxTwoKeysDown(v4);
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
    v11 = 0;
  else
    v11 = gStickyKeysLeftShiftCount + 1;
  gStickyKeysLeftShiftCount = v11;
  if ( *((_BYTE *)a1 + 2) != 0xA1 || ((unsigned __int8)~gCurrentModifierBit & (unsigned __int8)gPhysModifierState) != 0 )
    v12 = 0;
  else
    v12 = gStickyKeysRightShiftCount + 1;
  gStickyKeysRightShiftCount = v12;
  if ( v11 == 10 || v12 == 10 )
  {
    if ( (dword_1C01A4E84 & 4) != 0 )
    {
      if ( (dword_1C01A4E84 & 1) != 0 )
      {
        xxxTurnOffStickyKeys();
        if ( (dword_1C01A4E84 & 0x10) != 0 )
          ApiSetEditionPostRitSound(v9, 1LL, v21, 0LL);
      }
      else
      {
        if ( (dword_1C01A4E84 & 0x10) != 0 )
          ApiSetEditionPostRitSound(v9, 0LL, a3, 0LL);
        PostWinlogonMessage(1026LL, 1u);
      }
    }
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
    return 1LL;
  }
  if ( (dword_1C01A4E84 & 1) == 0 )
    return 1LL;
  if ( v5 )
  {
    LOBYTE(v3) = ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) == 0;
    return v3;
  }
  if ( gPhysModifierState == gCurrentModifierBit )
  {
    v16 = *((unsigned __int16 *)a1 + 1);
    if ( v16 >= 0x5B )
    {
      if ( v16 <= 0x5C )
      {
        v8 = -64;
      }
      else if ( v16 > 0x9F )
      {
        if ( v16 <= 0xA1 )
        {
          v8 = 3;
        }
        else if ( v16 <= 0xA3 )
        {
          v8 = 12;
        }
        else if ( v16 <= 0xA5 )
        {
          v8 = 48;
        }
      }
    }
    v17 = gLockBits;
    v18 = gLatchBits;
    if ( ((unsigned __int8)gLockBits & (unsigned __int8)v8) != 0 )
    {
      v19 = ~v8;
      v17 = v19 & gLockBits;
      v18 = v19 & gLatchBits;
      xxxUpdateModifierState(
        (unsigned __int8)gCurrentModifierBit | (unsigned __int8)(v19 & gLockBits) | (unsigned __int8)(v19 & gLatchBits),
        v4);
    }
    else
    {
      if ( ((unsigned __int8)gCurrentModifierBit & (unsigned __int8)gLockBits) == 0 )
        v18 = gCurrentModifierBit ^ gLatchBits;
      if ( (dword_1C01A4E84 & 0x80u) != 0
        && ((unsigned __int8)(gLockBits | gLatchBits) & (unsigned __int8)gCurrentModifierBit) != 0 )
      {
        v17 = gCurrentModifierBit ^ gLockBits;
      }
    }
    if ( gLatchBits != v18 || (v20 = 0, gLockBits != v17) )
      v20 = 1;
    gLatchBits = v18;
    gLockBits = v17;
    if ( v20 )
      ApiSetEditionPostAccessibility(1LL);
    if ( (dword_1C01A4E84 & 0x40) != 0 )
    {
      if ( ((unsigned __int8)gLockBits & (unsigned __int8)gCurrentModifierBit) == 0 )
        ApiSetEditionPostRitSound(v9, 2LL, a3, 0LL);
      if ( ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) != 0 )
        ApiSetEditionPostRitSound(v9, 3LL, a3, 0LL);
    }
    LOBYTE(v3) = ((unsigned __int8)gLatchBits & (unsigned __int8)gCurrentModifierBit) != 0;
    return v3;
  }
  if ( !(unsigned int)xxxTwoKeysDown(v4) )
    return 1LL;
  if ( gLockBits || (v14 = 0, gLatchBits != gPhysModifierState) )
    v14 = 1;
  gLatchBits = gPhysModifierState;
  gLockBits = 0;
  if ( v14 )
    ApiSetEditionPostAccessibility(1LL);
  if ( (dword_1C01A4E84 & 0x40) != 0 )
  {
    ApiSetEditionPostRitSound(v9, 2LL, v13, 0LL);
    ApiSetEditionPostRitSound(v9, 3LL, v15, 0LL);
  }
  return 0LL;
}
