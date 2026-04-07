/*
 * XREFs of ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x180021944
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180012FC0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800214F4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::CreateTimelineForTransform(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        float a5,
        int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v9; // rax
  float v11; // xmm1_4
  __int64 v12; // rax
  _QWORD *v13; // r8
  bool v15; // zf
  char v16; // al

  v6 = 0;
  v7 = a2;
  v9 = *(_QWORD *)(a1 + 8LL * a2 + 376);
  if ( v9 )
  {
    v15 = (*(_DWORD *)(v9 + 8))-- == 1;
    v16 = CDesktopManager::s_fTimelineDirty;
    if ( v15 )
      v16 = 1;
    *(_QWORD *)(a1 + 8LL * a2 + 376) = 0LL;
    CDesktopManager::s_fTimelineDirty = v16;
  }
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - a5)) & _xmm);
  if ( v11 < 0.00000011920929 )
    a6 = 0;
  v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( v12 )
  {
    CTimelineBase::CTimelineBase(v12, a3, a4, a5, a6);
    *v13 = &CTimeline<float>::`vftable';
  }
  else
  {
    v13 = 0LL;
  }
  *(_QWORD *)(a1 + 8 * v7 + 376) = v13;
  if ( !v13 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA3u);
  }
  return v6;
}
