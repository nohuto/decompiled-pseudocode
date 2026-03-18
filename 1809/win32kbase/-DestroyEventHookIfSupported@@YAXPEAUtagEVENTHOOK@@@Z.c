/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C005EB40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainExclusiveAllowRecursion@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C005EB90 (--0-$CLockDomainExclusiveAllowRecursion@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1)
{
  tagObjLock *v2; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  if ( (int)IsDestroyEventHookSupported() >= 0 )
  {
    CLockDomainExclusiveAllowRecursion<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursion<DLT_WINEVENT>(&v2);
    DestroyEventHook(a1);
    if ( !v3 )
      tagObjLock::UnLock(v2);
  }
}
