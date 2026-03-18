/*
 * XREFs of ?NotifyOwner@CAtlasEntry@@AEBAXPEBVCD3DDeviceLevel1@@@Z @ 0x180177F30
 * Callers:
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180166194 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x1801662EC (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasEntry::NotifyOwner(CAtlasEntry *this, const struct CD3DDeviceLevel1 *a2)
{
  void (__fastcall ***v3)(_QWORD, const struct CD3DDeviceLevel1 *); // rcx
  void (__fastcall **v4)(_QWORD, const struct CD3DDeviceLevel1 *); // r8

  v3 = (void (__fastcall ***)(_QWORD, const struct CD3DDeviceLevel1 *))*((_QWORD *)this + 1);
  if ( v3 )
  {
    v4 = *v3;
    if ( *(_QWORD *)this )
      (*v4)(v3, a2);
    else
      v4[1](v3, a2);
  }
}
