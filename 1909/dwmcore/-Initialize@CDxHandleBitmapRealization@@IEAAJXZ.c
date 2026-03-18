/*
 * XREFs of ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18005314C
 * Callers:
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x180052880 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHW4CompositionBufferType@@AEBUCSM_BUFFER.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180052C68 (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ?CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800CE114 (-CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapReali.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1802619D8 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO.c)
 * Callees:
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180053120 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ @ 0x180053C6C (-IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  struct _LUID v10; // [rsp+48h] [rbp+10h] BYREF

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
    v5 = **(struct _LUID **)&CBitmapRealization::GetAdapterLuid(this, &v10);
    if ( qword_180339CF8 )
    {
      v6 = *((_DWORD *)qword_180339CF8 + 22);
      v7 = 0LL;
      if ( v6 )
      {
        v8 = *((_QWORD *)qword_180339CF8 + 8);
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
