/*
 * XREFs of ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x1801DFCBC
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ @ 0x1801DF930 (-AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x1801E6C28 (-Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z.c)
 */

void __fastcall CMotion::InitializeDefaultBoundaryInertiaModifier(CMotion *this, float a2, float a3, float a4)
{
  __int64 v4; // rdx
  int v6; // eax
  bool v7; // zf
  __int64 (__fastcall ***v8)(_QWORD); // rbx
  __int64 (__fastcall ***v9)(_QWORD); // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v6 = (*((float *)this + 16) >= a2) + 2;
  if ( a2 < *((float *)this + 9) )
    v6 = *((float *)this + 16) >= a2;
  v7 = *((_DWORD *)this + 3) == 2;
  *((_DWORD *)this + 18) = v6;
  LOBYTE(v4) = v7;
  CScalarForce::Initialize(*((_QWORD *)this + 10), v4);
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 11) + 32LL))((char *)this + 88);
  v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 10);
  v8 = v9;
  *((_DWORD *)this + 36) = 1114636288;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v9);
  v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = v8;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v9);
}
