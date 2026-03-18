/*
 * XREFs of imp_WdfObjectAllocateContext @ 0x1C0058920
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0058480 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfObjectAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Handle,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Context)
{
  __int64 v5; // rdx
  FxObject *v6; // rcx
  unsigned int v7; // ebx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !Handle )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  LOWORD(v5) = 0;
  v6 = (FxObject *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
  {
    v5 = LOWORD(v6->__vftable);
    v6 = (FxObject *)((char *)v6 - v5);
  }
  if ( (_WORD)v5 )
  {
    v7 = -1073741767;
    WPP_IFR_SF_qL(v6->m_Globals, 3u, 0xBu, 0xDu, WPP_HandleAPI_cpp_Traceguids, (const void *)Handle, 0xC0000039);
  }
  else
  {
    return (unsigned int)FxObjectAllocateContext(v6, Attributes, 0, Context);
  }
  return v7;
}
