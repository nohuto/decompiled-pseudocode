/*
 * XREFs of imp_WdfDeviceCreateSymbolicLink @ 0x1C0048F70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000BA00 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C0047D6C (--1FxAutoString@@QEAA@XZ.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0051B50 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreateSymbolicLink(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _UNICODE_STRING *SymbolicLinkName)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int16 v6; // r9
  int SymbolicLink; // ebx
  FxAutoString pdoName; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxDevice *pDevice; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)&pdoName.m_UnicodeString.Length = 0LL;
  pdoName.m_UnicodeString.Buffer = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !SymbolicLinkName )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( !SymbolicLinkName->Length )
  {
    v6 = 29;
LABEL_9:
    SymbolicLink = -1073741808;
    WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, v6, WPP_FxDeviceApi_cpp_Traceguids, Device, 0xC0000010);
    goto LABEL_11;
  }
  SymbolicLink = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 0);
  if ( SymbolicLink >= 0 )
  {
    SymbolicLink = FxValidateUnicodeString(m_Globals, SymbolicLinkName);
    if ( SymbolicLink >= 0 )
    {
      if ( !pDevice->m_SymbolicLinkName.Buffer )
      {
        SymbolicLink = FxDevice::CreateSymbolicLink(pDevice, m_Globals, SymbolicLinkName);
        goto LABEL_11;
      }
      v6 = 30;
      goto LABEL_9;
    }
  }
LABEL_11:
  FxAutoString::~FxAutoString(&pdoName);
  return (unsigned int)SymbolicLink;
}
