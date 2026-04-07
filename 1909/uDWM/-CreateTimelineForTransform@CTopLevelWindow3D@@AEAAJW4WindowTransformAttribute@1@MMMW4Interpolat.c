/*
 * XREFs of ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x18000D490
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18000CA3C (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000D5F4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::CreateTimelineForTransform(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r8
  bool v10; // zf
  char v11; // al
  void *v12; // [rsp+28h] [rbp-30h]

  v2 = 0;
  v3 = a2;
  v5 = *(_QWORD *)(a1 + 8LL * a2 + 376);
  if ( v5 )
  {
    v10 = (*(_DWORD *)(v5 + 8))-- == 1;
    v11 = CDesktopManager::s_fTimelineDirty;
    if ( v10 )
      v11 = 1;
    *(_QWORD *)(a1 + 8LL * a2 + 376) = 0LL;
    CDesktopManager::s_fTimelineDirty = v11;
  }
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v6 )
  {
    CTimelineBase::CTimelineBase(v6, v7, v6);
    *v8 = &CTimeline<float>::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)(a1 + 8 * v3 + 376) = v8;
  if ( !v8 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA4u, v12);
  }
  return v2;
}
