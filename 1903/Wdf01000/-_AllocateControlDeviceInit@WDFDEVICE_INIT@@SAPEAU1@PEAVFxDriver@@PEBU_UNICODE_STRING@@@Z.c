/*
 * XREFs of ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C00515F0
 * Callers:
 *     imp_WdfControlDeviceInitAllocate @ 0x1C00454B0 (imp_WdfControlDeviceInitAllocate.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C0045478 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C0051160 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0064278 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0064474 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

WDFDEVICE_INIT *__fastcall WDFDEVICE_INIT::_AllocateControlDeviceInit(
        FxDriver *Driver,
        const _UNICODE_STRING *SDDLString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  WDFDEVICE_INIT *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  _POOL_TYPE v9; // edx
  FxString *v10; // rax
  __int64 v11; // rax
  int v12; // esi
  void *retaddr; // [rsp+48h] [rbp+0h]

  m_Globals = Driver->m_Globals;
  v5 = (WDFDEVICE_INIT *)FxPoolAllocator(
                           m_Globals,
                           &m_Globals->FxPoolFrameworks,
                           ExDefaultNonPagedPoolType,
                           0x3A8uLL,
                           m_Globals->Tag,
                           retaddr);
  if ( v5 )
  {
    WDFDEVICE_INIT::WDFDEVICE_INIT(v5, Driver);
    v7 = v6;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v9 = ExDefaultNonPagedPoolType;
    *(_DWORD *)(v7 + 56) |= 0x80u;
    *(_DWORD *)(v7 + 36) = 2;
    v10 = (FxString *)FxObjectHandleAlloc(m_Globals, v9, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
    if ( v10 )
      FxString::FxString(v10, m_Globals);
    else
      v11 = 0LL;
    *(_QWORD *)(v7 + 176) = v11;
    if ( v11 )
    {
      v12 = FxDuplicateUnicodeString(*(_FX_DRIVER_GLOBALS **)(v11 + 16), SDDLString, (_UNICODE_STRING *)(v11 + 104));
    }
    else
    {
      v12 = -1073741670;
      WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, 0xCu, WPP_FxDeviceInit_cpp_Traceguids, Driver, 0xC000009A);
    }
    if ( v12 < 0 )
    {
      WDFDEVICE_INIT::`scalar deleting destructor'((WDFDEVICE_INIT *)v7);
      return 0LL;
    }
    return (WDFDEVICE_INIT *)v7;
  }
  else
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xBu, WPP_FxDeviceInit_cpp_Traceguids, Driver);
    return 0LL;
  }
}
