/*
 * XREFs of ?get_TouchInputRoutingInfo@ViewWrapperBase@@UEAAJPEAUInputRoutingInfo@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180085280
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 */

__int64 __fastcall ViewWrapperBase::get_TouchInputRoutingInfo(
        ViewWrapperBase *this,
        struct Windows::Internal::Shell::ViewManagerInterop::InputRoutingInfo *a2)
{
  __int64 result; // rax
  __int128 v4; // xmm1
  __int64 v5; // xmm0_8
  _OWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  memset_0(v6, 0, 0x28uLL);
  result = 2147500033LL;
  v4 = v6[1];
  *(_OWORD *)a2 = v6[0];
  v5 = v7;
  *((_OWORD *)a2 + 1) = v4;
  *((_QWORD *)a2 + 4) = v5;
  return result;
}
