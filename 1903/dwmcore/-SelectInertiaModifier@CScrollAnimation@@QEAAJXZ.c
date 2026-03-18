/*
 * XREFs of ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x180207590
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180206F34 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CC07C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801DBE20 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x180207294 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

__int64 __fastcall CScrollAnimation::SelectInertiaModifier(CScrollAnimation *this)
{
  struct CInteractionTracker *InteractionTracker; // rbx
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD); // rsi
  __int64 v8; // rbx
  __int64 (__fastcall ***v10)(_QWORD); // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v11)(_QWORD); // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v10);
  v3 = CInteractionTracker::SelectInertiaModifierForAxis(
         (__int64)InteractionTracker,
         *((_DWORD *)this + 79),
         *((struct CExpressionValueStack **)this + 44),
         *((_QWORD *)this + 45),
         &v10);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x3A6u, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 312LL))(this);
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
    *((_BYTE *)this + 372) &= ~1u;
    v5 = 0;
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v10);
  return v5;
}
