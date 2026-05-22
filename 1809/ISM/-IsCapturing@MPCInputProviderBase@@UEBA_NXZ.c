/*
 * XREFs of ?IsCapturing@MPCInputProviderBase@@UEBA_NXZ @ 0x1800F4F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCInputProviderBase::IsCapturing(MPCInputProviderBase *this)
{
  return *((_QWORD *)this + 462) != 0LL;
}
