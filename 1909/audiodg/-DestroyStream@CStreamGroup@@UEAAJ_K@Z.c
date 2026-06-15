/*
 * XREFs of ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x14002A690
 * Callers:
 *     ?DestroyStream@CStreamGroup@@WBI@EAAJ_K@Z @ 0x1400183C0 (-DestroyStream@CStreamGroup@@WBI@EAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::DestroyStream(CStreamGroup *this, unsigned __int64 a2)
{
  return CSubmixImpl::DestroyStream((CStreamGroup *)((char *)this + 24), a2);
}
