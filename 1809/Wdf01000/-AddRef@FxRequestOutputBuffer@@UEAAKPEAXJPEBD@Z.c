/*
 * XREFs of ?AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z @ 0x1C0057C10
 * Callers:
 *     <none>
 * Callees:
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C00508D0 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequestOutputBuffer::AddRef(
        FxRequestOutputBuffer *this,
        __int64 Tag,
        unsigned __int8 Line,
        const char *File)
{
  FxRequest::AddIrpReference((FxRequest *)&this[-17], Tag, Line);
  return 2LL;
}
