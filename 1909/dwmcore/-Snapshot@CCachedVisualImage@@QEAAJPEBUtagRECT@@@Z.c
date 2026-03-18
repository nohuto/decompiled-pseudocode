/*
 * XREFs of ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800AE340
 * Callers:
 *     ?ProcessSnapshot@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE_SNAPSHOT@@@Z @ 0x1800AE660 (-ProcessSnapshot@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE_SN.c)
 *     ?PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801C7E5C (-PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002ADC8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004FA40 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x18005235C (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x180052448 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x180052538 (-IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x180053B14 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180053F30 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x1800AD4D0 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x1800AD62C (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 *     ?ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z @ 0x1800AE4A8 (-ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x1800AE51C (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::Snapshot(CCachedVisualImage *this, const struct tagRECT *a2)
{
  unsigned int v2; // esi
  signed int Bounds; // eax
  __int64 v5; // rcx
  float v6; // xmm0_4
  float v7; // xmm1_4
  int v8; // r14d
  _QWORD *v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  CRenderTargetBitmap *v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-10h]
  float v19; // [rsp+A0h] [rbp+40h] BYREF
  struct _LUID v20; // [rsp+A8h] [rbp+48h] BYREF

  v2 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( (int)CCachedVisualImage::GetSnapshotBitmapSourceInfo(this, a2, (struct BitmapSourceInfo *)&v16) < 0
    || (int)CCachedVisualImage::ForceRealization(this, (const struct BitmapSourceInfo *)&v16) < 0 )
  {
    *((_BYTE *)this + 376) = 1;
  }
  else
  {
    Bounds = CCachedVisualImage::GetBounds((__int64)this + 8, 0LL, 0, (__int64)this + 400);
    v2 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, Bounds, 0x77Cu, 0LL);
    }
    else
    {
      v6 = (float)(*((float *)this + 103) - *((float *)this + 101)) + 6291456.25;
      v7 = *((float *)this + 102) - *((float *)this + 100);
      v19 = v6;
      *(float *)&v20.LowPart = v7 + 6291456.25;
      CCachedVisualImage::RemoveInvalidTargets(this, (int)(v20.LowPart << 10) >> 11, (int)(LODWORD(v6) << 10) >> 11);
      v8 = *((_DWORD *)this + 66);
      if ( v8 > 0 )
      {
        v9 = (_QWORD *)((char *)this + 240);
        do
        {
          v10 = (unsigned int)(v8 - 1);
          v11 = *v9 + 48 * v10;
          if ( *(_BYTE *)(v11 + 44)
            || !CCachedVisualImage::RenderTargetBitmapInfo::IsSameLuidAndDisplayId(*v9 + 48 * v10, v16, v17)
            && ((v14 = *(CRenderTargetBitmap **)(v11 + 8),
                 v19 = 0.0,
                 (int)CRenderTargetBitmap::GetDeviceInfo(v14, &v20, (struct DisplayId *)&v19) < 0)
             || !DisplayId::IsSpecific((DisplayId *)&v19))
            && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 144LL) + 104LL))(*(_QWORD *)(v11 + 8) + 144LL) )
          {
            CCachedVisualImage::RenderTargetBitmapInfo::Destruct((CCachedVisualImage::RenderTargetBitmapInfo *)v11);
            DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt((__int64)this + 240, v10);
          }
          --v8;
        }
        while ( v8 > 0 );
      }
      CCachedVisualImage::UnRegisterNotifiers((struct CResource **)this + 2);
      v12 = *((_QWORD *)this + 4);
      *((_BYTE *)this + 378) = 1;
      *(_BYTE *)(v12 + 321) = 1;
    }
  }
  ReleaseInterface<ID2D1Geometry>(&v15);
  return v2;
}
