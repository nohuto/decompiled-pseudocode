/*
 * XREFs of ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x1800D9E2C
 * Callers:
 *     ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x1800D9E1C (-InternalFinalConstructRelease@CVADServer@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ @ 0x18010E8C8 (-InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease(int *a1)
{
  return ATL::CComMultiThreadModel::SafeDecrementReference(a1);
}
