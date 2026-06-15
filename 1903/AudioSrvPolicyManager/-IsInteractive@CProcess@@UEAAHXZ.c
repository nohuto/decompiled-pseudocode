/*
 * XREFs of ?IsInteractive@CProcess@@UEAAHXZ @ 0x180017070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::IsInteractive(CProcess *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 30) + 208LL) != 0;
}
