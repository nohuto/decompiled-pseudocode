/*
 * XREFs of _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking_::_1_::catch$3 @ 0x180135D64
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180108B54 (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking_::_1_::catch_3(
        __int64 a1,
        wil::details::in1diag3 **a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::FailFast_CaughtException(a2[15], a2, a3, a4);
  JUMPOUT(0x180135D7BLL);
}
