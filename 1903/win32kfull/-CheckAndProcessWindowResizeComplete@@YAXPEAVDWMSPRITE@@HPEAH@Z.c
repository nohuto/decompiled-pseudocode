/*
 * XREFs of ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026B2A8
 * Callers:
 *     GreHintSpriteShape @ 0x1C00296D4 (GreHintSpriteShape.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0047D74 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GreWindowLayoutComplete @ 0x1C0125184 (GreWindowLayoutComplete.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C026C8C0 (CheckAndProcessSurfaceComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C026CB00 (GreCancelSynchronizedWindowResize.c)
 *     GreWindowResizeComplete @ 0x1C026DB34 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026DD6C (GreWindowResizeStarted.c)
 * Callees:
 *     DwmAsyncUpdateSprite @ 0x1C01081E0 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0108384 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z @ 0x1C026BF90 (-UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1C02726F8 (DwmAsyncProcessSurfaceComplete.c)
 */

void __fastcall CheckAndProcessWindowResizeComplete(struct DWMSPRITE *a1, __int64 a2, int *a3, __int64 a4)
{
  int v4; // edi
  int *v5; // rbx
  int v7; // eax
  SFMLOGICALSURFACE *v8; // r13
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rax
  void *v20; // rax
  void *v21; // rcx
  int v22[18]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+B8h] [rbp+10h] BYREF
  int *v24; // [rsp+C0h] [rbp+18h]
  unsigned int v25; // [rsp+C8h] [rbp+20h] BYREF

  v24 = a3;
  v4 = 0;
  v5 = a3;
  v7 = 0;
  if ( (_DWORD)a2 || !*((_DWORD *)a1 + 30) && *((_DWORD *)a1 + 29) == 1 )
  {
    v8 = (SFMLOGICALSURFACE *)*((_QWORD *)a1 + 21);
    if ( v8 )
    {
      if ( (_DWORD)a2 )
      {
        SFMLOGICALSURFACE::GetRedirectionInfo(v8, (enum _HLSURF_REDIRECTIONSTYLE *)v22, &v25, &v23, 0LL, 0LL);
        v9 = *((_DWORD *)v8 + 63);
        v10 = *((_DWORD *)a1 + 41);
        v11 = *((_QWORD *)a1 + 13);
        v12 = *(_QWORD *)a1;
        *((_QWORD *)a1 + 13) = 0LL;
        v13 = *(_QWORD *)v8;
        v14 = v9 & 1;
        v15 = v9 & 0xC;
        v16 = v15 | v10 & 1 | (2 * (v14 | (4 * (v10 & 0xE | 0x10))));
        LOBYTE(v4) = *((_DWORD *)a1 + 29) >= 1;
        v19 = (void *)UserReferenceDwmApiPort(v15, v14, v17, v18);
        DwmAsyncUpdateSprite(v19, v12, v13, v16, (__int64)a1 + 72, 0LL, v22[0], v25, v23, v4, v11);
      }
      v20 = (void *)UserReferenceDwmApiPort(a1, a2, a3, a4);
      DwmAsyncProcessSurfaceComplete(v20);
      v5 = v24;
    }
    *((_DWORD *)a1 + 29) = 0;
    UpdateWindowResizeTelemetry(a1, 0);
    v21 = (void *)*((_QWORD *)a1 + 12);
    if ( v21 )
    {
      ObfDereferenceObject(v21);
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v7 = 1;
  }
  if ( v5 )
    *v5 = v7;
}
