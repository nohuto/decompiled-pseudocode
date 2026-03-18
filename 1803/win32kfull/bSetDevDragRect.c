/*
 * XREFs of bSetDevDragRect @ 0x1C00BCB00
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0008494 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C0008660 (xxxDwmStopRedirection.c)
 *     xxxReleaseCapture @ 0x1C0060450 (xxxReleaseCapture.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01C4E74 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C5264 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01C5F20 (xxxCancelTrackingForThread.c)
 *     xxxDrawDragRectEx @ 0x1C01C6034 (xxxDrawDragRectEx.c)
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0020FB8 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C00BCC38 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     GreDeleteSprite @ 0x1C00C4078 (GreDeleteSprite.c)
 *     GreCreateSprite @ 0x1C00C4680 (GreCreateSprite.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0138130 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C02417D4 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevDragRect @ 0x1C02568B8 (bMoveDevDragRect.c)
 */

__int64 __fastcall bSetDevDragRect(HDEV a1, __int64 a2, __int64 a3, char a4)
{
  HDEV v4; // rbx
  unsigned int v7; // r15d
  char v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  int v14; // edi
  void **v15; // rdi
  __int64 *v17; // r14
  __int64 v18; // rbx
  HWND v19; // rdx
  __int64 Sprite; // rax
  unsigned int v21; // eax
  void *v22; // rax
  HDEV v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h]
  _BYTE v26[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v28[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int64 v30; // [rsp+A0h] [rbp-60h]
  _BYTE v31[144]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a1 + 20;
  v24 = a1;
  v25 = a3;
  v29 = 0LL;
  v7 = 1;
  v30 = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v28, ghsemDynamicModeChange);
  v27 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v26, (struct PDEVOBJ *)&v24);
  if ( !*((_DWORD *)v4 + 276) || (v8 = 1, !*((_DWORD *)v4 + 277)) )
    v8 = 0;
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)v4);
  v13 = 4LL;
  v14 = a4 & 1;
  if ( a2 )
  {
    *((_DWORD *)v4 + 275) = v14;
    v17 = (__int64 *)(v4 + 282);
    v18 = 4LL;
    do
    {
      memset(v31, 0, 0x88uLL);
      vSpDwmGetMiniWinInfoForNonWindowSprite(v31, 0LL);
      Sprite = GreCreateSprite(a1, v19, 0LL, (struct tagMINIWINDOWINFO *)v31, 0x9900u, v14, 1, 0, 0, 0, 0LL);
      *v17++ = Sprite;
      v21 = Sprite != 0 ? v7 : 0;
      v7 = v21;
      --v18;
    }
    while ( v18 );
    v4 = a1 + 20;
    if ( v21 )
    {
      *((_DWORD *)a1 + 294) = 1;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect(a1, a2, v25, a4 & 1);
    }
  }
  else if ( v8 )
  {
    v22 = (void *)UserReferenceDwmApiPort(v10, v9, v11, v12);
    DwmAsyncSendWindowArrangingData(v22, 0LL);
  }
  if ( !*((_DWORD *)v4 + 274) )
  {
    v15 = (void **)(v4 + 282);
    do
    {
      if ( *v15 )
      {
        GreDeleteSprite(a1, 0LL, *v15, *((_DWORD *)v4 + 275));
        *v15 = 0LL;
      }
      ++v15;
      --v13;
    }
    while ( v13 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v26);
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v28);
  return v7;
}
