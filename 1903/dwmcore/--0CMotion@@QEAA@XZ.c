/*
 * XREFs of ??0CMotion@@QEAA@XZ @ 0x18020F7E0
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801DA0B0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180208B34 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x180220354 (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 */

CMotion *__fastcall CMotion::CMotion(CMotion *this)
{
  struct IAccelerator *v1; // rbx
  CScalarForce *v3; // rax
  CScalarForce *v4; // rbx
  CScalarForce *v5; // rcx

  v1 = (CMotion *)((char *)this + 88);
  *(_QWORD *)this = &CMotion::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 11) = &CSpringAccelerator::`vftable'{for `IAccelerator'};
  *((_QWORD *)this + 12) = &CSpringAccelerator::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 17) = 0LL;
  (**(void (__fastcall ***)(struct IAccelerator *))v1)(v1);
  v3 = (CScalarForce *)operator new(0x78uLL);
  if ( v3 )
    v4 = CScalarForce::CScalarForce(v3, v1);
  else
    v4 = 0LL;
  v5 = (CScalarForce *)*((_QWORD *)this + 10);
  if ( v5 != v4 )
  {
    if ( v4 )
    {
      (**(void (__fastcall ***)(CScalarForce *))v4)(v4);
      v5 = (CScalarForce *)*((_QWORD *)this + 10);
    }
    *((_QWORD *)this + 10) = v4;
    if ( v5 )
      (*(void (__fastcall **)(CScalarForce *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return this;
}
