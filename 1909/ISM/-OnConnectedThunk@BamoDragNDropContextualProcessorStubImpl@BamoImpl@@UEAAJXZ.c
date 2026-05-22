/*
 * XREFs of ?OnConnectedThunk@BamoDragNDropContextualProcessorStubImpl@BamoImpl@@UEAAJXZ @ 0x18000A000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoDragNDropContextualProcessorStubImpl::OnConnectedThunk(
        BamoImpl::BamoDragNDropContextualProcessorStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 56LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
