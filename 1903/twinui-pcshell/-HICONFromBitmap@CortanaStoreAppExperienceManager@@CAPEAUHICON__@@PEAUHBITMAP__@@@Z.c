/*
 * XREFs of ?HICONFromBitmap@CortanaStoreAppExperienceManager@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1801BD10C
 * Callers:
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x1801BF064 (-SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1801D0DB0 (-SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

HICON __fastcall CortanaStoreAppExperienceManager::HICONFromBitmap(HBITMAP a1)
{
  int SystemMetrics; // edi
  int v3; // ebx
  HDC DC; // rax
  HBITMAP CompatibleBitmap; // rax
  HBITMAP v6; // rbx
  HICON v7; // rdi
  ICONINFO piconinfo; // [rsp+20h] [rbp-28h] BYREF

  SystemMetrics = GetSystemMetrics(12);
  v3 = GetSystemMetrics(11);
  DC = GetDC(0LL);
  CompatibleBitmap = CreateCompatibleBitmap(DC, v3, SystemMetrics);
  v6 = CompatibleBitmap;
  if ( CompatibleBitmap )
  {
    *(_QWORD *)&piconinfo.xHotspot = 0LL;
    *(&piconinfo.yHotspot + 1) = 0;
    piconinfo.fIcon = 1;
    piconinfo.hbmColor = a1;
    piconinfo.hbmMask = CompatibleBitmap;
    v7 = CreateIconIndirect(&piconinfo);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v6 )
    DeleteObject(v6);
  return v7;
}
