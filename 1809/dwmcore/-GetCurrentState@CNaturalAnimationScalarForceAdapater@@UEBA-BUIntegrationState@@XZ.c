/*
 * XREFs of ?GetCurrentState@CNaturalAnimationScalarForceAdapater@@UEBA?BUIntegrationState@@XZ @ 0x1801E8080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x1801E81D4 (-GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z.c)
 */

__int64 __fastcall CNaturalAnimationScalarForceAdapater::GetCurrentState(__int64 a1, __int64 a2)
{
  CNaturalAnimation *v4; // rcx
  int v5; // ecx
  struct CVector3Force *v6; // rax
  struct CVector3Force *v7; // rcx
  struct CVector3Force *v9[3]; // [rsp+20h] [rbp-18h] BYREF
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v9[0] = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)v9);
  v4 = *(CNaturalAnimation **)(a1 + 40);
  if ( v4 )
    v4 = (CNaturalAnimation *)*((_QWORD *)v4 + 2);
  CNaturalAnimation::GetVector3Force(v4, v9);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  v5 = *(_DWORD *)(a1 + 24);
  if ( v5 )
  {
    if ( v5 != 1 )
      ModuleFailFastForHRESULT(-2147467259, retaddr);
    v6 = v9[0];
    *(_OWORD *)a2 = *((_OWORD *)v9[0] + 6);
    *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 28);
  }
  else
  {
    v7 = v9[0];
    *(_OWORD *)a2 = *(_OWORD *)((char *)v9[0] + 28);
    *(_DWORD *)(a2 + 16) = *((_DWORD *)v7 + 11);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)v9);
  return a2;
}
