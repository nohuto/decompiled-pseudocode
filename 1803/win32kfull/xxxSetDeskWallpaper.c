/*
 * XREFs of xxxSetDeskWallpaper @ 0x1C010CF94
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0015490 (RtlStringCchCopyW.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C010D0D8 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     ?NotifyDWMOfWallpaperChange@@YAHXZ @ 0x1C010D174 (-NotifyDWMOfWallpaperChange@@YAHXZ.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x1C010D22C (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C010D2E0 (LoadWallpaperFilenameFromRegistry.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(__int64 a1, const wchar_t *a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 CurrentProcess; // rax
  unsigned int v10; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD v16[4]; // [rsp+30h] [rbp-248h] BYREF
  _DWORD v17[132]; // [rsp+50h] [rbp-228h] BYREF

  memset(v17, 0, 0x204uLL);
  v4 = 0;
  v17[0] = 1;
  if ( g_pWallpaperSettings )
    RtlStringCchCopyW((NTSTRSAFE_PWSTR)&v17[1], 0x100uLL, (NTSTRSAFE_PCWSTR)(g_pWallpaperSettings + 4LL));
  else
    LoadWallpaperFilenameFromRegistry(a1, &v17[1], 256LL);
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, &v17[1], 256LL);
  }
  else if ( a2 != (const wchar_t *)-2LL )
  {
    RtlStringCchCopyW((NTSTRSAFE_PWSTR)&v17[1], 0x100uLL, a2);
  }
  v6 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 168LL);
  else
    v7 = 0LL;
  if ( (PsGetCurrentProcess(gptiCurrent, v5) == gpepCSRSS
     || (CurrentProcess = PsGetCurrentProcess(gpepCSRSS, v8), (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && v7 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
    v16[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v16;
    v16[1] = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v10 = xxxSendNotifyMessage((struct tagWND *)v7, 0x34u, 5uLL, 0LL, 1);
    ThreadUnlock1(v14, v13, v15);
  }
  else
  {
    v4 = 1;
    v10 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)v17);
  }
  if ( v10 && v4 )
  {
    NotifyDWMOfWallpaperChange();
    xxxNotifyShellOfWallpaperChange();
  }
  return v10;
}
