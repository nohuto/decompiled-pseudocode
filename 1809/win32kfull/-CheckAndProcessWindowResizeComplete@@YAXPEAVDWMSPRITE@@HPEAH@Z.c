/*
 * XREFs of ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0251A34
 * Callers:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C000E15C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GreHintSpriteShape @ 0x1C0074E38 (GreHintSpriteShape.c)
 *     GreWindowLayoutComplete @ 0x1C011D2A0 (GreWindowLayoutComplete.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C0253080 (CheckAndProcessSurfaceComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C02533E8 (GreCancelSynchronizedWindowResize.c)
 *     GreWindowResizeComplete @ 0x1C025450C (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C025470C (GreWindowResizeStarted.c)
 * Callees:
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C000B9F0 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C000BABC (DwmAsyncUpdateSprite.c)
 *     ?UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z @ 0x1C0252730 (-UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1C0258D70 (DwmAsyncProcessSurfaceComplete.c)
 */

void __fastcall CheckAndProcessWindowResizeComplete(struct DWMSPRITE *a1, int a2, int *a3)
{
  int v3; // edi
  int *v4; // rbx
  int v6; // eax
  SFMLOGICALSURFACE *v7; // r13
  int v8; // ecx
  int v9; // eax
  char v10; // dl
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rcx
  int v15; // ebx
  void *v16; // rax
  void *v17; // rax
  void *v18; // rcx
  int v19[18]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+B8h] [rbp+10h] BYREF
  int *v21; // [rsp+C0h] [rbp+18h]
  unsigned int v22; // [rsp+C8h] [rbp+20h] BYREF

  v21 = a3;
  v3 = 0;
  v4 = a3;
  v6 = 0;
  if ( a2 || !*((_DWORD *)a1 + 30) && *((_DWORD *)a1 + 29) == 1 )
  {
    v7 = (SFMLOGICALSURFACE *)*((_QWORD *)a1 + 21);
    if ( v7 )
    {
      if ( a2 )
      {
        SFMLOGICALSURFACE::GetRedirectionInfo(v7, (enum _HLSURF_REDIRECTIONSTYLE *)v19, &v22, &v20, 0LL, 0LL);
        v8 = *((_DWORD *)v7 + 63);
        v9 = *((_DWORD *)a1 + 41);
        v10 = v8;
        v11 = *((_QWORD *)a1 + 13);
        v12 = *(_QWORD *)a1;
        *((_QWORD *)a1 + 13) = 0LL;
        v13 = *(_QWORD *)v7;
        v14 = v8 & 0xC;
        v15 = v14 | v9 & 1 | (2 * (v10 & 1 | (4 * (v9 & 0xE | 0x10))));
        LOBYTE(v3) = *((_DWORD *)a1 + 29) >= 1;
        v16 = (void *)UserReferenceDwmApiPort(v14);
        DwmAsyncUpdateSprite(v16, v12, v13, v15, (__int64)a1 + 72, 0LL, v19[0], v22, v20, v3, v11);
      }
      v17 = (void *)UserReferenceDwmApiPort(a1);
      DwmAsyncProcessSurfaceComplete(v17);
      v4 = v21;
    }
    *((_DWORD *)a1 + 29) = 0;
    UpdateWindowResizeTelemetry(a1, 0);
    v18 = (void *)*((_QWORD *)a1 + 12);
    if ( v18 )
    {
      ObfDereferenceObject(v18);
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v6 = 1;
  }
  if ( v4 )
    *v4 = v6;
}
