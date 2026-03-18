/*
 * XREFs of NewObjOwner @ 0x1C0023018
 * Callers:
 *     ParseLoad @ 0x1C0022E60 (ParseLoad.c)
 *     InitializeNativeNamespace @ 0x1C00234D0 (InitializeNativeNamespace.c)
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C006214C (AMLIRemoveNativeObjectsFromNamespace.c)
 *     NotifyObjectDestruction @ 0x1C0063128 (NotifyObjectDestruction.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall NewObjOwner(struct _SLIST_ENTRY *a1, struct _EX_RUNDOWN_REF **a2)
{
  unsigned int v3; // ebx
  struct _EX_RUNDOWN_REF *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  KIRQL v8; // al
  struct _EX_RUNDOWN_REF **v9; // rcx
  struct _EX_RUNDOWN_REF *v10; // rax

  v3 = 0;
  v4 = (struct _EX_RUNDOWN_REF *)HeapAlloc(a1, 1314344776, 0x40u);
  *a2 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x40uLL);
    LODWORD((*a2)[2].Count) = 1380865871;
    ExInitializeRundownProtection(*a2 + 4);
    KeInitializeSpinLock(&(*a2)[5].Count);
    v8 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
    v9 = (struct _EX_RUNDOWN_REF **)off_1C007D398;
    byte_1C0080B38 = v8;
    v10 = *a2;
    if ( *(_UNKNOWN ***)off_1C007D398 != &glistObjOwners )
      __fastfail(3u);
    v10[1].Count = (unsigned __int64)off_1C007D398;
    v10->Count = (unsigned __int64)&glistObjOwners;
    *v9 = v10;
    off_1C007D398 = v10;
    KeReleaseSpinLock(&gmutOwnerList, byte_1C0080B38);
  }
  else
  {
    LogError(3221225626LL, v5, v6, v7);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(113, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v3;
}
