/*
 * XREFs of ?IsReleased@ResourceSetClientProxy@@UBG_NXZ @ 0x100147E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __stdcall ResourceSetClientProxy::IsReleased(ResourceSetClientProxy *this)
{
  return *((_DWORD *)this + 112) == 2;
}
