/*
 * XREFs of ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0102FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

struct tagDomLock *__fastcall GetObjTypeDomainLockRef(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1
    && (CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
          (__int64)v7,
          a2,
          a3),
        *((_BYTE *)qword_1C0210758 + dword_1C0210760 * (unsigned int)(unsigned __int16)*a1 + 24) == 1) )
  {
    return (struct tagDomLock *)GetDomainLockRef(10LL, v4, v5);
  }
  else
  {
    return (struct tagDomLock *)&gDomainDummyLock;
  }
}
