/*
 * XREFs of ?AddRefOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1C0050930
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C00508D0 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::AddRefOverride(FxRequest *this, __int64 Offset, void *Tag, int Line, char *File)
{
  if ( !(_WORD)Offset )
    return FxObject::AddRef(this, Tag, Line, File);
  FxRequest::AddIrpReference(this, Offset, (unsigned __int8)Tag);
  return 2LL;
}
