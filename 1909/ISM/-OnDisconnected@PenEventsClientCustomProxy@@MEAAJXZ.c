/*
 * XREFs of ?OnDisconnected@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1800322C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@@Z @ 0x180032484 (-OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientPr.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PenEventsClientCustomProxy::OnDisconnected(PenEventsDispatcherPrincipal **this)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( this[7] )
  {
    v1 = PenEventsDispatcherPrincipal::OnPenEventsClientProxyDisconnected(
           this[7],
           (struct BamoPenEventsClientProxy *)this);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneve"
                      "ntsdispatcherprincipal.cpp",
        (const char *)(unsigned int)v1,
        v3);
  }
  return 0LL;
}
