/*
 * XREFs of GreGetDxSharedSurface @ 0x1C00E895C
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C0074C84 (CreateOrGetRedirectionBitmap.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C00E887C (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01F0C60 (NtUserHwndQueryRedirectionInfo.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C02436B0 (DxgkEngGetRedirBitmapSharedHandle.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00C7A78 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C00C7FB8 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00E8B84 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C00E8C78 (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C013451C (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 */

__int64 __fastcall GreGetDxSharedSurface(HWND a1, _QWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // eax
  _DWORD *v15; // r9
  __int64 v16; // r8
  char v17; // al
  __int64 v18; // r8
  __int64 v19; // rcx
  int v21; // eax
  _DWORD *v22; // r8
  SFMLOGICALSURFACE *v23; // rcx
  _QWORD v24[5]; // [rsp+20h] [rbp-28h] BYREF

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
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)v24, a1, 0LL);
    v11 = v24[0];
    if ( !v24[0] )
    {
      v10 = -1073741811;
LABEL_17:
      if ( v11 )
        DEC_SHARE_REF_CNT(v11);
      goto LABEL_19;
    }
    v12 = *(_QWORD *)(v24[0] + 168LL);
    if ( v24[0] != -88LL )
    {
      KeEnterCriticalRegion();
      GreAcquirePushLockShared(v11 + 88);
    }
    if ( !*(_QWORD *)(v12 + 184)
      || !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v12)
      || (unsigned int)UserIsRemoteConnection() && !(unsigned int)UserIsRemoteAndNotDisconnectConnection() )
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
      if ( (*a5 & 4) == 0 || (*(_DWORD *)(v12 + 244) & 0x100) != 0 || v24[0] == *(_QWORD *)a3 )
      {
        *a2 = *(_QWORD *)(v12 + 192);
        *a4 = *(_DWORD *)(v12 + 208);
        v21 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        *v22 = v21;
        *(_QWORD *)a3 = **(_QWORD **)&SFMLOGICALSURFACE::AdapterLuid(v23);
        goto LABEL_12;
      }
    }
    else
    {
      v13 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v12 + 184));
      if ( (*a5 & 4) == 0 || (*(_DWORD *)(v13 + 116) & 0x400) != 0 || *(_QWORD *)(v13 + 576) == *(_QWORD *)a3 )
      {
        *a2 = *(_QWORD *)(v13 + 568);
        *a4 = 87;
        v14 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        *v15 = v14;
        *(_QWORD *)a3 = *(_QWORD *)(v16 + 576);
LABEL_12:
        v17 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        v19 = *(unsigned int *)(v18 + 68);
        if ( (v17 & 2) != 0 )
          v19 |= 0x8000000000000000uLL;
        v10 = 0;
        *a6 = v19;
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
