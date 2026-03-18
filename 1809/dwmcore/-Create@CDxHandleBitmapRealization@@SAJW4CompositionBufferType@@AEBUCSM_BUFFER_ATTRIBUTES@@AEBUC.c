/*
 * XREFs of ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180097C4C
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180097B18 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18009809C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAVCDecodeBitmap@@@Z @ 0x18009AF98 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 *     ??2CDxHandleBitmapRealization@@KAPEAX_K@Z @ 0x18009B1BC (--2CDxHandleBitmapRealization@@KAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::Create(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        CDxHandleBitmapRealization **a5)
{
  unsigned int v8; // r14d
  void *v9; // rax
  unsigned int v10; // ecx
  CDxHandleBitmapRealization *v11; // rbx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // edi

  v8 = a1;
  *a5 = 0LL;
  v9 = CDxHandleBitmapRealization::operator new(a1);
  if ( v9 )
    v11 = (CDxHandleBitmapRealization *)CDxHandleBitmapRealization::CDxHandleBitmapRealization(v9, v8, a2, a3, 1, a4);
  else
    v11 = 0LL;
  if ( v11 )
  {
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = CDxHandleBitmapRealization::Initialize(v11);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x28u);
    }
    else
    {
      *a5 = v11;
      v11 = 0LL;
    }
    if ( v14 < 0 )
    {
      if ( !v11 )
        return (unsigned int)v14;
      *((_QWORD *)v11 + 35) = 0LL;
    }
    if ( v11 )
      (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x25u);
  }
  return (unsigned int)v14;
}
