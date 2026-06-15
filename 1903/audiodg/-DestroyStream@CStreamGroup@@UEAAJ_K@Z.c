/*
 * XREFs of ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x14002A760
 * Callers:
 *     ?DestroyStream@CStreamGroup@@WBI@EAAJ_K@Z @ 0x140017F40 (-DestroyStream@CStreamGroup@@WBI@EAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::DestroyStream(CStreamGroup *this, unsigned __int64 a2)
{
  return CSubmixImpl::DestroyStream((CStreamGroup *)((char *)this + 24), a2);
}
