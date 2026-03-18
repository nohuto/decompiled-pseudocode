/*
 * XREFs of bSetDevDragRect @ 0x1C0125040
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C00C6C60 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C00C8200 (zzzDwmStartRedirection.c)
 *     xxxReleaseCapture @ 0x1C00D0F20 (xxxReleaseCapture.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01EA210 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01EA5F8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01EAB00 (xxxCancelTrackingForThread.c)
 *     xxxDrawDragRectEx @ 0x1C01EAC18 (xxxDrawDragRectEx.c)
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 * Callees:
 *     GreDeleteSprite @ 0x1C000DC58 (GreDeleteSprite.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreCreateSprite @ 0x1C007C238 (GreCreateSprite.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00A19EC (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C012518C (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C012D1A4 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C02591C4 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevDragRect @ 0x1C02698C8 (bMoveDevDragRect.c)
 */

__int64 __fastcall bSetDevDragRect(HDEV a1, __int64 a2, __int64 a3, char a4)
{
  HDEV v4; // rbx
  unsigned int v7; // r15d
  char v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // edi
  void **v12; // rdi
  _QWORD *v14; // r14
  __int64 v15; // rbx
  HWND v16; // rdx
  void *Sprite; // rax
  unsigned int v18; // eax
  void *v19; // rax
  _QWORD v21[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v24[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  _BYTE v27[144]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a1 + 22;
  v21[0] = a1;
  v21[1] = a3;
  v25 = 0LL;
  v7 = 1;
  v26 = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v24, ghsemDynamicModeChange);
  v23 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v22, (struct PDEVOBJ *)v21);
  if ( !*((_DWORD *)v4 + 276) || (v8 = 1, !*((_DWORD *)v4 + 277)) )
    v8 = 0;
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)v4);
  v10 = 4LL;
  v11 = a4 & 1;
  if ( a2 )
  {
    *((_DWORD *)v4 + 275) = v11;
    v14 = v4 + 282;
    v15 = 4LL;
    do
    {
      memset(v27, 0, 0x88uLL);
      vSpDwmGetMiniWinInfoForNonWindowSprite(v27, 0LL);
      Sprite = GreCreateSprite(a1, v16, 0LL, (struct tagMINIWINDOWINFO *)v27, 0x9900u, v11, 1, 0, 0, 0, 0LL);
      *v14++ = Sprite;
      v18 = Sprite != 0LL ? v7 : 0;
      v7 = v18;
      --v15;
    }
    while ( v15 );
    v4 = a1 + 22;
    if ( v18 )
    {
      *((_DWORD *)a1 + 296) = 1;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect(a1);
    }
  }
  else if ( v8 )
  {
    v19 = (void *)UserReferenceDwmApiPort(v9);
    DwmAsyncSendWindowArrangingData(v19, 0LL);
  }
  if ( !*((_DWORD *)v4 + 274) )
  {
    v12 = (void **)(v4 + 282);
    do
    {
      if ( *v12 )
      {
        GreDeleteSprite(a1, 0LL, *v12, *((_DWORD *)v4 + 275));
        *v12 = 0LL;
      }
      ++v12;
      --v10;
    }
    while ( v10 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v22);
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v24);
  return v7;
}
