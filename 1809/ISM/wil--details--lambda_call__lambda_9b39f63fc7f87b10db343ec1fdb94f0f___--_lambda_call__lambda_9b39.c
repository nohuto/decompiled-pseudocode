/*
 * XREFs of wil::details::lambda_call__lambda_9b39f63fc7f87b10db343ec1fdb94f0f___::_lambda_call__lambda_9b39f63fc7f87b10db343ec1fdb94f0f___ @ 0x180119038
 * Callers:
 *     _Windows::Internal::Holographic::PropertyCache::GetValue_::_1_::dtor$0 @ 0x180135A52 (_Windows--Internal--Holographic--PropertyCache--GetValue_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfVariableSize_::_1_::dtor$0 @ 0x180135C05 (_Windows--Internal--Holographic--SpatialGraphDriverClient--GetDevicePropertyOfVariableSize_--_1_.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize_HOLOGRAPHIC_DEVICE_PROPERTY_HEADER__::_1_::dtor$0 @ 0x180135E3D (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--GetPropertyOfVariableSize_HOLOG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_9b39f63fc7f87b10db343ec1fdb94f0f___::_lambda_call__lambda_9b39f63fc7f87b10db343ec1fdb94f0f___(
        __int64 **a1)
{
  __int64 *v1; // rax
  __int64 v2; // rcx
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    v2 = *v1;
    result = *(_QWORD *)(*v1 + 8);
    *(_QWORD *)(v2 + 16) = result;
  }
  return result;
}
