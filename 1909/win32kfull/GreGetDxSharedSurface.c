/*
 * XREFs of GreGetDxSharedSurface @ 0x1C00FD58C
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C0032864 (CreateOrGetRedirectionBitmap.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C00FD4A0 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C022F810 (NtUserHwndQueryRedirectionInfo.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0274710 (DxgkEngGetRedirBitmapSharedHandle.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C008B7DC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C00FD7F4 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00FD820 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C00FD85C (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C015C5DC (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 */

__int64 __fastcall GreGetDxSharedSurface(HWND a1, _QWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  unsigned int v18; // eax
  unsigned int *v19; // r9
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v24; // eax
  unsigned int *v25; // r8
  SFMLOGICALSURFACE *v26; // rcx
  _QWORD v27[5]; // [rsp+20h] [rbp-28h] BYREF

  v10 = -1071775733;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsWindowWithNoRedirectionBitmap(a1) )
    {
LABEL_19:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      return v10;
    }
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)v27, a1, 0LL);
    v11 = v27[0];
    if ( !v27[0] )
    {
      v10 = -1073741811;
LABEL_17:
      if ( v11 )
        DEC_SHARE_REF_CNT(v11);
      goto LABEL_19;
    }
    v12 = *(_QWORD *)(v27[0] + 168LL);
    if ( v27[0] != -88LL )
    {
      KeEnterCriticalRegion();
      GreAcquirePushLockShared(v11 + 88);
    }
    if ( !*(_QWORD *)(v12 + 184)
      || !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v12)
      || (unsigned int)UserIsRemoteConnection(v14, v13, v15, v16)
      && !(unsigned int)UserIsRemoteAndNotDisconnectConnection() )
    {
      *a2 = 0LL;
      v10 = -1073741822;
      *a4 = 87;
      *a5 = 1;
      *a6 = 0LL;
      *a3 = 0;
      a3[1] = 0;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(v12 + 192) )
    {
      SFMLOGICALSURFACE::AdapterLuid((SFMLOGICALSURFACE *)v12);
      if ( (*a5 & 4) == 0 || (*(_DWORD *)(v12 + 244) & 0x100) != 0 || v27[0] == *(_QWORD *)a3 )
      {
        *a2 = *(_QWORD *)(v12 + 192);
        *a4 = *(_DWORD *)(v12 + 208);
        v24 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        *v25 = v24;
        v21 = **(_QWORD **)&SFMLOGICALSURFACE::AdapterLuid(v26);
        goto LABEL_12;
      }
    }
    else
    {
      v17 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v12 + 184));
      if ( (*a5 & 4) == 0 || (*(_DWORD *)(v17 + 116) & 0x400) != 0 || *(_QWORD *)(v17 + 576) == *(_QWORD *)a3 )
      {
        *a2 = *(_QWORD *)(v17 + 568);
        *a4 = 87;
        v18 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        *v19 = v18;
        v21 = *(_QWORD *)(v20 + 576);
LABEL_12:
        *(_QWORD *)a3 = v21;
        if ( (SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12) & 2) != 0 )
          v22 |= 0x8000000000000000uLL;
        v10 = 0;
        *a6 = v22;
        goto LABEL_15;
      }
    }
    v10 = -1071775484;
LABEL_15:
    if ( v11 != -88 )
    {
      GreReleasePushLockShared(v11 + 88);
      KeLeaveCriticalRegion();
    }
    goto LABEL_17;
  }
  return v10;
}
