/*
 * XREFs of ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801A8D7C
 * Callers:
 *     ?GetScalarForce@CNaturalAnimation@@QEAAJMMPEAPEAUIScalarForce@@@Z @ 0x18019FCC4 (-GetScalarForce@CNaturalAnimation@@QEAAJMMPEAPEAUIScalarForce@@@Z.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801A11A0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800BD9C0 (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x1801A8844 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801AA394 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::GetForceForAxis(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        struct CWeakResourceReference *a5)
{
  struct CWeakResourceReference *v5; // r14
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rax
  int v14; // eax
  struct CWeakResourceReference *v15; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v5 = a5;
  *(_QWORD *)a5 = 0LL;
  v8 = operator new(0x30uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[4] = 0;
    *(_QWORD *)v8 = &CNaturalAnimationScalarForceAdapater::`vftable'{for `IScalarForce'};
    *((_QWORD *)v8 + 1) = &CNaturalAnimationScalarForceAdapater::`vftable'{for `CMILRefCountBase'};
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
    (**(void (__fastcall ***)(_DWORD *))v9)(v9);
  if ( a2 )
  {
    if ( a2 != 1 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(float *)(a1 + 328) = a4;
    *(float *)(a1 + 292) = a3;
  }
  else
  {
    *(float *)(a1 + 324) = a4;
    *(float *)(a1 + 288) = a3;
  }
  *(_BYTE *)(a1 + 540) |= 0x10u;
  CNaturalAnimation::ClearState((CNaturalAnimation *)a1);
  v10 = CNaturalAnimation::SetupAnimationIfNecessary((CNaturalAnimation *)a1);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x397u);
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 16);
    a5 = 0LL;
    *((_QWORD *)v9 + 4) = v13;
    v9[6] = a2;
    v14 = CWeakResourceReference::Get((struct CResource *)a1, &a5);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v14, 0x99u);
      v15 = a5;
      if ( a5 )
        (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)a5 + 8LL))(a5);
    }
    else
    {
      *((_QWORD *)v9 + 5) = a5;
    }
    if ( v12 >= 0 )
    {
      *(_QWORD *)v5 = v9;
      return (unsigned int)v12;
    }
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v12, 0x399u);
  }
  if ( v9 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  return (unsigned int)v12;
}
