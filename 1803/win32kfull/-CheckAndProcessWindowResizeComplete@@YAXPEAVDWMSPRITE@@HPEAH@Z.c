/*
 * XREFs of ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C023A9A4
 * Callers:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00C6438 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GreWindowLayoutComplete @ 0x1C00FF220 (GreWindowLayoutComplete.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C023BF50 (CheckAndProcessSurfaceComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C023C248 (GreCancelSynchronizedWindowResize.c)
 *     GreWindowResizeComplete @ 0x1C023D070 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C023D234 (GreWindowResizeStarted.c)
 * Callees:
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00C7AAC (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E68C4 (DwmAsyncUpdateSprite.c)
 *     ?UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z @ 0x1C023B5B0 (-UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1C02413B4 (DwmAsyncProcessSurfaceComplete.c)
 */

void __fastcall CheckAndProcessWindowResizeComplete(struct DWMSPRITE *a1, __int64 a2, int *a3, __int64 a4)
{
  int *v4; // rbx
  int v6; // r13d
  SFMLOGICALSURFACE *v7; // r12
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rax
  void *v19; // rax
  void *v20; // rcx
  int v21[18]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+B8h] [rbp+10h] BYREF
  int *v23; // [rsp+C0h] [rbp+18h]
  unsigned int v24; // [rsp+C8h] [rbp+20h] BYREF

  v23 = a3;
  v4 = a3;
  v6 = 0;
  if ( (_DWORD)a2 || !*((_DWORD *)a1 + 31) && !*((_DWORD *)a1 + 30) )
  {
    v7 = (SFMLOGICALSURFACE *)*((_QWORD *)a1 + 21);
    v6 = 1;
    if ( v7 )
    {
      if ( (_DWORD)a2 )
      {
        SFMLOGICALSURFACE::GetRedirectionInfo(v7, (enum _HLSURF_REDIRECTIONSTYLE *)v21, &v24, &v22, 0LL, 0LL);
        v8 = *((_DWORD *)v7 + 63);
        v9 = *((_DWORD *)a1 + 41);
        v10 = v8 & 1;
        v11 = *((_QWORD *)a1 + 13);
        v12 = *(_QWORD *)a1;
        *((_QWORD *)a1 + 13) = 0LL;
        v13 = *(_QWORD *)v7;
        v14 = v8 & 0xC;
        v15 = v14 | v9 & 1 | (2 * (v10 | (4 * (v9 & 0xE | 0x10))));
        v18 = (void *)UserReferenceDwmApiPort(v14, v10, v16, v17);
        DwmAsyncUpdateSprite(v18, v12, v13, v15, (__int64)a1 + 72, 0LL, v21[0], v24, v22, *((_DWORD *)a1 + 29), v11);
      }
      v19 = (void *)UserReferenceDwmApiPort(a1, a2, a3, a4);
      DwmAsyncProcessSurfaceComplete(v19);
      v4 = v23;
    }
    *((_DWORD *)a1 + 29) = 0;
    UpdateWindowResizeTelemetry(a1, 0);
    v20 = (void *)*((_QWORD *)a1 + 12);
    if ( v20 )
    {
      ObfDereferenceObject(v20);
      *((_QWORD *)a1 + 12) = 0LL;
    }
  }
  if ( v4 )
    *v4 = v6;
}
