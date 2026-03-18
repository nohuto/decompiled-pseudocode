/*
 * XREFs of xxxSetDeskWallpaper @ 0x1C012E4C4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0043B10 (IsThreadDesktopComposed.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C012E638 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x1C012E6D8 (DwmAsyncNotifyWallpaperChange.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x1C012E754 (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C012E80C (LoadWallpaperFilenameFromRegistry.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(__int64 a1, const wchar_t *a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD v22[4]; // [rsp+30h] [rbp-248h] BYREF
  _DWORD v23[132]; // [rsp+50h] [rbp-228h] BYREF

  memset(v23, 0, 0x204uLL);
  v4 = 0;
  v23[0] = 1;
  if ( g_pWallpaperSettings )
    RtlStringCchCopyW((NTSTRSAFE_PWSTR)&v23[1], 0x100uLL, (NTSTRSAFE_PCWSTR)(g_pWallpaperSettings + 4LL));
  else
    LoadWallpaperFilenameFromRegistry(a1, &v23[1], 256LL);
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, &v23[1], 256LL);
  }
  else if ( a2 != (const wchar_t *)-2LL )
  {
    RtlStringCchCopyW((NTSTRSAFE_PWSTR)&v23[1], 0x100uLL, a2);
  }
  v8 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v8 )
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 168LL);
  else
    v9 = 0LL;
  if ( (PsGetCurrentProcess(gptiCurrent, v5, v6, v7) == gpepCSRSS
     || (CurrentProcess = PsGetCurrentProcess(gpepCSRSS, v10, v11, v12),
         (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && v9 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
    v22[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v22;
    v22[1] = v9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v14 = xxxSendNotifyMessage((struct tagWND *)v9, 0x34u, 5LL, 0LL, 1);
    ThreadUnlock1(v21, v20);
  }
  else
  {
    v4 = 1;
    v14 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)v23);
  }
  if ( v14 && v4 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v17 = (void *)ReferenceDwmApiPort(v16, v15);
      DwmAsyncNotifyWallpaperChange(v17);
    }
    xxxNotifyShellOfWallpaperChange();
  }
  return v14;
}
