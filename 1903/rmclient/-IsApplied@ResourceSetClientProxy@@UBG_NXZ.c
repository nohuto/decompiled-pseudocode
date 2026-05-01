/*
 * XREFs of ?IsApplied@ResourceSetClientProxy@@UBG_NXZ @ 0x10014710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __stdcall ResourceSetClientProxy::IsApplied(ResourceSetClientProxy *this)
{
  return *((_DWORD *)this + 112) == 1;
}
