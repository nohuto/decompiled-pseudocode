/*
 * XREFs of ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0058A20
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005970 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfObjectAllocateContext @ 0x1C0058DC0 (imp_WdfObjectAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000E0D4 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C00589DC (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 *     ?AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C005BDA4 (-AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
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
  __int64 result; // rax
  FxContextHeader *v12; // rax
  FxContextHeader *v13; // rdi
  unsigned __int64 size; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  int status; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = Object->m_Globals;
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                    m_Globals,
                                    (unsigned int)Attributes,
                                    0xBu);
  result = FxValidateObjectAttributes(m_Globals, v10, IsVersionGreaterThanOrEqualTo + 8);
  status = result;
  if ( (int)result >= 0 )
  {
    if ( Attributes->ContextTypeInfo || AllowCallbacksOnly )
    {
      FxObject::AddRef(Object, &status, 459, "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp");
      status = FxCalculateObjectTotalSize(m_Globals, 0, 0, Attributes, &size);
      if ( status >= 0 )
      {
        v12 = (FxContextHeader *)FxPoolAllocator(
                                   m_Globals,
                                   &m_Globals->FxPoolFrameworks,
                                   ExDefaultNonPagedPoolType,
                                   size,
                                   m_Globals->Tag,
                                   retaddr);
        v13 = v12;
        if ( v12 )
        {
          FxContextHeaderInit(v12, Object, Attributes);
          status = FxObject::AddContext(Object, v13, Context, Attributes);
          if ( status )
            FxPoolFree((FX_POOL_TRACKER *)v13);
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
