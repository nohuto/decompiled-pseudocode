/*
 * XREFs of ?IsMuted@CProcess@@UEAAHXZ @ 0x18001A120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::IsMuted(CProcess *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 30) + 216LL) == 0;
}
