/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026B5C4
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C0274E90 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C002FAD8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0030DA4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     DwmAsyncDirtySprite @ 0x1C008B814 (DwmAsyncDirtySprite.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00B6680 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFEF8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFF44 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C00FD2E0 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0106B60 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 */

__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  UINT_PTR v3; // rsi
  unsigned int v4; // edi
  struct DWMSPRITE *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char ShouldUseSfmTokenArray; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdi
  void *v17; // rax
  __int64 v18; // r8
  DYNAMICMODECHANGESHARELOCK *v19; // rcx
  struct DWMSPRITE *v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-10h] BYREF
  char v24; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v25; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0LL;
  v23[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v23, a1);
  if ( v23[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v24);
    v22 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v21, 0LL, a2);
    v4 = -1073741816;
    if ( g_pDwmState )
    {
      v5 = v21;
      if ( v21 )
      {
        v6 = *((_QWORD *)v21 + 21);
        vSpDwmUpdateSpriteVisibility(v21, 1u);
        vSpUpdateDirtyRgn(v5, (struct SFMLOGICALSURFACE *)v6, 0LL, (struct _RECTL *)((char *)v5 + 56), &v25, 0);
        if ( v25 )
        {
          ShouldUseSfmTokenArray = bShouldUseSfmTokenArray(*(unsigned int *)(v6 + 252), v7, v8, v9);
          v14 = *(_QWORD *)(v6 + 184);
          if ( ShouldUseSfmTokenArray )
          {
            if ( v14 )
              v3 = *(_QWORD *)(v14 + 8);
            v15 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v6, v25, v3);
          }
          else
          {
            if ( v14 )
              v3 = *(_QWORD *)(v14 + 8);
            v16 = *(_QWORD *)v5;
            v17 = (void *)UserReferenceDwmApiPort(v14, v11, v12, v13);
            v15 = DwmAsyncDirtySprite(v17, v16, v18, v25, v3);
          }
          v4 = v15;
        }
        else
        {
          v4 = 0;
        }
        _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
      }
    }
    else if ( v21 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    XDCOBJ::vUnlockFast((XDCOBJ *)v23);
    SEMOBJ::vUnlock((SEMOBJ *)&v22);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v19);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
