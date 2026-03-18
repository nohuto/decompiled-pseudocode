/*
 * XREFs of ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@@Z @ 0x1802621EC
 * Callers:
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x18003DDE4 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHW4CompositionBufferType@@AEBUCSM_BUFFER.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVCDecodeBitmap@@@Z @ 0x18003DBC0 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax

  CDxHandleBitmapRealization::CDxHandleBitmapRealization(a1, a2, a3, a4, 1);
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)a1 = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 16) = &CSectionBitmapSubRectRealization::`vftable'{for `ID2DBitmapCache'};
  *(_QWORD *)(a1 + 24) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 88) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 144) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)(a1 + 432) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable';
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = &CD2DBitmapCache::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 472) = &CD2DBitmapCacheSourceRealization::`vftable'{for `ID2DBitmapCache'};
  *(_QWORD *)(a1 + 480) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  *(_DWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_DWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 564) = a5;
  result = a1;
  *(_WORD *)(a1 + 560) = 0;
  return result;
}
