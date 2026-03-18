/*
 * XREFs of ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C004F1AC
 * Callers:
 *     imp_WdfDeviceMiniportCreate @ 0x1C004E9E0 (imp_WdfDeviceMiniportCreate.c)
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C00871D8 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00668B4 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C0066938 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C00676B8 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 */

__int64 __fastcall FxDeviceBase::AllocateTarget(FxDeviceBase *this, FxIoTarget **Target, unsigned __int8 SelfTarget)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxIoTarget *v7; // rax
  FxIoTarget *v8; // rbx
  FxIoTarget *v9; // rax
  FxIoTarget *v10; // rax
  int v11; // esi
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdi
  int v14; // eax
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // r9
  const void *v17; // rdi
  bool v18; // zf
  unsigned __int16 v19; // ax
  __int64 result; // rax
  unsigned int _a2; // [rsp+30h] [rbp-28h]

  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  if ( SelfTarget )
  {
    v7 = (FxIoTarget *)FxObjectHandleAlloc(
                         m_Globals,
                         ExDefaultNonPagedPoolType,
                         0x160uLL,
                         0,
                         0LL,
                         0,
                         FxObjectTypeExternal);
    v8 = v7;
    if ( v7 )
    {
      FxIoTarget::FxIoTarget(v7, *p_m_Globals, 0x160u, 0x1205u);
      v8[1].__vftable = 0LL;
      v8->__vftable = (FxIoTarget_vtbl *)FxIoTargetSelf::`vftable';
      goto LABEL_7;
    }
  }
  else
  {
    v9 = (FxIoTarget *)FxObjectHandleAlloc(
                         m_Globals,
                         ExDefaultNonPagedPoolType,
                         0x158uLL,
                         0,
                         0LL,
                         0,
                         FxObjectTypeExternal);
    if ( v9 )
    {
      FxIoTarget::FxIoTarget(v9, *p_m_Globals, 0x158u);
      v8 = v10;
      goto LABEL_7;
    }
  }
  v8 = 0LL;
LABEL_7:
  if ( !v8 )
  {
    v11 = -1073741670;
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(*p_m_Globals, 2u, 0x12u, 0xDu, WPP_FxDeviceBase_cpp_Traceguids, _a1, 0xC000009A);
    goto LABEL_24;
  }
  v14 = this->AddIoTarget(this, v8);
  v11 = v14;
  if ( v14 < 0 )
  {
    v15 = this->m_ObjectSize;
    v16 = 14;
    v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a2 = v14;
    v18 = v15 == 0;
LABEL_13:
    if ( v18 )
      v17 = 0LL;
    WPP_IFR_SF_qL(*p_m_Globals, 2u, 0x12u, v16, WPP_FxDeviceBase_cpp_Traceguids, v17, _a2);
    goto $Done_29;
  }
  v11 = FxIoTarget::Init(v8, this);
  if ( v11 < 0 )
  {
    v16 = 15;
LABEL_18:
    v19 = this->m_ObjectSize;
    v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v18 = v19 == 0;
    _a2 = v11;
    goto LABEL_13;
  }
  v11 = FxObject::Commit(v8, 0LL, 0LL, this, 1u);
  if ( v11 < 0 )
  {
    v16 = 16;
    goto LABEL_18;
  }
  v11 = 0;
$Done_29:
  if ( v11 < 0 )
  {
    FxObject::ClearEvtCallbacks(v8);
    v8->DeleteObject(v8);
    v8 = 0LL;
  }
LABEL_24:
  result = (unsigned int)v11;
  *Target = v8;
  return result;
}
