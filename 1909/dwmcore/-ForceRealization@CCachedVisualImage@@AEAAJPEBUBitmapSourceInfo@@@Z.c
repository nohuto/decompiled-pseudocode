/*
 * XREFs of ?ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z @ 0x1800AE4A8
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800AE340 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x18001BAEC (-GetPrimaryAdapterLuid@CDisplaySet@@QEBA-AU_LUID@@XZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18005200C (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18005207C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180053E64 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800AE8B0 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::ForceRealization(CCachedVisualImage *this, const struct BitmapSourceInfo *a2)
{
  CDisplaySet *v2; // rbx
  struct CDisplay *v3; // rdi
  __int64 *PrimaryAdapterLuid; // rax
  unsigned int v6; // r10d
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // esi
  signed int CurrentDisplaySet; // eax
  __int64 v12; // rcx
  CDisplaySet *v13; // [rsp+68h] [rbp+38h] BYREF
  struct CDisplay *v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  PrimaryAdapterLuid = (__int64 *)a2;
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
      MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802BF9B4, 1u, CurrentDisplaySet, 0x57Eu, 0LL);
      v2 = v13;
      goto LABEL_5;
    }
    v2 = v13;
    if ( (int)CDisplaySet::GetPrimaryDisplay(v13, &v14) < 0 )
    {
      PrimaryAdapterLuid = (__int64 *)CDisplaySet::GetPrimaryAdapterLuid(v2, (struct _LUID *)&v13);
      v3 = v14;
    }
    else
    {
      v3 = v14;
      v6 = *CDisplay::GetDisplayId((__int64)v14, &v13);
      PrimaryAdapterLuid = (__int64 *)((char *)v3 + 232);
    }
  }
  v7 = CCachedVisualImage::EnsureRenderTargetBitmapInfo((__int64)this, *PrimaryAdapterLuid, v6, &v15);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802BF9B4, 1u, v7, 0x58Cu, 0LL);
LABEL_5:
  if ( v3 )
    (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v2 )
    CDisplaySet::Release(v2);
  return v9;
}
