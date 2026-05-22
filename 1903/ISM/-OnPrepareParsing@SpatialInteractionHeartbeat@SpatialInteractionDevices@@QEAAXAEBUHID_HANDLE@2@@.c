/*
 * XREFs of ?OnPrepareParsing@SpatialInteractionHeartbeat@SpatialInteractionDevices@@QEAAXAEBUHID_HANDLE@2@@Z @ 0x1801669F0
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x180165110 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x180167B2C (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionHeartbeat::OnPrepareParsing(
        GUID *pguid,
        const struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  HRESULT Guid; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
    (SpatialInteractionDevices::SpatialInteractionHeartbeat *)pguid,
    1);
  Guid = CoCreateGuid(pguid);
  if ( Guid < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      856LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\spatialinteractiontrace.h",
      (const char *)(unsigned int)Guid);
    __debugbreak();
  }
  *(_QWORD *)pguid[1].Data4 = GetTickCount64();
  LOWORD(pguid[1].Data1) = *((_WORD *)a2 + 23);
  HIWORD(pguid[1].Data1) = *((_WORD *)a2 + 22);
  pguid[1].Data2 = *((_WORD *)a2 + 24);
}
