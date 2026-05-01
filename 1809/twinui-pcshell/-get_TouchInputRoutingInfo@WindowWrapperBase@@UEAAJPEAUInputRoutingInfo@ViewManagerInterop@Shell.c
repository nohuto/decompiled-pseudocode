/*
 * XREFs of ?get_TouchInputRoutingInfo@WindowWrapperBase@@UEAAJPEAUInputRoutingInfo@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180252040
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::get_TouchInputRoutingInfo(
        WindowWrapperBase *this,
        struct Windows::Internal::Shell::ViewManagerInterop::InputRoutingInfo *a2)
{
  const char *v3; // r9
  _OWORD v5[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v8; // [rsp+68h] [rbp+10h]

  memset_0(v5, 0, 0x28uLL);
  *(_OWORD *)a2 = v5[0];
  *((_OWORD *)a2 + 1) = v5[1];
  *((_QWORD *)a2 + 4) = v6;
  try
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2192LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)0x80004001LL);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x893,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return v8;
}
