/*
 * XREFs of ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180169560
 * Callers:
 *     ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180255AD0 (-GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1802614A8 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 *     ?GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180261C80 (-GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::GetDXGIResource(CD2DBitmap *this, struct IDXGIResource **a2)
{
  signed int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIResource **))this + 16))(
         *((_QWORD *)this + 16),
         &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
         a2);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x1C1u, 0LL);
  return v4;
}
