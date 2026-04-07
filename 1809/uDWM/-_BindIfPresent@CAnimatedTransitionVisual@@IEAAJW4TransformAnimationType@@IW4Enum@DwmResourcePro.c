/*
 * XREFs of ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourceProperty@@@Z @ 0x180003BAC
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800038C0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x180003C50 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqp @ 0x1800AE5DC (McTemplateU0qqqp.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_BindIfPresent(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // ebx
  __int64 v7; // rdi
  int v9; // eax
  int v10; // eax
  int v11; // edx

  v4 = 0;
  v7 = *(_QWORD *)(a1 + 8LL * a2 + 616);
  if ( v7 )
  {
    v9 = CAnimationResource::_EnsureResources(*(CAnimationResource **)(a1 + 8LL * a2 + 616));
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1BCu);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v7 + 16) + 16LL)
                                                                      + 840LL))(
              *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL),
              *(unsigned int *)(*(_QWORD *)(v7 + 16) + 24LL),
              a3,
              a4);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1C1u);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0qqqp(
            *(_QWORD *)(v7 + 16),
            v11,
            *(_DWORD *)(*(_QWORD *)(v7 + 16) + 24LL),
            a3,
            a4,
            *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL));
        *(_DWORD *)(v7 + 84) = a3;
        *(_DWORD *)(v7 + 88) = a4;
      }
    }
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x7E5u);
  }
  return (unsigned int)v4;
}
