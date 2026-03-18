/*
 * XREFs of ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C0023E60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     HMUnlockObjectInternal @ 0x1C0026A50 (HMUnlockObjectInternal.c)
 *     HMDereferenceObject @ 0x1C006F7AC (HMDereferenceObject.c)
 */

void __fastcall CHMRefHwndByHandle::~CHMRefHwndByHandle(CHMRefHwndByHandle *this)
{
  __int64 v2; // rdi

  if ( *(_QWORD *)this )
  {
    HMDereferenceObject();
    *(_QWORD *)this = 0LL;
  }
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    GetDomainLockRef(14LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
      HMUnlockObjectInternal(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
