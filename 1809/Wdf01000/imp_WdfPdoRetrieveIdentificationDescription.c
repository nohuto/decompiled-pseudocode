/*
 * XREFs of imp_WdfPdoRetrieveIdentificationDescription @ 0x1C003B370
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C003AD4C (-CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C003ADA0 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfPdoRetrieveIdentificationDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  __int64 result; // rax
  FxDeviceDescriptionEntry *m_Description; // r8
  FxChildList *m_DeviceList; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxPkgPdo *pPkgPdo; // [rsp+50h] [rbp+18h] BYREF

  result = GetPdoPackageFromDeviceHandle(
             (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
             Device,
             "imp_WdfPdoRetrieveIdentificationDescription",
             &pPkgPdo,
             &pFxDriverGlobals,
             0LL);
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( (int)result >= 0 )
  {
    m_Description = pPkgPdo->m_Description;
    if ( m_Description
      && (m_DeviceList = m_Description->m_DeviceList, !m_DeviceList->m_StaticList)
      && m_DeviceList->m_IdentificationDescriptionSize == IdentificationDescription->IdentificationDescriptionSize )
    {
      FxChildList::CopyId(m_DeviceList, IdentificationDescription, m_Description->m_IdentificationDescription);
      return 0LL;
    }
    else
    {
      return 3221225488LL;
    }
  }
  return result;
}
