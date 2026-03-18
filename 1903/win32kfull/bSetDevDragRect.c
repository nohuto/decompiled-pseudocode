/*
 * XREFs of bSetDevDragRect @ 0x1C00816E0
 * Callers:
 *     xxxReleaseCapture @ 0x1C001C460 (xxxReleaseCapture.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     zzzDwmStartRedirection @ 0x1C00D92C4 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C015E1B0 (xxxDwmStopRedirection.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01FFC94 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020010C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0200870 (xxxCancelTrackingForThread.c)
 *     xxxDrawDragRectEx @ 0x1C0200980 (xxxDrawDragRectEx.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043E30 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreDeleteSprite @ 0x1C0045134 (GreDeleteSprite.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0046A44 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     GreCreateSprite @ 0x1C0048C28 (GreCreateSprite.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C008182C (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0139DF8 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C0272B44 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevDragRect @ 0x1C0282A78 (bMoveDevDragRect.c)
 */

__int64 __fastcall bSetDevDragRect(HDEV a1, __int64 a2, __int64 a3, char a4)
{
  HDEV v4; // rbx
  unsigned int v7; // r15d
  char v8; // r14
  __int64 v9; // rsi
  int v10; // edi
  void **v11; // rdi
  _QWORD *v13; // r14
  __int64 v14; // rbx
  HWND v15; // rdx
  void *Sprite; // rax
  unsigned int v17; // eax
  void *v18; // rax
  HDEV v20; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]
  _BYTE v22[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v24[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  _BYTE v27[144]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a1 + 22;
  v20 = a1;
  v21 = a3;
  v25 = 0LL;
  v7 = 1;
  v26 = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v24, ghsemDynamicModeChange);
  v23 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v22, (struct PDEVOBJ *)&v20);
  if ( !*((_DWORD *)v4 + 276) || (v8 = 1, !*((_DWORD *)v4 + 277)) )
    v8 = 0;
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)v4);
  v9 = 4LL;
  v10 = a4 & 1;
  if ( a2 )
  {
    *((_DWORD *)v4 + 275) = v10;
    v13 = v4 + 282;
    v14 = 4LL;
    do
    {
      memset(v27, 0, 0x88uLL);
      vSpDwmGetMiniWinInfoForNonWindowSprite(v27, 0LL);
      Sprite = GreCreateSprite(a1, v15, 0LL, (struct tagMINIWINDOWINFO *)v27, 0x9900u, v10, 1, 0, 0, 0, 0LL);
      *v13++ = Sprite;
      v17 = Sprite != 0LL ? v7 : 0;
      v7 = v17;
      --v14;
    }
    while ( v14 );
    v4 = a1 + 22;
    if ( v17 )
    {
      *((_DWORD *)a1 + 296) = 1;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect(a1, a2, v21, a4 & 1);
    }
  }
  else if ( v8 )
  {
    v18 = (void *)UserReferenceDwmApiPort();
    DwmAsyncSendWindowArrangingData(v18, 0LL);
  }
  if ( !*((_DWORD *)v4 + 274) )
  {
    v11 = (void **)(v4 + 282);
    do
    {
      if ( *v11 )
      {
        GreDeleteSprite(a1, 0LL, *v11, *((_DWORD *)v4 + 275));
        *v11 = 0LL;
      }
      ++v11;
      --v9;
    }
    while ( v9 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v22);
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v24);
  return v7;
}
