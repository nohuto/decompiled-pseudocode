/*
 * XREFs of ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802624E4
 * Callers:
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180262750 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMi.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180262850 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18003C208 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18003CF9C (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18008EBF8 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7DAC (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xddddd @ 0x180188420 (McTemplateU0xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x1802623BC (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180262A34 (-ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x180262D68 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        __int64 a2)
{
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  signed int v7; // eax
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  int RectangleCount; // eax
  unsigned int v14; // r10d
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+48h] [rbp-39h] BYREF
  struct tagRECT v20; // [rsp+50h] [rbp-31h] BYREF
  __int64 v21; // [rsp+60h] [rbp-21h]
  struct tagRECT v22; // [rsp+68h] [rbp-19h] BYREF
  void *v23[10]; // [rsp+78h] [rbp-9h] BYREF

  if ( !*((_BYTE *)this + 561) )
  {
    v19 = 0LL;
    LOBYTE(a2) = 1;
    v3 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, a2);
    v5 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xF9u, 0LL);
    }
    else
    {
      v22.left = 0;
      v6 = *((_QWORD *)this + 18);
      v22.top = 0;
      (*(void (__fastcall **)(char *, LONG *, LONG *))(v6 + 32))((char *)this + 144, &v22.right, &v22.bottom);
      CRegion::CRegion((CRegion *)v23, &v22);
      FastRegion::CRegion::Subtract(
        (const struct FastRegion::Internal::CRgnData **)v23,
        *((const struct FastRegion::Internal::CRgnData ***)this + 68));
      v7 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(this, (const struct CRegion *)v23, 0);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x108u, 0LL);
      }
      else
      {
        v9 = CDxHandleAdvancedDirectFlipBitmapRealization::ReleaseWriteAccessToRestoreBuffer(this);
        v5 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x10Au, 0LL);
        }
        else
        {
          v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 55))(
                  *((_QWORD *)this + 55),
                  &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                  &v19);
          v5 = v11;
          if ( v11 >= 0 )
          {
            (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 59) + 24LL))((char *)this + 472, v19);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              *(_QWORD *)&v20.left = 0LL;
              *(_QWORD *)&v20.right = 0LL;
              FastRegion::CRegion::GetBoundingRect((LONG **)v23, &v20);
              v21 = *(_QWORD *)((char *)this + 564);
              RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)v23);
              McTemplateU0xddddd(
                v15,
                &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENT,
                v14 | (unsigned __int64)((__int64)SHIDWORD(v21) << 32),
                RectangleCount,
                v20.left,
                v20.top,
                v20.right,
                v20.bottom);
            }
            *((_BYTE *)this + 561) = 1;
            FastRegion::CRegion::FreeMemory(v23);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v19);
            goto LABEL_9;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x10Du, 0LL);
        }
      }
      FastRegion::CRegion::FreeMemory(v23);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v19);
    return v5;
  }
LABEL_9:
  v16 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, 0LL);
  v5 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x121u, 0LL);
  return v5;
}
