/*
 * XREFs of ?IsLoopback@CSubmixImpl@@UEAA_NXZ @ 0x140014CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSubmixImpl::IsLoopback(CSubmixImpl *this)
{
  return *((_DWORD *)this + 64) == 2;
}
