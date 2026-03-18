/*
 * XREFs of HMUnlockDestroyObject @ 0x1C006F800
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMUnlockObjectWorker @ 0x1C0030DB0 (HMUnlockObjectWorker.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C006F87C (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 */

void *__fastcall HMUnlockDestroyObject(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v6,
    a2,
    a3);
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    HMMarkObjectDestroyWorker(a1);
    return (void *)HMUnlockObjectWorker(v4);
  }
  return a1;
}
