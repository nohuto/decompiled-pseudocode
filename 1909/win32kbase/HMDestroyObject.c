/*
 * XREFs of HMDestroyObject @ 0x1C0073400
 * Callers:
 *     ?HMNullFnDestroy@@YAXPEAX@Z @ 0x1C00733A0 (-HMNullFnDestroy@@YAXPEAX@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C01073C0 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyBaseWindow @ 0x1C011D050 (DestroyBaseWindow.c)
 * Callees:
 *     HMFreeObject @ 0x1C0028D60 (HMFreeObject.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C007343C (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 */

__int64 __fastcall HMDestroyObject(void *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  _QWORD *v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // edx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v9,
    a2,
    a3);
  v4 = HMMarkObjectDestroyWorker(a1);
  v7 = 0;
  if ( v4 )
  {
    HMFreeObject(v5, 0LL, v6);
    return 1;
  }
  return v7;
}
