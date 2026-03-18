/*
 * XREFs of ?PairedBind@CompositionSurfaceObject@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C0055450
 * Callers:
 *     <none>
 * Callees:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0008DB0 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::PairedBind(
        CompositionSurfaceObject *this,
        struct _CSM_BUFFER_INFO_WRAPPER *a2,
        char a3,
        unsigned __int64 *a4)
{
  int v8; // ebx

  v8 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 16));
  if ( v8 >= 0 )
  {
    v8 = CCompositionSurface::Bind((CompositionSurfaceObject *)((char *)this + 8), a2, a3, 0LL, a4);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 16));
  }
  return (unsigned int)v8;
}
