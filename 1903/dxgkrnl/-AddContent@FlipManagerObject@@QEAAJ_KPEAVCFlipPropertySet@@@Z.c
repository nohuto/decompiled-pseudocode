/*
 * XREFs of ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C005E47C
 * Callers:
 *     NtFlipObjectAddContent @ 0x1C005EB30 (NtFlipObjectAddContent.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011B94 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C0060878 (-AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::AddContent(
        FlipManagerObject *this,
        unsigned __int64 a2,
        struct CFlipPropertySet *a3)
{
  int v6; // ebx

  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v6 >= 0 )
  {
    v6 = CFlipManager::AddContent((FlipManagerObject *)((char *)this + 32), a2, a3);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v6;
}
