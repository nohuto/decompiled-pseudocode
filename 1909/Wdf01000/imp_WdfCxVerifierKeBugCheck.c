/*
 * XREFs of imp_WdfCxVerifierKeBugCheck @ 0x1C004AC90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z @ 0x1C005B810 (-FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z.c)
 */

void __fastcall __noreturn imp_WdfCxVerifierKeBugCheck(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        unsigned int BugCheckCode,
        unsigned __int64 BugCheckParameter1,
        unsigned __int64 BugCheckParameter2,
        unsigned __int64 BugCheckParameter3,
        unsigned __int64 BugCheckParameter4)
{
  _FX_DRIVER_GLOBALS *DriverName; // rcx
  FxObject *pObject; // [rsp+48h] [rbp+10h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( Object )
  {
    FxObjectHandleGetPtr(DriverName, Object, 0x1000u, (void **)&pObject);
    DriverName = pObject->m_Globals;
  }
  FxVerifierDriverReportedBugcheck(
    DriverName,
    BugCheckCode,
    BugCheckParameter1,
    BugCheckParameter2,
    BugCheckParameter3,
    BugCheckParameter4);
}
