/*
 * XREFs of ??1Lockable@@UEAA@XZ @ 0x1C02BE75C
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C00536FC (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??_ELockable@@UEAAPEAXI@Z @ 0x1C0055840 (--_ELockable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C000130C (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall Lockable::~Lockable(Lockable *this)
{
  struct _KTHREAD **v2; // rcx

  *(_QWORD *)this = &Lockable::`vftable';
  v2 = (struct _KTHREAD **)*((_QWORD *)this + 3);
  if ( v2[2] == KeGetCurrentThread() )
  {
    DXGFASTMUTEX::Release(v2);
    v2 = (struct _KTHREAD **)*((_QWORD *)this + 3);
  }
  if ( v2 )
    DXGFASTMUTEX::`scalar deleting destructor'((DXGFASTMUTEX *)v2);
}
