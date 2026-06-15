/*
 * XREFs of ?IsFormatSensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x1800155B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBaseStreamGroupProxy::IsFormatSensitive(CBaseStreamGroupProxy *this)
{
  return *((_DWORD *)this + 35) != 0;
}
