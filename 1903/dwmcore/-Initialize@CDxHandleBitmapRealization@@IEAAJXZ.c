/*
 * XREFs of ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18003DAC4
 * Callers:
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x18003DA00 (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x18003DDE4 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHW4CompositionBufferType@@AEBUCSM_BUFFER.c)
 *     ?CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800CE0A4 (-CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapReali.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180263298 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO.c)
 * Callees:
 *     ?IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ @ 0x18003DB6C (-IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x18003DB94 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::Initialize(CDxHandleBitmapRealization *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edi
  struct _LUID v5; // rcx
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // r10

  v2 = (*(__int64 (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)this + 80LL))(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x64u, 0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 48) == 1 )
      goto LABEL_11;
    v5 = **(struct _LUID **)&CBitmapRealization::GetAdapterLuid(this);
    if ( qword_18033CC08 )
    {
      v6 = *((_DWORD *)qword_18033CC08 + 22);
      v7 = 0LL;
      if ( v6 )
      {
        v8 = *((_QWORD *)qword_18033CC08 + 8);
        while ( v5 != *(_QWORD *)(*(_QWORD *)(v8 + 8 * v7) + 336LL) )
        {
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= v6 )
            return v4;
        }
        if ( CDXGIAdapterLimited::IsXboxAdapter(*(CDXGIAdapterLimited **)(v8 + 8 * v7)) )
LABEL_11:
          *((_BYTE *)this + 429) = 0;
      }
    }
  }
  return v4;
}
