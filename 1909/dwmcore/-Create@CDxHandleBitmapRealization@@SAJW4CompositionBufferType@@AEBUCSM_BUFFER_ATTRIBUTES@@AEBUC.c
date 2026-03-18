/*
 * XREFs of ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180052C68
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180052908 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVCDecodeBitmap@@@Z @ 0x180052A44 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18005314C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::Create(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        CDxHandleBitmapRealization **a5)
{
  void *v8; // rax
  unsigned int v9; // ecx
  CDxHandleBitmapRealization *v10; // rbx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // edi

  *a5 = 0LL;
  v8 = operator new(0x1B0uLL);
  if ( v8 )
    v10 = (CDxHandleBitmapRealization *)CDxHandleBitmapRealization::CDxHandleBitmapRealization(
                                          (__int64)v8,
                                          a1,
                                          a2,
                                          a3,
                                          1);
  else
    v10 = 0LL;
  if ( v10 )
  {
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = CDxHandleBitmapRealization::Initialize(v10);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x26u, 0LL);
    }
    else
    {
      *a5 = v10;
      v10 = 0LL;
    }
    if ( v13 < 0 )
    {
      if ( !v10 )
        return (unsigned int)v13;
      *((_QWORD *)v10 + 35) = 0LL;
    }
    if ( v10 )
      (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x23u, 0LL);
  }
  return (unsigned int)v13;
}
