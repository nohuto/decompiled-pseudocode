/*
 * XREFs of ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0058480
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0006010 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfObjectAllocateContext @ 0x1C0058920 (imp_WdfObjectAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0017A2C (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C005843C (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 *     ?AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C005C204 (-AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall FxObjectAllocateContext(
        FxObject *Object,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int8 AllowCallbacksOnly,
        void **Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  bool IsVersionGreaterThanOrEqualTo; // al
  _WDF_OBJECT_ATTRIBUTES *v10; // rdx
  _FX_DRIVER_GLOBALS *v11; // rcx
  __int64 result; // rax
  FxContextHeader *v13; // rax
  FxContextHeader *v14; // rdi
  unsigned __int64 size; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  int status; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = Object->m_Globals;
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                    m_Globals,
                                    (unsigned int)Attributes,
                                    0xBu);
  result = FxValidateObjectAttributes(v11, v10, IsVersionGreaterThanOrEqualTo + 8);
  status = result;
  if ( (int)result >= 0 )
  {
    if ( Attributes->ContextTypeInfo || AllowCallbacksOnly )
    {
      FxObject::AddRef(Object, &status, 459, "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp");
      status = FxCalculateObjectTotalSize(m_Globals, 0, 0, Attributes, &size);
      if ( status >= 0 )
      {
        v13 = (FxContextHeader *)FxPoolAllocator(
                                   m_Globals,
                                   &m_Globals->FxPoolFrameworks,
                                   ExDefaultNonPagedPoolType,
                                   size,
                                   m_Globals->Tag,
                                   retaddr);
        v14 = v13;
        if ( v13 )
        {
          FxContextHeaderInit(v13, Object, Attributes);
          status = FxObject::AddContext(Object, v14, Context, Attributes);
          if ( status )
            FxPoolFree((FX_POOL_TRACKER *)v14);
        }
        else
        {
          status = -1073741670;
        }
      }
      Object->Release(Object, &status, 494, "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp");
    }
    else
    {
      status = -1073741773;
      WPP_IFR_SF_qL(m_Globals, 3u, 0xBu, 0xCu, WPP_HandleAPI_cpp_Traceguids, Attributes, 0xC0000033);
    }
    return (unsigned int)status;
  }
  return result;
}
