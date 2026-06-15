/*
 * XREFs of ?DestroyStream@CProcessSubmix@@UEAAJ_K@Z @ 0x14003F2E0
 * Callers:
 *     ?DestroyStream@CProcessSubmix@@WBA@EAAJ_K@Z @ 0x1400187A0 (-DestroyStream@CProcessSubmix@@WBA@EAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::DestroyStream(CProcessSubmix *this, __int64 a2)
{
  return CSubmixImpl::DestroyStream((CProcessSubmix *)((char *)this + 16), a2);
}
