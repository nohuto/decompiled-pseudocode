/*
 * XREFs of ?DestroyStream@CProcessSubmix@@UEAAJ_K@Z @ 0x140013380
 * Callers:
 *     ?DestroyStream@CProcessSubmix@@WBA@EAAJ_K@Z @ 0x14001E3E0 (-DestroyStream@CProcessSubmix@@WBA@EAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::DestroyStream(CProcessSubmix *this, __int64 a2)
{
  return CSubmixImpl::DestroyStream((CProcessSubmix *)((char *)this + 16), a2);
}
