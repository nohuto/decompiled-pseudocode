/*
 * XREFs of Windows::Internal::Holographic::CreateGuidFailFast @ 0x1801542C4
 * Callers:
 *     ??0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ @ 0x180150E30 (--0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x180153EB0 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

GUID *__fastcall Windows::Internal::Holographic::CreateGuidFailFast(GUID *a1)
{
  HRESULT Guid; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Guid = CoCreateGuid(a1);
  if ( Guid < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      29LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)Guid);
    __debugbreak();
  }
  return a1;
}
