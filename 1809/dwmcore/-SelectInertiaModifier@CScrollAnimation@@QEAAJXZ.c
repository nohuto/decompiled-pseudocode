/*
 * XREFs of ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x1801D63E0
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801D5DB0 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801A11A0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1801D60F4 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

__int64 __fastcall CScrollAnimation::SelectInertiaModifier(CScrollAnimation *this)
{
  struct CInteractionTracker *InteractionTracker; // rax
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD); // rbx
  __int64 v8; // rsi
  __int64 (__fastcall ***v10)(_QWORD); // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v11)(_QWORD); // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v10);
  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v3 = CInteractionTracker::SelectInertiaModifierForAxis(
         (__int64)InteractionTracker,
         *((_DWORD *)this + 73),
         *((struct CExpressionValueStack **)this + 41),
         *((_QWORD *)this + 42),
         &v10);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x392u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this);
    v7 = v10;
    v8 = v6;
    if ( *(__int64 (__fastcall ****)(_QWORD))(v6 + 136) != v10 )
    {
      v11 = v10;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v11);
      v11 = *(__int64 (__fastcall ****)(_QWORD))(v8 + 136);
      *(_QWORD *)(v8 + 136) = v7;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v11);
    }
    *((_BYTE *)this + 348) &= ~1u;
    v5 = 0;
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v10);
  return v5;
}
