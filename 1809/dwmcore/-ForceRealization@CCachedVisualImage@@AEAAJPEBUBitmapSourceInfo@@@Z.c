/*
 * XREFs of ?ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z @ 0x18008AE74
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008FCAC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x180019764 (-GetPrimaryAdapterLuid@CDisplaySet@@QEBA-AU_LUID@@XZ.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008BF90 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18008C5E4 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18008C6C8 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::ForceRealization(CCachedVisualImage *this, const struct BitmapSourceInfo *a2)
{
  CDisplaySet *v2; // rbx
  struct CDisplay *v3; // rdi
  const struct BitmapSourceInfo *PrimaryAdapterLuid; // rax
  unsigned int v6; // r10d
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // esi
  int CurrentDisplaySet; // eax
  unsigned int v12; // ecx
  CDisplaySet *v13; // [rsp+68h] [rbp+38h] BYREF
  struct CDisplay *v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  PrimaryAdapterLuid = a2;
  v13 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    v6 = *((_DWORD *)a2 + 2);
  }
  else
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v13);
    v9 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_18029B67C, 1u, CurrentDisplaySet, 0x5F0u);
      v2 = v13;
      goto LABEL_5;
    }
    v2 = v13;
    if ( (int)CDisplaySet::GetPrimaryDisplay(v13, &v14) < 0 )
    {
      PrimaryAdapterLuid = (const struct BitmapSourceInfo *)CDisplaySet::GetPrimaryAdapterLuid(v2, (struct _LUID *)&v13);
      v3 = v14;
    }
    else
    {
      v3 = v14;
      v6 = *(_DWORD *)CDisplay::GetDisplayId(v14, &v13);
      PrimaryAdapterLuid = (struct CDisplay *)((char *)v3 + 240);
    }
  }
  v7 = CCachedVisualImage::EnsureRenderTargetBitmapInfo(this, *(_QWORD *)PrimaryAdapterLuid, v6, &v15);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_18029B67C, 1u, v7, 0x5FEu);
LABEL_5:
  if ( v3 )
    (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v2 )
    CDisplaySet::Release(v2);
  return v9;
}
