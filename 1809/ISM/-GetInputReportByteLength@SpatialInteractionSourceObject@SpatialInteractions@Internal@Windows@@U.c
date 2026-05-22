/*
 * XREFs of ?GetInputReportByteLength@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEBAKXZ @ 0x1800BAF40
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180020FA8 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

void __fastcall __noreturn Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::GetInputReportByteLength(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *this)
{
  const char *v1; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::FailFast_UnexpectedMsg(
    retaddr,
    (void *)0x2D,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\spatialinteractionsourceobject.h",
    "Spatial Object is not a HidDevice",
    v1);
  JUMPOUT(0x1800BAF61LL);
}
