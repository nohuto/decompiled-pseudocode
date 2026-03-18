/*
 * XREFs of ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVCDecodeBitmap@@@Z @ 0x180052A44
 * Callers:
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180052C68 (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ?CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800CE114 (-CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapReali.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@@Z @ 0x18026092C (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_AT.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1802617CC (--0CDxHandleStereoBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@.c)
 * Callees:
 *     ?CalcDisplayRestriction@CBitmapRealization@@IEBA?AVDisplayId@@HPEAUHMONITOR__@@@Z @ 0x180052AF0 (-CalcDisplayRestriction@CBitmapRealization@@IEBA-AVDisplayId@@HPEAUHMONITOR__@@@Z.c)
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180052B34 (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::CDxHandleBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v7; // rcx
  int v8; // ecx
  __int64 result; // rax

  CBitmapRealization::CBitmapRealization(a1);
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)a1 = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *(_QWORD *)(a1 + 24) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 88) = &CDxHandleBitmapRealization::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 144) = &CDxHandleBitmapRealization::`vftable'{for `IBitmapRealization'};
  *(_DWORD *)(a1 + 424) = 0;
  *(_BYTE *)(a1 + 428) = a5;
  *(_BYTE *)(a1 + 429) = 1;
  v8 = *(_DWORD *)CBitmapRealization::CalcDisplayRestriction(v7, &a5, *(_DWORD *)(a3 + 116) & 1, *(_QWORD *)(a3 + 8));
  result = a1;
  *(_DWORD *)(a1 + 424) = v8;
  return result;
}
