/*
 * XREFs of ?OnConnectedThunk@BamoDataProviderStubImpl@BamoImpl@@UEAAJXZ @ 0x18002ADF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoDataProviderStubImpl::OnConnectedThunk(BamoImpl::BamoDataProviderStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 64LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
