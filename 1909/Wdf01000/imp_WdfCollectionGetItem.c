/*
 * XREFs of imp_WdfCollectionGetItem @ 0x1C0001DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005D078 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

unsigned __int64 __fastcall imp_WdfCollectionGetItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Collection,
        unsigned int Index)
{
  __int64 v4; // rdi
  FxCollection *v5; // rcx
  __int64 Offset; // r8
  unsigned __int8 v7; // r10
  int v8; // ecx
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rbx
  FxVerifierLock *v12; // rcx
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF
  FxCollection *pCollection; // [rsp+58h] [rbp+20h] BYREF

  if ( !Collection )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x100EuLL);
  v4 = 0LL;
  v5 = (FxCollection *)(~Collection & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Collection & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxCollection *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4110 )
  {
    pCollection = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pCollection, (void *)Collection, 0x100Eu, Offset);
    v5 = pCollection;
  }
  if ( SLOBYTE(v5->m_ObjectFlags) < 0 && *(_QWORD *)&v5[-1].m_NPLock.m_DbgFlagIsInitialized )
  {
    FxVerifierLock::Lock(*(FxVerifierLock **)&v5[-1].m_NPLock.m_DbgFlagIsInitialized, &irql, Offset);
    v7 = irql;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&v5->m_NPLock.m_Lock);
  }
  if ( Index >= pCollection->m_Count )
    goto LABEL_21;
  v8 = 0;
  Flink = pCollection->m_ListHead.Flink;
  if ( Flink == &pCollection->m_ListHead )
    goto LABEL_21;
  while ( v8 != Index )
  {
    Flink = Flink->Flink;
    ++v8;
    if ( Flink == &pCollection->m_ListHead )
      goto LABEL_21;
  }
  if ( Flink == (_LIST_ENTRY *)8 )
LABEL_21:
    Blink = 0LL;
  else
    Blink = Flink[-1].Blink;
  if ( SLOBYTE(pCollection->m_ObjectFlags) < 0
    && (v12 = *(FxVerifierLock **)&pCollection[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v12, v7, (unsigned __int8)pCollection);
  }
  else
  {
    KeReleaseSpinLock(&pCollection->m_NPLock.m_Lock, v7);
  }
  if ( !Blink )
    return 0LL;
  if ( WORD1(Blink->Blink) )
    return (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
  return v4;
}
