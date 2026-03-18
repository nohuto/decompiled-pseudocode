/*
 * XREFs of ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x18019D7E0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x18018A338 (-RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z.c)
 *     ??0InteractionSourceManager@@QEAA@XZ @ 0x18019D99C (--0InteractionSourceManager@@QEAA@XZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1801A33EC (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1801E538C (-Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 */

CInteractionTracker *__fastcall CInteractionTracker::CInteractionTracker(
        CInteractionTracker *this,
        struct CComposition *a2)
{
  InteractionSourceManager *v2; // rbx
  int v4; // xmm0_4
  __int64 v5; // rcx
  int v6; // eax
  float v7; // xmm0_4

  *((_QWORD *)this + 2) = a2;
  v2 = (CInteractionTracker *)((char *)this + 192);
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CInteractionTracker::`vftable';
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 32) = 1065353216;
  *((_DWORD *)this + 33) = 1065353216;
  *((_DWORD *)this + 34) = 1065353216;
  *((_DWORD *)this + 41) = 1014350479;
  InteractionSourceManager::InteractionSourceManager((CInteractionTracker *)((char *)this + 192));
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  `vector constructor iterator'(
    (char *)this + 360,
    8LL,
    2LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)this + 376,
    8LL,
    4LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_DWORD *)this + 124) = 0;
  v4 = *((_DWORD *)this + 32);
  v5 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 129) = v4;
  *((_DWORD *)this + 130) = v4;
  *((_DWORD *)this + 134) = 1117126656;
  *((_DWORD *)this + 135) = 1130430464;
  *((_DWORD *)this + 136) = 1104674816;
  *((_DWORD *)this + 137) = 1123680256;
  *((_DWORD *)this + 138) = 1102053376;
  *((_DWORD *)this + 139) = 1106247680;
  *((_DWORD *)this + 140) = 1165623296;
  *((_DWORD *)this + 141) = 1028443341;
  *((_DWORD *)this + 142) = 1084227584;
  CExpressionManager::RegisterInteractionTrackerNotification(*(CExpressionManager **)(v5 + 224), this);
  v6 = CCommonRegistryData::m_dwMousewheelAnimationDurationMs;
  *((_DWORD *)this + 27) = 1028443341;
  *((_DWORD *)this + 28) = 1028443341;
  v7 = (float)v6 / 1000.0;
  *((float *)this + 30) = v7;
  *((float *)this + 31) = v7;
  CInteractionTracker::UpdatePositionRoundingSuggestion(this);
  InteractionSourceManager::Initialize(v2, *((struct CComposition **)this + 2), this);
  return this;
}
