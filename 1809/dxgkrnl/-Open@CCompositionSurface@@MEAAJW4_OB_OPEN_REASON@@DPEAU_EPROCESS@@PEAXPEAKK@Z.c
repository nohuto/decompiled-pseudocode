/*
 * XREFs of ?Open@CCompositionSurface@@MEAAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x1C00176A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::Open(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal(a1);
  if ( (*(unsigned int (__fastcall **)(__int64))(*((_QWORD *)Global + 2541) + 264LL))(a4) )
  {
    *(_QWORD *)(a1 + 40) = a4;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
  }
  return 0LL;
}
