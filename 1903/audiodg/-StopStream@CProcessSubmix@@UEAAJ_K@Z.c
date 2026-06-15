/*
 * XREFs of ?StopStream@CProcessSubmix@@UEAAJ_K@Z @ 0x14000F820
 * Callers:
 *     ?StopStream@CProcessSubmix@@WBA@EAAJ_K@Z @ 0x140018860 (-StopStream@CProcessSubmix@@WBA@EAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::StopStream(CProcessSubmix *this, unsigned __int64 a2)
{
  return CSubmixImpl::StopStream((CProcessSubmix *)((char *)this + 16), a2);
}
