/*
 * XREFs of ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x18003B868
 * Callers:
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x18003B828 (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4.c)
 * Callees:
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x18003B8FC (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqp @ 0x1800B2834 (McTemplateU0qqqp.c)
 */

__int64 __fastcall CAnimationResource::AddBinding(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  void *v10; // [rsp+28h] [rbp-10h]

  v6 = CAnimationResource::_EnsureResources((CAnimationResource *)a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1A1u, v10);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16)
                                                                                             + 16LL)
                                                                                 + 16LL)
                                                                   + 792LL))(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 16LL),
           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 24LL),
           *(unsigned int *)(*(_QWORD *)(a2 + 16) + 24LL),
           a3);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1A3u, v10);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qqqp(
          *(_QWORD *)(a2 + 16),
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 24LL),
          *(_DWORD *)(*(_QWORD *)(a2 + 16) + 24LL),
          a3,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 16LL));
      *(_QWORD *)(a1 + 88) = a2;
      *(_DWORD *)(a1 + 96) = a3;
    }
  }
  return v7;
}
