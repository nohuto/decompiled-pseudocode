/*
 * XREFs of wil::details::lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___::_lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___ @ 0x18005EF48
 * Callers:
 *     _HIDDeviceCollection::Initialize_::_1_::dtor$0 @ 0x180130FD7 (_HIDDeviceCollection--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18005DD2C (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___::_lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    RIMDeviceCollection::Close(*(HANDLE **)a1);
  }
}
