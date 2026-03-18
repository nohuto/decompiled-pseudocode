/*
 * XREFs of ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0010F84
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C000FA00 (NtUnBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C0010190 (NtQueryCompositionSurfaceBinding.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C0063A1C (-Initialize@CContentResource@@IEAAJXZ.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011C10 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::QueryBinding(
        CCompositionSurface *this,
        unsigned __int64 a2,
        struct CSM_BUFFER_INFO *a3)
{
  __int64 result; // rax
  __int64 v4; // r11
  struct CCompositionBuffer *v5; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *((_QWORD *)a3 + 1) = 0LL;
  if ( !a2 )
    a2 = *((_QWORD *)this + 6);
  result = CCompositionSurface::FindBuffer(this, a2, &v5);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64))(*(_QWORD *)v5 + 40LL))(v5, v4);
  return result;
}
