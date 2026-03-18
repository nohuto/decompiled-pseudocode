/*
 * XREFs of xxxSetDeskWallpaper @ 0x1C0114660
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0026E70 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     IsThreadDesktopComposed @ 0x1C006AB70 (IsThreadDesktopComposed.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C01147D8 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x1C0114898 (DwmAsyncNotifyWallpaperChange.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x1C0114914 (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C01149CC (LoadWallpaperFilenameFromRegistry.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(__int64 a1, char *a2)
{
  int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  struct tagWND *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  void *v18; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  struct tagWND *v25; // [rsp+38h] [rbp-C8h]
  __int64 v26; // [rsp+40h] [rbp-C0h]
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  char v28[524]; // [rsp+54h] [rbp-ACh] BYREF

  memset(v28, 0, 0x200uLL);
  v4 = 0;
  v27 = 1;
  if ( g_pWallpaperSettings )
    RtlStringCchCopyW(v28, 256LL, (char *)(g_pWallpaperSettings + 4LL));
  else
    LoadWallpaperFilenameFromRegistry(a1, v28, 256LL);
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, v28, 256LL);
  }
  else if ( a2 != (char *)-2LL )
  {
    RtlStringCchCopyW(v28, 256LL, a2);
  }
  v8 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v8 )
    v9 = *(struct tagWND **)(*(_QWORD *)(v8 + 8) + 168LL);
  else
    v9 = 0LL;
  if ( (PsGetCurrentProcess(gptiCurrent, v5, v6, v7) == gpepCSRSS
     || (CurrentProcess = PsGetCurrentProcess(gpepCSRSS, v10, v11, v12),
         (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && v9 )
  {
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11);
    v24 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v24;
    v25 = v9;
    HMLockObject(v9);
    v14 = xxxSendNotifyMessage(v9, 0x34u, 5LL, 0LL, 1);
    ThreadUnlock1(v22, v21, v23);
  }
  else
  {
    v4 = 1;
    v14 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)&v27);
  }
  if ( v14 && v4 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v18 = (void *)ReferenceDwmApiPort(v16, v15, v17);
      DwmAsyncNotifyWallpaperChange(v18);
    }
    xxxNotifyShellOfWallpaperChange();
  }
  return v14;
}
