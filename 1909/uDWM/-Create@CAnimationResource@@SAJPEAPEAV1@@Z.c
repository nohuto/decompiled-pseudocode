/*
 * XREFs of ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x180030468
 * Callers:
 *     ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x1800303B0 (-GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAni.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationResource::Create(struct CAnimationResource **a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  void *v5; // [rsp+28h] [rbp-10h]

  if ( a1 )
  {
    v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           112LL);
    if ( v2 )
    {
      *(_QWORD *)(v2 + 8) = 0LL;
      *(_QWORD *)v2 = &CAnimationResource::`vftable';
      *(_QWORD *)(v2 + 16) = 0LL;
      *(_DWORD *)(v2 + 24) = 1;
      *(_QWORD *)(v2 + 32) = 0LL;
      *(_QWORD *)(v2 + 40) = 0LL;
      *(_QWORD *)(v2 + 48) = 0LL;
      *(_QWORD *)(v2 + 56) = 0LL;
      *(_DWORD *)(v2 + 64) = 0;
      *(_QWORD *)(v2 + 72) = 0LL;
      *(_WORD *)(v2 + 80) = 0;
      *(_QWORD *)(v2 + 88) = 0LL;
      *(_DWORD *)(v2 + 96) = 7;
      *(_QWORD *)(v2 + 104) = 0LL;
    }
    else
    {
      v2 = 0LL;
    }
    if ( v2 )
    {
      *a1 = (struct CAnimationResource *)v2;
      return 0;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x15u, v5);
      *a1 = 0LL;
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x15u, v5);
  }
  return v3;
}
