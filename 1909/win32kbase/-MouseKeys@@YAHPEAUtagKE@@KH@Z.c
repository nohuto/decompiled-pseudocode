/*
 * XREFs of ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C015C2C0
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C00679D0 (PostWinlogonMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C019AAA0 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1C019B8AC (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall MouseKeys(struct tagKE *a1)
{
  unsigned __int8 v1; // bl
  int v2; // r9d
  __int64 v3; // r8
  int v4; // edi
  __int16 v5; // dx
  __int64 i; // rcx
  int v8; // eax

  v1 = *((_BYTE *)a1 + 2);
  v2 = *((_WORD *)a1 + 1) & 0x8000;
  v3 = (unsigned __int8)gLockBits | (unsigned __int8)gLatchBits | (unsigned int)(unsigned __int8)gPhysModifierState;
  if ( (dword_1C02115F4 & 1) == 0 )
  {
    if ( (dword_1C02115F4 & 4) != 0 && v1 == gNumLockVk && (*((_WORD *)a1 + 1) & 0x8000) == 0 && (_DWORD)v3 == 17 )
    {
      gMKPreviousVk = *((_BYTE *)a1 + 2);
      if ( (dword_1C02115F4 & 0x10) != 0 )
        ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 0LL, v3, 0LL);
      PostWinlogonMessage(1026LL, 3u);
      return 0LL;
    }
    return 1LL;
  }
  v4 = 0;
  v5 = *((unsigned __int8 *)a1 + 2);
  for ( i = 0LL; i < 16; ++i )
  {
    if ( v5 == *(_WORD *)(gpusMouseVKey + 2 * i) )
      break;
    ++v4;
  }
  if ( v4 == 16 || !gbMKMouseMode && v1 != gNumLockVk )
    return 1LL;
  if ( v1 == 46 )
  {
    LOBYTE(i) = (((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) & 0x30) != 0;
    if ( ((unsigned __int8)i & ((((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) & 0xC) != 0)) != 0 )
      return 1LL;
  }
  if ( v2 )
  {
    if ( gMKPreviousVk == v1 )
    {
      if ( gtmridMKMoveCursor )
      {
        ApiSetEditionKillAccessibilityTimer(i, gtmridMKMoveCursor);
        gtmridMKMoveCursor = 0LL;
      }
      gdwPUDFlags &= ~0x2000u;
      gMKPreviousVk = 0;
    }
    return v1 == gNumLockVk;
  }
  if ( gMKPreviousVk == v1 )
    v8 = gdwPUDFlags | 0x2000;
  else
    v8 = gdwPUDFlags & 0xFFFFDFFF;
  gdwPUDFlags = v8;
  if ( (v8 & 0x2000) == 0 && gtmridMKMoveCursor )
  {
    ApiSetEditionKillAccessibilityTimer(0x2000LL, gtmridMKMoveCursor);
    gtmridMKMoveCursor = 0LL;
  }
  gMKPreviousVk = v1;
  return off_1C01D1F40[v4](word_1C01EC160[v4]);
}
