/*
 * XREFs of ?get_TouchInputRoutingInfo@WindowWrapperBase@@UEAAJPEAUInputRoutingInfo@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802C8410
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18008A73A (memset_0.c)
 */

__int64 __fastcall WindowWrapperBase::get_TouchInputRoutingInfo(
        WindowWrapperBase *this,
        struct Windows::Internal::Shell::ViewManagerInterop::InputRoutingInfo *a2)
{
  _OWORD v4[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v5; // [rsp+48h] [rbp-10h]

  memset_0(v4, 0, 0x28uLL);
  *(_OWORD *)a2 = v4[0];
  *((_OWORD *)a2 + 1) = v4[1];
  *((_QWORD *)a2 + 4) = v5;
  return 0LL;
}
