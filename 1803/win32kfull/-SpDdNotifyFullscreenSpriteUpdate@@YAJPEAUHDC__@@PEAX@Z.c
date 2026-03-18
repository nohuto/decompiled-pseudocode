/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C023B354
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C0243D70 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C007780C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0079D14 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C008A2E0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C00C5554 (DwmAsyncDirtySprite.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C00FEAB8 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0137060 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 */

__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  UINT_PTR v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  struct DWMSPRITE *v7; // rbx
  __int64 v8; // rdi
  char ShouldUseSfmTokenArray; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rdi
  void *v16; // rax
  __int64 v17; // r8
  DYNAMICMODECHANGESHARELOCK *v18; // rcx
  struct DWMSPRITE *v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-10h] BYREF
  char v23; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0LL;
  v22[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v22, a1);
  if ( v22[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v23);
    v21 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v20, 0LL, a2);
    v4 = -1073741816;
    if ( g_pDwmState )
    {
      v7 = v20;
      if ( v20 )
      {
        v8 = *((_QWORD *)v20 + 21);
        LOBYTE(v5) = 1;
        vSpDwmUpdateSpriteVisibility(v20, v5, v6);
        vSpUpdateDirtyRgn(v7, (struct SFMLOGICALSURFACE *)v8, 0LL, (struct _RECTL *)((char *)v7 + 56), &v24, 0);
        if ( v24 )
        {
          ShouldUseSfmTokenArray = bShouldUseSfmTokenArray(*(_DWORD *)(v8 + 252));
          v13 = *(_QWORD *)(v8 + 184);
          if ( ShouldUseSfmTokenArray )
          {
            if ( v13 )
              v3 = *(_QWORD *)(v13 + 8);
            v14 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v8, v24, v3);
          }
          else
          {
            if ( v13 )
              v3 = *(_QWORD *)(v13 + 8);
            v15 = *(_QWORD *)v7;
            v16 = (void *)UserReferenceDwmApiPort(v13, v10, v11, v12);
            v14 = DwmAsyncDirtySprite(v16, v15, v17, v24, v3);
          }
          v4 = v14;
        }
        else
        {
          v4 = 0;
        }
        _InterlockedDecrement((volatile signed __int32 *)v7 + 3);
      }
    }
    else if ( v20 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    XDCOBJ::vUnlockFast((XDCOBJ *)v22);
    SEMOBJ::vUnlock((SEMOBJ *)&v21);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v18);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
