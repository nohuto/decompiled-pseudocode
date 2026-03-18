/*
 * XREFs of ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x180221A8C
 * Callers:
 *     ?GetCurrentState@CNaturalAnimationScalarForceAdapater@@UEBA?BUIntegrationState@@XZ @ 0x180221940 (-GetCurrentState@CNaturalAnimationScalarForceAdapater@@UEBA-BUIntegrationState@@XZ.c)
 *     ?GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z @ 0x1802219F0 (-GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z.c)
 *     ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ @ 0x180221AE0 (-IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CC07C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

void __fastcall CNaturalAnimation::GetVector3Force(CNaturalAnimation *this, struct CVector3Force **a2)
{
  struct CVector3Force *v2; // rbx
  struct CVector3Force *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct CVector3Force *)*((_QWORD *)this + 52);
  v2 = v4;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v4);
  v4 = 0LL;
  *a2 = v2;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v4);
}
