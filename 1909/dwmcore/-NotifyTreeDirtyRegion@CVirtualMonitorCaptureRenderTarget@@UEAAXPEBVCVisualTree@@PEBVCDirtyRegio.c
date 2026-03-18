/*
 * XREFs of ?NotifyTreeDirtyRegion@CVirtualMonitorCaptureRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1801A5670
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180058DE4 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetDesktopBounds@CVirtualMonitorCaptureRenderTarget@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A5524 (-GetDesktopBounds@CVirtualMonitorCaptureRenderTarget@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 */

void __fastcall CVirtualMonitorCaptureRenderTarget::NotifyTreeDirtyRegion(
        CVirtualMonitorCaptureRenderTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  char v4; // di
  __int64 v5; // r11
  unsigned int v6; // ebp
  __int64 v7; // rbx
  unsigned int v8; // ecx
  __int64 v9; // rax
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // [rsp+20h] [rbp-38h] BYREF
  float v15; // [rsp+24h] [rbp-34h]
  float v16; // [rsp+28h] [rbp-30h]
  float v17; // [rsp+2Ch] [rbp-2Ch]

  v4 = 0;
  if ( !CDirtyRegion::IsEmpty(a3) )
  {
    v6 = *(_DWORD *)(v5 + 1276);
    v7 = v5 + (*(_BYTE *)(v5 + 2883) != 0 ? 2860LL : 1116LL);
    CVirtualMonitorCaptureRenderTarget::GetDesktopBounds((_DWORD *)this - 18, &v14);
    v8 = 0;
    if ( v6 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        v10 = *(float *)(v9 + v7);
        v11 = *(float *)(v9 + v7 + 4);
        v12 = *(float *)(v9 + v7 + 8);
        v13 = *(float *)(v9 + v7 + 12);
        if ( v14 > v10 )
          v10 = v14;
        if ( v15 > v11 )
          v11 = v15;
        if ( v12 > v16 )
          v12 = v16;
        if ( v13 > v17 )
          v13 = v17;
        if ( v12 > v10 && v13 > v11 )
          break;
        ++v8;
        v9 += 16LL;
        if ( v8 >= v6 )
          goto LABEL_17;
      }
      v4 = 1;
    }
LABEL_17:
    *((_BYTE *)this + 592) = v4;
  }
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 9) + 64LL))((char *)this - 72, 0LL, 0LL);
}
