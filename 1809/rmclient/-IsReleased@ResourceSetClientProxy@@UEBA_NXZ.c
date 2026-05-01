/*
 * XREFs of ?IsReleased@ResourceSetClientProxy@@UEBA_NXZ @ 0x180011600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ResourceSetClientProxy::IsReleased(ResourceSetClientProxy *this)
{
  return *((_DWORD *)this + 120) == 2;
}
