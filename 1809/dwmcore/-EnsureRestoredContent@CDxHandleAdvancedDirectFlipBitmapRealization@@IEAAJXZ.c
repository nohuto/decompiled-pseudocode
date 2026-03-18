/*
 * XREFs of ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180227384
 * Callers:
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1802275C0 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMi.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802276B0 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18009B2CC (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A0628 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800A396C (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800AB504 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xddddd @ 0x18016CF94 (McTemplateU0xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x180227268 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18022786C (-ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x180227B7C (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(
        const struct FastRegion::Internal::CRgnData ***this,
        __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  const struct FastRegion::Internal::CRgnData **v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int RectangleCount; // eax
  int v14; // r10^4
  unsigned int v15; // r10d
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  struct tagRECT v21; // [rsp+48h] [rbp-31h] BYREF
  struct tagRECT v22; // [rsp+58h] [rbp-21h] BYREF
  void *v23[10]; // [rsp+70h] [rbp-9h] BYREF

  if ( !*((_BYTE *)this + 561) )
  {
    v20 = 0LL;
    LOBYTE(a2) = 1;
    v3 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(
           (CDxHandleAdvancedDirectFlipBitmapRealization *)this,
           a2);
    v5 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xFBu);
    }
    else
    {
      v22.left = 0;
      v6 = this[18];
      v22.top = 0;
      ((void (__fastcall *)(char *, LONG *, LONG *))v6[4])((char *)this + 144, &v22.right, &v22.bottom);
      CRegion::CRegion((CRegion *)v23, &v22);
      FastRegion::CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)v23, this[68]);
      v7 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(
             (CDxHandleAdvancedDirectFlipBitmapRealization *)this,
             (const struct CRegion *)v23,
             0);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x10Au);
      }
      else
      {
        v9 = CDxHandleAdvancedDirectFlipBitmapRealization::ReleaseWriteAccessToRestoreBuffer((CDxHandleAdvancedDirectFlipBitmapRealization *)this);
        v5 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x10Cu);
        }
        else
        {
          v20 = 0LL;
          v11 = (*(__int64 (__fastcall **)(const struct FastRegion::Internal::CRgnData **, GUID *, __int64 *))*this[55])(
                  this[55],
                  &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                  &v20);
          v5 = v11;
          if ( v11 >= 0 )
          {
            ((void (__fastcall *)(char *, __int64))this[59][3])((char *)this + 472, v20);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              *(_QWORD *)&v21.left = 0LL;
              *(_QWORD *)&v21.right = 0LL;
              FastRegion::CRegion::GetBoundingRect((LONG **)v23, &v21);
              RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)v23);
              McTemplateU0xddddd(
                v16,
                &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENT,
                v15 | (unsigned __int64)((__int64)v14 << 32),
                RectangleCount,
                v21.left,
                v21.top,
                v21.right,
                v21.bottom);
            }
            *((_BYTE *)this + 561) = 1;
            FastRegion::CRegion::FreeMemory(v23);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v20);
            goto LABEL_9;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x10Fu);
        }
      }
      FastRegion::CRegion::FreeMemory(v23);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v20);
    return v5;
  }
LABEL_9:
  v17 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(
          (CDxHandleAdvancedDirectFlipBitmapRealization *)this,
          0LL);
  v5 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x123u);
  return v5;
}
