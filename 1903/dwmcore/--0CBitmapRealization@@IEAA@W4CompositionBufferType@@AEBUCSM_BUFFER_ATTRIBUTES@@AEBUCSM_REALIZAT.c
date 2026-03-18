/*
 * XREFs of ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18003DCB0
 * Callers:
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVCDecodeBitmap@@@Z @ 0x18003DBC0 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 *     ??0CD2DBitmapCacheSourceRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1800CB434 (--0CD2DBitmapCacheSourceRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@.c)
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x1800CDB18 (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180263924 (--0CDxHandleYUVBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapRealization::CBitmapRealization(__int64 a1, int a2, __int64 a3, _OWORD *a4, __int64 a5)
{
  __int128 v6; // xmm1

  *(_QWORD *)a1 = &CD2DBitmapCache::`vftable'{for `CMILCOMBase'};
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = &CD2DBitmapCacheSourceRealization::`vftable'{for `ID2DBitmapCache'};
  *(_QWORD *)(a1 + 24) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 96) = a1 + 128;
  *(_QWORD *)(a1 + 104) = a1 + 128;
  *(_DWORD *)(a1 + 112) = 2;
  *(_QWORD *)(a1 + 116) = 2LL;
  *(_OWORD *)(a1 + 152) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 168) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 184) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a1 + 200) = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(a1 + 216) = *(_OWORD *)(a3 + 64);
  *(_OWORD *)(a1 + 232) = *(_OWORD *)(a3 + 80);
  *(_OWORD *)(a1 + 248) = *(_OWORD *)(a3 + 96);
  *(_QWORD *)(a1 + 264) = *(_QWORD *)(a3 + 112);
  *(_OWORD *)(a1 + 272) = *a4;
  v6 = a4[1];
  *(_BYTE *)(a1 + 308) &= 0xFCu;
  *(_DWORD *)(a1 + 304) = a2;
  *(_OWORD *)(a1 + 288) = v6;
  *(_BYTE *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = a1 + 344;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 408) = a5;
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  return a1;
}
