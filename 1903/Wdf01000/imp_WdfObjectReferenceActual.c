/*
 * XREFs of imp_WdfObjectReferenceActual @ 0x1C00026C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

void __fastcall imp_WdfObjectReferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        void *Tag,
        int Line,
        char *File)
{
  volatile signed __int32 *v5; // rcx
  unsigned int RefCount; // edx
  __int64 v7; // rdx
  FxTagTracker *v8; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !Object )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v5 = (volatile signed __int32 *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Object & 1) != 0 && (v7 = *(unsigned __int16 *)v5, v5 = (volatile signed __int32 *)((char *)v5 - v7), (_WORD)v7) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *, __int64, void *))(*(_QWORD *)v5 + 24LL))(v5, v7, Tag);
  }
  else
  {
    RefCount = _InterlockedIncrement(v5 + 3);
    if ( *((char *)v5 + 24) < 0 )
    {
      v8 = (FxTagTracker *)*((_QWORD *)v5 - 6);
      if ( v8 )
        FxTagTracker::UpdateTagHistory(v8, Tag, Line, File, TagAddRef, RefCount);
    }
  }
}
