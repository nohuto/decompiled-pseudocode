/*
 * XREFs of imp_WdfMemoryCreateFromLookaside @ 0x1C004E0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfMemoryCreateFromLookaside(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFLOOKASIDE__ *Lookaside,
        WDFMEMORY__ **Memory)
{
  FxLookasideList *v4; // rcx
  __int64 result; // rax
  int v6; // ebx
  __int64 v7; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxLookasideList *pLookaside; // [rsp+40h] [rbp+8h] BYREF
  FxMemoryObject *pMemory; // [rsp+50h] [rbp+18h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+58h] [rbp+20h] BYREF

  pLookaside = 0LL;
  pMemory = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Lookaside,
    0x1009u,
    (void **)&pLookaside);
  v4 = pLookaside;
  if ( !Memory )
    FxVerifierNullBugCheck(pLookaside->m_Globals, retaddr);
  *Memory = 0LL;
  result = ((__int64 (__fastcall *)(FxLookasideList *, FxMemoryObject **))v4->Allocate)(v4, &pMemory);
  if ( (int)result >= 0 )
  {
    v6 = FxObject::Commit(pMemory, (_FX_DRIVER_GLOBALS *)&pLookaside->m_MemoryAttributes, (void **)&hMemory, 0LL, 1u);
    if ( v6 < 0 )
    {
      FxObject::ClearEvtCallbacks(pMemory);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
    }
    else
    {
      *Memory = hMemory;
    }
    return (unsigned int)v6;
  }
  return result;
}
