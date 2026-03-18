/*
 * XREFs of ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x1801E6A88
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801A11A0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ??0CMotion@@QEAA@XZ @ 0x1801DF6CC (--0CMotion@@QEAA@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CScalarForce *__fastcall CScalarForce::CScalarForce(CScalarForce *this, struct IAccelerator *a2)
{
  __int64 (__fastcall ****v3)(_QWORD); // rcx

  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CScalarForce::`vftable'{for `IScalarForce'};
  *((_QWORD *)this + 1) = &CScalarForce::`vftable'{for `CMILRefCountBase'};
  *((_DWORD *)this + 23) = 0;
  *((float *)this + 24) = 0.0;
  *((float *)this + 25) = 0.0;
  *((_DWORD *)this + 26) = 0;
  v3 = (__int64 (__fastcall ****)(_QWORD))((char *)this + 112);
  *v3 = (__int64 (__fastcall ***)(_QWORD))a2;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v3);
  return this;
}
