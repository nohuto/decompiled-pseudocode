/*
 * XREFs of ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140031C40
 * Callers:
 *     ?DestroyStream@CStreamGroup@@WBI@EAAJ_K@Z @ 0x14001DB80 (-DestroyStream@CStreamGroup@@WBI@EAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::DestroyStream(CStreamGroup *this, __int64 a2)
{
  return CSubmixImpl::DestroyStream((CStreamGroup *)((char *)this + 24), a2);
}
